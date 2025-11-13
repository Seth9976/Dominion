// 函数: sub_5a1af0
// 地址: 0x5a1af0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = arg2
int32_t ebx = *(arg1 + 8)
int32_t eax_1 = *(arg1 + 4)
int32_t i_1 = result * 2
int32_t var_10 = ebx
void* edi = *(ebx + (result << 2))
void* var_8 = edi

if (i_1 s< eax_1)
    int32_t i = i_1 + 1
    
    if (i s>= eax_1)
        i = i_1
    else
        float xmm0_1 = *(*(ebx + (i_1 << 2) + 4) + 0x14)
        float xmm1_1 = *(*(ebx + (i_1 << 2)) + 0x14)
        edi = var_8
        xmm1_1 - xmm0_1
        void* eax_2
        eax_2:1.b = (xmm1_1 == xmm0_1 ? 1 : 0) << 6 | (is_unordered.d(xmm1_1, xmm0_1) ? 1 : 0) << 2
            | (xmm1_1 < xmm0_1 ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        bool cond:0_1
        
        if (p_2)
            cond:0_1 = xmm1_1 > xmm0_1
        else
            cond:0_1 = *(*(ebx + (i_1 << 2)) + 0xc) f> *(*(ebx + (i_1 << 2) + 4) + 0xc)
            edi = var_8
        
        eax_1.b = cond:0_1
        
        if (eax_1 == 0)
            i = i_1
    
    while (i != 0)
        void* edx = *(ebx + (i << 2))
        float xmm1_2 = *(edi + 0x14)
        float xmm0_3 = *(edx + 0x14)
        xmm1_2 - xmm0_3
        eax_1:1.b = (xmm1_2 == xmm0_3 ? 1 : 0) << 6 | (is_unordered.d(xmm1_2, xmm0_3) ? 1 : 0) << 2
            | (xmm1_2 < xmm0_3 ? 1 : 0)
        bool p_4 = unimplemented  {test ah, 0x44}
        bool cond:1_1
        
        if (p_4)
            cond:1_1 = xmm1_2 > xmm0_3
        else
            cond:1_1 = *(edi + 0xc) f> *(edx + 0xc)
        
        int32_t eax_4
        eax_4.b = cond:1_1
        
        if (eax_4 == 0)
            break
        
        *(ebx + (result << 2)) = edx
        *(edx + 0x1c) = result
        int32_t i_2 = i * 2
        result = i
        eax_1 = *(arg1 + 4)
        
        if (i_2 s>= eax_1)
            break
        
        i = i_2 + 1
        
        if (i s>= eax_1)
            i = i_2
        else
            int32_t eax_7 = *(arg1 + 8)
            void* edi_3 = *(eax_7 + (i_2 << 2) + 4)
            void* ebx_1 = *(eax_7 + (i_2 << 2))
            float xmm0_5 = *(edi_3 + 0x14)
            float xmm1_3 = *(ebx_1 + 0x14)
            xmm1_3 - xmm0_5
            eax_7:1.b = (xmm1_3 == xmm0_5 ? 1 : 0) << 6
                | (is_unordered.d(xmm1_3, xmm0_5) ? 1 : 0) << 2 | (xmm1_3 < xmm0_5 ? 1 : 0)
            bool p_6 = unimplemented  {test ah, 0x44}
            bool cond:2_1
            
            if (p_6)
                cond:2_1 = xmm1_3 > xmm0_5
            else
                cond:2_1 = *(ebx_1 + 0xc) f> *(edi_3 + 0xc)
            
            eax_1.b = cond:2_1
            
            if (eax_1 == 0)
                i = i_2
        
        ebx = var_10
        edi = var_8

*(ebx + (result << 2)) = edi
*(edi + 0x1c) = result
return result
