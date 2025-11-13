// 函数: sub_719720
// 地址: 0x719720
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float xmm2_1 = __andps_xmmxud_memxud(arg1, data_8937a0.o)

if (not(1f <= xmm2_1))
    return fconvert.t((xmm2_1 * xmm2_1 * (xmm2_1 * 21f - 36f) + 16f) / 18f)

if (2f <= xmm2_1)
    return float.t(0)

return fconvert.t((((36f - xmm2_1 * 7f) * xmm2_1 - 60f) * xmm2_1 + 32f) / 18f)
