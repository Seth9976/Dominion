// 函数: sub_aca868
// 地址: 0xaca868
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0_2 = GetBoardPile(CardWhat(Trigger_GainCard()), false)

if (x0_2.d == 0)
    return 

int32_t x19 = x0_2.d
int32_t x0_3 = CountTokensWhereType(x0_2, 0xc00)

if (x0_3 == 0)
    return AddTokens(0xc00, zx.q(x19), 2, 0x10) __tailcall

return MoveTokens(zx.q(x19), 0x3f1, 0xc00, x0_3) __tailcall
