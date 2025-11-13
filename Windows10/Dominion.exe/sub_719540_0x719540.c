// 函数: sub_719540
// 地址: 0x719540
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_8 = ecx
float xmm2_1 = __andps_xmmxud_memxud(arg1, data_8937a0.o)
float xmm3_1 = arg2 * 0.5f
float xmm0_1 = xmm3_1 + 0.5f

if (not(xmm2_1 < xmm0_1))
    return float.t(0)

if (0.5f - xmm3_1 < xmm2_1)
    return (fconvert.t(xmm0_1) - fconvert.t(xmm2_1)) / fconvert.t(arg2)

return float.t(1)
