// 函数: sub_60ee00
// 地址: 0x60ee00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = arg2 << 2

if (arg3 == 1)
    int32_t edi = 0
    int32_t var_18 = 0
    int32_t esi_1 = 0
    int32_t eax_2 = *(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x71dc)
    
    if (eax_2 s> 0)
        int32_t* ebx_1 = arg7
        int32_t var_14_1 = 0x6edc
        
        do
            if (sub_60eae0(*(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + var_14_1 + 8), arg4) != 0)
                int32_t eax_6 = var_18
                var_18 += 1
                
                if (eax_6 s>= eax)
                    int32_t* eax_7 = ebx_1
                    edi += 1
                    ebx_1 = &ebx_1[2]
                    *eax_7 = 0
                    eax_7[1] = esi_1
                
                if (edi == 4)
                    break
            
            var_14_1 += 0xc
            esi_1 += 1
        while (esi_1 s< eax_2)
    
    return edi

int32_t edi_1 = arg5
int32_t i = 0
void* const eax_9 = &data_783418
int32_t i_1 = 0
int32_t var_10_1 = 0
void* const var_14_2 = &data_783418

while (i != 4)
    int32_t esi_2 = 0
    
    while (true)
        void var_19
        
        if (sub_60eb90(*(eax_9 + (esi_2 << 2)), &var_19) == arg4)
            void* const ebx_2 = var_14_2
            int32_t esi_3 = 0
            void* const edx_2 = ebx_2
            
            while (*edx_2 != 0)
                int32_t eax_13 = 0
                
                if (edi_1 s<= 0)
                    goto label_60eefb
                
                while (true)
                    edi_1 = arg5
                    
                    if (*(arg6 + (eax_13 << 2)) == *ebx_2)
                        break
                    
                    eax_13 += 1
                    
                    if (eax_13 s>= edi_1)
                        goto label_60eefb
                
                esi_3 += 1
                edx_2 += 4
                ebx_2 += 4
                
                if (esi_3 s>= 3)
                    break
            
            int32_t ecx_10 = var_10_1 + 1
            var_10_1 = ecx_10
            
            if (ecx_10 s> eax)
                arg7[i_1 * 2] = 1
                arg7[i_1 * 2 + 1] = var_14_2 - 0x48
                i = i_1 + 1
                i_1 = i
                break
        else
            eax_9 = var_14_2
            esi_2 += 1
            
            if (esi_2 s< 3)
                continue
        
    label_60eefb:
        i = i_1
        break
    
    eax_9 = var_14_2 + 0x64
    var_14_2 = eax_9
    
    if (eax_9 s>= 0x78decc)
        break

return i
