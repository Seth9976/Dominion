// 函数: botan_same_mem
// 地址: 0xd66d5c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_4 = 0

if (arg3 != 0)
    int64_t i
    
    do
        char x8_1 = *arg1
        arg1 = &arg1[1]
        char x9_1 = *arg2
        arg2 = &arg2[1]
        i = arg3
        arg3 -= 1
        var_4 |= x9_1 ^ x8_1
    while (i != 1)

uint32_t x8_4 = zx.d(var_4)
return 0xffffffff ^ zx.q(sx.d((x8_4.b - 1) & (not.d(x8_4)).b) s>> 7)
