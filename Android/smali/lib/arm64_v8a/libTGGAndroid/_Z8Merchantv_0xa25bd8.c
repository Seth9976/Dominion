// 函数: _Z8Merchantv
// 地址: 0xa25bd8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Card(1, 0, 0, nullptr)
Action(1, 0)
int64_t result = HasPlayed(0x105)

if ((result.d & 1) != 0)
    return result

int32_t var_c98
int64_t (* x1_1)()

if ((IsChameleoned(ThisCard(false, nullptr)) & 1) == 0)
    x1_1 = sub_a2773c
    var_c98 = 0
else
    var_c98 = 0
    x1_1 = sub_a27728

return ThisTurnOnce(0xa, x1_1, Merchant_OnPlay_Test, 2, &var_c98, 1, nullptr, 0xffffffff)
