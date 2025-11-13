// 函数: _Z8Exorcistv
// 地址: 0xa96074
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = TrashOne(7, 0)
int32_t var_14 = result.d

if (result.d == 0)
    return result

CardsBoardTops(4)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Exorcist()::$_8, std::__ndk1::allocator<Exorcist()::$_8>, bool (CardID)>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<Exorcist()::$_8, std::__ndk1::allocator<Exorcist()::$_8>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
int32_t* var_cd8_1 = &var_14
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Exorcist()::$_8, std::__ndk1::allocator<Exorcist()::$_8>, bool (CardID)>::VTable
    * const* var_cc0_1 = &var_ce0
CardIDs var_ca8
FilterCards(&var_ce0, &var_ca8, nullptr)

if (&var_ce0 == var_cc0_1)
    (*var_cc0_1)->vFunc_4()
else if (var_cc0_1 != 0)
    (*var_cc0_1)->j_operator delete()

int128_t var_d20
__builtin_memset(&var_d20, 0, 0x30)
var_d20.d = 0xa5
int128_t var_d10
var_d10:0xc.d = 0
int128_t var_d00
var_d00:8.q = 0
int64_t var_cf0_1 = 0
return GainOneOf(&var_ca8, &var_d20, 0x476, 0)
