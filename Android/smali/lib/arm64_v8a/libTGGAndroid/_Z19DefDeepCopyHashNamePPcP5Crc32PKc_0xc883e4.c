// 函数: _Z19DefDeepCopyHashNamePPcP5Crc32PKc
// 地址: 0xc883e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22 = strlen(arg3) + 1
char* x0_3 = XMalloc(x22)
*arg1 = x0_3
memcpy(x0_3, arg3, sx.q(x22))
int64_t result

if (arg3 == 0)
    result = 0
else
    result = strcrc32(arg3, 0)

*arg2 = result.d
return result
