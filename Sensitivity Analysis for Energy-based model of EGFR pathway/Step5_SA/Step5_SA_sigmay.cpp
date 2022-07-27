#include "amici/symbolic_functions.h"
#include "amici/defines.h"
#include "sundials/sundials_types.h"

#include <gsl/gsl-lite.hpp>
#include <array>
#include <algorithm>

#include "Step5_SA_p.h"
#include "Step5_SA_k.h"
#include "Step5_SA_y.h"
#include "Step5_SA_sigmay.h"

namespace amici {
namespace model_Step5_SA {

void sigmay_Step5_SA(realtype *sigmay, const realtype t, const realtype *p, const realtype *k, const realtype *y){
    sigma_observable_EGFRPtotal1 = 1.0;  // sigmay[0]
}

} // namespace model_Step5_SA
} // namespace amici
