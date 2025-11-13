// 函数: sub_564390
// 地址: 0x564390
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
__chkstk(0x1910)
__security_cookie
void* eax_2 = sub_573400()
void* eax_3 = sub_573400()
void arg_c80
int32_t eax_5 = sub_590990(&arg_c80, *(eax_3 + 0xc), *(eax_3 + 4), 0x3eb, &arg_c80)
int32_t esi_1 = sub_593ca0(&arg_c80, &__return_addr, *(eax_3 + 4), &arg_c80, eax_5)

if (esi_1 != 0)
label_564437:
    int32_t* ecx_4 = *(eax_2 + 4)
    int32_t var_8 = *eax_2
    var_4 = *(eax_2 + 0x10)
    int32_t eax_15 = *(eax_2 + 0xc)
    int32_t edx_4
    
    if (eax_15 != ecx_4[0x673])
        edx_4 = eax_15
    else
        edx_4 = ecx_4[0x674]
    
    int32_t* var_14_2 = ecx_4
    int32_t var_18_1 = 0x1b
    int32_t eax_16 = sub_623b70(eax_15, &var_8, ecx_4, 7, eax_15, edx_4, &__return_addr, esi_1, 
        ecx_4, nullptr, &data_cce9d8)
    int32_t* ecx_5 = *(eax_2 + 4)
    int32_t eax_17 = ecx_5[0x541]
    
    if (eax_16 != 0)
        if (eax_17 != 3 && eax_17 != 5 && eax_17 != 4 && eax_17 != 6 && ecx_5[0x540].b == 0)
            int32_t edx_7 = *(eax_2 + 0xc)
            int32_t eax_19 = edx_7
            
            if (edx_7 == ecx_5[0x673])
                eax_19 = ecx_5[0x674]
            
            sub_59f9b0(eax_19, edx_7, ecx_5, eax_19, 0x1c, 0, nullptr, 0, __return_addr, 0, 0, 0)
        
        void* const result = __return_addr
        CookieCheckFunction(result)
        return result
    
    if (eax_17 != 3 && eax_17 != 5 && eax_17 != 4 && eax_17 != 6 && ecx_5[0x540].b == 0)
        int32_t edx_6 = *(eax_2 + 0xc)
        int32_t eax_18 = edx_6
        
        if (edx_6 == ecx_5[0x673])
            eax_18 = ecx_5[0x674]
        
        sub_59f9b0(eax_18, edx_6, ecx_5, eax_18, 0x1c, 0, nullptr, 0, 0, 0, 0, 0)
else
    void* eax_8 = sub_573400()
    int32_t eax_10 = sub_590990(&arg_c80, *(eax_8 + 0xc), *(eax_8 + 4), 0x3ec, &arg_c80)
    esi_1 = sub_593ca0(&arg_c80, &__return_addr, *(eax_8 + 4), &arg_c80, eax_10)
    
    if (esi_1 != 0)
        goto label_564437

CookieCheckFunction(0)
return 0
