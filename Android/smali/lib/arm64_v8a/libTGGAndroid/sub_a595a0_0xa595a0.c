// 函数: sub_a595a0
// 地址: 0xa595a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = *arg2

if (((*(arg1 + 8))(zx.q(x20)) & 1) == 0)
    return 0

return zx.q((*(DomDefGet(zx.q(x20), 0x17) + 0xc4) & 0xffff01ff) == *(arg1 + 0x10) ? 1 : 0)
