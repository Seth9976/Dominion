// 函数: _Z25Haggler_WhileInPlay_OnBuyv
// 地址: 0xa7d010
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_1 = Cost(Trigger_BuyCard())
CardsSupplyTops(4, 0xffffffff)
int32_t var_cd8 = x0_1
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Haggler_WhileInPlay_OnBuy()::$_11, std::__ndk1::allocator<Haggler_WhileInPlay_OnBuy()::$_11>, bool (CardID)>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<Haggler_WhileInPlay_OnBuy()::$_11, std::__ndk1::allocator<Haggler_WhileInPlay_OnBuy()::$_11>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Haggler_WhileInPlay_OnBuy()::$_11, std::__ndk1::allocator<Haggler_WhileInPlay_OnBuy()::$_11>, bool (CardID)>::VTable
    * const* var_cc0 = &var_ce0
CardIDs var_ca8
FilterCards(&var_ce0, &var_ca8, nullptr)

if (&var_ce0 == var_cc0)
    (*var_cc0)->vFunc_4()
else if (var_cc0 != 0)
    (*var_cc0)->j_operator delete()

int128_t var_d20
__builtin_memset(&var_d20, 0, 0x30)
var_d20.d = 0x61
int128_t var_d10
var_d10:0xc.d = x0_1
int128_t var_d00
var_d00:8.q = 0
int64_t var_cf0 = 0
return GainOneOf(&var_ca8, &var_d20, 0x476, 0)
