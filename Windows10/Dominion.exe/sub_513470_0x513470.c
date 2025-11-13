// 函数: sub_513470
// 地址: 0x513470
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t eax_2 = arg3[0x541]

if (eax_2 != 3 && eax_2 != 5 && eax_2 != 4 && eax_2 != 6 && arg3[0x540].b == 0)
    int32_t eax_3 = 0xffffffff
    
    if (arg3[0x673] == 0xffffffff)
        eax_3 = arg3[0x674]
    
    sub_59f9b0(eax_3, 0xffffffff, arg3, eax_3, 0x3c, 0, nullptr, 0, 0, 0, 0, 0)

sub_570370(arg3, arg2)
sub_5704d0(arg3)
void var_60
memset(&var_60, 0, 0x50)
sub_573c80(arg4, &var_60, 0, nullptr)
sub_5735a0(&var_60, arg4, arg3, &var_60, 0)
sub_574380(arg3, &var_60)
sub_593d70(*(sub_573400() + 4))
void* result = arg3[0x541]

if (result != 3 && result != 5 && result != 4 && result != 6)
    result = sub_61b1b0(result, 0x2e, result == 2, 0xffffffff, 0, nullptr, nullptr, nullptr, 
        nullptr, 0, 0, 0, 0, 0)

CookieCheckFunction(result)
return result
