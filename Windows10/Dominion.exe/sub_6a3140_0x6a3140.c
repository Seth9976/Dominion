// 函数: sub_6a3140
// 地址: 0x6a3140
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char** ecx = arg1[3]

if (ecx != 0)
    sub_6a3220(ecx)
    arg1[3] = 0

char* eax = *arg1

if (eax != 0 && eax != &data_801800)
    if (data_cf65bc != 0 && *eax != 0)
        char* eax_1 = sub_63d4e0(arg1)
        int32_t temp0_1 = *(eax_1 + 4)
        *(eax_1 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_1, *(eax_1 + 0xc) + 0x10)
    
    *arg1 = &data_801800

char* eax_2 = arg1[1]

if (eax_2 != 0 && eax_2 != &data_801800)
    if (data_cf65bc != 0 && *eax_2 != 0)
        char* eax_3 = sub_63d4e0(&arg1[1])
        int32_t temp1_1 = *(eax_3 + 4)
        *(eax_3 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(eax_3, *(eax_3 + 0xc) + 0x10)
    
    arg1[1] = &data_801800

char* eax_4 = arg1[2]

if (eax_4 != 0 && eax_4 != &data_801800)
    if (data_cf65bc != 0 && *eax_4 != 0)
        char* eax_5 = sub_63d4e0(&arg1[2])
        int32_t temp2_1 = *(eax_5 + 4)
        *(eax_5 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_64c080(eax_5, *(eax_5 + 0xc) + 0x10)
    
    arg1[2] = &data_801800

return sub_6a62b0(arg1)
