#include "amici/symbolic_functions.h"
#include "amici/defines.h"
#include "sundials/sundials_types.h"

#include <gsl/gsl-lite.hpp>
#include <array>
#include <algorithm>

#include "Step5_SA_x.h"
#include "Step5_SA_p.h"
#include "Step5_SA_k.h"

namespace amici {
namespace model_Step5_SA {

void x_rdata_Step5_SA(realtype *x_rdata, const realtype *x, const realtype *tcl, const realtype *p, const realtype *k){
    x_rdata[0] = S1;
    x_rdata[1] = S2;
    x_rdata[2] = S3;
    x_rdata[3] = S4;
    x_rdata[4] = S5;
    x_rdata[5] = S6;
    x_rdata[6] = S7;
    x_rdata[7] = S8;
    x_rdata[8] = S9;
    x_rdata[9] = S10;
    x_rdata[10] = S11;
    x_rdata[11] = S12;
    x_rdata[12] = S13;
    x_rdata[13] = S14;
    x_rdata[14] = S15;
    x_rdata[15] = S16;
    x_rdata[16] = S17;
    x_rdata[17] = S18;
    x_rdata[18] = S19;
    x_rdata[19] = S20;
    x_rdata[20] = S21;
    x_rdata[21] = S22;
    x_rdata[22] = S23;
    x_rdata[23] = S24;
    x_rdata[24] = S25;
    x_rdata[25] = S26;
    x_rdata[26] = S27;
    x_rdata[27] = S28;
    x_rdata[28] = S29;
    x_rdata[29] = S30;
    x_rdata[30] = S31;
    x_rdata[31] = S32;
    x_rdata[32] = S33;
    x_rdata[33] = S34;
    x_rdata[34] = S35;
    x_rdata[35] = S36;
    x_rdata[36] = S37;
    x_rdata[37] = S38;
    x_rdata[38] = S39;
    x_rdata[39] = S40;
    x_rdata[40] = S41;
    x_rdata[41] = S42;
    x_rdata[42] = S43;
    x_rdata[43] = S44;
    x_rdata[44] = S45;
    x_rdata[45] = S46;
    x_rdata[46] = S47;
    x_rdata[47] = S48;
    x_rdata[48] = S49;
    x_rdata[49] = S50;
    x_rdata[50] = S51;
    x_rdata[51] = S52;
    x_rdata[52] = S53;
    x_rdata[53] = S54;
    x_rdata[54] = S55;
    x_rdata[55] = S56;
    x_rdata[56] = S57;
    x_rdata[57] = S58;
    x_rdata[58] = S59;
    x_rdata[59] = S60;
    x_rdata[60] = S61;
    x_rdata[61] = S62;
    x_rdata[62] = S63;
    x_rdata[63] = S64;
    x_rdata[64] = S65;
    x_rdata[65] = S66;
    x_rdata[66] = S67;
    x_rdata[67] = S68;
    x_rdata[68] = S69;
    x_rdata[69] = S70;
    x_rdata[70] = S71;
    x_rdata[71] = S72;
    x_rdata[72] = S73;
    x_rdata[73] = S74;
    x_rdata[74] = S75;
    x_rdata[75] = S76;
    x_rdata[76] = S77;
    x_rdata[77] = S78;
    x_rdata[78] = S79;
    x_rdata[79] = S80;
    x_rdata[80] = S81;
    x_rdata[81] = S82;
    x_rdata[82] = S83;
    x_rdata[83] = S84;
    x_rdata[84] = S85;
    x_rdata[85] = S86;
    x_rdata[86] = S87;
    x_rdata[87] = S88;
    x_rdata[88] = S89;
    x_rdata[89] = S90;
    x_rdata[90] = S91;
    x_rdata[91] = S92;
    x_rdata[92] = S93;
    x_rdata[93] = S94;
    x_rdata[94] = S95;
    x_rdata[95] = S96;
    x_rdata[96] = S97;
    x_rdata[97] = S98;
    x_rdata[98] = S99;
    x_rdata[99] = S100;
    x_rdata[100] = S101;
    x_rdata[101] = S102;
    x_rdata[102] = S103;
    x_rdata[103] = S104;
    x_rdata[104] = S105;
    x_rdata[105] = S106;
    x_rdata[106] = S107;
    x_rdata[107] = S108;
    x_rdata[108] = S109;
    x_rdata[109] = S110;
    x_rdata[110] = S111;
    x_rdata[111] = S112;
    x_rdata[112] = S113;
    x_rdata[113] = S114;
    x_rdata[114] = S115;
    x_rdata[115] = S116;
    x_rdata[116] = S117;
    x_rdata[117] = S118;
    x_rdata[118] = S119;
}

} // namespace model_Step5_SA
} // namespace amici
