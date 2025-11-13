// 函数: _Z11GainCheaper7DomCost8DomWhere14DomChoiceFlags
// 地址: 0xad5f14
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_28 = arg1
void* x0 = DomGetContext()
CardID var_cb8
int32_t x0_2 = CardsSupplyTops(*(x0 + 8), zx.q(*(x0 + 0x18)), &var_cb8, 4)
int32_t var_38 = x0_2
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<GainCheaper(DomCost, DomWhere, DomChoiceFlags)::$_13, std::__ndk1::allocator<GainCheaper(DomCost, DomWhere, DomChoiceFlags)::$_13>, bool (CardID)>::VTable
    * const var_cf0 = &_vtable_for_std::__ndk1::__function::__func<GainCheaper(DomCost, DomWhere, DomChoiceFlags)::$_13, std::__ndk1::allocator<GainCheaper(DomCost, DomWhere, DomChoiceFlags)::$_13>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
int32_t* var_ce8 = &var_28
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<GainCheaper(DomCost, DomWhere, DomChoiceFlags)::$_13, std::__ndk1::allocator<GainCheaper(DomCost, DomWhere, DomChoiceFlags)::$_13>, bool (CardID)>::VTable
    * const* var_cd0 = &var_cf0
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<GainCheaper(DomCost, DomWhere, DomChoiceFlags)::$_13, std::__ndk1::allocator<GainCheaper(DomCost, DomWhere, DomChoiceFlags)::$_13>, bool (CardID)>::VTable
    * const var_d30
int64_t* var_d10 = &var_d30
var_d30 = &_vtable_for_std::__ndk1::__function::__func<GainCheaper(DomCost, DomWhere, DomChoiceFlags)::$_13, std::__ndk1::allocator<GainCheaper(DomCost, DomWhere, DomChoiceFlags)::$_13>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
int32_t* var_d28 = &var_28
int32_t var_24
int32_t x0_4 = FilterCardsInt(&var_d30, &var_cb8, x0_2, nullptr, &var_24)

if (&var_d30 == var_d10)
    (*(*var_d10 + 0x20))()
else if (var_d10 != 0)
    (*(*var_d10 + 0x28))()

if (&var_cf0 == var_cd0)
    (*var_cd0)->vFunc_4()
else if (var_cd0 != 0)
    (*var_cd0)->j_operator delete()

if (x0_4 == 0)
    return 0

int32_t x8_8 = var_28
__builtin_memset(&var_d30, 0, 0x30)
var_d30.d = 0xd
int128_t var_d20
var_d20:0xc.d = x8_8
int64_t var_d08_1 = 0
int64_t var_d00_1 = 0
uint64_t result = ChooseCard(&var_cb8, 7, &var_d30, 0xc, zx.q(arg3))

if (result.d == 0)
    return result

int32_t x20_1 = result.d
void* x0_8 = DomGetContext()
int32_t var_d40_1 = 4

if ((GainCard(*(x0_8 + 8), zx.q(*(x0_8 + 0x18)), zx.q(x20_1), zx.q(arg2), 0, 0x476, 0, 0) & 1) != 0)
    return zx.q(x20_1)

return 0
