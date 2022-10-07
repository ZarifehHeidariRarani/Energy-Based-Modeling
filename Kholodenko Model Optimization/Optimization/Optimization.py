import petab
import fides
import os
import libsbml
import amici
import amici.petab_simulate
import matplotlib.pyplot as plt
import pypesto
import pypesto.optimize as optimize
import pypesto.petab
import petab.visualize
import pypesto.visualize as visualize
import importlib
import sys
import logging
import numpy as np
import pypesto.sample as sample
import tempfile
import scipy as sp
from pypesto.store import read_from_hdf5, save_to_hdf5
import logging
import numpy as np
import pypesto.sample as sample
# import to petab
petab_problem = petab.Problem.from_yaml(
    
   "EGFR/EGFR.yaml"    #state the exact folder contains the yaml file
)
importer = pypesto.petab.PetabImporter(petab_problem)
# import to pypesto
problem = importer.create_problem()
model = importer.create_model(verbose=False)

# create optimizer object which contains all information for doing the optimization
options = {'maxiter':2000}
optimizer = optimize.FidesOptimizer(options=options)
engine = pypesto.engine.MultiProcessEngine()

# do the optimization
result = optimize.minimize(
    problem=problem, optimizer=optimizer, n_starts=100, engine=engine
)
from pypesto.visualize.model_fit import visualize_optimized_model_fit
pp1 = visualize_optimized_model_fit(petab_problem=petab_problem, result=result)
visualize.waterfall(result, scale_y="log10")
visualize.parameters(result)

def get_x_mle(optimize_result, pypesto_problem, petab_problem, scaled=True):
    if not scaled:
        scaling = petab.parameters.get_optimization_parameter_scaling(
            petab_problem.parameter_df
        )
    return {
        x_id: (
            petab.parameters.unscale(x_value, scaling[x_id])
            if not scaled
            else x_value
        )
        for x_id, x_value in zip(
            pypesto_problem.x_names, optimize_result.list[0]["x"]
        )
    }
x_mle_unscaled_original = get_x_mle(
    result.optimize_result,
    problem,
    petab_problem,
    scaled=False,  
)
print("Parameters are estimated to be (log10):")
print(
    "\t".join(
        [
           # f"{x_id}  {x_value}"
           f"{x_value},"
            for x_id, x_value in x_mle_unscaled_original.items()
        ]
    )
)




