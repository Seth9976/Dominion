// 函数: _Z11DrawTerrainRK7MapDataP6XAsset
// 地址: 0xc1d160
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t entry_v10
int64_t var_80 = entry_v10.q
int128_t entry_v9
int64_t var_70 = entry_v9.q
int128_t entry_v8
int64_t var_68 = entry_v8.q
void* __offset(MapData, 0x175fc8) x25 = arg1 + 0x175fc8

if (*x25 s>= 1)
    int128_t var_b0_1 = data_71ae80
    MapData const& x19_1 = arg1
    int64_t i = 0
    entry_v8.d = 0x3f000000
    entry_v8:4.d = 0x3f000000
    void* __offset(MapData, 0x16ffcc) x27_1 = arg1 + 0x16ffcc
    entry_v9.d = 0x44800000
    entry_v9:4.d = 0x44800000
    
    do
        int64_t x9_2 = &data_1156890 + *x27_1 * 0x1a0 + *(x27_1 + 4) * 0x18
        XAsset** fp_1 = *(x9_2 - 0x188)
        int128_t v0
        v0.d = *(x9_2 - 0x178)
        XAsset* x24_1 = *fp_1
        entry_v10.q = *(x19_1 + sx.q(*(x27_1 - 4)) * 0xc + 0x10)
        int64_t*** x8_7 = *x24_1
        int128_t v1
        v1.d = float.s(0x3f11745d)
        int128_t v5
        
        if (v0.d f!= 0f)
            v5.d = v0.d f* v1.d
        else
            v5.d = v1.d
        
        int128_t v4
        
        if (x8_7 == 0)
            int128_t var_c0_1 = v5
            
            if (*(x24_1 + 8) == 0x15)
                XString::GetString()
                XTrace("Unpreloaded sound %s")
            
            v1, v4, v5 = AssetCatalogLoadAsset(x24_1, false, true)
            x8_7 = *x24_1
            v5 = var_c0_1
        
        int64_t** x8_9 = *x8_7
        float128 v0_1
        v0_1:8.q = vmul_f32(entry_v10, entry_v9, 0).q
        int64_t* x8_10 = *x8_9
        XAsset* x4_1 = *MATERIAL_EFFECTS_CHART_MASKED_ZREAD
        XAsset** x21_2 = *(x9_2 - 0x180)
        v1.q = *x8_10
        float v2 = *(x8_10 + 0xc) f* x8_10[1].d
        int128_t v1_1
        v1_1.d = vcvt_f32_u32(v1).d f* v2
        v1_1:4.d = v1_1:4.d f* v2
        v1_1.d = v1_1.d f* v5.d
        v1_1:4.d = v1_1:4.d f* v5.d
        float128 v1_2
        v1_2:8.q = vmul_f32(v1_1, entry_v8, 0).q
        float128 v2_1 = vsubq_f32(v0_1, v1_2)
        uint128_t v0_3 = vextq_s8(vaddq_f32(v0_1, v1_2), v2_1, 8)
        uint128_t var_a0 = vextq_s8(v0_3, v0_3, 8)
        int128_t var_90 = var_b0_1
        arg1, v0, v1, v4, v5 = DrawImageMasked(&var_a0, *fp_1, COLOR_COAST, arg2, x4_1)
        
        if (x21_2 != 0)
            arg1, v0, v1, v4, v5 = DrawImageParams(*x21_2, &var_a0, &var_90, gSpriteWhite, 
                *MATERIAL_EFFECTS_CHART_SPINETINT_ZWRITE_NOREAD)
        
        i += 1
        x27_1 += 0xc
    while (i s< sx.q(*x25))

entry_v9.q = var_70
entry_v8.q = var_68
entry_v10.q = var_80
