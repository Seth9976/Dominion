// 函数: _Z18RendererInitForAppv
// 地址: 0xfa2538
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*gpRenderAppData = XPooledCalloc(0x3c0)
SpriteInitForApp()
MaterialInitForApp()
MaterialCacheInit()
int64_t result
int128_t v0
int128_t v1
int128_t v2
int128_t v3
result, v0, v1, v2, v3 = Draw3DInit()
uint64_t x8 = *gpRenderAppData
*(x8 + 0x98) = 0xff0000ff
*(x8 + 0x9c) = 1
v1 = *(M4I + 0x30)
v2 = *M4I
v3 = *(M4I + 0x10)
*(x8 + 0x144) = *(M4I + 0x20)
*(x8 + 0x154) = v1
*(x8 + 0x124) = v2
*(x8 + 0x134) = v3
*(x8 + 0x398) = 0
return result
