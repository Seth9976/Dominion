// 函数: _Z10ApplyNoiseR9RandomPCGRK21HeightmapPatternNoiseP4Vec3i
// 地址: 0xc15a4c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v15
int64_t var_90 = v15
int128_t entry_v14
int64_t var_88 = entry_v14.q
int64_t v13
int64_t var_80 = v13
int128_t entry_v12
int64_t var_78 = entry_v12.q
int64_t v11
int64_t var_70 = v11
int128_t entry_v10
int64_t var_68 = entry_v10.q
int64_t v9
int64_t var_60 = v9
int64_t v8
int64_t var_58 = v8
void var_4090
SimplexNoise2::Init(&var_4090)
void var_3090
SimplexNoise2::Init(&var_3090)
void var_2090
SimplexNoise2::Init(&var_2090)
void var_1090
int64_t result = SimplexNoise2::Init(&var_1090)

if (arg4 s>= 1)
    uint64_t i_1 = zx.q(arg4)
    void* __offset(Vec3, 0x8) x23_1 = arg3 + 8
    v8.d = 0f
    v9.d = fconvert.s(0.5f)
    entry_v10.d = fconvert.s(4f)
    entry_v10:4.d = fconvert.s(4f)
    v11.d = fconvert.s(0.25f)
    entry_v12.d = 0x41000000
    entry_v12:4.d = 0x41000000
    v13.d = fconvert.s(0.125f)
    uint64_t i
    
    do
        int64_t v0_1 = *(x23_1 - 8)
        int32_t v1_1 = *(arg2 + 4)
        entry_v14.d = v0_1.d f* v1_1
        entry_v14:4.d = v0_1:4.d f* v1_1
        int64_t var_48_1 = entry_v14.q
        v15.d = SimplexNoise2::Sample(&var_4090) f+ v8.d
        double var_48_2 = vadd_f32(entry_v14, entry_v14)
        v15.d = v15.d f+ SimplexNoise2::Sample(&var_3090) f* v9.d
        double var_48_3 = vmul_f32(entry_v14, entry_v10, 0)
        float v0_5 = SimplexNoise2::Sample(&var_2090) f* v11.d
        double v1_3 = vmul_f32(entry_v14, entry_v12, 0)
        entry_v14.d = v15.d f+ v0_5
        double var_48_4 = v1_3
        result, v0_1 = SimplexNoise2::Sample(&var_1090)
        v0_1.d = v0_1.d f* v13.d
        v0_1.d = entry_v14.d f+ v0_1.d
        v0_1.d = v0_1.d f* *arg2
        v0_1.d = *x23_1 f+ v0_1.d
        i = i_1
        i_1 -= 1
        *x23_1 = v0_1.d
        x23_1 += 0xc
    while (i != 1)

entry_v10.q = var_68
entry_v12.q = var_78
entry_v14.q = var_88
return result
