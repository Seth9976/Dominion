// 函数: sub_5c2ef0
// 地址: 0x5c2ef0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edi_1 = arg4 - arg2

if (arg2 s>= arg4)
    return 

if (edi_1 u>= 0x10)
    int32_t ecx = **arg3
    float xmm1_1[0x4] = *arg3[1]
    float xmm1_2[0x4] = _mm_shuffle_ps(xmm1_1, xmm1_1, 0)
    
    if (ecx + (arg2 << 2) u> arg3[1] || ecx + ((arg4 - 1) << 2) u< arg3[1])
        int32_t edi_2 = edi_1 & 0x8000000f
        
        if (edi_2 s< 0)
            edi_2 = ((edi_2 - 1) | 0xfffffff0) + 1
        
        arg1 = (arg2 << 2) + 0x20
        
        do
            float xmm0_1[0x4] = *(arg1 + ecx - 0x20)
            arg2 += 0x10
            arg1 += 0x40
            *(arg1 + ecx - 0x60) = _mm_div_ps(xmm0_1, xmm1_2)
            *(arg1 + ecx - 0x50) = _mm_div_ps(*(arg1 + ecx - 0x50), xmm1_2)
            *(arg1 + ecx - 0x40) = _mm_div_ps(*(arg1 + ecx - 0x40), xmm1_2)
            *(arg1 + ecx - 0x30) = _mm_div_ps(*(arg1 + ecx - 0x30), xmm1_2)
        while (arg2 s< arg4 - edi_2)

if (arg2 s>= arg4)
    return 

int32_t ecx_1 = **arg3
arg1 = arg3[1]

if (arg4 - arg2 s< 4)
label_5c3011:
    
    do
        *(ecx_1 + (arg2 << 2)) = *(ecx_1 + (arg2 << 2)) f/ *arg1
        arg2 += 1
    while (arg2 s< arg4)
    
    return 

int32_t edi_6 = arg2 << 2

do
    edi_6 += 0x10
    *(ecx_1 + (arg2 << 2)) = *(ecx_1 + (arg2 << 2)) f/ *arg1
    *(ecx_1 + (arg2 << 2) + 4) = *(ecx_1 + (arg2 << 2) + 4) f/ *arg1
    *(ecx_1 + (arg2 << 2) + 8) = *(edi_6 + ecx_1 - 8) f/ *arg1
    *(ecx_1 + (arg2 << 2) + 0xc) = *(ecx_1 + (arg2 << 2) + 0xc) f/ *arg1
    arg2 += 4
while (arg2 s< arg4 - 3)

if (arg2 s< arg4)
    goto label_5c3011
