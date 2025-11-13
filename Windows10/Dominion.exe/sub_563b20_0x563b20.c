// 函数: sub_563b20
// 地址: 0x563b20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t eax_2

if (arg3[0x320] == 0)
    eax_2 = 0
else
    eax_2 = sub_563a80(arg3)
    
    if (eax_2 == 0)
        void* eax_3 = sub_573400()
        int32_t var_ce8_1 = 0
        char var_cec_1 = 0
        int32_t eax_4 = *eax_3
        int32_t edx = *(eax_3 + 0x2c)
        int128_t var_cd4 = *arg5
        int32_t var_ca0 = eax_4
        int32_t var_c9c_1 = *(eax_3 + 0x10)
        int128_t* var_cf4_1 = &var_cd4
        int128_t var_cc4_1 = arg5[1]
        int32_t var_cfc_1 = 1
        int32_t var_d00_1 = 1
        int128_t var_cb4_1 = arg5[2]
        var_cb4_1.d = *(eax_3 + 0x28)
        uint32_t var_c94
        __builtin_memcpy(&var_c94, arg3, 0xc84)
        var_cb4_1:4.d = edx
        int32_t var_14
        int32_t eax_7 = sub_5869d0(&var_c94, &var_ca0, *(eax_3 + 4), arg4, 1, &var_c94, var_14, 
            var_d00_1, var_cfc_1, arg2, var_cf4_1, arg6, var_cec_1, var_ce8_1)
        
        if (eax_7 s> 1)
            sub_591930()
            uint32_t eax_8 = var_c94
            CookieCheckFunction(eax_8)
            return eax_8
        
        if (eax_7 != 0)
            uint32_t eax_9 = var_c94
            CookieCheckFunction(eax_9)
            return eax_9
        
        eax_2 = 0

CookieCheckFunction(eax_2)
return eax_2
