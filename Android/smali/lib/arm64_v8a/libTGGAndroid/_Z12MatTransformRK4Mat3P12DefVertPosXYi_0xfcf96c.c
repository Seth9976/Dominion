// 函数: _Z12MatTransformRK4Mat3P12DefVertPosXYi
// 地址: 0xfcf96c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 s< 1)
    return 

uint64_t x8_1 = zx.q(arg3)
int64_t i_4
float128 v0
float128 v1
float128 v2
float128 v3
uint128_t v4
float128 v5

if (arg3 u< 4 || (arg1 + 0x15 u> arg2 && arg1 + 0x14 u< arg2 + (x8_1 << 3)))
    i_4 = 0
label_fcf9a4:
    void* x10_3 = arg2 + (i_4 << 3) + 4
    int64_t i_2 = x8_1 - i_4
    int64_t i
    
    do
        v0.d = *(x10_3 - 4)
        v5.d = *x10_3
        v1.d = *arg1
        v2.d = *(arg1 + 4)
        v3.d = *(arg1 + 8)
        v4.d = *(arg1 + 0xc)
        i = i_2
        i_2 -= 1
        v1.d = v1.d f* v0.d
        v0.d = v0.d f* v4.d
        v4.d = *(arg1 + 0x14)
        v2.d = v2.d f* v5.d
        v1.d = v1.d f+ v2.d
        v1.d = v3.d f+ v1.d
        v5.d = v5.d f* *(arg1 + 0x10)
        v0.d = v0.d f+ v5.d
        v0.d = v4.d f+ v0.d
        *(x10_3 - 4) = v1.d
        *x10_3 = v0.d
        x10_3 += 8
    while (i != 1)
    return 

i_4 = x8_1 & 0xfffffffc
int64_t i_3 = i_4
DefVertPosXY* x11_1 = arg2
int64_t i_1

do
    v0.q = *arg1
    v4.q = *(arg1 + 8)
    v1.d = *x11_1
    v2.d = *(x11_1 + 4)
    v1:4.d = *(x11_1 + 8)
    v2:4.d = *(x11_1 + 0xc)
    v1:8.d = *(x11_1 + 0x10)
    v2:8.d = *(x11_1 + 0x14)
    v1:0xc.d = *(x11_1 + 0x18)
    v2:0xc.d = *(x11_1 + 0x1c)
    v3.q = *(arg1 + 4)
    v5.q = *(arg1 + 0xc)
    int32_t v6 = (*(arg1 + 0x10)).d
    uint128_t v7
    v7.q = *(arg1 + 0x14)
    v0.d = v1.d f* v0.d
    v0:4.d = v1:4.d f* v0.d
    v0:8.d = v1:8.d f* v0.d
    v0:0xc.d = v1:0xc.d f* v0.d
    v3.d = v2.d f* v3.d
    v3:4.d = v2:4.d f* v3.d
    v3:8.d = v2:8.d f* v3.d
    v3:0xc.d = v2:0xc.d f* v3.d
    v5.d = v1.d f* v5.d
    v5:4.d = v1:4.d f* v5.d
    v5:8.d = v1:8.d f* v5.d
    v5:0xc.d = v1:0xc.d f* v5.d
    v1.d = v2.d f* v6
    v1:4.d = v2:4.d f* v6
    v1:8.d = v2:8.d f* v6
    v1:0xc.d = v2:0xc.d f* v6
    uint128_t v2_1 = vdupq_laneq_s32(v4, 0)
    v0 = vaddq_f32(v0, v3)
    v4 = vdupq_laneq_s32(v7, 0)
    v1 = vaddq_f32(v5, v1)
    v2 = vaddq_f32(v2_1, v0)
    v3 = vaddq_f32(v4, v1)
    i_1 = i_3
    i_3 -= 4
    *x11_1 = v2.d
    *(x11_1 + 4) = v3.d
    *(x11_1 + 8) = v2:4.d
    *(x11_1 + 0xc) = v3:4.d
    *(x11_1 + 0x10) = v2:8.d
    *(x11_1 + 0x14) = v3:8.d
    *(x11_1 + 0x18) = v2:0xc.d
    *(x11_1 + 0x1c) = v3:0xc.d
    x11_1 += 0x20
while (i_1 != 4)

if (i_4 != x8_1)
    goto label_fcf9a4
