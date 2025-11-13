// 函数: _Z16MaterialCacheGet15MaterialCacheID
// 地址: 0xf7fb90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = zx.q(arg1)
int64_t x19 = *gMaterialCache

if (zx.d(*(x19 + mulu.dp.d(x20.d, 0x1a38) + 0x1a28)) == 0)
    int64_t* x0 = x19 + x20 * 0x1a38
    MaterialSimpleStateBind(&x0[1], *x0)
    *(x19 + mulu.dp.d(x20.d, 0x1a38) + 0x1a28) = 1

return x19 + x20 * 0x1a38 + 8
