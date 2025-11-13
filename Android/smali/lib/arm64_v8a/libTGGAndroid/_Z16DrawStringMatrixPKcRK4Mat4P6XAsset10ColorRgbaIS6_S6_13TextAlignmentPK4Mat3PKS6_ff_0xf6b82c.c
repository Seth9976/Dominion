// 函数: _Z16DrawStringMatrixPKcRK4Mat4P6XAsset10ColorRgbaIS6_S6_13TextAlignmentPK4Mat3PKS6_ff
// 地址: 0xf6b82c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v8 = arg11
int128_t v9 = arg10
int64_t v11
v11.d = *V20
int64_t v10
v10.d = *(V20 + 4)
int32_t x26 = arg7

if (arg7 u<= 8 && (1 << x26 & 0x124) != 0)
    v11.d = v11.d f- vrndm_f32(FontStringWidth(arg3, arg1, v9.d, v8.d) * fconvert.s(0.5f))

if (x26 u<= 9 && (1 << x26 & 0x248) != 0)
    v11.d = v11.d f- FontStringWidth(arg3, arg1, v9.d, v8.d)

if (x26 - 4 u<= 2)
    XAsset* x26_1 = arg3
    int64_t* x8_4
    
    if (arg3 == 0)
        x26_1 = AssetPtrGetNull(0x12)
        x8_4 = *x26_1
        
        if (x8_4 == 0)
            AssetCatalogLoadAsset(x26_1, false, true)
            x8_4 = *x26_1
    else
        x8_4 = *x26_1
        
        if (x8_4 == 0)
            AssetCatalogLoadAsset(x26_1, false, true)
            x8_4 = *x26_1
    
    int32_t x9_1 = *(x26_1 + 0x24)
    *(x26_1 + 0x24) = x9_1 + 1
    arg10 = **x8_4
    *(x26_1 + 0x24) = x9_1
    v10.d = v10.d f- vrndm_f32(float.s(arg10) * fconvert.s(0.5f))
else if (x26 - 7 u<= 2)
    XAsset* x26_2 = arg3
    int64_t* x8_7
    
    if (arg3 == 0)
        x26_2 = AssetPtrGetNull(0x12)
        x8_7 = *x26_2
        
        if (x8_7 == 0)
            AssetCatalogLoadAsset(x26_2, false, true)
            x8_7 = *x26_2
    else
        x8_7 = *x26_2
        
        if (x8_7 == 0)
            AssetCatalogLoadAsset(x26_2, false, true)
            x8_7 = *x26_2
    
    int32_t x9_2 = *(x26_2 + 0x24)
    *(x26_2 + 0x24) = x9_2 + 1
    arg10 = **x8_7
    *(x26_2 + 0x24) = x9_2
    v10.d = v10.d f- float.s(arg10)

int32_t var_d8 = 0x3f800000
int32_t var_c4 = 0x3f800000
int32_t var_f8 = 0
int32_t var_f4 = v11.d
int32_t var_e8 = 0
int32_t var_e4 = v10.d
int64_t var_e0 = 0
int64_t var_cc = 0
int64_t var_d4 = 0
int64_t var_100 = 0x3f800000
int64_t var_f0 = 0x3f80000000000000
Mat4Multiply(arg2, &var_100)
ColorRgbaI const* var_110 = arg9
Mat4 var_c0
return FontDrawMatrix(&var_c0, arg3, zx.q(arg4), zx.q(arg5), zx.q(arg6), arg1, nullptr, arg8, v9, 
    v8)
