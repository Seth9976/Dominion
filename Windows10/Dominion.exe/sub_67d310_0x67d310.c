// 函数: sub_67d310
// 地址: 0x67d310
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg1
float xmm1 = arg2 f- arg1[0x23]

if (not(arg1[0x1f] f+ arg1[0x1e] > xmm1) && arg1[0x1b] s<= 1)
    return arg1[0xf]

int32_t eax_1 = sub_67ecb0(arg1, arg2 f- arg1[0x22])
int32_t eax_2 = sub_67ecb0(&arg1[0xf], xmm1)
float xmm0_3 = sub_64c3c0(&arg1[0x1e], xmm1) * _mm_cvtepi32_ps(zx.o(eax_2 - eax_1))

if (0 f<= xmm0_3)
    return int.d(xmm0_3 + 0.5f) + eax_1

return int.d(xmm0_3 - 0.5f) + eax_1
