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

namespace amici {
namespace model_Step5_SA {

void y_Step5_SA(realtype *y, const realtype t, const realtype *x, const realtype *p, const realtype *k, const realtype *h, const realtype *w){
    y[0] = EGFRPtotal;
}

} // namespace model_Step5_SA
} // namespace amici
