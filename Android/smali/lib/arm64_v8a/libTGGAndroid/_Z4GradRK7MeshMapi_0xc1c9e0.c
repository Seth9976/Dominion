// 函数: _Z4GradRK7MeshMapi
// 地址: 0xc1c9e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x10 = arg1 + (sx.q(*(arg1 + (sx.q(arg2) << 2) + 0xeffc0)) << 2)
int32_t i = *(x10 + 0xfffc0)
int128_t v0
v0.q = *V20
int128_t v1

if (i == 0xffffffff)
    v1.d = 0f
else
    void* x12_1 = arg1 + muls.dp.d(arg2, 0xc)
    v1.q = *x12_1
    float v2 = *(x12_1 + 8)
    int64_t x8_2 = 0
    
    do
        void* x12_2 = arg1 + muls.dp.d(i, 0xc)
        int128_t v4
        v4.d = *(x12_2 + 8)
        int128_t v5
        v5.q = *x12_2
        i = *(x10 + 0xfffc4 + (x8_2 << 2))
        x8_2 += 1
        v4.d = v4.d f- v2
        int128_t v5_1 = vsub_f32(v5, v1)
        v4.d = v5_1.d f* v4.d
        v4:4.d = v5_1:4.d f* v4.d
        v5 = vmul_f32(v5_1, v5_1, 0)
        v5.d = v5.d f+ v5:4.d
        v5.d = fconvert.s(1f) f/ v5.d
        v4.d = v4.d f* v5.d
        v4:4.d = v4:4.d f* v5.d
        v0 = vadd_f32(v0, v4)
    while (i != 0xffffffff)
    
    v1.d = float.s(x8_2.d)

v1.d = fconvert.s(1f) f/ v1.d
v0.d = v0.d f* v1.d
v0:4.d = v0:4.d f* v1.d
v1.d = v0:4.d
