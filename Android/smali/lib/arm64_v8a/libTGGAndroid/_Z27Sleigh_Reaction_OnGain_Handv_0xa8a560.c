// 函数: _Z27Sleigh_Reaction_OnGain_Handv
// 地址: 0xa8a560
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = Trigger_GainCard()
DiscardThis(0x3ea)
int64_t result = CardWhere(zx.q(x0))

if (result.d != 0x3ea)
    return MoveCardTo(zx.q(x0), zx.q(CardGainedToWhere(zx.q(x0))), 0x3ea, 3, 0, 0xb, 0) __tailcall

return result
