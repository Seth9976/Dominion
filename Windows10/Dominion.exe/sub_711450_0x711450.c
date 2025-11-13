// 函数: sub_711450
// 地址: 0x711450
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* esi = arg1
int32_t edx = 0
void* var_8 = esi
int32_t var_c = 0
float xmm2_1 = arg2 f* *(esi + 0x10)
int32_t eax = *(esi + 4)
float var_10 = xmm2_1

if (eax s> 0)
    do
        void* edi_1 = *(*(esi + 8) + (edx << 2))
        
        if (edi_1 != 0)
            float xmm3_1 = *(edi_1 + 0x3c)
            *(edi_1 + 0x34) = *(edi_1 + 0x38)
            float xmm1_1 = xmm2_1 f* *(edi_1 + 0x50)
            float xmm0_1 = *(edi_1 + 0x48)
            *(edi_1 + 0x44) = xmm0_1
            float var_14_1 = xmm1_1
            
            if (xmm3_1 <= 0f)
                goto label_7114e0
            
            float xmm3_2 = xmm3_1 - xmm1_1
            *(edi_1 + 0x3c) = xmm3_2
            
            if (not(xmm3_2 > 0f))
                xmm1_1 = xmm3_2 ^ (data_8937c0.o).d
                var_14_1 = xmm1_1
                *(edi_1 + 0x3c) = 0
            label_7114e0:
                void* esi_1 = *(edi_1 + 4)
                
                if (esi_1 != 0)
                    float xmm0_2 = xmm0_1 f- *(esi_1 + 0x3c)
                    
                    if (xmm0_2 f< 0)
                        goto label_7115f1
                    
                    *(esi_1 + 0x3c) = 0
                    float xmm3_3 = *(edi_1 + 0x50)
                    xmm3_3 f- 0
                    int32_t eax_2
                    eax_2:1.b = (xmm3_3 == 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm3_3, 0f) ? 1 : 0) << 2 | (xmm3_3 < 0f ? 1 : 0)
                    bool p_2 = unimplemented  {test ah, 0x44}
                    float xmm0_3
                    
                    if (p_2)
                        xmm0_3 = (xmm0_2 / xmm3_3 + xmm2_1) f* *(esi_1 + 0x50)
                    else
                        xmm0_3 = (zx.o(0)).d
                    
                    *(esi_1 + 0x40) = xmm0_3
                    *(edi_1 + 0x40) = xmm1_1 f+ *(edi_1 + 0x40)
                    sub_7128b0(eax_2, edx, var_8, esi_1, 1)
                    xmm2_1 = var_10
                    void* eax_3 = esi_1 + 8
                    
                    if (*eax_3 != 0)
                        do
                            *(esi_1 + 0x58) = xmm2_1 f+ *(esi_1 + 0x58)
                            esi_1 = *eax_3
                            eax_3 = esi_1 + 8
                        while (*(esi_1 + 8) != 0)
                    
                    esi = var_8
                    edx = var_c
                else if (xmm0_1 f< *(edi_1 + 0x4c))
                label_7115f1:
                    
                    if (*(edi_1 + 8) != 0)
                        goto label_7115fb
                    
                    esi = var_8
                    *(edi_1 + 0x40) = var_14_1 f+ *(edi_1 + 0x40)
                else if (*(edi_1 + 8) != 0)
                label_7115fb:
                    esi = var_8
                    int32_t eax_9 = sub_7116d0(esi, edi_1, xmm2_1)
                    void* i_1
                    
                    if (eax_9 != 0)
                        i_1 = *(edi_1 + 8)
                        void* i_2 = i_1
                        *(edi_1 + 8) = 0
                    
                    if (eax_9 == 0 || i_1 == 0)
                        xmm2_1 = var_10
                        edx = var_c
                        *(edi_1 + 0x40) = var_14_1 f+ *(edi_1 + 0x40)
                    else
                        void* i = i_1
                        *(i + 0xc) = 0
                        
                        do
                            int32_t* esi_3 = *(esi + 0x24)
                            sub_710f50(esi_3)
                            *(esi_3[1] + (esi_3[2] << 2)) = 2
                            esi_3[2] += 1
                            sub_710f50(esi_3)
                            *(esi_3[1] + (esi_3[2] << 2)) = i
                            void* eax_12 = *esi_3
                            esi_3[2] += 1
                            esi = var_8
                            *(eax_12 + 0x34) = 1
                            i = *(i + 8)
                        while (i != 0)
                        
                        xmm2_1 = var_10
                        edx = var_c
                        *(edi_1 + 0x40) = var_14_1 f+ *(edi_1 + 0x40)
                else
                    *(*(var_8 + 8) + (edx << 2)) = 0
                    int32_t* esi_2 = *(var_8 + 0x24)
                    sub_710f50(esi_2)
                    *(esi_2[1] + (esi_2[2] << 2)) = 2
                    esi_2[2] += 1
                    sub_710f50(esi_2)
                    *(esi_2[1] + (esi_2[2] << 2)) = edi_1
                    void* eax_8 = *esi_2
                    esi_2[2] += 1
                    esi = var_8
                    *(eax_8 + 0x34) = 1
                    sub_712cb0(esi, edi_1)
                    xmm2_1 = var_10
                    edx = var_c
        
        edx += 1
        var_c = edx
    while (edx s< eax)

return sub_710fd0(*(esi + 0x24))
