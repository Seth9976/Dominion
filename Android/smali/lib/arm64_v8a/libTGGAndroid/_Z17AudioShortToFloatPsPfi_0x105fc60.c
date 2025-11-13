// 函数: _Z17AudioShortToFloatPsPfi
// 地址: 0x105fc60
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 s< 1)
    return 

uint64_t x8_1 = zx.q(arg3)
int64_t i_4
float128 v0
uint128_t v1

if (arg3 u< 8 || (&arg1[x8_1] u> arg2 && &arg2[x8_1] u> arg1))
    i_4 = 0
label_105fc90:
    void* x10_1 = &arg2[i_4]
    void* x11_1 = &arg1[i_4]
    int64_t i_2 = x8_1 - i_4
    int64_t i
    
    do
        int32_t x12_1 = sx.d(*x11_1)
        x11_1 += 2
        v0.d = float.s(0x38000000)
        i = i_2
        i_2 -= 1
        v1.d = float.s(x12_1)
        v0.d = v1.d f* v0.d
        *x10_1 = v0.d
        x10_1 += 4
    while (i != 1)
    return 

i_4 = x8_1 & 0xfffffff8
void* x10_2 = &arg1[4]
void* x11_2 = &arg2[4]
v0.d = 0x38000000
v0:4.d = 0x38000000
v0:8.d = 0x38000000
v0:0xc.d = 0x38000000
int64_t i_3 = i_4
int64_t i_1

do
    v1.q = *(x10_2 - 8)
    uint128_t v2
    v2.q = *x10_2
    x10_2 += 0x10
    i_1 = i_3
    i_3 -= 8
    v1.d = sx.d(v1.w)
    v1:4.d = sx.d(v1:2.w)
    v1:8.d = sx.d(v1:4.w)
    v1:0xc.d = sx.d(v1:6.w)
    v2.d = sx.d(v2.w)
    v2:4.d = sx.d(v2:2.w)
    v2:8.d = sx.d(v2:4.w)
    v2:0xc.d = sx.d(v2:6.w)
    float128 v1_1 = vcvtq_f32_s32(v1)
    float128 v2_1 = vcvtq_f32_s32(v2)
    v1 = vmulq_f32(v1_1, v0, 0)
    v2 = vmulq_f32(v2_1, v0, 0)
    *(x11_2 - 0x10) = v1
    *x11_2 = v2
    x11_2 += 0x20
while (i_1 != 8)

if (i_4 != x8_1)
    goto label_105fc90
