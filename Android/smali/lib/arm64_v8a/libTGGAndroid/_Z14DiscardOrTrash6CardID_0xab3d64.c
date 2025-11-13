// 函数: _Z14DiscardOrTrash6CardID
// 地址: 0xab3d64
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
int128_t var_50
__builtin_memset(&var_50, 0, 0x30)
var_50.d = 0x44
int128_t var_40
var_40:0xc.d = arg1.d
int128_t var_30
var_30:8.q = 0
int64_t var_20 = 0
int32_t x0 = ChooseWhere(arg1, 0x3ec, 2, &var_50, 0)

if (x0 == 2)
    return Trash(zx.q(x19), 0x3ee, 0)

if (x0 == 0x3ec)
    return DiscardCard(zx.q(x19), 0x3ee, 0xb, 7, 0)

pthread_kill(pthread_self(), 6)
XNoReturn()
return Loan() __tailcall
