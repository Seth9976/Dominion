// 函数: _Z24FindLastEntryWithContentRK10TextLayoutii
// 地址: 0x10259b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 s> arg3)
    return 0xffffffff

uint64_t result = 0xffffffff
int32_t* x9_2 = *(arg1 + 0x20) + (sx.q(arg2) << 6)

do
    int32_t x10_2 = *x9_2
    x9_2 = &x9_2[0x10]
    
    if (x10_2 == 1)
        result = zx.q(result.d)
    else
        result = zx.q(arg2)
    
    arg2 += 1
while (arg3 + 1 != arg2)

return result
