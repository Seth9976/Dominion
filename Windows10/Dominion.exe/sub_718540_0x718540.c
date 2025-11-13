// 函数: sub_718540
// 地址: 0x718540
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ebx = arg1

if (arg5 == 0)
    return 

float xmm1_1 = arg3
float i_1 = arg4
int32_t* esi_1 = arg6
int32_t* edi_1 = ebx + 8
int32_t* var_8_1 = ebx + 0xc
int32_t* eax

if (not(xmm1_1 <= i_1))
    int32_t var_24_1 = arg5
    sub_718540(ebx, arg2, xmm1_1, 0x4f000000, arg5, esi_1, arg7, arg8, arg9)
    xmm1_1 = -1f
    eax = ebx + 0xc
    i_1 = arg4
    var_8_1 = eax
label_7185c8:
    int32_t* ecx_2 = *eax
    int32_t xmm2_1 = *ecx_2
    
    if (not(xmm2_1 f> i_1))
        int32_t i = 0
        
        if (not(xmm2_1 f> xmm1_1))
            int32_t ecx_3 = *edi_1
            int32_t ecx_4 = ecx_3 - 2
            void* ecx_6
            float xmm1_2
            
            if (ecx_3 != 2)
                int32_t eax_2 = ecx_4
                
                while (true)
                    int32_t eax_3 = eax_2 s>> 1
                    int32_t xmm0_2 = ecx_2[eax_3 + 1]
                    
                    if (xmm1_1 f< xmm0_2)
                        ecx_4 = eax_3
                    
                    int32_t i_2 = eax_3 + 1
                    
                    if (xmm1_1 f< xmm0_2)
                        i_2 = i
                    
                    i = i_2
                    
                    if (i == ecx_4)
                        break
                    
                    eax_2 = i + ecx_4
                
                i += 1
                xmm1_2 = ecx_2[i]
                ecx_6 = &ecx_2[i]
                esi_1 = arg6
                
                if (i s> 0)
                    goto label_718631
            else
                i = 1
                ecx_6 = &ecx_2[1]
                xmm1_2 = *ecx_6
            label_718631:
                void* ecx_7 = ecx_6 - 4
                
                do
                    float xmm0_3 = *ecx_7
                    xmm0_3 - xmm1_2
                    eax:1.b = (xmm0_3 == xmm1_2 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_3, xmm1_2) ? 1 : 0) << 2 | (xmm0_3 < xmm1_2 ? 1 : 0)
                    bool p_2 = unimplemented  {test ah, 0x44}
                    
                    if (p_2)
                        break
                    
                    i -= 1
                    ecx_7 -= 4
                while (i s> 0)
            eax = var_8_1
            i_1 = arg4
        
        if (i s< *edi_1)
            while (not(i_1 f< (*eax)[i]))
                int32_t eax_5 = *(*(ebx + 0x10) + (i << 2))
                i += 1
                *(arg5 + (*esi_1 << 2)) = eax_5
                *esi_1 += 1
                ebx = arg1
                eax = var_8_1
                
                if (i s>= *edi_1)
                    break
else if (not(xmm1_1 f>= (*(ebx + 0xc))[*edi_1 - 1]))
    eax = ebx + 0xc
    goto label_7185c8
