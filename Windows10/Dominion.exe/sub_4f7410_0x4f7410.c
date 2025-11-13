// 函数: sub_4f7410
// 地址: 0x4f7410
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t ebx = arg2
int32_t eax_2 = arg4 - 1
int32_t var_24 = ebx
int32_t esi = ebx
int32_t eax_3 = eax_2 s>> 1
int32_t var_2c = eax_3

if (ebx s< eax_3)
    do
        int32_t eax_5 = esi * 3
        int64_t xmm0_1 = *(arg3 + (eax_5 << 3) + 0xc)
        int64_t xmm0_2 = *(arg3 + (eax_5 << 3) + 0x18)
        int32_t edx_1 = xmm0_1.d
        int32_t ecx_1 = xmm0_2.d
        bool cond:0_1 = ecx_1 s>= edx_1
        
        if (ecx_1 == edx_1)
            cond:0_1 = xmm0_2:4.d s>= xmm0_1:4.d
        
        int32_t eax_6
        eax_6.b = cond:0_1
        esi = esi * 2 + 1 + eax_6
        int32_t eax_7 = esi * 3
        int32_t eax_8 = ebx * 3
        ebx = esi
        int64_t* ecx_3 = arg3 + (eax_8 << 2)
        *ecx_3 = *(arg3 + (eax_7 << 2))
        ecx_3[1].d = *(arg3 + (eax_7 << 2) + 8)
        eax_3 = var_2c
    while (esi s< eax_3)

int32_t ecx_5 = esi

if (esi == eax_3 && (arg4.b & 1) == 0)
    int32_t eax_10 = arg4 * 3
    int64_t* ecx_4 = arg3 + esi * 0xc
    *ecx_4 = *(arg3 + (eax_10 << 2) - 0xc)
    ecx_4[1].d = *(arg3 + (eax_10 << 2) - 4)
    ecx_5 = eax_2

if (var_24 s< ecx_5)
    int32_t edx_5
    
    do
        edx_5 = (ecx_5 - 1) s>> 1
        int64_t xmm0_5 = *arg5
        int32_t eax_14 = edx_5 * 3
        int64_t xmm0_6 = *(arg3 + (eax_14 << 2))
        int64_t* esi_3 = arg3 + (eax_14 << 2)
        int32_t eax_15 = xmm0_6.d
        int32_t temp0_1 = xmm0_5.d
        bool cond:1_1 = eax_15 s< temp0_1
        
        if (eax_15 == temp0_1)
            cond:1_1 = xmm0_6:4.d s< xmm0_5:4.d
        
        eax_15.b = cond:1_1
        
        if (eax_15.b == 0)
            break
        
        int64_t* ecx_6 = arg3 + ecx_5 * 0xc
        *ecx_6 = *esi_3
        ecx_6[1].d = esi_3[1].d
        ecx_5 = edx_5
    while (var_24 s< edx_5)

int64_t* ecx_7 = arg3 + ecx_5 * 0xc
*ecx_7 = *arg5
uint32_t result = arg5[1].d
ecx_7[1].d = result
CookieCheckFunction(result)
return result
