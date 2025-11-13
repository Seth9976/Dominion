// 函数: sub_63d8d0
// 地址: 0x63d8d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* const eax = &data_801800
char* ecx = *arg1

if (ecx != 0)
    eax = ecx

if (eax != arg2)
    char* esi_1 = arg2
    void* edx_1 = &esi_1[1]
    
    do
        eax.b = *esi_1
        esi_1 = &esi_1[1]
    while (eax.b != 0)
    
    void* esi_2 = esi_1 - edx_1
    
    if (esi_1 == edx_1)
        if (data_cf65bc != esi_2 && ecx != 0 && *ecx != eax.b)
            char* eax_1 = sub_63d4e0(arg1)
            int32_t temp2_1 = *(eax_1 + 4)
            *(eax_1 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_64c080(eax_1, *(eax_1 + 0xc) + 0x10)
        
        *arg1 = &data_801800
        return arg1
    
    sub_63d5e0(eax, esi_2, arg1, 0)
    memcpy(*arg1, arg2, esi_2 + 1)

return arg1
