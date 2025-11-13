// 函数: sub_aca8e8
// 地址: 0xaca8e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0 = Trigger_GainCard()
int32_t x19 = x0.d

if (CardWhere(x0) != 0x3eb)
    return MoveCardTo(zx.q(x19), zx.q(CardGainedToWhere(zx.q(x19))), 0x3eb, 0, 0, 0xb, 0) __tailcall
