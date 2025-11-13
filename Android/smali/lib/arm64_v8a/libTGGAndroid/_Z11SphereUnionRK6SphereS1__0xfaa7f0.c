// 函数: _Z11SphereUnionRK6SphereS1_
// 地址: 0xfaa7f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v6
v6.q = *(arg2 + 4)
int128_t v1
v1.q = *(arg1 + 4)
int128_t v16
v16.d = *(arg2 + 0xc)
float v3 = *(arg1 + 0xc)
int128_t v2
v2.d = *arg2
int128_t v5 = vsub_f32(v6, v1)
double v0 = vmul_f32(v5, v5, 0)
float v4 = v16.d f- v3
float v17 = v0.d f+ v0:4.d
v0.d = *arg1
float v7 = sqrt(v17 + v4 * v4)

if (not(v0.d f>= v2.d f+ v7))
    if (v2.d f>= v0.d f+ v7)
        v2.d = v6.q:4.d
        return 
    
    int128_t v1_1 = vadd_f32(v6, v1)
    v6.d = v2.d f- v0.d
    v16.d = fconvert.s(1f)
    v5.d = v5.d f* v6.d
    v5:4.d = v5:4.d f* v6.d
    v16.d = v16.d f/ v7
    v0.d = v0.d f+ v2.d
    v5.d = v5.d f* v16.d
    v5:4.d = v5:4.d f* v16.d
    v2.d = 0x3f000000
    v2:4.d = 0x3f000000
    v6.d = fconvert.s(0.5f)
    v0.d = v0.d f+ v7
    v1 = vmul_f32(vadd_f32(v1_1, v5), v2, 0)
    v0.d = v0.d f* v6.d

v2.d = v1:4.d
