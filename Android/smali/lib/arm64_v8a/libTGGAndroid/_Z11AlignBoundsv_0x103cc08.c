// 函数: _Z11AlignBoundsv
// 地址: 0x103cc08
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v11
int64_t var_30 = v11
int64_t v10
int64_t var_28 = v10
int32_t x9 = *(gUI2Editor + 0x704c)
int64_t x0
int128_t v2
int128_t v3
int128_t v8
int128_t v9

if (x9 == 1)
    int64_t* x19_1 = *(gUI2Editor + 0x6008)
    int64_t* x8_1 = *x19_1
    
    if (x8_1 == 0)
        if (x19_1[1].d == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        x0, v2, v3 = AssetCatalogLoadAsset(x19_1, false, true)
        x8_1 = *x19_1
    
    void* x8_3 = *x8_1
    v2.d = *(x8_3 + 0x10)
    v3.d = *(x8_3 + 0x14)
    v8.d = *V20
    v9.d = *(V20 + 4)
else if (x9 != 0)
    UI2GetIndex(zx.q(*(gUI2Editor + 0x604c)))
    int64_t v0_1 = GameGetTimeSimulation()
    v8 = UI2PropDynamic<float>::Eval(v0_1.d)
    v9 = UI2PropDynamic<float>::Eval(v0_1.d)
    int64_t v0_6 = UI2PropDynamic<float>::Eval(v0_1.d)
    int32_t v0_8
    int128_t v2_1
    int128_t v3_1
    x0, v0_8, v2_1, v3_1 = UI2PropDynamic<float>::Eval(v0_1.d)
    v2_1.d = v8.d f+ v0_6.d
    v3_1.d = v9.d f+ v0_8
else
    v8.d = *RECT0
    v9.d = *(RECT0 + 4)
    v2.d = *(RECT0 + 8)
    v3.d = *(RECT0 + 0xc)
