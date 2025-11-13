// 函数: _Z14DrawOceanLinesRK7MapDataP6XAsset
// 地址: 0xc1f340
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t entry_v8
int64_t var_50 = entry_v8.q
int128_t v0
v0.d = fconvert.s(1f)
int128_t v1
v1.d = 0f
int128_t v2
v2.d = 0f
int128_t v3
v3.d = 0f
int64_t result
int128_t v0_1
result, v0_1 = Draw3DGame1(arg1)
int32_t x8 = *(arg1 + 0xeffcc)

if (x8 s>= 1)
    int64_t i = 0
    void* __offset(MapData, 0x8ffe8) x25_1 = arg1 + 0x8ffe8
    entry_v8.d = 0x44800000
    entry_v8:4.d = 0x44800000
    
    do
        int64_t x9_1 = sx.q(*(x25_1 - 4))
        v0_1.d = *(arg1 + x9_1 * 0xc + 0x18)
        int64_t var_68[0x3]
        int32_t x9_2
        
        if (v0_1.d f<= 0f)
            v0_1.q = *(arg1 + x9_1 * 0xc + 0x10)
            x9_2 = 1
            var_68[0] = vmul_f32(v0_1, entry_v8, 0).q
        else
            x9_2 = 0
        
        int64_t x10_2 = sx.q(*x25_1)
        v0_1.d = *(arg1 + x10_2 * 0xc + 0x18)
        
        if (not(v0_1.d f> 0f))
            v0_1.q = *(arg1 + x10_2 * 0xc + 0x10)
            var_68[zx.q(x9_2)] = vmul_f32(v0_1, entry_v8, 0).q
            x9_2 += 1
        
        int64_t x10_5 = sx.q(*(x25_1 + 4))
        v0_1.d = *(arg1 + x10_5 * 0xc + 0x18)
        
        if (not(v0_1.d f> 0f))
            v0_1.q = *(arg1 + x10_5 * 0xc + 0x10)
            var_68[zx.q(x9_2)] = vmul_f32(v0_1, entry_v8, 0).q
            
            if (x9_2 == 2)
                result, v0_1 =
                    DrawTriMasked(&var_68, *TEXTURE_EFFECTS_CHART_CHART_LINES_OWNED, arg2)
                x8 = *(arg1 + 0xeffcc)
        
        i += 1
        x25_1 += 0xc
    while (i s< sx.q(x8))

entry_v8.q = var_50
return result
