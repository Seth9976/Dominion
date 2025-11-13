// 函数: sub_52f340
// 地址: 0x52f340
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* eax = *arg1

if (*eax s< 0x28)
    void* eax_1 = sub_573400()
    int32_t var_64_1 = 0
    int64_t var_6c_1 = 0
    int64_t var_5c
    __builtin_memset(&var_5c, 0, 0x1c)
    void* eax_2 = *(eax_1 + 4)
    int32_t eax_5 = **arg1 + 1
    int128_t var_40 = 0x9f.o
    int128_t var_30_1 = eax_5.o
    int64_t var_50
    int128_t var_20_1 = var_50.o
    void* eax_6 = sub_573400()
    int32_t* esi_1 = *(eax_6 + 4)
    int32_t var_78 = *eax_6
    int32_t var_74_1 = *(eax_6 + 0x10)
    int32_t ecx_2 = *(eax_6 + 0xc)
    int32_t eax_7
    
    if (ecx_2 != esi_1[0x673])
        eax_7 = ecx_2
    else
        eax_7 = esi_1[0x674]
    
    int32_t var_94_1 = 0
    int32_t eax_8 = sub_623940(eax_7, &var_78, esi_1, ecx_2, eax_7, ecx_2, 0x28, &var_40, 0x2e)
    int32_t* eax_9 = *arg1
    
    if (eax_8 s> *eax_9)
        *eax_9 = eax_8
        *arg1[1] = *(sub_573400() + 0xc)
        void* eax_11 = sub_573400()
        sub_5716d0(eax_11, 0x10, *(eax_11 + 4), *(eax_11 + 0xc), 0, nullptr, 0, eax_8, 0, 0, 0)
        void* eax_12 = sub_573400()
        int32_t ecx_7 = *(eax_2 + 0x1504)
        
        if (ecx_7 != 3 && ecx_7 != 5 && ecx_7 != 4 && ecx_7 != 6)
            ecx_7.b = ecx_7 == 2
            sub_61b1b0(eax_12, 0x2c, ecx_7.b, *(eax_12 + 0xc), 0, 1, eax_8, nullptr, nullptr, 0, 0, 
                0, 0, 0)
        
        void* eax_14 = *(sub_573400() + 4)
        *(eax_14 + 0x19b4) = eax_8
        return eax_14
    
    void* eax_15 = sub_573400()
    int32_t* ecx_8 = *(eax_15 + 4)
    int32_t edx_3 = ecx_8[0x541]
    
    if (edx_3 != 3 && edx_3 != 5 && edx_3 != 4 && edx_3 != 6 && ecx_8[0x540].b == 0)
        int32_t edx_4 = *(eax_15 + 0xc)
        int32_t eax_16 = edx_4
        
        if (edx_4 == ecx_8[0x673])
            eax_16 = ecx_8[0x674]
        
        sub_59f9b0(eax_16, edx_4, ecx_8, eax_16, 0x10, 0, nullptr, 0, 0, 0, 0, 0)
    
    eax = sub_573400()
    int32_t ecx_10 = *(eax_2 + 0x1504)
    
    if (ecx_10 != 3 && ecx_10 != 5 && ecx_10 != 4 && ecx_10 != 6)
        ecx_10.b = ecx_10 == 2
        return sub_61b1b0(eax, 0x2c, ecx_10.b, eax[3], 0, 2, nullptr, nullptr, nullptr, 0, 0, 0, 0, 
            0)

return eax
