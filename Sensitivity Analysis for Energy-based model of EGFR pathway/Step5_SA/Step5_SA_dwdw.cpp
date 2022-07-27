#include "amici/symbolic_functions.h"
#include "amici/defines.h"
#include "sundials/sundials_types.h"

#include <gsl/gsl-lite.hpp>
#include <array>
#include <algorithm>

#include "Step5_SA_x.h"
#include "Step5_SA_p.h"
#include "Step5_SA_k.h"
#include "Step5_SA_w.h"
#include "Step5_SA_dwdw.h"

namespace amici {
namespace model_Step5_SA {

void dwdw_Step5_SA(realtype *dwdw, const realtype t, const realtype *x, const realtype *p, const realtype *k, const realtype *h, const realtype *w, const realtype *tcl){
    dfRate7_dPLCg_P = -r8_V8/std::pow(PLCg_P + r8_K8, 2);  // dwdw[0]
    dfRate15_dShc_P = -r16_V16/std::pow(Shc_P + r16_K16, 2);  // dwdw[1]
    dfRate3_dEGF_EGFR2_P = -r4_V4/std::pow(EGF_EGFR2_P + r4_K4, 2);  // dwdw[2]
    dflux_R7_dfRate3 = S9;  // dwdw[3]
    dflux_R54_dfRate7 = S28;  // dwdw[4]
    dflux_R45_dfRate15 = S22;  // dwdw[5]
    dflux_R70_dfRate15 = S30;  // dwdw[6]
    dflux_R71_dfRate15 = S31;  // dwdw[7]
    dflux_R90_dfRate15 = S40;  // dwdw[8]
    dflux_R91_dfRate15 = S41;  // dwdw[9]
    dflux_R132_dfRate15 = S56;  // dwdw[10]
    dflux_R133_dfRate15 = S57;  // dwdw[11]
    dflux_R134_dfRate15 = S58;  // dwdw[12]
    dflux_R135_dfRate15 = S59;  // dwdw[13]
}

} // namespace model_Step5_SA
} // namespace amici
