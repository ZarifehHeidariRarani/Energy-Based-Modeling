#include "amici/sundials_matrix_wrapper.h"
#include "sundials/sundials_types.h"

#include <array>
#include <algorithm>

namespace amici {
namespace model_Step5_SA {

static constexpr std::array<sunindextype, 14> dwdw_rowvals_Step5_SA_ = {
    9, 10, 8, 17, 64, 55, 80, 81, 100, 101, 142, 143, 144, 145
};

void dwdw_rowvals_Step5_SA(SUNMatrixWrapper &dwdw){
    dwdw.set_indexvals(gsl::make_span(dwdw_rowvals_Step5_SA_));
}
} // namespace model_Step5_SA
} // namespace amici
