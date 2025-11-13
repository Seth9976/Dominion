// 函数: sub_641020
// 地址: 0x641020
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint128_t xmm1 = *arg2
int32_t ebx = *arg1
int32_t xmm0_1 = _mm_bsrli_si128(xmm1, 8)
int32_t ecx = xmm1
int32_t xmm0_3 = _mm_bsrli_si128(xmm1, 0xc)
int128_t* xmm1_1 = _mm_bsrli_si128(xmm1, 4)
int32_t ebx_1 = arg1[1]
int32_t i_1 = divs.dp.d(sx.q(xmm0_1 - ecx), ebx)
int32_t i = divs.dp.d(sx.q(xmm0_3 - xmm1_1), ebx_1)
int32_t esi_2 = (i_1 - 1) | (i_1 - 1) u>> 1
int32_t esi_3 = esi_2 | esi_2 u>> 2
int32_t esi_4 = esi_3 | esi_3 u>> 4
int32_t esi_5 = esi_4 | esi_4 u>> 8

if ((esi_5 u>> 0x10 | esi_5) + 1 != i_1)
    i_1 = ((esi_5 u>> 0x10 | esi_5) + 1) s>> 1

int32_t esi_7 = (i - 1) | (i - 1) u>> 1
int32_t esi_8 = esi_7 | esi_7 u>> 2
int32_t esi_9 = esi_8 | esi_8 u>> 4
int32_t esi_10 = esi_9 | esi_9 u>> 8

if ((esi_10 u>> 0x10 | esi_10) + 1 != i)
    i = ((esi_10 u>> 0x10 | esi_10) + 1) s>> 1

if (i_1 s< i)
    i = i_1

if (i == 0)
    sub_63b870(i, &data_801800, "n > 0", "C:\x\ax2017\Engine\MathFunctions.cpp", 0xa7, "LogBase2")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t ecx_23 = 0

while (i u> 1)
    i u>>= 1
    ecx_23 += 1

if (ecx_23 == 0xffffffff)
    return 0xffffffff

int32_t edi = 1 << ecx_23.b
int128_t* var_28 = xmm1_1
int32_t esi_12 = edi * ebx
void* edi_1 = edi * ebx_1
void* var_20 = xmm1_1 + edi_1
int32_t var_24 = esi_12 + ecx
int128_t* var_28_1 = xmm1_1
*arg3 = ecx.o
int32_t var_20_1 = xmm0_3
int32_t var_24_1 = xmm0_1
void* var_28_2 = edi_1 + xmm1_1
int32_t var_20_2 = xmm0_3
*arg4 = (esi_12 + ecx).o
int32_t var_24_2 = ecx + esi_12
*arg5 = ecx.o
return ecx_23 + 1
