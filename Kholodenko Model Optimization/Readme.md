Estimated Parameters:

r1_k1f 0.0183
r1_k1b 10
r2_k2f 10
r2_k2b 3.27
r3_k3f 2.32
r3_k3b 10
r4_V4 1000
r4_K4 21.15
r5_k5f 0.76
r5_k5b 5
r6_k6f 5
r6_k6b 2.07
r7_k7f 2.65
r7_k7b 10
r8_V8 1e-5
r8_K8 87.2
r9_k9f 0.22
r9_k9b 10
r10_k10f 5
r10_k10b 2.26
r11_k11f 1e-5
r11_k11b 1e-5
r12_k12f 1e-5
r12_k12b 0.00024
r13_k13f 0.057
r13_k13b 10
r14_k14f 10
r14_k14b 5
r15_k15f 1e-5
r15_k15b 1
r16_V16 5
r16_K16 0.0193
r17_k17f 1.49
r17_k17b 10
r18_k18f 5
r18_k18b 1e-5
r19_k19f 5
r19_k19b 1e-5
r20_k20f 3.34
r20_k20b 5
r21_k21f 10
r21_k21b 2.2
r22_k22f 5
r22_k22b 1e-5
r23_k23f 0.037
r23_k23b 1e-5
r24_k24f 1e-5
r24_k24b 0.048
r25_k25f 1.51
r25_k25b 0.0048


# EGFR + Shc
v13: Shc(egfr,p~0,grb2) + EGFR(egfr,egf!1,p~P,shc,grb2,plcg).EGF(egfr!1) <-> EGFR(egfr,egf!1,p~P,shc!2,grb2,plcg).Shc(egfr!2,p~0,grb2).EGF(egfr!1) r13_k13f,r13_k13b

K13= r13_k13f/ r13_k13b=0.057/10=0.0057

# RShcP Breaking apart
v15: EGFR(egfr,egf!1,p~P,shc!2,grb2,plcg).Shc(egfr!2,p~P,grb2).EGF(egfr!1) <-> EGFR(egfr,egf!1,p~P,shc,grb2,plcg).EGF(egfr!1) + Shc(egfr,p~P,grb2) r15_k15f,r15_k15b

K15=r15_k15b/r15_k15f=1/1e-5=1e5

Based on Estimated Parameters, It seems that the affinity of Shc for binding to EGFR intensively increases after phosphorylation, and it is in opposite of the original Kholodenko’s model.
For original Kholodenko model we have:

r13_k13f = 0.09 
r13_k13b = 0.6 →                K13 = 0.15 

r15_k15f = 0.3 
r15_k15b = 0.0009               K15= 0.003
 
Based on these values, in the Kholodenko’s model, the affinity of Shc for binding to EGFR decreases after phosphorylation. 




