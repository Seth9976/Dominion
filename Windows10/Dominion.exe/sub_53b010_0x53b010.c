// 函数: sub_53b010
// 地址: 0x53b010
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int64_t var_cfc
__builtin_memset(&var_cfc, 0, 0x2c)
int32_t edx
edx.b = arg2 != 0x3ea
int128_t var_cd0 = arg3.o
int32_t var_cf0
int128_t var_cc0 = var_cf0.o
int64_t var_ce0
int128_t var_cb0 = var_ce0.o
int32_t* result = sub_563c40(&var_cd0, 0x17, arg4)

if (result == 0)
    CookieCheckFunction(result)
    return result

void* eax_3 = sub_573400()
char var_d01
void* eax_4 =
    sub_565ff0(eax_3, arg2, result, *(eax_3 + 0xc), 0x462, nullptr, &var_d01, 0xc, nullptr, nullptr)

if (var_d01 != 0)
    int32_t* result_1 = result
    int32_t var_20_1 = 1
    sub_56f1a0(eax_4, &result_1, 0x13, 0)

CookieCheckFunction(result)
return result
