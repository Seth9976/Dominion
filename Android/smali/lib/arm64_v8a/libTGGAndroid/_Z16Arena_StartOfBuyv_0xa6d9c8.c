// 函数: _Z16Arena_StartOfBuyv
// 地址: 0xa6d9c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_50
__builtin_memset(&var_50, 0, 0x30)
var_50.d = 0x9e
int128_t var_40
var_40:0xc.d = 0
int128_t var_30
var_30:8.q = 0
int64_t var_20 = 0
int64_t result = MayDiscardOne(4, &var_50)

if (result.d == 0)
    return result

if (CountTokensHere(0x601) != 0)
    NotifyResult(1)

DoLandscapeTracking(2)
return TakeTokensHere(0x601, 2)
