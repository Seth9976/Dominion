// 函数: sub_588ee0
// 地址: 0x588ee0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* result_1 = arg2 * 0x5a30 + arg1
void* ebx = *(result_1 + 0x17560)
uint32_t eax_3 = sub_576b30(result_1, arg2, arg1, 0x1b, 0, 0, 0)
void var_c98

if (eax_3 s<= 0)
    int32_t eax_6 = sub_576dd0(eax_3, arg2, arg1, 0x2b, 0)
    int32_t var_d04_1 = 0xc
    sub_588db0(eax_6, arg2, arg1, ebx - eax_6 + 5, 0x3ea, 0, 0, 0, nullptr, &var_c98, 0)
else
    int32_t var_cfc_1 = 0xc
    sub_581060(sub_588db0(ebx + 3, arg2, arg1, ebx + 3, 0x3ea, 0, 0, 0, nullptr, &var_c98, 0), 
        arg2, arg1, 0x1b)
void var_ce8
memset(&var_ce8, 0, 0x48)
uint32_t var_c9c = 0xe
sub_580700(arg1, &var_c9c, 1, &var_ce8, 0, nullptr, 0, nullptr)
uint32_t result = result_1
*(result + 0x1755c) = 0
*(result + 0x17560) = 0
CookieCheckFunction(result)
return result
