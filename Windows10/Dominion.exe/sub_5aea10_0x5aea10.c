// 函数: sub_5aea10
// 地址: 0x5aea10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg2
int32_t ecx = arg4
int32_t edi = arg2
int32_t eax = ecx - 1
int32_t ebx_1 = eax s>> 1

if (arg2 s< ebx_1)
    do
        int32_t edi_1 = edi * 2
        int32_t xmm1_1 = *(arg3 + (edi_1 << 3) + 0x14)
        int32_t xmm0_1 = *(arg3 + (edi_1 << 3) + 0xc)
        int32_t ecx_1
        
        if (not(xmm0_1 f<= xmm1_1))
            ecx_1 = 0
        else if (xmm1_1 f<= xmm0_1)
            ecx_1.b = *(arg3 + (edi_1 << 3) + 0x10) s>= *(arg3 + (edi_1 << 3) + 8)
        else
            ecx_1 = 1
        
        edi = edi_1 + ecx_1 + 1
        int32_t ecx_3 = *(arg3 + (edi << 3) + 4)
        *(arg3 + (arg2 << 3)) = *(arg3 + (edi << 3))
        *(arg3 + (arg2 << 3) + 4) = ecx_3
        arg2 = edi
    while (edi s< ebx_1)
    
    ecx = arg4

if (edi == ebx_1 && (ecx.b & 1) == 0)
    int32_t ecx_4 = *(arg3 + (ecx << 3) - 4)
    *(arg3 + (arg2 << 3)) = *(arg3 + (ecx << 3) - 8)
    *(arg3 + (arg2 << 3) + 4) = ecx_4
    arg2 = eax

if (var_8 s< arg2)
    int32_t edi_3
    
    do
        int32_t xmm0_2 = arg5[1]
        edi_3 = (arg2 - 1) s>> 1
        int32_t xmm1_2 = *(arg3 + (edi_3 << 3) + 4)
        
        if (not(xmm0_2 f> xmm1_2))
            if (xmm1_2 f> xmm0_2)
                break
            
            if (*(arg3 + (edi_3 << 3)) s>= *arg5)
                break
        
        int32_t ecx_5 = *(arg3 + (edi_3 << 3) + 4)
        *(arg3 + (arg2 << 3)) = *(arg3 + (edi_3 << 3))
        *(arg3 + (arg2 << 3) + 4) = ecx_5
        arg2 = edi_3
    while (var_8 s< edi_3)

int32_t result = *arg5
int32_t ecx_6 = arg5[1]
*(arg3 + (arg2 << 3)) = result
*(arg3 + (arg2 << 3) + 4) = ecx_6
return result
