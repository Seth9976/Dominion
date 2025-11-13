// 函数: sub_61dd90
// 地址: 0x61dd90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
memset(arg1, 0, 0x80)

if (arg1 == eax + 0x353c)
    char* eax_1 = *(eax + 0x350c)
    
    if (eax_1 != 0 && eax_1 != &data_801800)
        if (data_cf65bc != 0 && *eax_1 != 0)
            char* eax_2 = sub_63d4e0(eax + 0x350c)
            int32_t temp1_1 = *(eax_2 + 4)
            *(eax_2 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_64c080(eax_2, *(eax_2 + 0xc) + 0x10)
        
        *(eax + 0x350c) = &data_801800
    
    void* esi_1 = eax + 0x3510
    int32_t i_1 = 0xa
    int32_t i
    
    do
        char* eax_3 = *esi_1
        
        if (eax_3 != 0 && eax_3 != &data_801800)
            if (data_cf65bc != 0 && *eax_3 != 0)
                char* eax_4 = sub_63d4e0(esi_1)
                int32_t temp2_1 = *(eax_4 + 4)
                *(eax_4 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_64c080(eax_4, *(eax_4 + 0xc) + 0x10)
            
            *esi_1 = &data_801800
        
        esi_1 += 4
        i = i_1
        i_1 -= 1
    while (i != 1)
    data_cc8dc8
    sub_4d8ad0(esi_1)

arg1[3] = 2
*arg1 = *(eax + 0x3538)
int32_t result = sub_5ac1b0(data_171efd0)
data_171efd0 = 0
data_1723ff4 = 0
return result
