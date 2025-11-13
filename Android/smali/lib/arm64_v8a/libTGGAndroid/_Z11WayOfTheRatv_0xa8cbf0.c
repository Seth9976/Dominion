// 函数: _Z11WayOfTheRatv
// 地址: 0xa8cbf0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19

if ((CanGainCopy(ThisCard(false, nullptr)) & 1) == 0)
    x19 = 0xca
else
    x19 = 0xc9

int32_t x0_2 = ThisCard(false, nullptr)
int128_t var_50
__builtin_memset(&var_50, 0, 0x38)
int128_t var_40
var_40:0xc.d = x0_2
var_50.d = x19
int64_t result = MayDiscardOne(2, &var_50)

if (result.d == 0)
    return result

return GainCopy(ThisCard(false, nullptr), 0x476)
