// 函数: _Z26InvalidateSubmittedActionsv
// 地址: 0xb208e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(gDomClient + 0x21468))

if (x8.d s< 1)
    return 

int64_t i_4

if (x8.d != 1)
    i_4 = x8 & 0xfffffffe
    int64_t (* x11_1)() = gDomClient + 0x8e28
    int64_t (* x12_1)() = gDomClient + 0x40e0
    int64_t i_3 = i_4
    int64_t i
    
    do
        *x12_1 = 0
        *x11_1 = 0
        x11_1 += 0x9a90
        i = i_3
        i_3 -= 2
        x12_1 += 0x9a90
    while (i != 2)
    
    if (i_4 != x8)
        goto label_b2095c
else
    i_4 = 0
label_b2095c:
    int32_t* x9_2 = gDomClient + i_4 * 0x4d48 + 0x40e0
    int64_t i_2 = x8 - i_4
    int64_t i_1
    
    do
        *x9_2 = 0
        i_1 = i_2
        i_2 -= 1
        x9_2 = &x9_2[0x1352]
    while (i_1 != 1)
