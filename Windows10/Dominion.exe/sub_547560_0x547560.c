// 函数: sub_547560
// 地址: 0x547560
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_c = arg1
int32_t result

if ((*(sub_571b30(arg2, data_cce9b0) + 0x9c) & 0x20000) == 0
        && (*(sub_571b30(arg2, data_cce9b0) + 0x9c) & 0x10000) == 0)
    int32_t eax_4 = *(sub_571b30(arg2, data_cce9b0) + 0x98) & 4
    int32_t eax_8
    
    if (eax_4 == 0)
        eax_8 = *(sub_571b30(arg2, data_cce9b0) + 0x98) & 2
    
    if (eax_4 != 0 || eax_8 != 0)
        if (arg1 - 0x1147 u> 6)
            result.b = 1
            return result
        
        bool cond:1_1
        bool cond:4_1
        
        switch (arg1)
            case 0x1147
                if (arg2 s> 0xc00)
                    if (arg2 != 0xc01 && arg2 != 0xc02)
                        cond:4_1 = arg2 == 0xc03
                    label_54767a:
                        
                        if (not(cond:4_1))
                            result.b = 1
                            return result
                else if (arg2 != 0xc00 && arg2 != 0x501)
                    cond:4_1 = arg2 == 0x502
                    goto label_54767a
            case 0x1148, 0x114b, 0x114c
                result.b = 1
                return result
            case 0x1149
                if (arg2 s> 0xe05)
                    if (arg2 != 0x1100 && arg2 != 0x110f)
                        cond:4_1 = arg2 == 0x1121
                        goto label_54767a
                else if (arg2 != 0xe05)
                    if (arg2 s> 0xb1d)
                        cond:4_1 = arg2 == 0xe03
                        goto label_54767a
                    
                    if (arg2 != 0xb1d && arg2 != 0x21c)
                        cond:4_1 = arg2 == 0xb13
                        goto label_54767a
            case 0x114a
                cond:1_1 = arg2 != 0x1309
                goto label_54762b
            case 0x114d
                cond:1_1 = arg2 != 0x1103
            label_54762b:
                
                if (cond:1_1)
                    result.b = 1
                    return result

result.b = 0
return result
