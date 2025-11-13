// 函数: _Z16TTFontDrawMatrixP6XAssetRK4Mat4PKcffRK10ColorRgbaIS0_
// 地址: 0x1003494
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v12
int64_t var_70 = v12
int64_t v11
int64_t var_68 = v11
int64_t v10
int64_t var_60 = v10
int64_t* x8 = *arg1
XAsset* x21 = arg7
char const* x19 = arg3

if (x8 == 0)
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(arg1, false, true)
    x8 = *arg1

void* x24 = *x8
Mat4Multiply(*gpRenderAppData + 0x124, arg2)

if (x21 == 0)
    x21 = *(*gpRenderAppData + 0x3b8)
    
    if (x21 == 0)
        if ((zx.d(data_2423788) & 1) == 0 && __cxa_guard_acquire(&data_2423788) != 0)
            data_2423780 = AssetPtrFromPath("sys/sprite_3d.material", 5)
            __cxa_guard_release(&data_2423788)
        
        x21 = data_2423780

int64_t result = SpriteColorNormal(arg6)
int64_t result_1 = result
uint32_t i = zx.d(*x19)

if (i != 0)
    v12.d = 0f
    v11.d = *V20
    v10.d = *(V20 + 4)
    
    do
        int32_t x1_2 = i & 0xff
        
        if ((i & 0x80) != 0)
            if ((x1_2 & 0xe0) == 0xc0)
                x19 = &x19[1]
                x1_2 = (zx.d(*x19) & 0x3f) | (0x1f & x1_2) << 6
            else if ((i & 0xf0) != 0xe0)
                int32_t x8_9 = x1_2 & 0xf8
                
                if (x8_9 == 0xf0)
                    x1_2 = (((0xfffff03f
                        & ((0xfffc0fff & (x1_2 & 7) << 0x12) | (0x3f & zx.d(x19[1])) << 0xc))
                        | (0x3f & zx.d(x19[2])) << 6) & 0xffffffc0) | (zx.d(x19[3]) & 0x3f)
                
                if (x8_9 == 0xf0)
                    x19 = &x19[3]
            else
                x19 = &x19[2]
                x1_2 = (((0xfffff03f & (x1_2 & 0xf) << 0xc) | (0x3f & zx.d(x19[-1])) << 6)
                    & 0xffffffc0) | (zx.d(*x19) & 0x3f)
        
        void* x0_6 = TTFontUnicodeToGlyph(arg1, x1_2, true, arg5)
        float v1 = *(x0_6 + 0x10)
        float v17_1 = *(x0_6 + 0x14)
        float v2_1 = *V20
        float v3_1 = *(V20 + 4)
        float var_d8 = v1
        float var_d4_1 = v17_1
        float v22_1 = *(x0_6 + 0x18)
        float var_cc_1 = v17_1
        float var_c8_1 = v1
        float var_98
        v17_1 = var_98 f* v12.d
        float var_88
        float v18_1 = var_88 f* v12.d
        float var_d0_1 = v22_1
        v1 = *(x0_6 + 0x1c)
        float var_c4_1 = v1
        float var_c0_1 = v22_1
        float var_bc_1 = v1
        v1 = v11.d f+ v2_1 + (*(x0_6 + 0x30) - v2_1) * arg4
        v22_1 = v10.d f+ v3_1 + (*(x0_6 + 0x34) - v3_1) * arg4
        v2_1 = v11.d f+ v2_1 + (*(x0_6 + 0x38) - v2_1) * arg4
        v3_1 = v10.d f+ v3_1 + (*(x0_6 + 0x3c) - v3_1) * arg4
        float var_b0
        float v23_1 = v1 * var_b0
        float var_ac
        float v25_1 = v22_1 * var_ac
        float var_a0
        float v26_1 = v1 * var_a0
        float var_9c
        float v27_1 = v22_1 * var_9c
        float var_90
        v1 = v1 * var_90
        float var_8c
        v22_1 = v22_1 * var_8c
        float v4_1 = v2_1 * var_b0
        float v7_1 = v2_1 * var_a0
        v2_1 = v2_1 * var_90
        float v5_1 = var_ac * v3_1
        float v16_1 = v3_1 * var_9c
        v3_1 = v3_1 * var_8c
        float var_a8
        float v6_1 = var_a8 f* v12.d
        float var_a4
        float var_108 = var_a4 + v23_1 + v25_1 + v6_1
        float var_94
        float var_104_1 = var_94 + v26_1 + v27_1 + v17_1
        float var_84
        float var_100_1 = var_84 + v1 + v22_1 + v18_1
        float var_fc_1 = var_a4 + v4_1 + v25_1 + v6_1
        float var_f8_1 = var_94 + v7_1 + v27_1 + v17_1
        float var_f4_1 = var_84 + v2_1 + v22_1 + v18_1
        float var_f0_1 = var_a4 + v6_1 + v23_1 + v5_1
        float var_ec_1 = var_94 + v26_1 + v16_1 + v17_1
        float var_e8_1 = var_84 + v1 + v3_1 + v18_1
        float var_e4_1 = var_a4 + v6_1 + v4_1 + v5_1
        float var_e0_1 = var_94 + v7_1 + v16_1 + v17_1
        float var_dc_1 = var_84 + v2_1 + v3_1 + v18_1
        result = Draw3DQuadParams(&var_108, &var_d8, &result_1, false, *(x24 + 0x20), x21)
        x19 = &x19[1]
        i = zx.d(*x19)
        v11.d = v11.d f+ (*(x0_6 + 0x40) f+ v12.d + *(x24 + 0x44)) * arg4
    while (i != 0)

return result
