#include "amici/symbolic_functions.h"
#include "amici/defines.h"
#include "sundials/sundials_types.h"

#include <gsl/gsl-lite.hpp>
#include <array>
#include <algorithm>

#include "Step5_SA_x_rdata.h"

namespace amici {
namespace model_Step5_SA {

void x_solver_Step5_SA(realtype *x_solver, const realtype *x_rdata){
    x_solver[0] = S1;
    x_solver[1] = S2;
    x_solver[2] = S3;
    x_solver[3] = S4;
    x_solver[4] = S5;
    x_solver[5] = S6;
    x_solver[6] = S7;
    x_solver[7] = S8;
    x_solver[8] = S9;
    x_solver[9] = S10;
    x_solver[10] = S11;
    x_solver[11] = S12;
    x_solver[12] = S13;
    x_solver[13] = S14;
    x_solver[14] = S15;
    x_solver[15] = S16;
    x_solver[16] = S17;
    x_solver[17] = S18;
    x_solver[18] = S19;
    x_solver[19] = S20;
    x_solver[20] = S21;
    x_solver[21] = S22;
    x_solver[22] = S23;
    x_solver[23] = S24;
    x_solver[24] = S25;
    x_solver[25] = S26;
    x_solver[26] = S27;
    x_solver[27] = S28;
    x_solver[28] = S29;
    x_solver[29] = S30;
    x_solver[30] = S31;
    x_solver[31] = S32;
    x_solver[32] = S33;
    x_solver[33] = S34;
    x_solver[34] = S35;
    x_solver[35] = S36;
    x_solver[36] = S37;
    x_solver[37] = S38;
    x_solver[38] = S39;
    x_solver[39] = S40;
    x_solver[40] = S41;
    x_solver[41] = S42;
    x_solver[42] = S43;
    x_solver[43] = S44;
    x_solver[44] = S45;
    x_solver[45] = S46;
    x_solver[46] = S47;
    x_solver[47] = S48;
    x_solver[48] = S49;
    x_solver[49] = S50;
    x_solver[50] = S51;
    x_solver[51] = S52;
    x_solver[52] = S53;
    x_solver[53] = S54;
    x_solver[54] = S55;
    x_solver[55] = S56;
    x_solver[56] = S57;
    x_solver[57] = S58;
    x_solver[58] = S59;
    x_solver[59] = S60;
    x_solver[60] = S61;
    x_solver[61] = S62;
    x_solver[62] = S63;
    x_solver[63] = S64;
    x_solver[64] = S65;
    x_solver[65] = S66;
    x_solver[66] = S67;
    x_solver[67] = S68;
    x_solver[68] = S69;
    x_solver[69] = S70;
    x_solver[70] = S71;
    x_solver[71] = S72;
    x_solver[72] = S73;
    x_solver[73] = S74;
    x_solver[74] = S75;
    x_solver[75] = S76;
    x_solver[76] = S77;
    x_solver[77] = S78;
    x_solver[78] = S79;
    x_solver[79] = S80;
    x_solver[80] = S81;
    x_solver[81] = S82;
    x_solver[82] = S83;
    x_solver[83] = S84;
    x_solver[84] = S85;
    x_solver[85] = S86;
    x_solver[86] = S87;
    x_solver[87] = S88;
    x_solver[88] = S89;
    x_solver[89] = S90;
    x_solver[90] = S91;
    x_solver[91] = S92;
    x_solver[92] = S93;
    x_solver[93] = S94;
    x_solver[94] = S95;
    x_solver[95] = S96;
    x_solver[96] = S97;
    x_solver[97] = S98;
    x_solver[98] = S99;
    x_solver[99] = S100;
    x_solver[100] = S101;
    x_solver[101] = S102;
    x_solver[102] = S103;
    x_solver[103] = S104;
    x_solver[104] = S105;
    x_solver[105] = S106;
    x_solver[106] = S107;
    x_solver[107] = S108;
    x_solver[108] = S109;
    x_solver[109] = S110;
    x_solver[110] = S111;
    x_solver[111] = S112;
    x_solver[112] = S113;
    x_solver[113] = S114;
    x_solver[114] = S115;
    x_solver[115] = S116;
    x_solver[116] = S117;
    x_solver[117] = S118;
    x_solver[118] = S119;
}

} // namespace model_Step5_SA
} // namespace amici
