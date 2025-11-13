// 函数: sub_6b40d0
// 地址: 0x6b40d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
float eax_2
float edx
eax_2, edx = sub_6b7590(arg8)
int32_t var_58 = 0
int32_t var_54 = 0
int32_t var_4c = 0
int32_t var_48 = arg7
int32_t var_44 = 0
float var_50 = (arg4[2] - *arg4) * eax_2 + *arg4
float var_40 = (arg4[3] - arg4[1]) * edx + arg4[1]
int128_t var_9c = arg7.o
int128_t var_7c
__builtin_memcpy(&var_7c, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x00\x00\x80\x3f", 
    0x20)
int128_t var_8c = var_4c.o
float var_dc[0x10]
float* eax_5 = sub_642ae0(&var_dc, &var_9c, &data_800890, &var_dc)
int32_t var_e8_1 = 0
int32_t var_ec = 0
var_9c = *eax_5
int128_t var_8c_1 = *(eax_5 + 0x10)
int128_t var_7c_1 = *(eax_5 + 0x20)
int128_t var_6c = *(eax_5 + 0x30)
void* result = sub_6b3d40(eax_5, &var_9c, arg3, arg2, *arg5, *arg6, 0, arg8)
CookieCheckFunction(result)
return result
