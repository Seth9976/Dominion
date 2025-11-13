// 函数: _Z12Hasty_OnGainv
// 地址: 0xaa4360
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0 = Trigger_GainCard()
int32_t x19 = x0.d
int64_t result = MoveCardTo(zx.q(x19), zx.q(CardGainedToWhere(x0)), 0x46a, 0, 0, 0xb, 0)

if ((result.d & 1) == 0)
    return result

FromSingle(zx.q(x19))
void var_ca8
return StartOfNextTurn(sub_aae8fc, nullptr, &var_ca8, 0x3f, 2)
