// 函数: sub_585660
// 地址: 0x585660
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* const ebx = &data_820ec0

while (true)
    uint32_t arg_4
    uint32_t ecx = arg_4
    void* eax_2 = *ebx
    void* eax_3 = sub_571b30(eax_2, arg1[0x352])
    int32_t esi_1 = 0
    void* ecx_2 = eax_3 + 0xa8
    
    while (true)
        int32_t edx_1 = *ecx_2
        
        if (edx_1 == 0)
            sub_63b870(eax_3, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 
                0x2f16, "GetReplacementTestFn")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        if (edx_1 == 9)
            int32_t eax_6 = (*(esi_1 * 0xb4 + eax_3 + 0x14c))(ecx)
            
            if (eax_6.b != 0)
                uint32_t eax_17 = sub_5853c0(eax_6, arg2, arg1, arg_4, eax_2)
                CookieCheckFunction(eax_17)
                return eax_17
            
            ebx += 4
            
            if (ebx != 0x820ecc)
                break
            
            sub_5855e0(eax_6, arg2, arg1, arg_4)
            uint32_t esi_2 = zx.d(arg_4.w)
            
            if (esi_2 u>= 0x320)
                sub_591930()
            
            int32_t eax_8 = sub_57da30(arg1, arg1[esi_2 * 0x19 + 0x693])
            int32_t var_1c[0x4]
            uint32_t eax_9 = sub_577b50(eax_8, eax_8, &arg1[0x353], &var_1c)
            int32_t ecx_7 = 0
            
            if (eax_9 s> 0)
                do
                    if (var_1c[ecx_7] == 0x1152)
                        int32_t eax_10 = arg1[0x541]
                        
                        if (eax_10 != 3 && eax_10 != 5 && eax_10 != 4 && eax_10 != 6
                                && arg1[0x540].b == 0)
                            int32_t eax_11 = arg2
                            
                            if (arg2 == arg1[0x673])
                                eax_11 = arg1[0x674]
                            
                            sub_59f9b0(eax_11, arg2, arg1, eax_11, 0x20, 0, nullptr, 0, 0, 0, 0, 0)
                        
                        int32_t eax_12 = arg1[0x541]
                        
                        if (eax_12 != 3 && eax_12 != 5 && eax_12 != 4 && eax_12 != 6
                                && arg1[0x540].b == 0)
                            int32_t eax_13 = arg2
                            
                            if (arg2 == arg1[0x673])
                                eax_13 = arg1[0x674]
                            
                            sub_59f9b0(eax_13, arg2, arg1, eax_13, 0x16, 0, &arg_4, 1, 0x1152, 0, 
                                0, 0)
                        
                        int32_t eax_15 = arg1[0x541]
                        
                        if (eax_15 != 3 && eax_15 != 5 && eax_15 != 4 && eax_15 != 6
                                && arg1[0x540].b == 0)
                            int32_t eax_14 = arg2
                            
                            if (arg2 == arg1[0x673])
                                eax_14 = arg1[0x674]
                            
                            eax_15 = sub_59f9b0(eax_14, arg2, arg1, eax_14, 0x1f, 0, nullptr, 0, 0, 
                                0, 0, 0)
                        
                        uint32_t eax_16 = sub_5855e0(eax_15, arg2, arg1, arg_4)
                        CookieCheckFunction(eax_16)
                        return eax_16
                    
                    ecx_7 += 1
                while (ecx_7 s< eax_9)
            
            CookieCheckFunction(eax_9)
            return eax_9
        
        esi_1 += 1
        ecx_2 += 0xb4
