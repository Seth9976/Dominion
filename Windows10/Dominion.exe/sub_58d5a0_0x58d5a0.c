// 函数: sub_58d5a0
// 地址: 0x58d5a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = sub_571b30(arg1, 0x18)
void* eax_3 = sub_571b30(arg2, 0x18)
int128_t var_34
int128_t xmm0 = *sub_576c00(&var_34, *(sub_571b30(arg1, 0x18) + 0x90))
uint32_t var_5c = xmm0.d
uint32_t var_74[0x6]
int128_t xmm0_1 = *sub_576c00(&var_74, *(sub_571b30(arg2, 0x18) + 0x90))
int32_t ecx_4 = xmm0_1
var_34 = xmm0_1
uint32_t eax_8

if (var_5c s>= ecx_4)
    eax_8 = xmm0:8.d
    int32_t edx_1 = xmm0:4.d
    int32_t ecx_5 = var_34:8.d
    int32_t esi_1 = var_34:4.d
    
    if (var_5c s> ecx_4)
    label_58d670:
        
        if (var_5c s<= ecx_4)
            if (edx_1 s< esi_1)
            label_58d68e:
                char* eax_10 = *(eax_3 + 0x58)
                char* ecx_7 = *(eax_2 + 0x58)
                
                while (true)
                    edx_1.b = *ecx_7
                    char temp0_1 = *eax_10
                    bool c_1 = edx_1.b u< temp0_1
                    
                    if (edx_1.b == temp0_1)
                        if (edx_1.b == 0)
                            break
                        
                        edx_1.b = ecx_7[1]
                        char temp1_1 = eax_10[1]
                        c_1 = edx_1.b u< temp1_1
                        
                        if (edx_1.b == temp1_1)
                            ecx_7 = &ecx_7[2]
                            eax_10 = &eax_10[2]
                            
                            if (edx_1.b == 0)
                                break
                            
                            continue
                    
                    uint32_t eax_12
                    eax_12.b = (sbb.d(eax_10, eax_10, c_1) | 1) s< 0
                    CookieCheckFunction(eax_12)
                    return eax_12
                
                CookieCheckFunction(0)
                return 0
            
            if (edx_1 s<= esi_1)
                if (eax_8 s< ecx_5)
                    goto label_58d68e
                
                if (eax_8 s<= ecx_5 && (xmm0:0xc.d == 0 || var_34:0xc.d != 0))
                    goto label_58d68e
        
        eax_8.b = 0
        CookieCheckFunction(eax_8)
        return eax_8
    
    if (edx_1 s>= esi_1)
        if (edx_1 s> esi_1)
            goto label_58d670
        
        if (eax_8 s>= ecx_5 && (eax_8 s> ecx_5 || xmm0:0xc.d != 0 || var_34:0xc.d == 0))
            goto label_58d670

eax_8.b = 1
CookieCheckFunction(eax_8)
return eax_8
