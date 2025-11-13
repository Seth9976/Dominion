// 函数: stbtt_MakeCodepointBitmap
// 地址: 0x1008a2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0
int128_t v2
int128_t v3
x0, v2, v3 = stbtt_FindGlyphIndex(arg1, zx.q(arg6))
v2.d = 0f
v3.d = 0f
return stbtt_MakeGlyphBitmapSubpixel(arg1, arg2, zx.q(arg3), zx.q(arg4), zx.q(arg5), zx.q(x0), 
    arg7, arg8, v2, v3) __tailcall
