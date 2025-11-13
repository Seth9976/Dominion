// 函数: _Z15ToggleElemOrderPiRii
// 地址: 0xb25a18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t i_1 = zx.q(*arg2)
int64_t x10 = sx.q(i_1.d)

if (i_1.d s>= 1)
    size_t x8_2 = (x10 << 2) - 1
    int32_t* x9_1 = arg1
    uint64_t i
    
    do
        if (*x9_1 == arg3)
            memmove(x9_1, &x9_1[1], x8_2)
            *arg2 -= 1
            return 
        
        x8_2 -= 1
        i = i_1
        i_1 -= 1
        x9_1 = &x9_1[1]
    while (i != 1)

*arg2 = x10.d + 1
arg1[x10] = arg3
