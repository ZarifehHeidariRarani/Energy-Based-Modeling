#include "amici/sundials_matrix_wrapper.h"
#include "sundials/sundials_types.h"

#include <array>
#include <algorithm>

namespace amici {
namespace model_Step5_SA {

static constexpr std::array<sunindextype, 120> dwdx_colptrs_Step5_SA_ = {
    0, 1, 2, 28, 49, 103, 146, 148, 150, 207, 214, 221, 228, 231, 238, 243, 246, 248, 251, 255, 258, 261, 268, 289, 292, 296, 299, 302, 307, 313, 320, 326, 327, 330, 337, 344, 348, 352, 354, 356, 367, 378, 385, 392, 402, 414, 422, 432, 438, 446, 450, 454, 459, 464, 469, 474, 481, 488, 495, 502, 512, 524, 532, 540, 548, 556, 562, 568, 574, 580, 584, 588, 592, 596, 603, 612, 620, 628, 638, 648, 651, 654, 658, 662, 666, 670, 678, 686, 694, 702, 708, 716, 723, 730, 739, 748, 753, 758, 763, 768, 774, 780, 786, 792, 798, 804, 810, 816, 820, 824, 828, 832, 837, 842, 847, 852, 857, 862, 867, 872
};

void dwdx_colptrs_Step5_SA(SUNMatrixWrapper &dwdx){
    dwdx.set_indexptrs(gsl::make_span(dwdx_colptrs_Step5_SA_));
}
} // namespace model_Step5_SA
} // namespace amici
