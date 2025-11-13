// 函数: sub_6cd3d0
// 地址: 0x6cd3d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float eax_1
int128_t xmm0_1

if (*(arg2 + 0x480) s<= *(arg2 + 0x5c))
    eax_1 = arg3[0xc]
    int128_t var_40_1 = *(arg3 + 0x10)
    xmm0_1 = *(arg3 + 0x20)
else
    eax_1 = *(arg2 + 0x4a4)
    int128_t var_40 = *(arg2 + 0x484)
    xmm0_1 = *(arg2 + 0x494)

float var_50[0x4]
float* eax_3 = sub_6cd2a0(&var_50, arg2, arg3, &var_50)
int64_t xmm0_3 = *eax_3
float eax_4 = eax_3[2]
*arg4 = xmm0_3.d f* xmm0_1:8.d
arg4[1] = xmm0_3:4.d f* xmm0_1:0xc.d
arg4[2] = eax_1 * eax_4
return arg4
