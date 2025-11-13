// 函数: sub_68e9e0
// 地址: 0x68e9e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* ebx = nullptr
uint32_t eax_1 = *arg2
char* const esi = &data_801800
uint32_t var_10 = eax_1

if (eax_1 != 0)
    esi = eax_1

char** result = arg1
char** result_1 = result
arg1.b = *esi

if (arg1.b != 0)
    while (true)
        int32_t var_2c
        char const* const var_28
        
        if (arg1.b u< 0x80)
        label_68ea30:
            char* const var_c = esi
            eax_1 = sub_5a0d00(&var_c) - 0x41
            
            if (eax_1 u<= 0x34)
                eax_1 = zx.d(lookup_table_68ec34[eax_1])
                
                switch (eax_1)
                    case 0
                        sub_68e930(eax_1, arg2, result, esi, ebx, 0x877f98)
                        return result
                    case 1
                        sub_68e930(eax_1, arg2, result, esi, ebx, 0x877f94)
                        return result
                    case 2
                        sub_68e930(eax_1, arg2, result, esi, ebx, 0x877fa0)
                        return result
                    case 3
                        sub_68e930(eax_1, arg2, result, esi, ebx, 0x877f9c)
                        return result
                    case 4
                        sub_68e930(eax_1, arg2, result, esi, ebx, 0x877fa8)
                        return result
                    case 5
                        sub_68e930(eax_1, arg2, result, esi, ebx, 0x877fa4)
                        return result
                    case 6
                        sub_68e930(eax_1, arg2, result, esi, ebx, 0x877fb0)
                        return result
                    case 7
                        sub_68e930(eax_1, arg2, result, esi, ebx, 0x877fac)
                        return result
                    case 8
                        sub_68e930(eax_1, arg2, result, esi, ebx, 0x877fb8)
                        return result
                    case 9
                        sub_68e930(eax_1, arg2, result, esi, ebx, 0x877fb4)
                        return result
            
            char ecx_1 = *esi
            ebx = &ebx[1]
            var_c = esi
            
            if (ecx_1 u< 0x80)
            label_68ea78:
                eax_1, arg1 = sub_5a0d00(&var_c)
                esi = var_c
                arg1.b = *esi
                
                if (arg1.b != 0)
                    continue
                
                eax_1 = var_10
                break
            else
                eax_1.b = ecx_1
                eax_1.b &= 0xe0
                
                if (eax_1.b == 0xc0)
                    goto label_68ea78
                
                eax_1.b = ecx_1
                eax_1.b &= 0xf0
                
                if (eax_1.b == 0xe0 || (ecx_1 & 0xf8) == 0xf0)
                    goto label_68ea78
                
                var_28 = "Xutf8_next"
                var_2c = 0x222
        else
            eax_1.b = arg1.b
            eax_1.b &= 0xe0
            
            if (eax_1.b == 0xc0)
                goto label_68ea30
            
            eax_1.b = arg1.b
            eax_1.b &= 0xf0
            
            if (eax_1.b == 0xe0)
                goto label_68ea30
            
            arg1.b &= 0xf8
            
            if (arg1.b == 0xf0)
                goto label_68ea30
            
            var_28 = "Xutf8_peek_next"
            var_2c = 0x21c
        
        sub_63b870(eax_1, &data_801800, "!Xutf8_is_invalid_lead_char(str)", 
            "C:\x\ax2017\Engine\Xutf8.cpp", var_2c, var_28)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

*result = eax_1

if (eax_1 != 0 && *eax_1 != 0)
    char* eax_3 = sub_63d4e0(result)
    *(eax_3 + 4) += 1

return result
