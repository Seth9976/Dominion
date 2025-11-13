// 函数: sub_593b90
// 地址: 0x593b90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int128_t var_2c
int128_t xmm0 = *sub_576c00(&var_2c, *(sub_571b30(arg2, *(*arg1 + 0xd48)) + 0x90))
uint32_t var_54 = xmm0.d
uint32_t var_6c[0x6]
int128_t xmm0_1 = *sub_576c00(&var_6c, *(sub_571b30(arg3, *(*arg1 + 0xd48)) + 0x90))
int32_t ecx_2 = xmm0_1
var_2c = xmm0_1
uint32_t eax_6

if (var_54 s>= ecx_2)
    eax_6 = xmm0:8.d
    int32_t edx_4 = xmm0:4.d
    int32_t ecx_3 = var_2c:8.d
    int32_t esi_1 = var_2c:4.d
    
    if (var_54 s> ecx_2)
    label_593c38:
        
        if (var_54 s<= ecx_2)
            if (edx_4 s< esi_1)
            label_593c56:
                uint32_t eax_7
                eax_7.b = arg2 s< arg3
                CookieCheckFunction(eax_7)
                return eax_7
            
            if (edx_4 s<= esi_1)
                if (eax_6 s< ecx_3)
                    goto label_593c56
                
                if (eax_6 s<= ecx_3 && (xmm0:0xc.d == 0 || var_2c:0xc.d != 0))
                    goto label_593c56
        
        eax_6.b = 0
        CookieCheckFunction(eax_6)
        return eax_6
    
    if (edx_4 s>= esi_1)
        if (edx_4 s> esi_1)
            goto label_593c38
        
        if (eax_6 s>= ecx_3 && (eax_6 s> ecx_3 || xmm0:0xc.d != 0 || var_2c:0xc.d == 0))
            goto label_593c38

eax_6.b = 1
CookieCheckFunction(eax_6)
return eax_6
