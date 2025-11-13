// 函数: sub_5ade70
// 地址: 0x5ade70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx = arg4
int32_t edi = arg2
int32_t var_8 = edi
int32_t eax = ecx - 1
int32_t ebx_1 = eax s>> 1

if (edi s< ebx_1)
    do
        int32_t edx = arg2 * 2
        float xmm1_1 = *(arg3 + (edx << 3) + 0x10)
        float xmm0_1 = *(arg3 + (edx << 3) + 8)
        int32_t eax_1
        
        if (xmm0_1 <= xmm1_1)
            eax_1 = 2
            
            if (not(xmm1_1 > xmm0_1) && *(arg3 + (edx << 3) + 0xc) f> *(arg3 + (edx << 3) + 0x14))
                eax_1 = 1
        else
            eax_1 = 1
        
        arg2 = edx + eax_1
        int32_t eax_2 = *(arg3 + (arg2 << 3))
        *(arg3 + (edi << 3) + 4) = *(arg3 + (arg2 << 3) + 4)
        *(arg3 + (edi << 3)) = eax_2
        edi = arg2
    while (arg2 s< ebx_1)
    
    ecx = arg4

if (arg2 == ebx_1 && (ecx.b & 1) == 0)
    int32_t ecx_2 = *(arg3 + (ecx << 3) - 4)
    *(arg3 + (edi << 3)) = *(arg3 + (ecx << 3) - 8)
    *(arg3 + (edi << 3) + 4) = ecx_2
    edi = eax

if (var_8 s< edi)
    int32_t edx_2
    
    do
        int32_t xmm0_3 = *arg5
        edx_2 = (edi - 1) s>> 1
        int32_t xmm1_2 = *(arg3 + (edx_2 << 3))
        
        if (not(xmm0_3 f> xmm1_2))
            if (xmm1_2 f> xmm0_3)
                break
            
            if (arg5[1] f<= *(arg3 + (edx_2 << 3) + 4))
                break
        
        int32_t ecx_3 = *(arg3 + (edx_2 << 3) + 4)
        *(arg3 + (edi << 3)) = *(arg3 + (edx_2 << 3))
        *(arg3 + (edi << 3) + 4) = ecx_3
        edi = edx_2
    while (var_8 s< edx_2)

int32_t result = *arg5
int32_t ecx_4 = arg5[1]
*(arg3 + (edi << 3)) = result
*(arg3 + (edi << 3) + 4) = ecx_4
return result
