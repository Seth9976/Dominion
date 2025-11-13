// 函数: _Z10ApplyRoundP4Vec3i
// 地址: 0xc15e70
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 s< 1)
    return 

uint64_t x8_1 = zx.q(arg2)
int64_t i_4
uint128_t v0
uint128_t v1
uint128_t v2

if (arg2 u> 4)
    int64_t x9_2
    
    if ((x8_1 & 3) == 0)
        x9_2 = 4
    else
        x9_2 = x8_1 & 3
    
    i_4 = x8_1 - x9_2
    void* x10_1 = arg1 + 0x20
    v0.d = 0x80000000
    v0:4.d = 0x80000000
    v0:8.d = 0x80000000
    v0:0xc.d = 0x80000000
    int64_t i_3 = i_4
    int64_t i
    
    do
        v1.d = *(x10_1 - 0x18)
        v2.d = *(x10_1 - 0x14)
        int128_t v3
        v3.d = *(x10_1 - 0x10)
        v1:4.d = *(x10_1 - 0xc)
        v2:4.d = *(x10_1 - 8)
        v3:4.d = *(x10_1 - 4)
        v1:8.d = *x10_1
        v2:8.d = *(x10_1 + 4)
        v3:8.d = *(x10_1 + 8)
        v1:0xc.d = *(x10_1 + 0xc)
        v2:0xc.d = *(x10_1 + 0x10)
        v3:0xc.d = *(x10_1 + 0x14)
        int32_t* x13_1 = x10_1 + 0xc
        i = i_3
        i_3 -= 4
        uint128_t v4_3 = vbslq_s8(v0, v1, vsqrtq_f32(vabsq_f32(v1)))
        *(x10_1 - 0x18) = v4_3.d
        *(x10_1 - 0xc) = v4_3:4.d
        *x10_1 = v4_3:8.d
        x10_1 += 0x30
        *x13_1 = v4_3:0xc.d
    while (i != 4)
else
    i_4 = 0

int64_t i_2 = x8_1 - i_4
int32_t* x9_4 = arg1 + i_4 * 0xc + 8
v0.d = 0x80000000
v0:4.d = 0x80000000
v0:8.d = 0x80000000
v0:0xc.d = 0x80000000
int64_t i_1

do
    v1.d = *x9_4
    i_1 = i_2
    i_2 -= 1
    v2.d = fabs(v1.d)
    v2.d = sqrt(v2.d)
    *x9_4 = vbslq_s8(v0, v1, v2).d
    x9_4 = &x9_4[3]
while (i_1 != 1)
