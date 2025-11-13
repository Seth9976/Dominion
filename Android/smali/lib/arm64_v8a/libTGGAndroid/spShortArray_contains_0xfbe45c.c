// 函数: spShortArray_contains
// 地址: 0xfbe45c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t i_1 = zx.q(*arg1)

if (i_1.d s>= 1)
    int16_t* x9_1 = *(arg1 + 8)
    uint64_t i
    
    do
        if (zx.d(*x9_1) == zx.d(arg2))
            return 0xffffffff
        
        i = i_1
        i_1 -= 1
        x9_1 = &x9_1[1]
    while (i != 1)

return 0
