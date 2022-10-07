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
fn = "/../2022_07_10_10_23_36_optimize_result_ad709d545aa32d05.h5"
result = read_from_hdf5.read_result(fn)

################SAMPLING
sampler = sample.AdaptiveMetropolisSampler()
result = sample.sample(
    problem,
    n_samples=1000000,
    sampler=sampler,
    result=result,
    filename=None,
)

ax1 = visualize.sampling_1d_marginals(result, size = (50,45))

ax2 = visualize.sampling_parameter_traces(result, use_problem_bounds=False, size = (50,45))

ax4 = visualize.sampling_fval_traces(result)

