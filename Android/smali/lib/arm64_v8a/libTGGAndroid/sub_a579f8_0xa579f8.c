// 函数: sub_a579f8
// 地址: 0xa579f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_1 = CardWhat(Trigger_PlayCard())
int32_t x0_4 = BoardPileWhere(*(DomGetContext() + 8), zx.q(x0_1))
uint64_t x1_1

if (x0_4 != 0)
    x1_1 = zx.q(x0_4)
else
    x1_1 = 1

return GainCard(CreateCard(zx.q(x0_1), x1_1), 0x476, 1, 4, 4) __tailcall
