// 函数: _ZN8UIButton15DrawButtonImageEP6XAsset4Vec2RK4Mat3
// 地址: 0x105e45c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t entry_v1
int128_t v8 = entry_v1
int128_t entry_v0
int128_t v9 = entry_v0
int64_t* x19 = arg2

if (arg2 == 0)
    x19 = *(arg1 + 0x50)

if (arg2 == 0 && x19 == 0)
    return 

if (zx.d(*(arg1 + 0xb5)) != 0)
    return DrawImage(x19, v9.d, v8.d) __tailcall

int128_t v2
int128_t v3

if (zx.d(*(arg1 + 0xb4)) != 0)
    int64_t* x8_4 = *x19
    
    if (x8_4 == 0)
        if (x19[1].d == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        entry_v0, entry_v1, v2, v3 = AssetCatalogLoadAsset(x19, false, true)
        x8_4 = *x19
    
    int32_t* x8_7 = **x8_4
    entry_v1.d = x8_7[2]
    entry_v0.d = x8_7[3]
    v2.d = *x8_7
    v3.d = x8_7[1]
    entry_v0.d = entry_v0.d f* entry_v1.d
    entry_v1.d = *(arg1 + 0x10)
    v2.d = float.s(v2.d)
    v3.d = float.s(v3.d)
    v2.d = entry_v0.d f* v2.d
    entry_v0.d = entry_v0.d f* v3.d
    v2.d = entry_v1.d f/ v2.d
    v3.d = *(arg1 + 0x14) f/ entry_v0.d
    return DrawImageScale(x19, v9.d, v8.d, v2.d, v3.d) __tailcall

v2.d = *(arg1 + 0x10)
v3.d = *(arg1 + 0x14)
int64_t var_40_1 = 0
DrawParented9SliceImage(x19, arg3, M3I, gSpriteWhite, 0, 0, 1, RECT1, v9, v8, v2, v3)
