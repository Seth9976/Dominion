// 函数: _Z13SecretPassagev
// 地址: 0xa83e90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Card(2, 0, 0, nullptr)
Action(1, 0)
int128_t var_60
__builtin_memset(&var_60, 0, 0x30)
var_60.d = 0x33
int128_t var_50
var_50:0xc.d = 0
int128_t var_40
var_40:8.q = 0
int64_t var_30 = 0
int64_t result = ChooseOneFromHand(0xe, &var_60, 0xe, 1)

if (result.d == 0)
    return result

StoreTempDecision(result.d)
int32_t x0 = CountWhere(0x3eb)
AchievementSignalResult(0)
int32_t x3_1

if (x0 s< 1)
    x3_1 = 0
else
    __builtin_memset(&var_60, 0, 0x30)
    var_60.d = 0x34
    int128_t var_50_1
    var_50_1:0xc.d = 0
    int128_t var_40_1
    var_40_1:8.q = 0
    int64_t var_30_1 = 0
    x3_1 = ChooseNumber(0, x0, &var_60, 0x2a, 2)

MoveToSlot(zx.q(result.d), 0x3ea, 0x3eb, x3_1)
return StoreTempDecision(0)
