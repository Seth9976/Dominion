// 函数: _ZN5Botan8EMSA_Raw6verifyERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEES7_m
// 地址: 0xd64748
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x9 = *arg3
int64_t x13 = *(arg3 + 8)
int64_t x8 = *(arg1 + 8)
void* x11 = x13 - x9

if (x8 != 0 && x11 != x8)
    return 0

char* x8_1 = *arg2
int64_t x10 = *(arg2 + 8)
void* x12 = x10 - x8_1

if (x11 == x12)
    if (x8_1 == x10)
        return 1
    
    uint32_t x11_1
    uint32_t x12_1
    
    do
        x11_1 = zx.d(*x8_1)
        x12_1 = zx.d(*x9)
        
        if (x11_1 != x12_1)
            break
        
        x8_1 = &x8_1[1]
        x9 = &x9[1]
    while (x10 != x8_1)
    
    return zx.q(x11_1 == x12_1 ? 1 : 0)

if (x11 u< x12)
    return 0

void* x14 = x11 - x12
uint32_t x14_1

if (x11 == x12)
    x14_1 = 1
else
    void* i_6
    
    if (x14 u>= 0x20)
        i_6 = x14 & 0xffffffffffffffe0
        void* x16_1 = &x9[0x10]
        int128_t v0
        v0.b = 1
        v0:1.b = 1
        v0:2.b = 1
        v0:3.b = 1
        v0:4.b = 1
        v0:5.b = 1
        v0:6.b = 1
        v0:7.b = 1
        v0:8.b = 1
        v0:9.b = 1
        v0:0xa.b = 1
        v0:0xb.b = 1
        v0:0xc.b = 1
        v0:0xd.b = 1
        v0:0xe.b = 1
        v0:0xf.b = 1
        void* i_5 = i_6
        int128_t v1
        v1.b = 1
        v1:1.b = 1
        v1:2.b = 1
        v1:3.b = 1
        v1:4.b = 1
        v1:5.b = 1
        v1:6.b = 1
        v1:7.b = 1
        v1:8.b = 1
        v1:9.b = 1
        v1:0xa.b = 1
        v1:0xb.b = 1
        v1:0xc.b = 1
        v1:0xd.b = 1
        v1:0xe.b = 1
        v1:0xf.b = 1
        void* i
        
        do
            uint128_t v2 = *(x16_1 - 0x10)
            uint128_t v3 = *x16_1
            i = i_5
            i_5 -= 0x20
            x16_1 += 0x20
            v0 &= vceqzq_u8(v2, 0)
            v1 &= vceqzq_u8(v3, 0)
        while (i != 0x20)
        uint128_t v0_1 = v1 & v0
        uint128_t v0_2 = v0_1 & vdupq_laneq_s64(v0_1, 1)
        uint128_t v0_3 = v0_2 & vdupq_laneq_s32(v0_2, 1)
        uint128_t v0_4 = v0_3 & vdupq_laneq_s16(v0_3, 1)
        x14_1 = zx.d(v0_4.b) & zx.d(vdupq_laneq_s8(v0_4, 1))
        
        if (x14 != i_6)
            goto label_d64864
    else
        i_6 = nullptr
        x14_1 = 1
    label_d64864:
        int64_t i_4 = i_6 + x10 + x9 - x8_1 - x13
        void* x15_1 = x9 + i_6
        int64_t i_1
        
        do
            uint32_t x16_5 = zx.d(*x15_1)
            x15_1 += 1
            i_1 = i_4
            i_4 += 1
            x14_1 &= x16_5 == 0 ? 1 : 0
        while (i_1 u< -1)

char var_4 = 0

if (x12 != 0)
    void* i_3 = x8_1 - x10
    void* i_2
    
    do
        char x11_2 = *x8_1
        x8_1 = &x8_1[1]
        char x12_2 = *(x9 + x11 + i_3)
        i_2 = i_3
        i_3 += 1
        var_4 |= x12_2 ^ x11_2
    while (i_2 u< -1)

uint32_t x8_2 = zx.d(var_4)
return zx.q(x14_1) & zx.q(sx.d((x8_2.b - 1) & (not.d(x8_2)).b) s< 0 ? 1 : 0)
