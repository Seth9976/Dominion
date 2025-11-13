// 函数: sub_7195f0
// 地址: 0x7195f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float xmm2_1 = __andps_xmmxud_memxud(arg1, data_8937a0.o)

if (not(1f <= xmm2_1))
    return fconvert.t((xmm2_1 * xmm2_1 * (xmm2_1 * 3f - 6f) + 4f) / 6f)

if (2f <= xmm2_1)
    return float.t(0)

return fconvert.t((((6f - xmm2_1) * xmm2_1 - 12f) * xmm2_1 + 8f) / 6f)
