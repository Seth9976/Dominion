// 函数: _Z11RoyalGalleyv
// 地址: 0xa18c74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Card(1, 0, 0, nullptr)
GetPlayableFromHand(4, 0x80)
int128_t var_1930
__builtin_memset(&var_1930, 0, 0x30)
var_1930.d = 0xd7
int128_t var_1920
var_1920:0xc.d = 0
int128_t var_1910
var_1910:8.q = 0
int64_t var_1900 = 0
void var_ca8
int64_t result = MayChooseCard(&var_ca8, 1, &var_1930, 0xb)

if (result.d != 0)
    int32_t x19_1 = result.d
    PlayCard(result, 0)
    result = MoveCardToCard(zx.q(x19_1), 0x3e9, zx.q(ThisCard(true, nullptr)), 0, 0, 0)
    
    if ((result.d & 1) != 0)
        FromSingle(zx.q(x19_1))
        return StartOfNextTurn(sub_a23a94, nullptr, &var_1930, 1, 2)

return result
