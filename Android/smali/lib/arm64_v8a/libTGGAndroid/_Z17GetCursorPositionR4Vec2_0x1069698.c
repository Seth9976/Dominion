// 函数: _Z17GetCursorPositionR4Vec2
// 地址: 0x1069698
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x20 = zx.d(*(gAndroidGlobals + 0x30))

if (x20 != 0)
    int32_t v0_1
    int32_t v1_1
    v0_1, v1_1 = WindowToSurfaceCoords(*(gAndroidGlobals + 0x28))
    *arg1 = v0_1
    *(arg1 + 4) = v1_1

return zx.q(x20 != 0 ? 1 : 0)
