// 函数: _Z18UI2ToggleSelection9UI2Handle
// 地址: 0x10327cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x12 = zx.q(arg1.d) & 0xffff
uint64_t i_3 = zx.q(*(gUI2Editor + 0x704c))
int64_t x10 = *gUI2
int64_t x9 = sx.q(i_3.d)

if (i_3.d s>= 1)
    int64_t (* x13_2)() = gUI2Editor + 0x604c
    uint64_t i
    
    do
        if (*x13_2 == *(x10 + x12 * 0x19a8 + 0x1690))
            *(gUI2Editor + 0x704c) = (x9 - 1).d
            *x13_2 = *(gUI2Editor + ((x9 - 1) << 2) + 0x604c)
            return 
        
        i = i_3
        i_3 -= 1
        x13_2 += 4
    while (i != 1)

void* x10_1 = x10 + x12 * 0x19a8
int32_t x11 = *(x10_1 + 0x1690)
*(gUI2Editor + 0x704c) = x9.d + 1
*(gUI2Editor + (x9 << 2) + 0x604c) = x11
uint64_t i_2 = zx.q(*(gUI2Editor + 0x6000))
int64_t (* const x8_1)()
int64_t (* const x11_1)()

if (i_2.d s>= 1)
    x8_1 = gUI2Editor
    x11_1 = gUI2Editor
    uint64_t i_1
    
    do
        if (*x11_1 == x10_1)
            goto label_10328a4
        
        i_1 = i_2
        i_2 -= 1
        x11_1 += 0x18
    while (i_1 != 1)

pthread_kill(pthread_self(), 6)
x8_1, x11_1 = XNoReturn()
label_10328a4:
*(x8_1 + 0x7050) = *(x11_1 + 0xc)
memcpy(x8_1 + sx.q(*(x8_1 + 0x88060)) * 0x1020 + 0x6040, x8_1 + 0x6048, 0x1018)
return UI2EditorSyncSelection(zx.q(arg1.d)) __tailcall
