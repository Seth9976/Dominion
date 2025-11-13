// 函数: _Z12Villa_OnGainv
// 地址: 0xa6c75c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0 = Trigger_GainCard()
int32_t x19 = x0.d

if (CardWhere(x0) != 0x3ea)
    MoveToHand(zx.q(x19), zx.q(CardGainedToWhere(zx.q(x19))))

Action(1, 0)
int64_t result = IsYourBuyPhase()

if ((result.d & 1) == 0)
    return result

return SetPhase(1) __tailcall
