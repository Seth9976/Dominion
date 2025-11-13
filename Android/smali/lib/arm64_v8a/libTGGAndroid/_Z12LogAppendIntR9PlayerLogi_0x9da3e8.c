// 函数: _Z12LogAppendIntR9PlayerLogi
// 地址: 0x9da3e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x10)
int32_t x9 = *(arg1 + 8)
int64_t x21

if (x8 + 4 s<= x9)
    x21 = *arg1
else
    int32_t x0
    
    if (x9 s> 0x800)
        x0 = x9 << 1
    else
        x0 = 0x1000
    
    *(arg1 + 8) = x0
    int64_t x0_1 = XMalloc(x0)
    x21 = x0_1
    memmove(x0_1, *arg1, sx.q(*(arg1 + 0x10)))
    XFree(*arg1)
    x8 = *(arg1 + 0x10)
    *arg1 = x21

*(x21 + sx.q(x8)) = arg2
int32_t x8_3 = *(arg1 + 0x10) + 4
*(arg1 + 0xc) = x8_3
*(arg1 + 0x10) = x8_3
