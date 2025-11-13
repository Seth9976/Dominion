// 函数: _Z19AttribTreeAllocItemPvR10AttribTreePK8DefField
// 地址: 0xc8c454
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg2 + 8)

if (x8 == 0)
    *(arg2 + 8) = 1
    *arg2 = XCalloc(0x18)
else
    void* x20_1 = *arg2
    *(arg2 + 8) = x8 + 1
    int64_t x0_1 = XCalloc((x8 + 1) * 0x18)
    int64_t x8_3 = sx.q(*(arg2 + 8))
    *arg2 = x0_1
    memcpy(x0_1, x20_1, x8_3 * 0x18 - 0x18)
    XFree(x20_1)

return zx.q(*(arg2 + 8) - 1)
