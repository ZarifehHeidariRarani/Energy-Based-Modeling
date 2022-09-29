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
####
petab_problem = petab.Problem.from_yaml(
    
   "EGFR/EGFR.yaml"    #state the exact folder contains the yaml file
)
importer = pypesto.petab.PetabImporter(petab_problem)
# import to pypesto
problem = importer.create_problem()
model = importer.create_model(verbose=False)
fn = "/2022_20_09_03_12_16_optimize_result_76b3f2e5c0f060be.h5"
result = read_from_hdf5.read_result(fn)
################SAMPLING

#sampler = sample.MetropolisSampler()
sampler = sample.AdaptiveMetropolisSampler()


result = sample.sample(
    problem,
    n_samples=1e6,
    sampler=sampler,
    result=result,
    filename=None,
)
elapsed_time = result.sample_result.time
print(f"Elapsed time: {round(elapsed_time,2)}")

sample.geweke_test(result)
ax = visualize.sampling_1d_marginals(result, size = (50,45))
plt.savefig("Nonpar.png")

