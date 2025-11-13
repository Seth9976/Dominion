// 函数: sub_ae5950
// 地址: 0xae5950
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = *(CardGet(*(DomGetContext() + 8), zx.q(arg1)) + 0x14)

if ((CardIsWhere(*(DomGetContext() + 8), zx.q(arg1), zx.q(x20)) & 1) == 0)
    return 0

return (zx.q(CardIsWhere(*(DomGetContext() + 8), zx.q(arg1), 0x3eb)) ^ 1) & 1
