// 函数: sub_643bc0
// 地址: 0x643bc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t* result = sub_643950()
result[0x13] = arg2
*result = 1
result[0x12] = arg6
__builtin_memcpy(&result[2], 
    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x"
"00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00"
"00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
    0x40)
result[0x51] = data_1476b44
result[0x52] = arg3
int128_t var_3c = data_cf6668
int64_t xmm0_2 = data_cf6678
float xmm2_1 = xmm0_2:4.d f- arg4:4.d
float xmm1_1 = xmm0_2.d f- arg4.d
float xmm0_4 = data_cf6680 - arg5
result[0x55] = xmm2_1 * xmm2_1 + xmm1_1 * xmm1_1 + xmm0_4 * xmm0_4
result[0x53] = sub_643ae0()
result[0x54] = sub_643b50()
result[0x57] = 0
CookieCheckFunction(result)
return result
