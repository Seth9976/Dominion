// 函数: _Z7Vampirev
// 地址: 0xa96ad4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = RevealHex(true)
int32_t var_48 = x0
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Vampire()::$_20, std::__ndk1::allocator<Vampire()::$_20>, void ()>::VTable
    * const var_50 = &_vtable_for_std::__ndk1::__function::__func<Vampire()::$_20, std::__ndk1::allocator<Vampire()::$_20>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Vampire()::$_20, std::__ndk1::allocator<Vampire()::$_20>, void ()>::VTable
    * const* var_30 = &var_50
OtherPlayers(&var_50)

if (&var_50 == var_30)
    (*var_30)->vFunc_4()
else if (var_30 != 0)
    (*var_30)->j_operator delete()

DiscardHex(zx.q(x0))
CardsSupplyTops(4, 0xffffffff)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Vampire()::$_21, std::__ndk1::allocator<Vampire()::$_21>, bool (CardID)>::VTable
    * const var_d10 = &_vtable_for_std::__ndk1::__function::__func<Vampire()::$_21, std::__ndk1::allocator<Vampire()::$_21>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Vampire()::$_21, std::__ndk1::allocator<Vampire()::$_21>, bool (CardID)>::VTable
    * const* var_cf0 = &var_d10
CardIDs var_cd8
FilterCards(&var_d10, &var_cd8, nullptr)

if (&var_d10 == var_cf0)
    (*var_cf0)->vFunc_4()
else if (var_cf0 != 0)
    (*var_cf0)->j_operator delete()

int128_t var_d50
__builtin_memset(&var_d50, 0, 0x30)
var_d50.d = 0xaa
int128_t var_d40
var_d40:0xc.d = 0
int128_t var_d30
var_d30:8.q = 0
int64_t var_d20 = 0
GainOneOf(&var_cd8, &var_d50, 0x476, 0)
return ExchangeCard(ThisCard(false, nullptr), 0x3e9, 0xd2a)
