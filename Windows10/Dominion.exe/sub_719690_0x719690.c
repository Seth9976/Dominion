// 函数: sub_719690
// 地址: 0x719690
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float xmm2_1 = __andps_xmmxud_memxud(arg1, data_8937a0.o)

if (not(1f <= xmm2_1))
    return fconvert.t(1f - (2.5f - xmm2_1 * 1.5f) * xmm2_1 * xmm2_1)

if (2f <= xmm2_1)
    return float.t(0)

return fconvert.t(2f - ((xmm2_1 * 0.5f - 2.5f) * xmm2_1 + 4f) * xmm2_1)
