# Negative or positive cooperativity of ShcP in the model:

## v13:EGFR + Shc
  ``` 
Shc(egfr,p~0,grb2) + EGFR(egfr,egf!1,p~P,shc,grb2,plcg).EGF(egfr!1) <-> EGFR(egfr,egf!1,p~P,shc!2,grb2,plcg).Shc(egfr!2,p~0,grb2).EGF(egfr!1)  r13_k13f,r13_k13b
```
## v15: EGFRShcP Breaking apart
```
EGFR(egfr,egf!1,p~P,shc!2,grb2,plcg).Shc(egfr!2,p~P,grb2).EGF(egfr!1) <-> EGFR(egfr,egf!1,p~P,shc,grb2,plcg).EGF(egfr!1) + Shc(egfr,p~P,grb2)    r15_k15f,r15_k15b
 ```

Based on the estimated parameters, it seems that the affinity of Shc for binding to EGFR intensively increases after phosphorylation, which contradicts the original Kholodenko’s model.
```
K13 = r13_k13f/r13_k13b = 0.057/10 = 0.0057
```
```
K15 = r15_k15b/r15_k15f = 1/1e-5 = 1e5
```

For original Kholodenko model we have:
```
r13_k13f = 0.09 
r13_k13b = 0.6 →                K13 = 0.15 
```
```
r15_k15f = 0.3 
r15_k15b = 0.0009  →            K15 = 0.003
``` 
Based on these values, in the original Kholodenko’s model, the affinity of Shc for binding to EGFR decreases after phosphorylation. 




