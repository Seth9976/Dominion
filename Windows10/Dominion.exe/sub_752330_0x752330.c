// 函数: sub_752330
// 地址: 0x752330
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float xmm2_3 = *arg1

if (not(0f <= xmm2_3))
    *arg1 = 0
else if (not(xmm2_3 <= 1f))
    *arg1 = 0x3f800000

int32_t xmm2 = arg1[1]

if (not(0 f<= xmm2))
    arg1[1] = 0
else if (not(xmm2 f<= 1f))
    arg1[1] = 0x3f800000

int32_t xmm2_1 = arg1[2]

if (not(0 f<= xmm2_1))
    arg1[2] = 0
else if (not(xmm2_1 f<= 1f))
    arg1[2] = 0x3f800000

int32_t xmm2_2 = arg1[3]

if (not(0 f<= xmm2_2))
    arg1[3] = 0
    return 

if (not(xmm2_2 f<= 1f))
    arg1[3] = 0x3f800000
