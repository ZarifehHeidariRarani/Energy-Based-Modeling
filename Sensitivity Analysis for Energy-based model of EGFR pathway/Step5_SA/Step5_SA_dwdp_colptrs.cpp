#include "amici/sundials_matrix_wrapper.h"
#include "sundials/sundials_types.h"

#include <array>
#include <algorithm>

namespace amici {
namespace model_Step5_SA {

static constexpr std::array<sunindextype, 11> dwdp_colptrs_Step5_SA_ = {
    0, 2, 4, 72, 242, 258, 296, 380, 418, 538, 590
};

void dwdp_colptrs_Step5_SA(SUNMatrixWrapper &dwdp){
    dwdp.set_indexptrs(gsl::make_span(dwdp_colptrs_Step5_SA_));
}
} // namespace model_Step5_SA
} // namespace amici
