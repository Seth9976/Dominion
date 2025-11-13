// 函数: sub_586cf0
// 地址: 0x586cf0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t var_c8c
uint32_t i = sub_575860(&var_c8c, arg2, arg1, &var_c8c)
int64_t var_c9c
int32_t result = sub_58ac40(&var_c8c, &var_c9c:4)

if (i != 0)
    void* edi_2 = arg2 * 0x5a30 + arg1
    void* var_ca0_1 = edi_2
    
    do
        int32_t eax_4 = *(edi_2 + 0x174f8)
        uint32_t eax_5 = sub_576b30(eax_4, arg2, arg1, 0x32, 0, 0, 0)
        int32_t edi_3 = *(edi_2 + 0x174fc)
        
        if (eax_5 s<= 0)
            int32_t eax_6 = sub_576dd0(eax_5, arg2, arg1, 0x34, 0)
            
            if (eax_6 s>= edi_3)
                edi_3 = *(var_ca0_1 + 0x174fc)
            else
                edi_3 = sub_576dd0(eax_6, arg2, arg1, 0x34, 0)
        
        int32_t eax_9 = eax_4 + edi_3
        int32_t eax_10 = sub_583fc0(eax_9, arg2, arg1, 0xe00)
        result = sub_576b30(eax_10, arg2, arg1, 0x12, 0, 0, 0)
        int32_t ecx_6 = 0
        
        if (result s<= 0)
            ecx_6 = eax_10
        
        if (ecx_6 + eax_9 s<= 0)
            break
        
        int32_t* eax_11 = &var_c8c
        uint32_t i_1 = 0
        int32_t var_cdc_1 = 0
        
        if (eax_9 != 0)
            eax_11 = nullptr
        
        int32_t* var_ce0_1 = eax_11
        
        if (eax_9 == 0)
            i_1 = i
        
        uint32_t i_2 = i_1
        int128_t var_d14 = 1.o
        int32_t var_cd4
        __builtin_memset(&var_cd4, 0, 0x20)
        int128_t var_d04_1 = var_cd4.o
        int32_t var_ca8 = 0
        int32_t var_ca4_1 = 0
        int64_t var_cc4
        int128_t var_cf4_1 = var_cc4.o
        int32_t eax_13 =
            sub_5869d0(&var_c8c, &var_ca8, arg1, arg2, 1, &var_c8c, i, 1, 0, 1, &var_d14, 1, 0, 0)
        
        if (eax_13 != 1)
            if (eax_13 == 0)
                result = arg1[0x541]
                
                if (result != 3 && result != 5 && result != 4 && result != 6 && arg1[0x540].b == 0)
                    uint32_t eax_20 = arg2
                    
                    if (arg2 == arg1[0x673])
                        eax_20 = arg1[0x674]
                    
                    result = sub_59f9b0(eax_20, arg2, arg1, eax_20, 0x1e, 0, nullptr, 0, 0, 0, 0, 0)
                
                break
            
            sub_591930()
        else
            sub_5748b0(arg1, arg2)
            int32_t eax_14 = var_c8c
            uint32_t edi_7 = zx.d(eax_14.w)
            
            if (edi_7 u>= 0x320)
                sub_591930()
            
            int64_t var_c94 = 0
            var_c9c = 0
            int32_t var_cac_1 = arg1[edi_7 * 0x19 + 0x695]
            int32_t var_cb0 = eax_14
            sub_586320(&var_cb0, arg2, arg1, &var_cb0, &var_c9c, &var_c94, 0)
        
        i = sub_575860(&var_c8c, arg2, arg1, &var_c8c)
        result = sub_58ac40(&var_c8c, &var_c9c:4)
        edi_2 = var_ca0_1
    while (i != 0)

arg1[0x67b] = 0
CookieCheckFunction(result)
return result
