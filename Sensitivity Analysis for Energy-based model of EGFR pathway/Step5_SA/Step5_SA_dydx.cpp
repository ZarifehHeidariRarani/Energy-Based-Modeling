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
#include "Step5_SA_dwdx.h"

namespace amici {
namespace model_Step5_SA {

void dydx_Step5_SA(realtype *dydx, const realtype t, const realtype *x, const realtype *p, const realtype *k, const realtype *h, const realtype *w, const realtype *dwdx){
    dydx[8] = 2;
    dydx[9] = 2;
    dydx[10] = 2;
    dydx[11] = 2;
    dydx[12] = 2;
    dydx[13] = 2;
    dydx[14] = 2;
    dydx[39] = 2;
    dydx[40] = 4;
    dydx[44] = 2;
    dydx[46] = 2;
    dydx[48] = 2;
    dydx[60] = 2;
    dydx[74] = 2;
    dydx[77] = 2;
    dydx[78] = 2;
    dydx[90] = 2;
    dydx[93] = 2;
    dydx[94] = 2;
}

} // namespace model_Step5_SA
} // namespace amici
