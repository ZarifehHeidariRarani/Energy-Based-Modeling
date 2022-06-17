# Energy-Based-Modeling
In this repository, I upload the enrgy based models which has been created using BioNetGen.
The first model is the enrgy model of EGFR signaling pathway based on Kholodenko's paper.
# EGFR Model
We now have an Energy-Based model of the EGFR signaling pathway with 16 reaction rules and 40 parameters, compared to 25 reaction rules and 50 parameters in the original Kholodenko's model.
Both approaches produce similar results, with minor changes in some species.
The energy based modeling approach for recovering the outputs of Kholodenko's model have been conducted in 4 steps, and results of each step have been compared to the corresponding model using the Kholodenko's dynamic.
# Step 1
Interactions between EGF, EGFR, and Shc
# Step 2
Interactions between EGF, EGFR, Shc, Grb2, and SOS. Without the Shc-Grb2 interaction.
# Step 3
Interactions between EGF, EGFR, Shc, Grb2, and SOS. 
# Step 4
Interactions between EGF, EGFR, Shc, Grb2, SOS, and PLCg.

# Parameter Estimation of Energy Based Model
The model in Step 4 recovers the Kholodenko's output, but the results of the Kholodenko's model do not fit the experimental data very well, as we can see in the original study. As a result, in order to discover the parameters of the energy model that provide outputs that fit the experimental data, I employed a parameter estimation method for the energy model. The parameter estimation approach is based on Fides algorithm, using PEtab format.
