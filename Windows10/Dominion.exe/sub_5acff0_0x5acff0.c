// 函数: sub_5acff0
// 地址: 0x5acff0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = arg2
int32_t* var_10 = arg3
int32_t result_1 = result

if (arg3 != result)
    int64_t* ebx_1 = &arg3[3]
    int64_t* var_14_1 = ebx_1
    
    if (ebx_1 != result)
        uint32_t count = 0xc
        
        do
            int64_t xmm3_1 = *ebx_1
            int64_t* edx = ebx_1
            int32_t edi_1 = ebx_1[1].d
            int32_t eax = arg3[1]
            
            if (xmm3_1:4.d != 0xa)
                if (eax != 0xa)
                label_5ad09d:
                    int32_t eax_6
                    eax_6.b =
                        *(arg4 + xmm3_1.d * 0xc + 0x14) + 0f > *(arg4 + *arg3 * 0xc + 0x14) + 0f
                    
                    if (eax_6.b != 0)
                        goto label_5ad05a
                    
                    goto label_5ad0c6
                
            label_5ad05a:
                memmove(&arg3[3], arg3, count)
                arg3 = var_10
                *arg3 = xmm3_1
                arg3[2] = edi_1
            else
                if (eax == 0xa)
                    int32_t eax_1 = arg3[2]
                    
                    if (edi_1 s>= 6)
                        if (eax_1 s>= 6)
                            goto label_5ad09d
                        
                        goto label_5ad05a
                    
                    if (eax_1 s< 6)
                        goto label_5ad09d
                    
                    if (edi_1 s< 6)
                        goto label_5ad0c6
                    
                    goto label_5ad05a
                
            label_5ad0c6:
                int64_t* ecx = ebx_1
                
                while (true)
                    int32_t eax_7 = ecx[-1].d
                    ecx -= 0xc
                    
                    if (xmm3_1:4.d == 0xa)
                        if (eax_7 != 0xa)
                            break
                        
                        int32_t eax_8 = ecx[1].d
                        
                        if (edi_1 s< 6)
                            if (eax_8 s< 6)
                                goto label_5ad11a
                            
                            if (edi_1 s< 6)
                                break
                        else if (eax_8 s>= 6)
                            goto label_5ad11a
                    else if (eax_7 != 0xa)
                    label_5ad11a:
                        int32_t eax_11
                        eax_11.b =
                            *(arg4 + xmm3_1.d * 0xc + 0x14) + 0f > *(arg4 + *ecx * 0xc + 0x14) + 0f
                        
                        if (eax_11.b == 0)
                            break
                    
                    *edx = *ecx
                    edx[1].d = ecx[1].d
                    edx = ecx
                
                ebx_1 = var_14_1
                arg3 = var_10
                *edx = xmm3_1
                edx[1].d = edi_1
            
            count += 0xc
            ebx_1 += 0xc
            result = result_1
            var_14_1 = ebx_1
        while (ebx_1 != result)

return result
