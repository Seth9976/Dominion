// 函数: _Z15Draw3DQuadGroup4Vec3iP6XAssetS1_
// 地址: 0xc935c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = sx.q(*(gDraw3DData + 0x1a0590))
int128_t v3
v3.q = 0
v3:8.q = 0
void* x22 = gDraw3DData + x9 * 0x1a0
*(gDraw3DData + 0x1a0590) = x9.d + 1
__builtin_memset(x22 + 0x590, 0, 0x1a0)
*(x22 + 0x620) = *(gDraw3DData + 0x4cc)
*(x22 + 0x630) = *(gDraw3DData + 0x4bc)
*(x22 + 0x640) = *(gDraw3DData + 0x4dc)
*(x22 + 0x728) = *(gDraw3DData + "}")
*(x22 + 0x718) = *(gDraw3DData + 0x4a8)
v3.d = *(gDraw3DData + 0x4ec)
*(x22 + 0x6c0) = v3.d
*(x22 + 0x6c4) = *(gDraw3DData + 0x564)
*(x22 + 0x6d4) = *(gDraw3DData + 0x574)
v3 = *(gDraw3DData + 0x488)
*(x22 + 0x618) = *(gDraw3DData + 0x498)
*(x22 + 0x608) = v3
int128_t v4 = *(gDraw3DData + 0x540)
int128_t v5 = *(gDraw3DData + 0x530)
*(x22 + 0x6b0) = *(gDraw3DData + 0x550)
*(x22 + 0x6a0) = v4
*(x22 + 0x690) = v5
v4 = *(gDraw3DData + 0x510)
v5 = *(gDraw3DData + 0x500)
int128_t v6 = *(gDraw3DData + 0x4f0)
*(x22 + 0x680) = *(gDraw3DData + 0x520)
*(x22 + 0x670) = v4
*(x22 + 0x660) = v5
*(x22 + 0x650) = v6
*(x22 + 0x710) = *(gDraw3DData + 0x584)
v3.d = *(gDraw3DData + 0x588)
*(x22 + 0x590) = 1
*(x22 + 0x714) = v3.d
v4 = *M4I
v5 = *(M4I + 0x10)
v3 = *(M4I + 0x20)
v6 = *(M4I + 0x30)
*(x22 + 0x5e8) = arg2
*(x22 + 0x5e0) = arg3
*(x22 + 0x5b0) = v5
*(x22 + 0x5d0) = v6
*(x22 + 0x5c0) = v3
*(x22 + 0x5a0) = v4
int32_t x8_8 = *(gDraw3DData + "2")
*(x22 + 0x6e8) = arg1
*(x22 + 0x6e4) = x8_8
v3.d = *(gDraw3DData + 0xb8)
v4.d = *(gDraw3DData + 0xbc)
v5.d = *(gDraw3DData + 0xc0)
float entry_v0 = v3.d f- entry_v0
float entry_v1 = v4.d f- entry_v1
float entry_v2 = v5.d f- entry_v2
*(x22 + 0x6f4) = entry_v0 * entry_v0 + entry_v1 * entry_v1 + entry_v2 * entry_v2
*(x22 + 0x6ec) = GetSortLayerFromMaterial(arg3)
*(x22 + 0x6f0) = GetSortTypeFromMaterial(arg3)
*(x22 + 0x700) = 0
int64_t x8_9 = sx.q(*(gDraw3DData + "2"))
*(gDraw3DData + "2") = x8_9.d + arg1
return gDraw3DData + x8_9 * 0xc0 + 0x1a0594
