// 函数: _Z23FindLastEntryWithBreaksRK10TextLayoutii
// 地址: 0x1025964
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 s> arg3)
    return 0xffffffff

uint64_t result = 0xffffffff
char* x9_3 = *(arg1 + 0x20) + (sx.q(arg2) << 6) + 4

do
    int32_t x10_2 = *(x9_3 - 4)
    uint32_t x11_1 = zx.d(*x9_3)
    x9_3 = &x9_3[0x40]
    int32_t result_1
    
    result_1 = x10_2 == 1 ? result.d : arg2
    
    arg2 += 1
    
    if ((x11_1 & 1) == 0)
        result = zx.q(result_1)
    else
        result = zx.q(result.d)
while (arg3 + 1 != arg2)

return result
