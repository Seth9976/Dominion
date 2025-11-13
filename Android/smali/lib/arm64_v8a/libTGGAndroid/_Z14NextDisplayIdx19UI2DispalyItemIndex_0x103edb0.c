// 函数: _Z14NextDisplayIdx19UI2DispalyItemIndex
// 地址: 0x103edb0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x10 = sx.q(*(gUI2Editor + 0x6000))

if (arg1 + 1 s< x10.d)
    int64_t x9_1 = sx.q(arg1 + 1)
    void* x11_2 = gUI2Editor + muls.dp.d(arg1 + 1, 0x18) + 0x10
    
    do
        if (*(x11_2 - 4) s> arg1 && *x11_2 != 2)
            return *(gUI2Editor + x9_1 * 0x18)
        
        x9_1 += 1
        x11_2 += 0x18
    while (x9_1 s< x10)

return *(gUI2Editor + sx.q(arg1) * 0x18)
