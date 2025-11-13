// 函数: sub_745020
// 地址: 0x745020
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float xmm1_1 = data_1593c74 ^ (data_8937c0.o).d
float xmm2_1 = data_1593c70 ^ (data_8937c0.o).d
__builtin_memset(&arg1[4], 0, 0x1c)
float xmm0 = data_1593c6c
arg1[0x17] = 0
arg1[2] = 0x3f800000
arg1[3] = xmm0
int128_t xmm0_1 = data_7ff530
arg1[1] = xmm1_1 * xmm0
int128_t xmm1_3 = data_893730
*arg1 = xmm2_1 * xmm0
*(arg1 + 0x2c) = xmm1_3
*(arg1 + 0x3c) = xmm0_1
*(arg1 + 0x4c) = xmm1_3
return arg1
