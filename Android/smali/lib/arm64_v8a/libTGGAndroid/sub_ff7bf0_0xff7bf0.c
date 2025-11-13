// 函数: sub_ff7bf0
// 地址: 0xff7bf0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg4 s< 1)
    return 

uint64_t x8_1 = zx.q(arg4)
int64_t i_6 = 0

if (arg4 u< 8)
label_ff7d00:
    void* x10_6 = arg1 + i_6
    void* x11_5 = arg3 + i_6
    char* x12_5 = arg2 + i_6
    int64_t i_3 = x8_1 - i_6
    int64_t i
    
    do
        uint32_t x9_1 = zx.d(*x12_5)
        x12_5 = &x12_5[1]
        uint32_t x13_3 = zx.d(*x11_5)
        x11_5 += 1
        i = i_3
        i_3 -= 1
        *x10_6 = ((x13_3 + x9_1 * 3 + 2) u>> 2).b
        x10_6 += 1
    while (i != 1)
    return 

void* x11_1 = arg1 + x8_1

if (((arg2 + x8_1 u> arg1 ? 1 : 0) & (x11_1 u> arg2 ? 1 : 0) & 1) != 0
        || ((arg3 + x8_1 u> arg1 ? 1 : 0) & (x11_1 u> arg3 ? 1 : 0) & 1) != 0)
    goto label_ff7d00

int128_t v0
int128_t v1
uint128_t v2
uint128_t v3

if (arg4 u>= 0x10)
    i_6 = x8_1 & 0xfffffff0
    v0.b = 3
    v0:1.b = 3
    v0:2.b = 3
    v0:3.b = 3
    v0:4.b = 3
    v0:5.b = 3
    v0:6.b = 3
    v0:7.b = 3
    v1.w = 2
    v1:2.w = 2
    v1:4.w = 2
    v1:6.w = 2
    v1:8.w = 2
    v1:0xa.w = 2
    v1:0xc.w = 2
    v1:0xe.w = 2
    int64_t i_4 = i_6
    void* x11_4 = arg1
    void* x12_4 = arg3
    void* x13_2 = arg2
    int64_t i_1
    
    do
        v2 = *x13_2
        x13_2 += 0x10
        v3 = *x12_4
        x12_4 += 0x10
        i_1 = i_4
        i_4 -= 0x10
        uint128_t v5
        v5.w = zx.w(v3.b)
        v5:2.w = zx.w(v3:1.b)
        v5:4.w = zx.w(v3:2.b)
        v5:6.w = zx.w(v3:3.b)
        v5:8.w = zx.w(v3:4.b)
        v5:0xa.w = zx.w(v3:5.b)
        v5:0xc.w = zx.w(v3:6.b)
        v5:0xe.w = zx.w(v3:7.b)
        uint128_t v4_2 = mulu.dp.o(vextq_s8(v2, v2, 8), v0)
        v5 = vmlal_u8(v5, v2, v0)
        v2 = vaddw_high_u8(v4_2, v3) + v1
        vshrn_n_u16(v5 + v1, 2)
        *x11_4 = vshrn_high_n_u16(v2, 2)
        x11_4 += 0x10
    while (i_1 != 0x10)
    
    if (i_6 != x8_1)
        if ((x8_1.d & 8) != 0)
            goto label_ff7c50
        
        goto label_ff7d00
else
    i_6 = 0
label_ff7c50:
    int64_t i_7 = i_6
    i_6 = x8_1 & 0xfffffff8
    int64_t* x10_5 = arg2 + i_7
    int64_t* x11_3 = arg3 + i_7
    int64_t* x12_3 = arg1 + i_7
    v0.b = 3
    v0:1.b = 3
    v0:2.b = 3
    v0:3.b = 3
    v0:4.b = 3
    v0:5.b = 3
    v0:6.b = 3
    v0:7.b = 3
    int64_t i_5 = i_7 - i_6
    v1.w = 2
    v1:2.w = 2
    v1:4.w = 2
    v1:6.w = 2
    v1:8.w = 2
    v1:0xa.w = 2
    v1:0xc.w = 2
    v1:0xe.w = 2
    int64_t i_2
    
    do
        v2.q = *x10_5
        x10_5 = &x10_5[1]
        v3.q = *x11_3
        x11_3 = &x11_3[1]
        i_2 = i_5
        i_5 += 8
        v3.w = zx.w(v3.b)
        v3:2.w = zx.w(v3:1.b)
        v3:4.w = zx.w(v3:2.b)
        v3:6.w = zx.w(v3:3.b)
        v3:8.w = zx.w(v3:4.b)
        v3:0xa.w = zx.w(v3:5.b)
        v3:0xc.w = zx.w(v3:6.b)
        v3:0xe.w = zx.w(v3:7.b)
        *x12_3 = vshrn_n_u16(vmlal_u8(v3, v2, v0) + v1, 2).q
        x12_3 = &x12_3[1]
    while (i_2 != -8)
    
    if (i_6 != x8_1)
        goto label_ff7d00
