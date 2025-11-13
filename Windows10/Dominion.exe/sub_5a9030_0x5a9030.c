// 函数: sub_5a9030
// 地址: 0x5a9030
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
float xmm7 = arg4
int128_t var_78
__builtin_memcpy(&var_78, 
    "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\xbf\x00\x00\x80\xbf\x00\x00\x80\xbf\x"
"00\x00\x80\xbf\x00\x00\x80\x3f", 
    0x20)
int32_t i = 0
float xmm1 = arg6
int128_t var_4c
__builtin_memcpy(&var_4c, 
    "\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00\x3f\x"
"00\x00\x00\x3f\x00\x00\x00\x3f", 
    0x20)
float xmm0 = arg7
float var_50 = xmm7
uint32_t result

do
    float xmm6_1 = *(&var_78 + (i << 3))
    float xmm5_1 = *(&var_78:4 + (i << 3))
    int32_t var_54_1 = 0
    void* eax_2 = data_147abe4
    int32_t var_58 = arg5
    float xmm4_4 = xmm6_1 * 0f * xmm7 + xmm1
    float xmm3_4 = xmm5_1 * 0f * xmm7 + xmm0
    int32_t* var_90_1 = data_171efc4
    float var_2c = xmm4_4 f+ *(eax_2 + 0x20)
    float var_28_1 = xmm3_4 f+ *(eax_2 + 0x24)
    float var_24_1 = xmm6_1 * xmm7 + xmm1 f+ *(eax_2 + 0x20)
    float var_20_1 = xmm3_4 f+ *(eax_2 + 0x24)
    float var_1c_1 = xmm4_4 f+ *(eax_2 + 0x20)
    float var_18_1 = xmm5_1 * xmm7 + xmm0 f+ *(eax_2 + 0x24)
    float var_14_1 = xmm6_1 * 0.707106769f * xmm7 + arg6 f+ *(eax_2 + 0x20)
    float var_10_1 = xmm5_1 * 0.707106769f * xmm7 + xmm0 f+ *(eax_2 + 0x24)
    result = sub_6867a0(&var_58, &var_4c, &var_2c, &var_58, 0, var_90_1, arg3)
    xmm7 = var_50
    i += 1
    xmm0 = arg7
    xmm1 = arg6
while (i s< 4)

CookieCheckFunction(result)
return result
