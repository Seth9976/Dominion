// 函数: sub_63d850
// 地址: 0x63d850
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* const esi = &data_801800
char* eax = *arg2
char* const edx = &data_801800
char* ecx = *arg1

if (ecx != 0)
    edx = ecx

if (eax != 0)
    esi = eax

if (edx != esi)
    if (data_cf65bc != 0 && ecx != 0 && *ecx != 0)
        char* eax_1 = sub_63d4e0(arg1)
        int32_t temp1_1 = *(eax_1 + 4)
        *(eax_1 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(eax_1, *(eax_1 + 0xc) + 0x10)
            *arg1 = &data_801800
    
    char* eax_2 = *arg2
    *arg1 = eax_2
    
    if (eax_2 != 0 && *eax_2 != 0)
        char* eax_3 = sub_63d4e0(arg1)
        *(eax_3 + 4) += 1

return arg1
