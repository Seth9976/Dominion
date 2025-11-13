// 函数: sub_64c460
// 地址: 0x64c460
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg1 != 7)
    if (arg1 == 8)
        return *(arg2 + 4)
    
    return 0xffffffff

float xmm3 = *(arg2 + 0x10)
int32_t xmm0

if (0f <= xmm3)
    xmm0 = _mm_min_ss(0x437f0000, xmm3)
else
    xmm0 = (zx.o(0)).d

float xmm0_1

if (0f f<= xmm0)
    xmm0_1 = xmm0 f+ 0.5f
else
    xmm0_1 = xmm0 f- 0.5f

float xmm4 = *(arg2 + 0xc)
int32_t xmm0_2

if (0f <= xmm4)
    xmm0_2 = _mm_min_ss(0x437f0000, xmm4)
else
    xmm0_2 = (zx.o(0)).d

float xmm0_3

if (0 f<= xmm0_2)
    xmm0_3 = xmm0_2 f+ 0.5f
else
    xmm0_3 = xmm0_2 f- 0.5f

float xmm4_1 = *(arg2 + 8)
int32_t xmm0_4

if (0f <= xmm4_1)
    xmm0_4 = _mm_min_ss(0x437f0000, xmm4_1)
else
    xmm0_4 = (zx.o(0)).d

float xmm0_5

if (0 f<= xmm0_4)
    xmm0_5 = xmm0_4 f+ 0.5f
else
    xmm0_5 = xmm0_4 f- 0.5f

int32_t xmm0_6 = *(arg2 + 4)
int32_t xmm1

if (0 f<= xmm0_6)
    xmm1 = _mm_min_ss(0x437f0000, xmm0_6)
else
    xmm1 = (zx.o(0)).d

float xmm1_1

if (0 f<= xmm1)
    xmm1_1 = xmm1 f+ 0.5f
else
    xmm1_1 = xmm1 f- 0.5f

return ((zx.d((int.d(xmm0_1)).b) << 8 | zx.d((int.d(xmm0_3)).b)) << 8 | zx.d((int.d(xmm0_5)).b))
    << 8 | zx.d((int.d(xmm1_1)).b)
