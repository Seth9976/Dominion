// 函数: _Z9DrawOceanRK7MeshMapRK11SpriteColorP6XAssetS6_
// 地址: 0xc1f498
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t entry_v9
int64_t var_70 = entry_v9.q
int64_t v8
int64_t var_68 = v8
void* __offset(MeshMap, 0xeffbc) x23 = arg1 + 0xeffbc
int32_t x8 = *x23

if (x8 s>= 1)
    MeshMap const& x21_1 = arg1
    int64_t i = 0
    v8.d = fconvert.s(0.5f)
    void* __offset(MeshMap, 0x8ffd8) x28_1 = arg1 + 0x8ffd8
    entry_v9.d = 0x44800000
    entry_v9:4.d = 0x44800000
    
    do
        int64_t x9_1 = *(x28_1 - 4)
        int64_t x10_1 = *x28_1
        int64_t x11_1 = sx.q(*(x28_1 + 4))
        int128_t v0
        v0.d = *(x21_1 + x9_1 * 0xc + 8)
        int128_t v1
        v1.d = *(x21_1 + x10_1 * 0xc + 8)
        int128_t v2
        v2.d = *(x21_1 + x11_1 * 0xc + 8)
        v0.d f- 0f
        int32_t x13_2
        
        x13_2 = v0.d f< 0f ? 2 : 1
        
        int32_t x12_4
        
        if (v1.d f< 0f)
            x12_4 = x13_2
        else
            x12_4 = v0.d f< 0f ? 1 : 0
        
        int32_t x13_3
        
        x13_3 = v2.d f< 0f ? -1 : 0
        
        if (x12_4 != x13_3)
            v0.q = *(x21_1 + x9_1 * 0xc)
            v1.q = *(x21_1 + x10_1 * 0xc)
            v2.q = *(x21_1 + x11_1 * 0xc)
            float var_90 = v8.d f* v0.d
            *(&var_90 | 4) = v0:4.d
            float var_88_1 = v8.d f* v1.d
            float v3 = v8.d f* v2.d
            int32_t var_84_1 = v1:4.d
            float var_80_1 = v3
            int32_t var_7c_1 = v2:4.d
            float var_78_1 = v3
            int128_t v3_1 = vmul_f32(v2, entry_v9, 0)
            double v0_1 = vmul_f32(v0, entry_v9, 0)
            double v1_1 = vmul_f32(v1, entry_v9, 0)
            v3_1:8.q = v3_1.q
            int32_t var_74_1 = v2:4.d
            double var_b0 = v0_1
            double var_a8_1 = v1_1
            int128_t var_a0_1 = v3_1
            arg1, v0, v1, v2 = DrawQuadParams(arg3, &var_b0, &var_90, arg2, false, arg4)
            x8 = *x23
        
        i += 1
        x28_1 += 0xc
    while (i s< sx.q(x8))

entry_v9.q = var_70
