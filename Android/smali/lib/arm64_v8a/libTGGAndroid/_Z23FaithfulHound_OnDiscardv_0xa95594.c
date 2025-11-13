// 函数: _Z23FaithfulHound_OnDiscardv
// 地址: 0xa95594
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0 = ThisCard(false, nullptr)
int32_t x0_1 = CardWhere(x0)
uint64_t x1

if (x0_1 == 0x3ee)
    x1 = zx.q(x0_1)
else
    x1 = 0x3ec

MoveCardTo(zx.q(x0.d), x1, 0x458, 0, 0, 0xb, 0)
int32_t var_ca8 = 0
return EndOfTurn(sub_a9fcb8, &var_ca8, 0xb, 0)
