// 函数: _Z20TTFontUnicodeToGlyphP6XAssetfib
// 地址: 0x1002cd0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v9
int64_t var_70 = v9
TTFontRT** x8 = *arg1
uint64_t x19 = zx.q(arg3)

if (x8 == 0)
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(arg1, false, true)
    x8 = *arg1

TTFontRT* x23 = *x8
TTFontRT* x0_4 = TTFontGetRuntime(arg1)
int64_t x24 = *(x23 + 0x38)
float v0 = float.s(data_2423770:4.d)
int32_t x8_9

if (v0 >= arg2)
    x8_9 = 1
else
    v0 = arg2 / float.s(*(x0_4 + 0xa4))
    float v1_1
    
    if (v0 < 0f)
        v1_1 = fconvert.s(-0.5f)
    else
        v1_1 = fconvert.s(0.5f)
    
    v0 = v0 + v1_1
    int32_t x8_3 = vcvts_s32_f32(v0) - 1
    int32_t x8_4 = x8_3 | x8_3 u>> 1
    int32_t x8_5 = x8_4 | x8_4 u>> 2
    int32_t x8_6 = x8_5 | x8_5 u>> 4
    int32_t x8_7 = x8_6 | x8_6 u>> 8
    uint32_t x9_1 = (x8_7 | x8_7 u>> 0x10) + 1
    x8_9 = 1
    
    if (x9_1 u>= 2)
        bool cond:0_1
        
        do
            cond:0_1 = x9_1 u> 3
            x9_1 u>>= 1
            x8_9 += 1
        while (cond:0_1)

int32_t x9_2 = *(x23 + 0x2c)
uint64_t x27 = x19 << 0x20
int32_t x25

x25 = x8_9 s< x9_2 ? x8_9 : x9_2

uint64_t x28 = zx.q(x19.d) | zx.q(x25 << 8)
int32_t* x8_11 = *(*(x0_4 + 0x100) + ((x28 & zx.q(*(x0_4 + 0x108))) << 3))
TTFontDef* result

if (x8_11 != 0)
    while (true)
        if (x25 == *x8_11 && x8_11[1] == x19.d && *(x8_11 + 8) == arg1)
            result = &x8_11[4]
            int32_t* i = *(*(x0_4 + 0xe8) + ((zx.q(*(x0_4 + 0xf0)) & zx.q(x28.d)) << 3))
            
            if (i != 0)
                do
                    if (x25 == *i && i[1] == x19.d && *(i + 8) == arg1)
                        int32_t x8_30 = *(x0_4 + 0xf8)
                        uint64_t x10_4 = zx.q(i[4].w)
                        int64_t x11_2 = *(x0_4 + 0xc0)
                        *(x0_4 + 0xf8) = x8_30 + 1
                        void* x10_5 = x11_2 + x10_4 * 0x58
                        int32_t j = *(x10_5 + 0x30)
                        *(x10_5 + 0x2c) = x8_30
                        
                        while (j != 0)
                            int64_t x12_2 = *(x0_4 + 0xc0)
                            uint64_t x11_3 = zx.q(j) & 0xffff
                            
                            if (*(x12_2 + mulu.dp.d(x11_3.d, 0x58) + 0x28) == 2)
                                break
                            
                            *(x12_2 + mulu.dp.d(x11_3.d, 0x58) + 0x28) = 2
                            void* x12_3 = x12_2 + x11_3 * 0x58
                            j = *(x12_3 + 0x30)
                            *(x12_3 + 0x2c) = x8_30
                        
                        goto label_1002f80
                    
                    i = *(i + 0x18)
                while (i != 0)
            
            break
        
        x8_11 = *(x8_11 + 0x58)
        
        if (x8_11 == 0)
            goto label_1002e04
else
label_1002e04:
    int32_t fp_1 = *(x0_4 + 0xa4) << (x25 - 1)
    int32_t var_b8_1 = x19.d
    int32_t var_b4_1 = x25
    int32_t x0_6 = stbtt_FindGlyphIndex(x24, zx.q(x19.d), v0)
    v9.d = float.s(fp_1)
    int32_t var_b0_1 = x0_6
    int128_t v0_2 = stbtt_ScaleForMappingEmToPixels(x24, v9.d f+ fconvert.s(-1f))
    int32_t var_ac_1 = v0_2.d
    void var_c0
    int32_t var_bc
    stbtt_GetGlyphHMetrics(x24, zx.q(x0_6), &var_bc, &var_c0)
    int128_t var_98
    void var_90
    void var_8c
    int128_t v0_4
    int128_t v1_3
    uint128_t v3_1
    v0_4, v1_3, v3_1 =
        stbtt_GetGlyphBitmapBox(x24, zx.q(x0_6), &var_98, &var_98:4, &var_90, &var_8c, v0_2, v0_2)
    v1_3.d = var_bc
    v0_4.d = fconvert.s(1f)
    v1_3.d = float.s(v1_3.d)
    v0_4.d = v0_4.d f/ v9.d
    v1_3.d = var_ac_1 f* v1_3.d
    float128 v2_3
    v2_3.d = vcvtq_f32_s32(var_98).d f* v0_4.d
    v2_3:4.d = v2_3:4.d f* v0_4.d
    v2_3:8.d = v2_3:8.d f* v0_4.d
    v2_3:0xc.d = v2_3:0xc.d f* v0_4.d
    v0_4.d = v0_4.d f* v1_3.d
    int32_t var_78_1 = v0_4.d
    uint64_t x26_1 = zx.q(*(x0_4 + 0x108)) & zx.q(x28.d)
    int32_t* x8_14 = *(*(x0_4 + 0x100) + (zx.q(x26_1.d) << 3))
    int128_t var_a8
    
    if (x8_14 != 0)
        while (x25 != *x8_14 || x8_14[1] != x19.d || *(x8_14 + 8) != arg1)
            x8_14 = *(x8_14 + 0x58)
            
            if (x8_14 == 0)
                goto label_1002eb8
        
        *(x8_14 + 0x10) = var_b8_1.o
        v1_3 = var_98
        x8_14[0x14] = var_78_1
        *(x8_14 + 0x30) = v1_3
        *(x8_14 + 0x40) = v2_3
        *(x8_14 + 0x20) = var_a8
    else
    label_1002eb8:
        uint64_t* x0_10
        int128_t v0_5
        int128_t v1_4
        int128_t v2_4
        x0_10, v0_5, v1_4, v2_4 = XPooledMalloc(0x60)
        *x0_10 = x27 | zx.q(x25)
        x0_10[1] = arg1
        uint64_t x9_5 = x26_1 << 3
        *(x0_10 + 0x10) = var_b8_1.o
        v2_4 = var_98
        x0_10[0xa].d = var_78_1
        *(x0_10 + 0x20) = var_a8
        *(x0_10 + 0x30) = v2_4
        *(x0_10 + 0x40) = v2_3
        x0_10[0xb] = *(*(x0_4 + 0x100) + x9_5)
        *(*(x0_4 + 0x100) + x9_5) = x0_10
        *(x0_4 + 0x10c) += 1
    int32_t* x8_25 = *(*(x0_4 + 0x100) + ((zx.q(*(x0_4 + 0x108)) & zx.q(x28.d)) << 3))
    
    if (x8_25 != 0)
        while (x25 != *x8_25 || x8_25[1] != x19.d || *(x8_25 + 8) != arg1)
            x8_25 = *(x8_25 + 0x58)
            
            if (x8_25 == 0)
                goto label_1002f2c
        
        result = &x8_25[4]
    else
    label_1002f2c:
        result = nullptr

if ((arg4.d & 1) != 0)
    MakeImage(x0_4, x25, x27 | zx.q(x25), arg1, result, x23, x24.d)

label_1002f80:
return result
