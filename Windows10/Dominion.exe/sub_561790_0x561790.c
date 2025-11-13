// 函数: sub_561790
// 地址: 0x561790
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = sub_573400()
void* eax_3 = sub_573400()
void* eax_4 = sub_5887c0(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), 0)
void* var_c98 = nullptr
uint32_t eax_5 = *(eax_2 + 0xc)
int32_t* esi_1 = *(eax_2 + 4)
void* result = sub_582de0(eax_5, eax_4, esi_1, 0x3eb)

if (result.b == 0)
    uint32_t var_c90
    uint32_t eax_7 = sub_590990(&var_c90, 0xffffffff, esi_1, 5, &var_c90)
    
    if (eax_7 != 0)
        if (eax_7 != 1)
            sub_591930()
        
        eax_7 = var_c90
    
    if (eax_4 == eax_7)
        eax_7 = sub_591930()
    
    result = sub_5822e0(eax_7, eax_5, esi_1, eax_4, nullptr, 0x45f, 4, 0, 0, 0, 0, 0, nullptr, 1, 
        nullptr, var_c98)

CookieCheckFunction(result)
return result
