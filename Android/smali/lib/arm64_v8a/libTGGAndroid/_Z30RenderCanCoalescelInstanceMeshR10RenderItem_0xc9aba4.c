// 函数: _Z30RenderCanCoalescelInstanceMeshR10RenderItem
// 地址: 0xc9aba4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(gDraw3DData + "center_landscape_col_2") != 0)
    int32_t x8_1 = *(ShaderGetDef(*MaterialCacheGet(MaterialCacheGetId(*(arg1 + 0x50)))) + 0x54)
    
    if (*(gDraw3DData + "center_landscape_col_2") != x8_1)
        int64_t x8_4 = sx.q(*(gDraw3DData + (sx.q(*(gDraw3DData + "Off")) << 2) + "s"))
        
        if (*(gDraw3DData + x8_4 * 0x1a0 + 0x598) == *(arg1 + 8)
                && *(gDraw3DData + x8_4 * 0x1a0 + 0x5e0) == *(arg1 + 0x50)
                && *(gDraw3DData + x8_4 * 0x1a0 + 0x5e8) == *(arg1 + 0x58)
                && not(*(gDraw3DData + x8_4 * 0x1a0 + 0x620) f!= *(arg1 + 0x90))
                && not(*(gDraw3DData + x8_4 * 0x1a0 + 0x624) f!= *(arg1 + 0x94))
                && not(*(gDraw3DData + x8_4 * 0x1a0 + 0x628) f!= *(arg1 + 0x98))
                && not(*(gDraw3DData + x8_4 * 0x1a0 + 0x62c) f!= *(arg1 + 0x9c))
                && not(*(gDraw3DData + x8_4 * 0x1a0 + 0x630) f!= *(arg1 + 0xa0))
                && not(*(gDraw3DData + x8_4 * 0x1a0 + 0x634) f!= *(arg1 + 0xa4))
                && not(*(gDraw3DData + x8_4 * 0x1a0 + 0x638) f!= *(arg1 + 0xa8))
                && not(*(gDraw3DData + x8_4 * 0x1a0 + 0x63c) f!= *(arg1 + 0xac))
                && not(*(gDraw3DData + x8_4 * 0x1a0 + 0x640) f!= *(arg1 + 0xb0))
                && not(*(gDraw3DData + x8_4 * 0x1a0 + 0x644) f!= *(arg1 + 0xb4))
                && not(*(gDraw3DData + x8_4 * 0x1a0 + 0x648) f!= *(arg1 + 0xb8))
                && not(*(gDraw3DData + x8_4 * 0x1a0 + 0x64c) f!= *(arg1 + 0xbc))
                && not(*(gDraw3DData + x8_4 * 0x1a0 + 0x6c0) f!= *(arg1 + 0x130)))
            return 1

return 0
