// 函数: _Z22Draw3DQuadFullCompletePK4Vec3PK4Vec2PK11SpriteColorbRS0_S8_P6XAssetSA_SA_PS2_
// 地址: 0xc96548
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XAsset* x26 = arg7
int32_t x24 = arg4.d
Vec2 const* x21 = arg2
int128_t v0
int128_t v1
int128_t v2
int128_t v3

if (arg7 != 0)
    XAsset* x25_1 = arg8
    Vec2 var_90
    int32_t x0_1
    x0_1, v0, v1, v2, v3 = TextureUpdateUVForAtlas(x26, x21, &var_90, 4, arg10)
    
    if ((x0_1 & 1) == 0)
        arg8 = x25_1
    else
        int64_t* x8_1 = *x26
        arg8 = x25_1
        
        if (x8_1 == 0)
            if (*(x26 + 8) == 0x15)
                XString::GetString()
                XTrace("Unpreloaded sound %s")
            
            v0, v1, v2, v3 = AssetCatalogLoadAsset(x26, false, true)
            x8_1 = *x26
            arg8 = x25_1
        
        x21 = &var_90
        x26 = *(**x8_1 + 0x28)

int32_t x24_1
int32_t x25_2
int64_t v8

if (*(gDraw3DData + 0x4b8) != 1)
    if (zx.d(*(gDraw3DData + &data_7a460c)) != 0)
        x25_2 = x24
        v8.d = *(gDraw3DData + "ebt_N_ok}")
        x24_1 = *(gDraw3DData + "N_ok}")
        
        if (zx.d(*(gDraw3DData + "er_landscape_col_2")) != 0)
            goto label_c966fc
        
        goto label_c967b4
    
    v0.d = *(gDraw3DData + 0xb8)
    v1.d = *(gDraw3DData + 0xbc)
    v2.d = *(gDraw3DData + 0xc0)
    x25_2 = x24
    x24_1 = 0
    int32_t v4
    int32_t v5
    
    if (zx.d(*(gDraw3DData + "er_landscape_col_2")) == 0)
        v3.d = *arg5
        v4 = *(arg5 + 4)
        v5 = *(arg5 + 8)
    else
        v3.d = *(gDraw3DData + "andscape_col_2")
        v4 = *(gDraw3DData + "cape_col_2")
        v5 = *(gDraw3DData + "_col_2")
    
    v0.d = v0.d f- v3.d
    v1.d = v1.d f- v4
    v2.d = v2.d f- v5
    v0.d = v0.d f* v0.d
    v1.d = v1.d f* v1.d
    v0.d = v0.d f+ v1.d
    v1.d = v2.d f* v2.d
    v8.d = v0.d f+ v1.d
    
    if (zx.d(*(gDraw3DData + "er_landscape_col_2")) == 0)
        goto label_c967b4
    
    goto label_c966fc

x25_2 = x24
x24_1 = 0
v8.d = 0f
int64_t result

if (zx.d(*(gDraw3DData + "er_landscape_col_2")) != 0)
label_c966fc:
    int64_t x8_12 = sx.q(*(gDraw3DData + 0x1a0590))
    
    if (x8_12.d == 0 || *(gDraw3DData + (x8_12 - 1) * 0x1a0 + 0x590) != 1
            || *(gDraw3DData + "2") s> 0x7ffe
            || *(gDraw3DData + (x8_12 - 1) * 0x1a0 + 0x5e0) != arg9
            || *(gDraw3DData + (x8_12 - 1) * 0x1a0 + 0x5e8) != x26)
        goto label_c967b4
    
    int32_t x8_15 = *(gDraw3DData + (x8_12 - 1) * 0x1a0 + 0x6ec)
    result, v0, v1, v2, v3 = GetSortLayerFromMaterial(arg9)
    
    if (x8_15 != result.d)
        goto label_c967b4
    
    void* x8_18 = gDraw3DData + sx.q(*(gDraw3DData + 0x1a0590)) * 0x1a0
    *(x8_18 + 0x548) += 1
else
label_c967b4:
    int64_t x9_10 = sx.q(*(gDraw3DData + 0x1a0590))
    v0.q = 0
    v0:8.q = 0
    void* x28_2 = gDraw3DData + x9_10 * 0x1a0
    *(gDraw3DData + 0x1a0590) = x9_10.d + 1
    __builtin_memset(x28_2 + 0x590, 0, 0x1a0)
    *(x28_2 + 0x620) = *(gDraw3DData + 0x4cc)
    *(x28_2 + 0x630) = *(gDraw3DData + 0x4bc)
    *(x28_2 + 0x640) = *(gDraw3DData + 0x4dc)
    *(x28_2 + 0x728) = *(gDraw3DData + "}")
    *(x28_2 + 0x718) = *(gDraw3DData + 0x4a8)
    v0.d = *(gDraw3DData + 0x4ec)
    *(x28_2 + 0x6c0) = v0.d
    *(x28_2 + 0x6c4) = *(gDraw3DData + 0x564)
    *(x28_2 + 0x6d4) = *(gDraw3DData + 0x574)
    v0 = *(gDraw3DData + 0x488)
    *(x28_2 + 0x618) = *(gDraw3DData + 0x498)
    *(x28_2 + 0x608) = v0
    v1 = *(gDraw3DData + 0x540)
    v2 = *(gDraw3DData + 0x530)
    *(x28_2 + 0x6b0) = *(gDraw3DData + 0x550)
    *(x28_2 + 0x6a0) = v1
    *(x28_2 + 0x690) = v2
    v1 = *(gDraw3DData + 0x510)
    v2 = *(gDraw3DData + 0x500)
    v3 = *(gDraw3DData + 0x4f0)
    *(x28_2 + 0x680) = *(gDraw3DData + 0x520)
    *(x28_2 + 0x670) = v1
    *(x28_2 + 0x660) = v2
    *(x28_2 + 0x650) = v3
    *(x28_2 + 0x710) = *(gDraw3DData + 0x584)
    v0.d = *(gDraw3DData + 0x588)
    *(x28_2 + 0x590) = 1
    *(x28_2 + 0x714) = v0.d
    v1 = *M4I
    v2 = *(M4I + 0x10)
    v0 = *(M4I + 0x20)
    v3 = *(M4I + 0x30)
    *(x28_2 + 0x5e8) = x26
    *(x28_2 + 0x5f0) = arg8
    *(x28_2 + 0x5e0) = arg9
    *(x28_2 + 0x5d0) = v3
    *(x28_2 + 0x5c0) = v0
    *(x28_2 + 0x5b0) = v2
    *(x28_2 + 0x5a0) = v1
    int32_t x8_27 = *(gDraw3DData + "2")
    *(x28_2 + 0x6e8) = 1
    *(x28_2 + 0x6e4) = x8_27
    *(x28_2 + 0x6ec) = GetSortLayerFromMaterial(arg9)
    result, v0 = GetSortTypeFromMaterial(arg9)
    *(x28_2 + 0x6f0) = result.d
    *(x28_2 + 0x700) = 0
    *(x28_2 + 0x6f4) = v8.d
    *(x28_2 + 0x6f8) = x24_1

int64_t x8_28 = sx.q(*(gDraw3DData + "2"))
*(gDraw3DData + "2") = x8_28.d + 1
int64_t x12_1 = *arg1
*(gDraw3DData + x8_28 * 0xc0 + 0x1a059c) = *(arg1 + 8)
*(gDraw3DData + x8_28 * 0xc0 + 0x1a0594) = x12_1
int64_t x11_2 = *arg6
*(gDraw3DData + x8_28 * 0xc0 + 0x1a05a8) = *(arg6 + 8)
*(gDraw3DData + x8_28 * 0xc0 + 0x1a05a0) = x11_2
int32_t x9_19 = *arg3
*(gDraw3DData + x8_28 * 0xc0 + 0x1a05ac) =
    (((x9_19 & 0xff00ff00) | (0xff & x9_19) << 0x10) & 0xffffff00) | (x9_19 & 0xff0000) u>> 0x10
int32_t x9_20 = *(arg3 + 4)
*(gDraw3DData + x8_28 * 0xc0 + 0x1a05b0) =
    (((x9_20 & 0xff00ff00) | (0xff & x9_20) << 0x10) & 0xffffff00) | (x9_20 & 0xff0000) u>> 0x10
v0.d = *x21
*(gDraw3DData + x8_28 * 0xc0 + 0x1a05b4) = v0.d
v0.d = *(x21 + 4)
*(gDraw3DData + x8_28 * 0xc0 + 0x1a05b8) = v0.d
void* x10_18
int32_t x11_51

if ((x25_2 & 1) == 0)
    if (arg10 == 0)
        v0.d = fconvert.s(1f)
        *(gDraw3DData + x8_28 * 0xc0 + 0x1a05bc) = 0x3f800000
    else
        v0.d = *arg10
        *(gDraw3DData + x8_28 * 0xc0 + 0x1a05bc) = v0.d
        v0.d = *(arg10 + 4)
    
    void* x10_8 = gDraw3DData + x8_28 * 0xc0
    *(x10_8 + 0x1a05c0) = v0.d
    int64_t x12_7 = *(arg1 + 0xc)
    *(x10_8 + 0x1a05cc) = *(arg1 + 0x14)
    *(x10_8 + 0x1a05c4) = x12_7
    int64_t x12_8 = *arg6
    *(x10_8 + 0x1a05d8) = *(arg6 + 8)
    *(x10_8 + 0x1a05d0) = x12_8
    int32_t x11_20 = *arg3
    *(x10_8 + 0x1a05dc) = (x11_20 & 0xff) << 0x10 | (x11_20 & 0xff00ff00) | (x11_20 u>> 0x10 & 0xff)
    int32_t x11_23 = *(arg3 + 4)
    *(x10_8 + 0x1a05e0) = (x11_23 & 0xff) << 0x10 | (x11_23 & 0xff00ff00) | (x11_23 u>> 0x10 & 0xff)
    v0.d = *(x21 + 8)
    *(x10_8 + 0x1a05e4) = v0.d
    v0.d = *(x21 + 0xc)
    *(x10_8 + 0x1a05e8) = v0.d
    
    if (arg10 == 0)
        v0.d = fconvert.s(1f)
        *(gDraw3DData + x8_28 * 0xc0 + 0x1a05ec) = 0x3f800000
    else
        v0.d = *(arg10 + 8)
        *(gDraw3DData + x8_28 * 0xc0 + 0x1a05ec) = v0.d
        v0.d = *(arg10 + 0xc)
    
    void* x10_14 = gDraw3DData + x8_28 * 0xc0
    *(x10_14 + 0x1a05f0) = v0.d
    int64_t x12_17 = *(arg1 + 0x18)
    *(x10_14 + 0x1a05fc) = *(arg1 + 0x20)
    *(x10_14 + 0x1a05f4) = x12_17
    int64_t x12_18 = *arg6
    *(x10_14 + 0x1a0608) = *(arg6 + 8)
    *(x10_14 + 0x1a0600) = x12_18
    int32_t x11_38 = *arg3
    *(x10_14 + 0x1a060c) =
        (x11_38 & 0xff) << 0x10 | (x11_38 & 0xff00ff00) | (x11_38 u>> 0x10 & 0xff)
    int32_t x11_41 = *(arg3 + 4)
    *(x10_14 + 0x1a0610) =
        (x11_41 & 0xff) << 0x10 | (x11_41 & 0xff00ff00) | (x11_41 u>> 0x10 & 0xff)
    v0.d = *(x21 + 0x10)
    *(x10_14 + 0x1a0614) = v0.d
    v0.d = *(x21 + 0x14)
    *(x10_14 + 0x1a0618) = v0.d
    
    if (arg10 == 0)
        v0.d = fconvert.s(1f)
        *(gDraw3DData + x8_28 * 0xc0 + 0x1a061c) = 0x3f800000
    else
        v0.d = *(arg10 + 0x10)
        *(gDraw3DData + x8_28 * 0xc0 + 0x1a061c) = v0.d
        v0.d = *(arg10 + 0x14)
    
    x10_18 = gDraw3DData + x8_28 * 0xc0
    *(x10_18 + 0x1a0620) = v0.d
    int64_t x12_24 = *(arg1 + 0x24)
    *(x10_18 + 0x1a062c) = *(arg1 + 0x2c)
    *(x10_18 + 0x1a0624) = x12_24
    int64_t x12_25 = *arg6
    *(x10_18 + 0x1a0638) = *(arg6 + 8)
    *(x10_18 + 0x1a0630) = x12_25
    int32_t x11_54 = *arg3
    *(x10_18 + 0x1a063c) =
        (x11_54 & 0xff) << 0x10 | (x11_54 & 0xff00ff00) | (x11_54 u>> 0x10 & 0xff)
    x11_51 = *(arg3 + 4)
else
    if (arg10 == 0)
        v0.d = fconvert.s(1f)
        *(gDraw3DData + x8_28 * 0xc0 + 0x1a05bc) = 0x3f800000
    else
        v0.d = *arg10
        *(gDraw3DData + x8_28 * 0xc0 + 0x1a05bc) = v0.d
        v0.d = *(arg10 + 4)
    
    void* x10_5 = gDraw3DData + x8_28 * 0xc0
    *(x10_5 + 0x1a05c0) = v0.d
    int64_t x12_2 = *(arg1 + 0xc)
    *(x10_5 + 0x1a05cc) = *(arg1 + 0x14)
    *(x10_5 + 0x1a05c4) = x12_2
    int64_t x12_3 = *arg6
    *(x10_5 + 0x1a05d8) = *(arg6 + 8)
    *(x10_5 + 0x1a05d0) = x12_3
    int32_t x11_11 = *(arg3 + 8)
    *(x10_5 + 0x1a05dc) = (x11_11 & 0xff) << 0x10 | (x11_11 & 0xff00ff00) | (x11_11 u>> 0x10 & 0xff)
    int32_t x11_14 = *(arg3 + 0xc)
    *(x10_5 + 0x1a05e0) = (x11_14 & 0xff) << 0x10 | (x11_14 & 0xff00ff00) | (x11_14 u>> 0x10 & 0xff)
    v0.d = *(x21 + 8)
    *(x10_5 + 0x1a05e4) = v0.d
    v0.d = *(x21 + 0xc)
    *(x10_5 + 0x1a05e8) = v0.d
    
    if (arg10 == 0)
        v0.d = fconvert.s(1f)
        *(gDraw3DData + x8_28 * 0xc0 + 0x1a05ec) = 0x3f800000
    else
        v0.d = *(arg10 + 8)
        *(gDraw3DData + x8_28 * 0xc0 + 0x1a05ec) = v0.d
        v0.d = *(arg10 + 0xc)
    
    void* x10_11 = gDraw3DData + x8_28 * 0xc0
    *(x10_11 + 0x1a05f0) = v0.d
    int64_t x12_12 = *(arg1 + 0x18)
    *(x10_11 + 0x1a05fc) = *(arg1 + 0x20)
    *(x10_11 + 0x1a05f4) = x12_12
    int64_t x12_13 = *arg6
    *(x10_11 + 0x1a0608) = *(arg6 + 8)
    *(x10_11 + 0x1a0600) = x12_13
    int32_t x11_29 = *(arg3 + 0x10)
    *(x10_11 + 0x1a060c) =
        (x11_29 & 0xff) << 0x10 | (x11_29 & 0xff00ff00) | (x11_29 u>> 0x10 & 0xff)
    int32_t x11_32 = *(arg3 + 0x14)
    *(x10_11 + 0x1a0610) =
        (x11_32 & 0xff) << 0x10 | (x11_32 & 0xff00ff00) | (x11_32 u>> 0x10 & 0xff)
    v0.d = *(x21 + 0x10)
    *(x10_11 + 0x1a0614) = v0.d
    v0.d = *(x21 + 0x14)
    *(x10_11 + 0x1a0618) = v0.d
    
    if (arg10 == 0)
        v0.d = fconvert.s(1f)
        *(gDraw3DData + x8_28 * 0xc0 + 0x1a061c) = 0x3f800000
    else
        v0.d = *(arg10 + 0x10)
        *(gDraw3DData + x8_28 * 0xc0 + 0x1a061c) = v0.d
        v0.d = *(arg10 + 0x14)
    
    x10_18 = gDraw3DData + x8_28 * 0xc0
    *(x10_18 + 0x1a0620) = v0.d
    int64_t x12_22 = *(arg1 + 0x24)
    *(x10_18 + 0x1a062c) = *(arg1 + 0x2c)
    *(x10_18 + 0x1a0624) = x12_22
    int64_t x12_23 = *arg6
    *(x10_18 + 0x1a0638) = *(arg6 + 8)
    *(x10_18 + 0x1a0630) = x12_23
    int32_t x11_47 = *(arg3 + 0x18)
    *(x10_18 + 0x1a063c) =
        (x11_47 & 0xff) << 0x10 | (x11_47 & 0xff00ff00) | (x11_47 u>> 0x10 & 0xff)
    x11_51 = *(arg3 + 0x1c)

*(x10_18 + 0x1a0640) = (x11_51 & 0xff) << 0x10 | (x11_51 & 0xff00ff00) | (x11_51 u>> 0x10 & 0xff)
v0.d = *(x21 + 0x18)
*(x10_18 + 0x1a0644) = v0.d
v0.d = *(x21 + 0x1c)
*(x10_18 + 0x1a0648) = v0.d

if (arg10 == 0)
    *(gDraw3DData + x8_28 * 0xc0 + 0x1a064c) = 0x3f800000
    v0.d = fconvert.s(1f)
else
    v0.d = *(arg10 + 0x18)
    *(gDraw3DData + x8_28 * 0xc0 + 0x1a064c) = v0.d
    v0.d = *(arg10 + 0x1c)

uint64_t x10_19 = *gpRenderAppData
*(gDraw3DData + x8_28 * 0xc0 + 0x1a0650) = v0.d
*(x10_19 + 0x28) += 1
return result
