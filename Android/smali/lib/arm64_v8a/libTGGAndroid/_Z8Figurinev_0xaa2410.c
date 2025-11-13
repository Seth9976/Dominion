// 函数: _Z8Figurinev
// 地址: 0xaa2410
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Card(2, 0, 0, nullptr)
int128_t var_50
__builtin_memset(&var_50, 0, 0x30)
var_50.d = 0x110
int128_t var_40
var_40:0xc.d = 0
int128_t var_30
var_30:8.q = 0
int64_t var_20 = 0
int64_t result = MayDiscardOne(4, &var_50)

if (result.d == 0)
    return result

Buy(1, 0)
MoneyPlus(1, 0, false)
return NotifyResult(1)
