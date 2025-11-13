// 函数: _ZNKSt6__ndk15ctypeIcE8do_widenEPKcS3_Pc
// 地址: 0x10cf154
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
char const* x0 = arg2

if (arg2 == arg3)
    return x0

int64_t x8_1 = arg3 - x0
void* entry_x3

if (x8_1 u< 8 || (entry_x3 u< arg3 && entry_x3 + x8_1 u> x0))
    goto label_10cf214

int64_t i_4
int128_t v0

if (x8_1 u>= 0x20)
    i_4 = x8_1 & 0xffffffffffffffe0
    void* x10_1 = &x0[0x10]
    void* x11_1 = entry_x3 + 0x10
    int64_t i_3 = i_4
    int64_t i
    
    do
        v0 = *(x10_1 - 0x10)
        int128_t v1 = *x10_1
        x10_1 += 0x20
        i = i_3
        i_3 -= 0x20
        *(x11_1 - 0x10) = v0
        *x11_1 = v1
        x11_1 += 0x20
    while (i != 0x20)
    
    if (x8_1 != i_4)
        if ((x8_1 & 0x18) != 0)
            goto label_10cf1cc
        
        x0 = &x0[i_4]
        entry_x3 += i_4
    label_10cf214:
        
        do
            char const x8_2 = *x0
            x0 = &x0[1]
            *entry_x3 = x8_2
            entry_x3 += 1
        while (arg3 != x0)
else
    i_4 = 0
label_10cf1cc:
    int64_t x10_2 = x8_1 & 0xfffffffffffffff8
    void* x11_2 = &x0[i_4]
    int64_t* x12_1 = entry_x3 + i_4
    entry_x3 += x10_2
    x0 = &x0[x10_2]
    int64_t i_2 = i_4 - x10_2
    int64_t i_1
    
    do
        v0.q = *x11_2
        x11_2 += 8
        i_1 = i_2
        i_2 += 8
        *x12_1 = v0.q
        x12_1 = &x12_1[1]
    while (i_1 != -8)
    
    if (x8_1 != x10_2)
        goto label_10cf214
return arg3
