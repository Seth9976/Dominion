// 函数: _Z14PrevDisplayIdx19UI2DispalyItemIndex
// 地址: 0x103ee2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x10 = zx.q(*(gUI2Editor + 0x6000))
uint64_t x9

if (x10.d s< 1)
    x9 = 0
label_103ee8c:
    uint64_t x10_1 = zx.q(x9.d)
    void* x9_4 = gUI2Editor + mulu.dp.d(x9.d, 0x18) + 0x10
    bool cond:1_1
    
    do
        if (*(x9_4 - 4) s< arg1 && *x9_4 != 2)
            return *(gUI2Editor + (x10_1 & 0xffffffff) * 0x18)
        
        cond:1_1 = x10_1 s<= 0
        x10_1 -= 1
        x9_4 -= 0x18
    while (not(cond:1_1))
else
    x9 = 0
    int64_t (* x11_1)() = gUI2Editor + 0xc
    
    while (*x11_1 != arg1)
        x9 += 1
        x11_1 += 0x18
        
        if (x10 == x9)
            x9 = zx.q(x10.d)
            break
    
    if ((x9.d & 0x80000000) == 0)
        goto label_103ee8c
return *(gUI2Editor + sx.q(arg1) * 0x18)
