// 函数: _Z14GeneratePointsR9RandomPCGP4Vec2
// 地址: 0xc15264
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v8
v8.q = 0x3f7d70a43ffeb852
int64_t i = 0
int128_t v9
v9.d = 0x3ba3d70a
v9:4.d = 0x3ba3d70a
int64_t var_90_1

do
    var_90_1 = RandomUnit(arg1)
    int32_t v0_2
    int128_t v1_1
    v0_2, v1_1 = RandomUnit(arg1)
    v1_1:4.d = v0_2
    *(arg2 + i) = vadd_f32(vmul_f32(v1_1, v8, 0), v9)
    i += 8
while (i != 0x20000)

v9.d = 0x3ba3d70a
v9:4.d = 0x3ba3d70a
int128_t v0_5
int32_t x8_1

do
    sub_c1fe5c(arg2, arg2 + 0x20000)
    v0_5.d = *arg2
    x8_1 = 0
    int64_t i_4 = 0x3fff
    void* __offset(Vec2, 0x8) x25_1 = arg2 + 8
    int64_t i_1
    
    do
        float v1_2 = v0_5.d
        v0_5.d = *x25_1
        
        if (not(fabs(v1_2 f- v0_5.d) >= float.s(0x3a83126f))
                && not(fabs(*(x25_1 - 4) - *(x25_1 + 4)) >= float.s(0x3a83126f)))
            var_90_1 = RandomUnit(arg1)
            int32_t v0_7
            int128_t v1_3
            v0_7, v1_3 = RandomUnit(arg1)
            x8_1 = 1
            v1_3:4.d = v0_7
            v0_5 = vadd_f32(vmul_f32(v1_3, v8, 0), v9)
            *x25_1 = v0_5.q
        
        i_1 = i_4
        i_4 -= 1
        x25_1 += 8
    while (i_1 != 1)
while ((x8_1 & 1) != 0)
v0_5 = data_71ba40
int64_t* var_70 = nullptr
int32_t var_68 = 0
int32_t var_58 = 0
int64_t var_60 = 0
int128_t var_80 = v0_5
int128_t v1_4
int128_t v2_2
v1_4, v2_2 = jcv_diagram_generate_useralloc(0x4000, arg2, &var_80, 0, 0, 
    jcv_diagram_generate_useralloc+0x16fc, sub_c13c08, &var_70, v0_5, var_90_1)
uint64_t x8_2 = zx.q(var_68)
int64_t* x20_1 = var_70

if (x8_2.d s>= 1)
    int64_t x10_1 = x20_1[6]
    int64_t x9_1 = 0
    
    do
        int64_t* x12_4 = x10_1 + x9_1 * 0x14
        void** i_2 = *(x12_4 + 0xc)
        v1_4.q = *x12_4
        int32_t x12_1 = 1
        
        while (i_2 != 0)
            v2_2.q = i_2[3]
            i_2 = *i_2
            x12_1 += 1
            v1_4 = vadd_f32(v1_4, v2_2)
        
        v2_2.d = float.s(x12_1)
        int64_t x12_3 = sx.q(*(x10_1 + x9_1 * 0x14 + 8))
        v2_2.d = fconvert.s(1f) f/ v2_2.d
        x9_1 += 1
        v1_4.d = v1_4.d f* v2_2.d
        v1_4:4.d = v1_4:4.d f* v2_2.d
        *(arg2 + (x12_3 << 3)) = v1_4.q
    while (x9_1 != x8_2)

int64_t x19_1 = *(x20_1 + 0x9c)
void* i_3 = *(x20_1 + 0x4c)
int64_t x21_1 = *(x20_1 + 0xac)

for (; i_3 != 0; i_3 = *(x20_1 + 0x4c))
    *(x20_1 + 0x4c) = *(i_3 + 8)
    x21_1(x19_1)

return x21_1(x19_1, *x20_1)
