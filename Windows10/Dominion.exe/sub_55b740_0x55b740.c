// 函数: sub_55b740
// 地址: 0x55b740
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edx = __chkstk(0x1918)
__security_cookie
int32_t arg_c80
uint32_t result = sub_568780(&arg_c80, edx, 0x3ea, &arg_c80)
void var_8
__builtin_memcpy(&var_8, result, 0xc84)

if (arg1 != 0)
    sub_566140(result, 0x3ea, &var_8, 0x46f, 2, 0, 0xb, nullptr, nullptr)
    arg_c80 = 4
    void arg_c84
    memcpy(&arg_c84, &var_8, arg1 << 2)
    int32_t arg_1904 = arg1
    result = sub_56bba0(&arg_c80, 0, sub_55b810, &arg_c80, 0x50, 2)

CookieCheckFunction(result)
return result
