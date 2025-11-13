// 函数: _Z17GainNonsupplyCopy6CardID16TriggerEventFlag7LogFlag
// 地址: 0xa325f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = CardWhat(arg1)
int32_t x0_3 = BoardPileWhere(*(DomGetContext() + 8), zx.q(x0))
uint64_t x1_1

if (x0_3 != 0)
    x1_1 = zx.q(x0_3)
else
    x1_1 = 1

return GainCard(CreateCard(zx.q(x0), x1_1), 0x476, zx.q(arg3), zx.q(arg2), 4) __tailcall
