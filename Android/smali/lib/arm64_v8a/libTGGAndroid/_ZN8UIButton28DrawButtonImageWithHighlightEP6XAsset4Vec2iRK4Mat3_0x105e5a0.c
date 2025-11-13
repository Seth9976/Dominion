// 函数: _ZN8UIButton28DrawButtonImageWithHighlightEP6XAsset4Vec2iRK4Mat3
// 地址: 0x105e5a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XAsset* x19 = arg2

if (arg2 == 0)
    x19 = *(arg1 + 0x50)

if (arg2 == 0 && x19 == 0)
    return 

int64_t x0
int128_t v2_1
int128_t v3_1
x0, v2_1, v3_1 = SpriteColorDoubleDrawAdditive(0, 0, 0, arg3)
int64_t var_38 = x0
int128_t entry_v0
int128_t entry_v1

if (zx.d(*(arg1 + 0xb5)) != 0)
    v2_1.d = fconvert.s(1f)
    v3_1.d = fconvert.s(1f)
    DrawImageColorScale(x19, &var_38, entry_v0.d, entry_v1.d, v2_1.d, v3_1.d)
else if (zx.d(*(arg1 + 0xb4)) == 0)
    v2_1.d = *(arg1 + 0x10)
    v3_1.d = *(arg1 + 0x14)
    int64_t var_40_1 = 0
    DrawParented9SliceImage(x19, arg4, M3I, &var_38, 0, 0, 1, RECT1, entry_v0, entry_v1, v2_1, v3_1)
else
    int64_t* x8_3 = *x19
    
    if (x8_3 == 0)
        if (*(x19 + 8) == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        v2_1, v3_1 = AssetCatalogLoadAsset(x19, false, true)
        x8_3 = *x19
    
    int32_t* x8_6 = **x8_3
    v3_1.d = x8_6[2]
    v2_1.d = x8_6[3]
    v2_1.d = v2_1.d f* v3_1.d
    float v1 = v2_1.d f* float.s(x8_6[1])
    v2_1.d = *(arg1 + 0x10) f/ (v2_1.d f* float.s(*x8_6))
    v3_1.d = *(arg1 + 0x14) f/ v1
    DrawImageColorScale(x19, &var_38, entry_v0.d, entry_v1.d, v2_1.d, v3_1.d)
