// 函数: sub_720140
// 地址: 0x720140
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t _Offset
int32_t edx
_Offset, edx = ftell(arg1)
void var_c8
sub_71f490(_Offset, edx, &var_c8, arg1)
uint32_t result = sub_72d4a0(&var_c8, "#?RADIANCE\n")
int32_t var_18
int32_t var_20 = var_18
int32_t var_14
int32_t var_1c = var_14

if (result == 0)
    result = sub_72d4a0(&var_c8, "#?RGBE\n")
    int32_t var_20_1 = var_18
    int32_t var_1c_1 = var_14

fseek(arg1, _Offset, 0)
CookieCheckFunction(result)
return result
