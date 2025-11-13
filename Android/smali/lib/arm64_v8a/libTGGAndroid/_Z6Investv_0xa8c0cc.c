// 函数: _Z6Investv
// 地址: 0xa8c0cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsSupplyTops(4, 0xffffffff)
void var_ca8
int64_t result = FilterType(&var_ca8, 4)
int32_t var_28

if (var_28 == 0)
    return result

int128_t var_d00
__builtin_memset(&var_d00, 0, 0x30)
var_d00.d = 0xc5
int128_t var_cf0
var_cf0:0xc.d = 0
int128_t var_ce0
var_ce0:8.q = 0
int64_t var_cd0_1 = 0
int64_t x0_2 = ChooseCard(&var_ca8, 0x1d, &var_d00, 0x17, 0)
int32_t x19_1 = x0_2.d
bool var_cac
MoveCardToPlayer(zx.q(x19_1), zx.q(CardWhere(x0_2)), zx.q(CurrentWho()), 0x462, 0, 0, &var_cac, 0xc)
SetCardFlag(zx.q(x19_1), 0x20, true)
void* x0_7 = DomGetContext()
SnapshotGainTriggerInfo(*(x0_7 + 8), zx.q(*(x0_7 + 0x18)), zx.q(x19_1), *(x0_7 + 0x40))
int32_t x1_3

if (zx.d(var_cac) != 0)
    x1_3 = 2
else
    x1_3 = 1

int64_t var_d08 = 0x130000000f
return TriggerEvents(&var_d08, x1_3, zx.q(x19_1), &var_d00)
