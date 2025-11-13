// 函数: sub_7200a0
// 地址: 0x7200a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t eax_2 = arg1 + arg2
int32_t var_20 = arg1
int32_t var_b8 = 0
int32_t var_a8 = 0
int32_t var_1c = eax_2
void var_c8
uint32_t result = sub_72d4a0(&var_c8, "#?RADIANCE\n")
int32_t var_20_1 = arg1
int32_t var_1c_1 = eax_2

if (result == 0)
    result = sub_72d4a0(&var_c8, "#?RGBE\n")

CookieCheckFunction(result)
return result
