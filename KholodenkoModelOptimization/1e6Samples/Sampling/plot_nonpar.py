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
"/home/zah47/Nonparallel_Sampling/EGFR/EGFR.yaml"
)
# import to pypesto
importer = pypesto.petab.PetabImporter(petab_problem)
# create problem
problem = importer.create_problem()

#########################
model = importer.create_model(verbose=False)
fn1 ="/home/zah47/Nonparallel_Sampling/First/2022_17_11_09_23_06_sample_result_d3ad5a237796ea94.h5"
fn2 = "/home/zah47/Nonparallel_Sampling/Second/2022_17_11_10_28_28_sample_result_46ec765894ccf13d.h5"
fn3 = "/home/zah47/Nonparallel_Sampling/Third/2022_17_11_19_30_54_sample_result_76999fb249bf69b5.h5"
result1 = read_from_hdf5.read_result(fn1)
result2 = read_from_hdf5.read_result(fn2)
result3 = read_from_hdf5.read_result(fn3)


#alpha = [90, 95, 99]
#ax = visualize.sampling_parameter_cis(result3, alpha=alpha,  step =0.1, size = (12,16))
#plt.savefig("CIS_nonpar_1e6_3.png")

pypesto.visualize.sampling_1d_marginals(
     result3,  size= (30,24)
 )
plt.savefig(f"MCMC_1e6.png")



visualize.sampling_fval_traces(result1, full_trace = True) 
plt.savefig(f"fvaltrace_nonpar_1e6_3.png")

#visualize.sampling_parameter_traces(
 #      result3, size = (40,32)
  #  )    
#plt.savefig("Samplingtrace_nonpar_1e6_3.png")


###
pypesto.visualize.sampling_1d_marginals(
result3,  size = (12,10), par_indices = [0,1,2,3,4,5,6,7,8]
)
plt.savefig(f"MCMC_1_9.png")

pypesto.visualize.sampling_1d_marginals(
result3,  size = (12,10), par_indices = [9,10,11,12,13,14,15,16,17]
)
plt.savefig(f"MCMC_1_18.png")

pypesto.visualize.sampling_1d_marginals(
result3,  size = (12,10), par_indices = [18,19,20,21,22,23,24,25,26]
)
plt.savefig(f"MCMC_1_27.png")

pypesto.visualize.sampling_1d_marginals(
result3,  size = (12,10), par_indices = [27,28,29,30,31,32,33,34,35]
)
plt.savefig(f"MCMC_1_36.png")

pypesto.visualize.sampling_1d_marginals(
result3,  size = (12,10), par_indices = [36,37,38,39,40,41,42,43,44]
)
plt.savefig(f"MCMC_1_45.png")

pypesto.visualize.sampling_1d_marginals(
result3,  size = (8,8), par_indices = [45,46,47,48,49]
)
plt.savefig(f"MCMC_1_50.png")

########################



############################
# Get the angles from 0 to 2 pie (360 degree) in narray object
import matplotlib.pyplot as plt
import numpy as np
import math
X = np.arange(1,1000002)
# Using built-in trigonometric function we can directly plot
# the given cosine wave for the given angles
Y1 = np.transpose(result1.sample_result.trace_neglogpost)
Y2 = np.transpose(result2.sample_result.trace_neglogpost)
Y3 = np.transpose(result3.sample_result.trace_neglogpost)

f = plt.figure()
f.set_figwidth(21)
f.set_figheight(8)
plt.subplot(1, 3, 1)  
plt.plot(X, -Y1,'bo')
plt.xlabel("Iteration")
plt.ylabel("Negative Log Posterior")
plt.title('Chain1')

plt.subplot(1, 3, 2) 
plt.plot(X, -Y2,'go')
plt.xlabel("Iteration")
plt.ylabel("Negative Log Posterior")
plt.title('Chain2')

plt.subplot(1, 3, 3) 
plt.plot(X, -Y3,'go')
plt.xlabel("Iteration")
plt.ylabel("Negative Log Posterior")
plt.title('Chain3')

plt.savefig("fvaltraces_all.png")

########

