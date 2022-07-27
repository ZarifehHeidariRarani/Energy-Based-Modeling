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
#include "Step5_SA_my.h"

namespace amici {
namespace model_Step5_SA {

void Jy_Step5_SA(realtype *Jy, const int iy, const realtype *p, const realtype *k, const realtype *y, const realtype *sigmay, const realtype *my){
    switch(iy) {
        case 0:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_observable_EGFRPtotal1, 2)) + 0.5*std::pow(-mobservable_EGFRPtotal1 + observable_EGFRPtotal1, 2)/std::pow(sigma_observable_EGFRPtotal1, 2);
            break;
    }
}

} // namespace model_Step5_SA
} // namespace amici
