// 函数: sub_6d97a0
// 地址: 0x6d97a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t* result = sub_6db490(ecx)
int32_t* result_1 = result
int32_t* result_2 = result_1

if (result_1[0xa].b != 0)
    int32_t i = 0
    result_1[0xa].b = 0
    int32_t i_1 = 0
    
    if (result_1[0xc] s> 0)
        do
            int32_t edi_1 = 0
            int32_t* ecx_1 = result_1[0xd] + (i << 3)
            int32_t eax_1 = *ecx_1
            void* ecx_2 = &ecx_1[1]
            void* var_c_1 = ecx_2
            
            if (eax_1 s> 0)
                int32_t ebx = 0
                
                do
                    int32_t* esi_2 = *ecx_2 + ebx
                    int32_t edx_1 = esi_2[0x390]
                    
                    if (edx_1 != 0)
                        (*(*data_147b070 + 0x54))(edx_1)
                        ecx_2 = var_c_1
                        esi_2[0x390] = 0
                    
                    edi_1 += 1
                    esi_2[0x1f8] = 0
                    ebx += 0xf04
                    esi_2[0xfd] = 0
                    esi_2[0xfc] = 0
                    esi_2[1] = 0
                    *esi_2 = 0
                    eax_1 = *ecx_1
                while (edi_1 s< eax_1)
                
                result_1 = result_2
            
            sub_64c080(*ecx_2, eax_1 * 0xf04)
            i = i_1 + 1
            i_1 = i
        while (i s< result_1[0xc])
    
    result = result_1[0xd]
    
    if (result != 0)
        result = _aligned_free(result)
    
    result_1[0xd] = 0
    result_1[0xc] = 0

return result
