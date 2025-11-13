// 函数: _Z21DefBinSerializeStringPKcPiR21DefBinSerializeBuffer
// 地址: 0xc84228
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

size_t result
int32_t x21

if (zx.d(*(arg3 + 0x10)) == 0)
    *arg2 = *(arg3 + 0xc)
    int32_t x22_1 = zx.d(*(arg3 + 0x10)) == 0 ? 1 : 0
    result = strlen(arg1)
    x21 = result.d + 1
    
    if (x22_1 != 0)
        result = memcpy(*arg3 + sx.q(*(arg3 + 0xc)), arg1, sx.q(x21))
else
    result = strlen(arg1)
    x21 = result.d + 1

*(arg3 + 0xc) += x21
return result
