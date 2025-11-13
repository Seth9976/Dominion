// 函数: sub_71fcf0
// 地址: 0x71fcf0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
FILE* _Stream = arg3
void var_c8
void* eax_3
int32_t* ecx_1
eax_3, ecx_1 = sub_71f490(arg3, arg2, &var_c8, arg3)
int32_t var_e0 = arg5
uint32_t result = sub_71fb30(eax_3, arg2, ecx_1, arg4)
int32_t var_20
int32_t var_1c

if (result != 0)
    fseek(_Stream, var_20 - var_1c, 1)
CookieCheckFunction(result)
return result
