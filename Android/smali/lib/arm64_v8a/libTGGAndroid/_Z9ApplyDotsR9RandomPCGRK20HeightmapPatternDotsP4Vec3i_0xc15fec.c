// 函数: _Z9ApplyDotsR9RandomPCGRK20HeightmapPatternDotsP4Vec3i
// 地址: 0xc15fec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t entry_v10
int64_t var_80 = entry_v10.q
int128_t entry_v9
int64_t var_70 = entry_v9.q
int128_t entry_v8
int64_t var_68 = entry_v8.q
uint64_t x8 = zx.q(*arg2)
int32_t var_880[0x80]
int32_t var_680[0x80]
int64_t var_480[0x80]
int128_t v0

if (x8.d s>= 1)
    entry_v8.q = 0x3f7d70a43ffeb852
    RandomPCG& x22_1 = arg1
    int64_t x23_1 = 0
    entry_v9.d = 0x3ba3d70a
    entry_v9:4.d = 0x3ba3d70a
    
    do
        int64_t var_890_1 = RandomUnit(x22_1)
        int32_t v0_2
        int128_t v1_1
        v0_2, v1_1 = RandomUnit(x22_1)
        v1_1:4.d = v0_2
        var_480[x23_1] = vadd_f32(vmul_f32(v1_1, entry_v8, 0), entry_v9)
        double v0_4
        v0_4.d = *(arg2 + 4)
        v1_1.d = *(arg2 + 8)
        var_680[x23_1] = RandomRange(x22_1, v0_4.d, v1_1.d)
        arg1, v0 = RandomRange(x22_1, *(arg2 + 0xc), *(arg2 + 0x10))
        
        if (v0.d f< 0f)
            v0.d = fneg(sqrt(fneg(v0.d)))
        else
            v0.d = sqrt(v0.d)
        
        var_880[x23_1] = v0.d
        x8 = sx.q(*arg2)
        x23_1 += 1
    while (x23_1 s< x8)

if (arg4 s>= 1)
    int64_t i = 0
    entry_v8.d = fconvert.s(1f)
    
    do
        if (x8.d s>= 1)
            int64_t x8_1 = i * 0xc
            entry_v9.d = *(arg3 + x8_1 + 8)
            entry_v10.q = *(arg3 + x8_1)
            int64_t x28_1 = 0
            
            do
                v0.q = var_480[x28_1]
                float v1 = var_680[x28_1]
                float v2 = *(arg2 + 0x14)
                int128_t v0_6 = vsub_f32(v0, entry_v10)
                double v0_7 = vmul_f32(v0_6, v0_6, 0)
                v0_7.d = v0_7.d f+ v0_7:4.d
                v0_7.d = fneg(v0_7.d)
                v0_7.d = v0_7.d f/ (v1 * v1)
                v0_7.d = (v2 f+ entry_v8.d) f* v0_7.d
                v0, arg1 = expf(v0_7.d)
                x28_1 += 1
                v0.d = var_880[x28_1] f* v0.d
                entry_v9.d = entry_v9.d f+ v0.d
                *(arg3 + x8_1 + 8) = entry_v9.d
                x8 = sx.q(*arg2)
            while (x28_1 s< x8)
        
        i += 1
    while (i != zx.q(arg4))

entry_v9.q = var_70
entry_v8.q = var_68
entry_v10.q = var_80
