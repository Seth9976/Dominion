// 函数: _Z10DrawRiversRK7MeshMapRK7MapData
// 地址: 0xc1d63c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg2 + 0x215fd4)

if (x8 s< 1)
    return 

MeshMap const& x19_1 = arg1
int64_t i = 0
void* __offset(MapData, 0x195fe4) x26_1 = arg2 + 0x195fe4

do
    float v0 = *(x19_1 + sx.q(*(x26_1 - 4)) * 0xc + 8)
    v0 - 0f
    int32_t x10_2
    
    x10_2 = v0 < 0f ? 2 : 1
    
    int32_t x9_5
    
    if (*(x19_1 + sx.q(*(x26_1 + 0xc)) * 0xc + 8) < 0f)
        x9_5 = x10_2
    else
        x9_5 = v0 < 0f ? 1 : 0
    
    if (x9_5 != 2)
        int128_t v2
        v2.d = *(x26_1 - 8)
        int128_t v3
        v3.d = *x26_1
        int128_t v4
        v4.d = *(x26_1 + 4)
        int128_t v5
        v5.d = *(x26_1 + 8)
        ColorRgbaI* entry_x3
        XAsset* entry_x4
        arg1, entry_x3, entry_x4, v2, v3, v4, v5 = CapsuleDraw(COLOR_COAST, COLOR_COAST, 
            *MATERIAL_EFFECTS_CHART_SPINETINT_ZWRITE, entry_x3, entry_x4, *(x26_1 - 0x10), 
            *(x26_1 - 0xc))
        x8 = *(arg2 + 0x215fd4)
    
    i += 1
    x26_1 += 0x20
while (i s< sx.q(x8))
