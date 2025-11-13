// 函数: _Z13AppHasDrawingv
// 地址: 0xc75db4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = *gpAppData

if (zx.d(*(x8 + 0x1a)) != 0 && zx.d(*(x8 + 0x18)) != 0)
    return zx.q(zx.d(*(x8 + 0x19)) != 0 ? 1 : 0)

return 0
