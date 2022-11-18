import logging

import matplotlib.pyplot as plt
import numpy as np
import petab

import pypesto
import pypesto.optimize as optimize
import pypesto.petab
import pypesto.sample as sample
import pypesto.visualize as visualize
import amici
from pypesto.store import read_from_hdf5, save_to_hdf5

petab_problem = petab.Problem.from_yaml(
    "/home/zah47/Kholodenko_Model_Optimization_NonparallelSampling/EGFR/EGFR.yaml"
)
# import to pypesto
importer = pypesto.petab.PetabImporter(petab_problem)
# create problem
problem = importer.create_problem()

#########################
model = importer.create_model(verbose=False)
fn = "/home/zah47/Kholodenko_Model_Optimization_NonparallelSampling/Optimization/2022_11_11_03_18_45_optimize_result_9036f4cbedce8a95_flat100.h5"
result = read_from_hdf5.read_result(fn)
mle = result.optimize_result.list[0]['x']


#print(mle)
sampler = sample.AdaptiveMetropolisSampler()


result = sample.sample(
    problem,
    n_samples=1000000,
    sampler=sampler,
    x0 = mle
)
elapsed_time = result.sample_result.time
print(f"Elapsed time: {round(elapsed_time,2)}")


#alpha = [90, 95, 99]
#ax = visualize.sampling_parameter_cis(result, alpha=alpha,  step =0.1, size = (12,16))
#plt.savefig("CIS_nonpar.png")

#pypesto.visualize.sampling_1d_marginals(
 #       result,  size= (30,24)
# )

#plt.savefig(f"MCMCchains_nonpar.png")



#visualize.sampling_fval_traces(result) 
#plt.savefig(f"fvaltrace_nonpar.png")



#################################################
########################

from pypesto.C import AMICI_STATUS, AMICI_T, AMICI_X, AMICI_Y
from pypesto.predict import AmiciPredictor
from pypesto.C import EnsembleType
import numpy as np
from pypesto.ensemble import Ensemble
# such that the output is compatible with the next steps.
def post_processor(amici_outputs, output_type, output_ids):
    outputs = [
        amici_output[output_type]
        if amici_output[AMICI_STATUS] == 0
        else np.full((len(amici_output[AMICI_T]), len(output_ids)), np.nan)
        for amici_output in amici_outputs
    ]
    return outputs


# Setup post-processors for both states and observables.
from functools import partial

amici_objective = result.problem.objective
state_ids = amici_objective.amici_model.getStateIds()
observable_ids = amici_objective.amici_model.getObservableIds()
post_processor_x = partial(
    post_processor,
    output_type=AMICI_X,
    output_ids=state_ids,
)
post_processor_y = partial(
    post_processor,
    output_type=AMICI_Y,
    output_ids=observable_ids,
)

# Create pyPESTO predictors for states and observables
predictor_x = AmiciPredictor(
    amici_objective,
    post_processor=post_processor_x,
    output_ids=state_ids,
)
predictor_y = AmiciPredictor(
    amici_objective,
    post_processor=post_processor_y,
    output_ids=observable_ids,
)


from pypesto.C import EnsembleType
from pypesto.ensemble import Ensemble

# corresponds to only the estimated parameters
x_names = result.problem.get_reduced_vector(result.problem.x_names)

# Create the ensemble with the MCMC chain from parallel tempering with the real temperature.
ensemble = Ensemble.from_sample(
    result,
   # chain_slice=slice(None, None, 5),  # Optional argument: only use every second vector in the chain.
    x_names=x_names,
    ensemble_type=EnsembleType.sample,
    lower_bound=result.problem.lb,
    upper_bound=result.problem.ub,
)
from pypesto.engine import MultiThreadEngine

# Currently, parallelization of predictions is supported with the
# `pypesto.engine.MultiProcessEngine` and `pypesto.engine.MultiThreadEngine`
# engines. If no engine is specified, the `pypesto.engine.SingleCoreEngine`
# engine is used.
engine = MultiThreadEngine()

ensemble_prediction = ensemble.predict(
    predictor_x, prediction_id=AMICI_X, engine=engine
)
# Create the ensemble with the MCMC chain from parallel tempering with the real temperature.
ensemble = Ensemble.from_sample(
    result,
    x_names=x_names,
    ensemble_type=EnsembleType.sample,
    lower_bound=result.problem.lb,
    upper_bound=result.problem.ub,
)

ensemble_prediction = ensemble.predict(
    predictor_y, prediction_id=AMICI_Y, engine=engine
)
from pypesto.C import CONDITION, OUTPUT
credibility_interval_levels = [90, 95, 99]
ax = visualize.sampling_prediction_trajectories(
    ensemble_prediction,
    levels=credibility_interval_levels,
    size=(25, 15),
    axis_label_padding=40,
    groupby=CONDITION,
)
plt.savefig('observable_condition_nonpar_3')

ax = visualize.sampling_prediction_trajectories(
    ensemble_prediction,
    levels=credibility_interval_levels,
    size=(25, 15),
    axis_label_padding=40,
    groupby=OUTPUT,
    reverse_opacities=True,
)
plt.savefig('observable_output_nonpar_3')


   
