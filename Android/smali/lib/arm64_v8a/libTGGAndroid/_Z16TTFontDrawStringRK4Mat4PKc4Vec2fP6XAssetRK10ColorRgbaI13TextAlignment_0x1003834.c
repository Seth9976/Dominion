// 函数: _Z16TTFontDrawStringRK4Mat4PKc4Vec2fP6XAssetRK10ColorRgbaI13TextAlignment
// 地址: 0x1003834
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *arg3
int32_t x23 = arg6.d
int64_t* x20 = arg3

if (x8 == 0)
    if (x20[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x20, false, true)
    x8 = *x20

void* x24 = *x8
int128_t entry_v2
float v0_1 = stbtt_ScaleForMappingEmToPixels(*(x24 + 0x38), entry_v2)
float v2 = *(x24 + 0x4c)
float v10 = arg4 + v0_1 * *(x24 + 0x48)
float x24_1 = v10
float entry_v1
float v9 = entry_v1 + v0_1 * v2

if (x23 u> 9)
label_10039ec:
    
    if (x23 - 7 u<= 2)
        void** x8_8 = *x20
        
        if (x8_8 == 0)
            if (x20[1].d == 0x15)
                XString::GetString()
                XTrace("Unpreloaded sound %s")
            
            AssetCatalogLoadAsset(x20, false, true)
            x8_8 = *x20
        
        void* x23_2 = *x8_8
        v9 = v9
            - stbtt_ScaleForMappingEmToPixels(*(x23_2 + 0x38), entry_v2) * float.s(*(x23_2 + 0x10))
else
    int32_t x8_2 = 1 << x23
    
    if ((x8_2 & 0x124) == 0)
        if ((x8_2 & 0x248) == 0)
            if (x23 != 4)
                goto label_10039ec
            
            goto label_100397c
        
    label_1003920:
        x24_1 = v10 - TTFontStringWidth(x20, arg2, entry_v2.d, 0f, v2)
        
        if (x23 - 4 u<= 2)
            goto label_100397c
        
        goto label_10039ec
    
    float v0_5
    v0_5, v2 = TTFontStringWidth(x20, arg2, entry_v2.d, 0f, v2)
    v10 = v10 - vrndm_f32(v0_5 * fconvert.s(0.5f))
    x24_1 = v10
    
    if (x23 - 4 u>= 2)
        if (x23 == 6 || x23 == 3)
            goto label_1003920
        
        goto label_10039ec
    
label_100397c:
    void** x8_6 = *x20
    
    if (x8_6 == 0)
        if (x20[1].d == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        AssetCatalogLoadAsset(x20, false, true)
        x8_6 = *x20
    
    void* x23_1 = *x8_6
    v9 = v9 - vrndm_f32(stbtt_ScaleForMappingEmToPixels(*(x23_1 + 0x38), entry_v2)
        * float.s(*(x23_1 + 0x10)) * fconvert.s(0.5f))

void** x8_11 = *x20

if (x8_11 == 0)
    if (x20[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x20, false, true)
    x8_11 = *x20

void* x23_3 = *x8_11
float v0_10 = stbtt_ScaleForMappingEmToPixels(*(x23_3 + 0x38), entry_v2)
float v3 = *R2I
float v2_1 = *(R2I + 4)
float v1_3 = *V21
float v4 = *(V21 + 4)
v0_10 = v9 + v0_10 * float.s(*(x23_3 + 0x10))
int32_t var_c8 = 0
float var_c4 = x24_1
int32_t var_b8 = 0
int64_t var_b0 = 0
int64_t var_9c = 0
int64_t var_a4 = 0
int32_t var_a8 = 0x3f800000
float var_c0 = v1_3 * v3
float var_bc = v2_1 * v4
float var_d0 = v2_1 * v1_3
float var_cc = v4 * fneg(v3)
float var_b4 = v0_10
int32_t var_94 = 0x3f800000
Mat4Multiply(arg1, &var_d0)
float v0_11 = *arg1
float v1_4 = *(arg1 + 0x14)
Mat4 var_90
return TTFontDrawMatrix(x20, &var_90, arg2, arg5, nullptr, entry_v2.d, 
    sqrt(v0_11 * v0_11 + v1_4 * v1_4) * float.s(0x3f3504f3) f* entry_v2.d)
