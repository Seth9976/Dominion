// 函数: sub_ab1c44
// 地址: 0xab1c44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = *arg2

if ((CardIs(zx.q(x19), 4) & 1) != 0 && (CardIs(zx.q(x19), 0x80) & 1) == 0
        && (CardIs(zx.q(x19), 0x400000000000) & 1) == 0)
    return CostUpto(zx.q(x19), 4) __tailcall

return 0
