// 函数: _Z15RenderItemAllocv
// 地址: 0xc9306c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x10 = sx.q(*(gDraw3DData + 0x1a0590))
int128_t v0
v0.q = 0
v0:8.q = 0
void* x11 = gDraw3DData + x10 * 0x1a0
*(gDraw3DData + 0x1a0590) = x10.d + 1
__builtin_memset(x11 + 0x590, 0, 0x1a0)
*(x11 + 0x620) = *(gDraw3DData + 0x4cc)
*(x11 + 0x630) = *(gDraw3DData + 0x4bc)
*(x11 + 0x640) = *(gDraw3DData + 0x4dc)
*(x11 + 0x728) = *(gDraw3DData + "}")
*(x11 + 0x718) = *(gDraw3DData + 0x4a8)
v0.d = *(gDraw3DData + 0x4ec)
*(x11 + 0x6c0) = v0.d
*(x11 + 0x6c4) = *(gDraw3DData + 0x564)
*(x11 + 0x6d4) = *(gDraw3DData + 0x574)
v0 = *(gDraw3DData + 0x488)
*(x11 + 0x618) = *(gDraw3DData + 0x498)
*(x11 + 0x608) = v0
int128_t v1 = *(gDraw3DData + 0x540)
int128_t v2 = *(gDraw3DData + 0x530)
*(x11 + 0x6b0) = *(gDraw3DData + 0x550)
*(x11 + 0x6a0) = v1
*(x11 + 0x690) = v2
v1 = *(gDraw3DData + 0x510)
v2 = *(gDraw3DData + 0x500)
int128_t v3 = *(gDraw3DData + 0x4f0)
*(x11 + 0x680) = *(gDraw3DData + 0x520)
*(x11 + 0x670) = v1
*(x11 + 0x660) = v2
*(x11 + 0x650) = v3
*(x11 + 0x710) = *(gDraw3DData + 0x584)
v0.d = *(gDraw3DData + 0x588)
*(x11 + 0x714) = v0.d
return x11 + 0x590
