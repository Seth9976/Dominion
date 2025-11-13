// 函数: _Z8Explorerv
// 地址: 0xacc334
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_50
__builtin_memset(&var_50, 0, 0x30)
var_50.d = 0x3f
int128_t var_40
var_40:0xc.d = 0
int128_t var_30
var_30:8.q = 0
int64_t var_20 = 0
int64_t x0_1

if (MayRevealOneTemp(0x103, &var_50) == 0)
    x0_1 = 0x105
else
    NotifyResult(1)
    x0_1 = 0x106

return GainCard(x0_1, 0x3ea, 0, 0, 4)
