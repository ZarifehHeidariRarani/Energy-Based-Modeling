#include "amici/model.h"
#include "wrapfunctions.h"
#include "Step5_SA.h"

namespace amici {
namespace generic_model {

std::unique_ptr<amici::Model> getModel() {
    return std::unique_ptr<amici::Model>(
        new amici::model_Step5_SA::Model_Step5_SA());
}


} // namespace generic_model

} // namespace amici
