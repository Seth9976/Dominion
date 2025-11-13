// 函数: _Z6Islandv
// 地址: 0xacbde4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_50
__builtin_memset(&var_50, 0, 0x30)
var_50.d = 0x3d
int128_t var_40
var_40:0xc.d = 0
int128_t var_30
var_30:8.q = 0
int64_t var_20 = 0
int32_t x0 = ChooseOneFromHand(0x19, &var_50, 0x13, 0)
int64_t result = MoveCardTo(ThisCard(false, nullptr), 0x3e9, 0x460, 0, 0, 0xb, 0)

if (x0 == 0)
    return result

return MoveCardTo(zx.q(x0), 0x3ea, 0x460, 0, 0, 0xb, 0)
