// 函数: sub_5641d0
// 地址: 0x5641d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx = __chkstk(0x1914)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
void* eax_2 = sub_573400()
void* eax_3 = sub_573400()
void var_190c
int32_t eax_5 = sub_590990(&var_190c, *(eax_3 + 0xc), *(eax_3 + 4), 0x3eb, &var_190c)
int32_t result_1
int32_t eax_7 = sub_593ca0(&var_190c, &result_1, *(eax_3 + 4), &var_190c, eax_5)
void* eax_8 = sub_573400()
int32_t eax_10 = sub_590990(&var_190c, *(eax_8 + 0xc), *(eax_8 + 4), 0x3ec, &var_190c)
int32_t eax_12 = sub_593ca0(&var_190c, &(&result_1)[eax_7], *(eax_8 + 4), &var_190c, eax_10)

if (eax_7 != neg.d(eax_12))
    int32_t* ecx_5 = *(eax_2 + 4)
    int32_t var_1918 = *eax_2
    int32_t var_1914_1 = *(eax_2 + 0x10)
    int32_t eax_15 = *(eax_2 + 0xc)
    int32_t edx_4
    
    if (eax_15 != ecx_5[0x673])
        edx_4 = eax_15
    else
        edx_4 = ecx_5[0x674]
    
    int32_t* var_14_1 = ecx_5
    int32_t var_18_1 = ecx
    int32_t eax_16 = sub_623b70(eax_15, &var_1918, ecx_5, 7, eax_15, edx_4, &result_1, 
        eax_7 + eax_12, ecx_5, nullptr, &data_cce9d8)
    int32_t* ecx_6 = *(eax_2 + 4)
    int32_t eax_17 = ecx_6[0x541]
    
    if (eax_16 != 0)
        if (eax_17 != 3 && eax_17 != 5 && eax_17 != 4 && eax_17 != 6 && ecx_6[0x540].b == 0)
            int32_t edx_7 = *(eax_2 + 0xc)
            int32_t eax_19 = edx_7
            
            if (edx_7 == ecx_6[0x673])
                eax_19 = ecx_6[0x674]
            
            sub_59f9b0(eax_19, edx_7, ecx_6, eax_19, 0x1c, 0, nullptr, 0, result_1, 0, 0, 0)
        
        int32_t result = result_1
        CookieCheckFunction(result)
        return result
    
    if (eax_17 != 3 && eax_17 != 5 && eax_17 != 4 && eax_17 != 6 && ecx_6[0x540].b == 0)
        int32_t edx_6 = *(eax_2 + 0xc)
        int32_t eax_18 = edx_6
        
        if (edx_6 == ecx_6[0x673])
            eax_18 = ecx_6[0x674]
        
        int32_t var_2c_2
        __builtin_memset(&var_2c_2, 0, 0x1c)
        int32_t* var_28_2
        int32_t var_24_2
        int32_t var_20_2
        int32_t var_1c_2
        int32_t var_18_2
        int32_t var_14_2
        sub_59f9b0(eax_18, edx_6, ecx_6, eax_18, 0x1c, var_2c_2, var_28_2, var_24_2, var_20_2, 
            var_1c_2, var_18_2, var_14_2)

CookieCheckFunction(0)
return 0
