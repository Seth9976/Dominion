// 函数: sub_6409e0
// 地址: 0x6409e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = nullptr
void* esi_1

while (true)
    esi_1 = &arg1[0xa]
    
    if (eax != 0)
        eax += 0x48
    else
        eax = arg1[7]
    
    int32_t ecx_3 = arg1[7] + arg1[8] * 0x48
    
    if (eax u>= ecx_3)
        break
    
    while (true)
        int32_t ecx_4 = *(eax + 0x44)
        
        if ((ecx_4 & 0xffff0000) != 0)
            int32_t edx_2 = arg1[0xa]
            arg1[0xa] = zx.d(ecx_4.w)
            *(eax + 0x44) = edx_2
            arg1[0xb] -= 1
            break
        
        eax += 0x48
        esi_1 = &arg1[0xa]
        
        if (eax u>= ecx_3)
            goto label_640a3b

label_640a3b:
int32_t i = 0
arg1[8] = 0
*esi_1 = 0
int32_t i_1 = 0

do
    int32_t ecx_5 = i << 2
    int32_t* j = *(ecx_5 + arg1[0xe])
    
    while (j != 0)
        int32_t* j_1 = j
        j = j[4]
        sub_64c080(j_1, 0x14)
    
    *(ecx_5 + arg1[0xe]) = 0
    i = i_1 + 1
    i_1 = i
while (i u<= arg1[0xf])

arg1[0x10] = 0
uint128_t xmm1 = *(arg1 + 8)
int32_t xmm0_1 = _mm_bsrli_si128(xmm1, 4)
int32_t var_18 = xmm1 + 2
int32_t var_14 = xmm0_1 + 2
int32_t var_10 = _mm_bsrli_si128(xmm1, 8) - 2
int32_t var_c = _mm_bsrli_si128(xmm1, 0xc) - 2
int32_t result = sub_6411d0(arg1, 0, &var_18, 0)
arg1[6] = result
return result
