// 函数: sub_a16718
// 地址: 0xa16718
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t result = RevealDeckOne(0x3ee, 0x7ad73c)

if (result == 0)
    return result

int32_t x0 = CurrentWho()
uint64_t x1_1 = zx.q(*(arg1 + 8))
int128_t var_60
__builtin_memset(&var_60, 0, 0x30)
int128_t var_50
var_50:0xc.d = x0
var_60.d = 0x42
int128_t var_40
var_40:8.q = 0
int64_t var_30_1 = 0

if (ChooseWherePlayer(zx.q(result), x1_1, 0x3eb, 0x3ec, &var_60, 0) != 0x3eb)
    return DiscardCard(zx.q(result), 0x3ee, 0xb, 7, 0)

return MoveToTopDeck(zx.q(result), 0x3ee, 0xb)
