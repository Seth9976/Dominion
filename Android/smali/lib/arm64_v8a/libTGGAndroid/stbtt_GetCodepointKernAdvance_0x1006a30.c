// 函数: stbtt_GetCodepointKernAdvance
// 地址: 0x1006a30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x2c) == 0 && *(arg1 + 0x30) == 0)
    return 0

return stbtt_GetGlyphKernAdvance(arg1, zx.q(stbtt_FindGlyphIndex(arg1)), 
    zx.q(stbtt_FindGlyphIndex(arg1, zx.q(arg3)))) __tailcall
