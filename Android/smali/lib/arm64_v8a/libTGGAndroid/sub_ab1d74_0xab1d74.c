// 函数: sub_ab1d74
// 地址: 0xab1d74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0 = Trigger_AssociatedCardSingle()

if (CardWhere(x0) != 0x474)
    return 0

return (CardWhereCard(zx.q(x0.d)) == ThisCard(false, nullptr) ? 1 : 0).b
