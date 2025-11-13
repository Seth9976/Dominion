// 函数: _Z28UI2ClearChildrenOutsideRange9UI2Handleii
// 地址: 0x10315a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x11 = zx.q(arg1.d) & 0xffff
int64_t x10 = *gUI2
void* x12 = x10 + mulu.dp.d(x11.d, 0x19a8)
int32_t x8 = *(x12 + 0x1970)

if (x8 s<= arg3 - arg2 || x8 == 0)
    return 

int32_t x9_1 = 0
uint64_t x22_1 = 0
int64_t x25_1 = x10 + x11 * 0x19a8

while (true)
    void* x12_1 = x25_1 + (x22_1 << 0x20 s>> 0x1e)
    int32_t x11_2 = *(x12_1 + 0x1870)
    int32_t x10_2 = *(x10 + zx.q(x11_2.w) * 0x19a8 + 0x1658)
    
    if (x10_2 s< arg2 || x10_2 s>= arg3)
        int32_t var_44 = x11_2
        memmove(x12_1 + 0x1870, x12_1 + 0x1874, zx.q(x8 + not.d(x9_1)) << 0x20 s>> 0x1e)
        x22_1 = zx.q(x22_1.d - 1)
        *(x12 + 0x1970) -= 1
        UI2Free(&var_44)
        x8 = *(x12 + 0x1970)
    
    x9_1 = x22_1.d + 1
    
    if (x8 == x9_1)
        break
    
    x10 = *gUI2
    x22_1 = zx.q(x9_1)
