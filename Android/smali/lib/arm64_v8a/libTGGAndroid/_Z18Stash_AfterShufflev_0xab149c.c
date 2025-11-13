// 函数: _Z18Stash_AfterShufflev
// 地址: 0xab149c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

LookThroughShuffling()
int32_t var_ca4 = ThisCard(false, nullptr)
int64_t result = CountWhere(0x44e)

if (result.d s< 1)
    return result

int128_t var_ca0
__builtin_memset(&var_ca0, 0, 0x38)
var_ca0.d = 0x101
int128_t var_c90
__builtin_memset(&var_c90:0xc, 0, 0x14)
var_ca0:8.q = &var_ca4
var_c90:8.d = 1
int32_t x0_1 = ChooseNumber(0, result.d - 1, &var_ca0, 0x2a, 0)
return MoveToSlot(zx.q(var_ca4), 0x44e, 0x44e, x0_1)
