#include "amici/symbolic_functions.h"
#include "amici/defines.h"
#include "sundials/sundials_types.h"

#include <gsl/gsl-lite.hpp>
#include <array>
#include <algorithm>

#include "Step5_SA_p.h"
#include "Step5_SA_k.h"

namespace amici {
namespace model_Step5_SA {

void x0_Step5_SA(realtype *x0, const realtype t, const realtype *p, const realtype *k){
    x0[0] = 680.0;
    x0[1] = 100.0;
    x0[2] = 150.0;
    x0[3] = 85.0;
    x0[4] = 34.0;
    x0[5] = 105.0;
}

} // namespace model_Step5_SA
} // namespace amici
