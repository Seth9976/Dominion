// 函数: _Z17Infirmary_Overpayv
// 地址: 0xa79a2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = Overpay(true)
int64_t x0_1 = ThisCard(false, nullptr)
int32_t x20 = x0_1.d
int64_t x0_2 = CardWhereEx(x0_1)
int64_t result = CardGainedToWhereEx(zx.q(x20))

if (x0_2.d == result.d && (x0_2 u>> 0x20).d == (result u>> 0x20).d)
    return PlayCard(zx.q(x20), x0, 0, 0) __tailcall

return result
