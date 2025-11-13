// 函数: sub_a57864
// 地址: 0xa57864
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0 = Trigger_GainCard()
int32_t x19 = x0.d

if ((MoveCardTo(zx.q(x19), zx.q(CardGainedToWhere(x0)), 0x46d, 0, 0, 0xb, 0) & 1) != 0)
    FromSingle(zx.q(x19))
    void var_ca8
    NextTime(0, sub_a578dc, nullptr, &var_ca8, 1, 0)
