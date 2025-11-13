// 函数: sub_510560
// 地址: 0x510560
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t eax_2 = sub_56b780()
void* eax_3 = sub_573400()
void var_60
memset(&var_60, 0, 0x50)
void* esi = *(eax_3 + 4)
sub_573c80(eax_2, &var_60, 0, nullptr)
sub_5735a0(&var_60, eax_2, esi, &var_60, 0)
sub_574380(*(eax_3 + 4), &var_60)
sub_593d70(*(sub_573400() + 4))
int32_t* ecx_4 = *(eax_3 + 4)
int32_t result = ecx_4[0x541]

if (result != 3 && result != 5 && result != 4 && result != 6 && ecx_4[0x540].b == 0)
    int32_t eax_6 = 0xffffffff
    
    if (ecx_4[0x673] == 0xffffffff)
        eax_6 = ecx_4[0x674]
    
    result = sub_59f9b0(eax_6, 0xffffffff, ecx_4, eax_6, 0x43, 0, nullptr, 0, eax_2, 2, 0, 0)

CookieCheckFunction(result)
return result
