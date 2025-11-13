// 函数: sub_5c3200
// 地址: 0x5c3200
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = arg4
int32_t ebx_1 = esi - arg2

if (arg2 s>= esi)
    return 

if (ebx_1 u>= 2)
    int32_t edi_1 = **arg3
    int32_t var_10_1 = edi_1
    int32_t eax_3 = *arg3[1]
    
    if (edi_1 + (arg2 << 2) u> eax_3 + (esi << 2) - 4
            || edi_1 + ((esi - 1) << 2) u< eax_3 + (arg2 << 2))
        int32_t ecx_7
        
        if (ebx_1 u< 0x10)
            ecx_7 = eax_3
        label_5c3310:
            int32_t ebx_5 = ebx_1 & 0x80000001
            
            if (ebx_5 s< 0)
                ebx_5 = ((ebx_5 - 1) | 0xfffffffe) + 1
            
            do
                *(edi_1 + (arg2 << 2)) =
                    _mm_add_ps(zx.o(*(ecx_7 + (arg2 << 2))), zx.o(*(edi_1 + (arg2 << 2))))
                arg2 += 2
            while (arg2 s< esi - ebx_5)
        else
            int32_t eax_8 = ebx_1 & 0x8000000f
            
            if (eax_8 s< 0)
                eax_8 = ((eax_8 - 1) | 0xfffffff0) + 1
            
            void* eax_11 = (arg2 << 2) + 0x20
            void* esi_1 = eax_11 - 0x20
            void* ebx_2 = eax_11 - 0x10
            void* var_c_2 = eax_11 + 0x10
            ecx_7 = eax_3
            
            do
                arg2 += 0x10
                float xmm1_1[0x4] = *(esi_1 + ecx_7)
                esi_1 += 0x40
                *(eax_11 + edi_1 - 0x20) = _mm_add_ps(xmm1_1, *(eax_11 + edi_1 - 0x20))
                float xmm1_3[0x4] = *(ebx_2 + ecx_7)
                ebx_2 += 0x40
                *(eax_11 + edi_1 - 0x10) = _mm_add_ps(xmm1_3, *(eax_11 + edi_1 - 0x10))
                *(eax_11 + edi_1) = _mm_add_ps(*(eax_11 + ecx_7), *(eax_11 + edi_1))
                void* edi_2 = var_c_2
                var_c_2 += 0x40
                edi_1 = var_10_1
                *(eax_11 + edi_1 + 0x10) = _mm_add_ps(*(edi_2 + ecx_7), *(eax_11 + edi_1 + 0x10))
                eax_11 += 0x40
            while (arg2 s< esi - eax_8)
            
            esi = arg4
            arg1.b = ebx_1.b & 0xf
            
            if (arg1.b u>= 2)
                goto label_5c3310

if (arg2 s>= esi)
    return 

int32_t ecx_8 = **arg3
arg1 = *arg3[1]

if (esi - arg2 s< 4)
label_5c33d2:
    
    do
        *(ecx_8 + (arg2 << 2)) = *(arg1 + (arg2 << 2)) f+ *(ecx_8 + (arg2 << 2))
        arg2 += 1
    while (arg2 s< esi)
    
    return 

int32_t edi_3 = arg2 << 2

do
    *(ecx_8 + (arg2 << 2)) = *(arg1 + (arg2 << 2)) f+ *(ecx_8 + (arg2 << 2))
    *(ecx_8 + (arg2 << 2) + 4) = *(arg1 + (arg2 << 2) + 4) f+ *(ecx_8 + (arg2 << 2) + 4)
    float xmm0_11 = *(arg1 + edi_3 + 8)
    edi_3 += 0x10
    *(ecx_8 + (arg2 << 2) + 8) = xmm0_11 f+ *(ecx_8 + (arg2 << 2) + 8)
    *(ecx_8 + (arg2 << 2) + 0xc) = *(arg1 + (arg2 << 2) + 0xc) f+ *(ecx_8 + (arg2 << 2) + 0xc)
    arg2 += 4
while (arg2 s< esi - 3)

if (arg2 s< esi)
    goto label_5c33d2
