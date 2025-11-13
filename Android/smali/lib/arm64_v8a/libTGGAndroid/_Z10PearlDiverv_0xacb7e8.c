// 函数: _Z10PearlDiverv
// 地址: 0xacb7e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Card(1, 0, 0, nullptr)
Action(1, 0)
int64_t result = LookAtBottomDeckOne()

if (result.d == 0)
    return result

int32_t x19_1 = result.d
ChoiceUI_Lookahead(0x38, zx.q(ThisCard(false, nullptr)), 0)
void var_48
int64_t x4_1

if (ChooseWhere(zx.q(x19_1), 0x3eb, 0x475, &var_48, 0) == 0x475)
    x4_1 = 0xffffffff
else
    x4_1 = 0

return MoveCardTo(zx.q(x19_1), 0x3ee, 0x3eb, 5, x4_1, 0xb, 0)
