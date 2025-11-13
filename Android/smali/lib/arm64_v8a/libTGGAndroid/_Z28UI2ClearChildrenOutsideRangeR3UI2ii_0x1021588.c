// 函数: _Z28UI2ClearChildrenOutsideRangeR3UI2ii
// 地址: 0x1021588
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x1970)

if (x8 s<= arg3 - arg2 || x8 == 0)
    return 

int32_t x9_1 = 0
uint64_t x23_1 = 0

do
    void* x11_1 = arg1 + (x23_1 << 0x20 s>> 0x1e)
    int32_t x10_2 = *(x11_1 + 0x1870)
    int32_t x12_3 = *(*gUI2 + zx.q(x10_2.w) * 0x19a8 + 0x1658)
    
    if (x12_3 s< arg2 || x12_3 s>= arg3)
        int32_t var_44 = x10_2
        memmove(x11_1 + 0x1870, x11_1 + 0x1874, zx.q(x8 + not.d(x9_1)) << 0x20 s>> 0x1e)
        x23_1 = zx.q(x23_1.d - 1)
        *(arg1 + 0x1970) -= 1
        UI2Free(&var_44)
        x8 = *(arg1 + 0x1970)
    
    x9_1 = x23_1.d + 1
    x23_1 = zx.q(x9_1)
while (x8 != x9_1)
