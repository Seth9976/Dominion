// 函数: _Z10SilverMinev
// 地址: 0xaa2920
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_1 = Cost(ThisCard(false, nullptr))
CardsSupplyTops(4, 0xffffffff)
int32_t var_cd8 = x0_1
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<SilverMine()::$_39, std::__ndk1::allocator<SilverMine()::$_39>, bool (CardID)>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<SilverMine()::$_39, std::__ndk1::allocator<SilverMine()::$_39>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<SilverMine()::$_39, std::__ndk1::allocator<SilverMine()::$_39>, bool (CardID)>::VTable
    * const* result_1 = &var_ce0
CardIDs var_ca8
FilterCards(&var_ce0, &var_ca8, nullptr)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<SilverMine()::$_39, std::__ndk1::allocator<SilverMine()::$_39>, bool (CardID)>::VTable
    * const* result = result_1

if (&var_ce0 == result)
    result = (*result)->vFunc_4()
else if (result != 0)
    result = (*result)->j_operator delete()

int32_t var_28

if (var_28 == 0)
    return result

int128_t var_d20
__builtin_memset(&var_d20, 0, 0x30)
var_d20.d = 0x111
int128_t var_d10
var_d10:0xc.d = x0_1
int128_t var_d00
var_d00:8.q = 0
int64_t var_cf0_1 = 0
return GainCard(ChooseCard(&var_ca8, 7, &var_d20, 0xc, 0), 0x3ea, 1, 0, 4)
