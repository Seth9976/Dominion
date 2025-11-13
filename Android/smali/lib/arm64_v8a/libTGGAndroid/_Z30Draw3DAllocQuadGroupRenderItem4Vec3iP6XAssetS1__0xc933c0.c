// 函数: _Z30Draw3DAllocQuadGroupRenderItem4Vec3iP6XAssetS1_
// 地址: 0xc933c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x10 = sx.q(*(gDraw3DData + 0x1a0590))
int128_t v3
v3.q = 0
v3:8.q = 0
void* x21 = gDraw3DData + x10 * 0x1a0
*(gDraw3DData + 0x1a0590) = x10.d + 1
__builtin_memset(x21 + 0x590, 0, 0x1a0)
*(x21 + 0x620) = *(gDraw3DData + 0x4cc)
*(x21 + 0x630) = *(gDraw3DData + 0x4bc)
*(x21 + 0x640) = *(gDraw3DData + 0x4dc)
*(x21 + 0x728) = *(gDraw3DData + "}")
*(x21 + 0x718) = *(gDraw3DData + 0x4a8)
v3.d = *(gDraw3DData + 0x4ec)
*(x21 + 0x6c0) = v3.d
*(x21 + 0x6c4) = *(gDraw3DData + 0x564)
*(x21 + 0x6d4) = *(gDraw3DData + 0x574)
v3 = *(gDraw3DData + 0x488)
*(x21 + 0x618) = *(gDraw3DData + 0x498)
*(x21 + 0x608) = v3
int128_t v4 = *(gDraw3DData + 0x540)
int128_t v5 = *(gDraw3DData + 0x530)
*(x21 + 0x6b0) = *(gDraw3DData + 0x550)
*(x21 + 0x6a0) = v4
*(x21 + 0x690) = v5
v4 = *(gDraw3DData + 0x510)
v5 = *(gDraw3DData + 0x500)
int128_t v6 = *(gDraw3DData + 0x4f0)
*(x21 + 0x680) = *(gDraw3DData + 0x520)
*(x21 + 0x670) = v4
*(x21 + 0x660) = v5
*(x21 + 0x650) = v6
*(x21 + 0x710) = *(gDraw3DData + 0x584)
v3.d = *(gDraw3DData + 0x588)
*(x21 + 0x590) = 1
*(x21 + 0x714) = v3.d
v4 = *M4I
v5 = *(M4I + 0x10)
v3 = *(M4I + 0x20)
v6 = *(M4I + 0x30)
*(x21 + 0x5e8) = arg2
*(x21 + 0x5e0) = arg3
*(x21 + 0x5d0) = v6
*(x21 + 0x5c0) = v3
*(x21 + 0x5b0) = v5
*(x21 + 0x5a0) = v4
int32_t x9_8 = *(gDraw3DData + "2")
*(x21 + 0x6e8) = arg1
*(x21 + 0x6e4) = x9_8
v3.d = *(gDraw3DData + 0xb8)
v4.d = *(gDraw3DData + 0xbc)
v5.d = *(gDraw3DData + 0xc0)
float entry_v0 = v3.d f- entry_v0
float entry_v1 = v4.d f- entry_v1
float entry_v2 = v5.d f- entry_v2
*(x21 + 0x6f4) = entry_v0 * entry_v0 + entry_v1 * entry_v1 + entry_v2 * entry_v2
*(x21 + 0x6ec) = GetSortLayerFromMaterial(arg3)
*(x21 + 0x6f0) = GetSortTypeFromMaterial(arg3)
*(x21 + 0x700) = 0
return x21 + 0x590
