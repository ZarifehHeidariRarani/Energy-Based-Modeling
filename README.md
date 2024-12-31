    # Energy-Based Modeling
In this repository, I upload the enrgy based models which has been created using BioNetGen.
The first model is the enrgy model of EGFR signaling pathway based on Kholodenko's paper.
# EGFR Model
We now have an Energy-Based model of the EGFR signaling pathway, as well as a rule-based model of EGFR signaling pathway based on Kholodenko's paper.
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
# Step 5
Multiple binding of Shc, Grb2, and PLCg to EGFR.

# Parameter Estimation of Energy Based Model in Step 4
The model in Step 4 recovers the Kholodenko's output, but the results of the Kholodenko's model do not fit the experimental data very well, as we can see in the original study. As a result, in order to discover the parameters of the energy model that provide outputs that fit the experimental data, I employed a parameter estimation method for the energy model. The set of optimized parameters that seeks to provide outputs which best follow the experimental data may be found in the notebook included in the "Enery Model EGFR ParameterEStimation" folder.
In addition, the outputs of our energy-based model, Kholodenko's model, and our earlier energy model (Kai's model) have been displayed in the notebook for easier comparison. 
# Parameter Estimation of Energy Based Model in Step 5
To have a complete model of EGFR pathway which considers multiple binding of Shc, Grb2, and PLCg to EGFR, we have developed the energy-based model in Step 5. Parameters of this model has been estimated using Fides algorithm and PEtab format. The set of optimized parameters that seeks to provide outputs which best follow the experimental data may be found in the Step5. bngl file and also in the notebook included in the "Enery Model EGFR ParameterEStimation_Step5" folder.
