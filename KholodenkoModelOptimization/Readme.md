# Negative or positive cooperativity of ShcP in the model:
## v13: EGFR + Shc
  ```
Shc(egfr,p~0,grb2) + EGFR(egfr,egf!1,p~P,shc,grb2,plcg).EGF(egfr!1) <-> EGFR(egfr,egf!1,p~P,shc!2,grb2,plcg).Shc(egfr!2,p~0,grb2).EGF(egfr!1)  r13_k13f, r13_k13b
```
## v15: EGFRShcP Breaking apart
```
EGFR(egfr,egf!1,p~P,shc!2,grb2,plcg).Shc(egfr!2,p~P,grb2).EGF(egfr!1) <-> EGFR(egfr,egf!1,p~P,shc,grb2,plcg).EGF(egfr!1) + Shc(egfr,p~P,grb2)    r15_k15f, r15_k15b
 ```
Based on the estimated parameters, it seems that the affinity of Shc for binding to EGFR intensively decreases after phosphorylation.
```
K13 = r13_k13f/r13_k13b = 0.166
```
```
K15 = r15_k15b/r15_k15f = 0.2e-4
```
### Cooperativity of ShcP in the original Kholodenko model
For original Kholodenko model we have:
```
K13 = r13_k13f/r13_k13b = 0.15
```
```
K15 = 0.003
```
Based on these values, in the original Kholodenko’s model, the affinity of Shc for binding to EGFR decreases after phosphorylation.
