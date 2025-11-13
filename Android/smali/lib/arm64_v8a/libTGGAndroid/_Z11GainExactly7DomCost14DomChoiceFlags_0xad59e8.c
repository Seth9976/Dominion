// 函数: _Z11GainExactly7DomCost14DomChoiceFlags
// 地址: 0xad59e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_28 = arg1
void* x0 = DomGetContext()
CardID var_cb0
int32_t x0_2 = CardsSupplyTops(*(x0 + 8), zx.q(*(x0 + 0x18)), &var_cb0, 4)
int32_t var_30 = x0_2
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<GainExactly(DomCost, DomChoiceFlags)::$_10, std::__ndk1::allocator<GainExactly(DomCost, DomChoiceFlags)::$_10>, bool (CardID)>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<GainExactly(DomCost, DomChoiceFlags)::$_10, std::__ndk1::allocator<GainExactly(DomCost, DomChoiceFlags)::$_10>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
int32_t* var_cd8 = &var_28
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<GainExactly(DomCost, DomChoiceFlags)::$_10, std::__ndk1::allocator<GainExactly(DomCost, DomChoiceFlags)::$_10>, bool (CardID)>::VTable
    * const* var_cc0 = &var_ce0
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<GainExactly(DomCost, DomChoiceFlags)::$_10, std::__ndk1::allocator<GainExactly(DomCost, DomChoiceFlags)::$_10>, bool (CardID)>::VTable
    * const var_d20
int64_t* var_d00 = &var_d20
var_d20 = &_vtable_for_std::__ndk1::__function::__func<GainExactly(DomCost, DomChoiceFlags)::$_10, std::__ndk1::allocator<GainExactly(DomCost, DomChoiceFlags)::$_10>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
int32_t* var_d18 = &var_28
int32_t var_24
int32_t x0_4 = FilterCardsInt(&var_d20, &var_cb0, x0_2, nullptr, &var_24)

if (&var_d20 == var_d00)
    (*(*var_d00 + 0x20))()
else if (var_d00 != 0)
    (*(*var_d00 + 0x28))()

if (&var_ce0 == var_cc0)
    (*var_cc0)->vFunc_4()
else if (var_cc0 != 0)
    (*var_cc0)->j_operator delete()

int32_t x19_1

if (x0_4 == 0)
    x19_1 = 0
else
    int32_t x8_9 = var_28
    __builtin_memset(&var_d20, 0, 0x30)
    var_d20.d = 0xa
    int128_t var_d10
    var_d10:0xc.d = x8_9
    int64_t var_cf8_1 = 0
    int64_t var_cf0_1 = 0
    x19_1 = ChooseCard(&var_cb0, 7, &var_d20, 0xc, zx.q(arg2))
    void* x0_9 = DomGetContext()
    int32_t var_d30_1 = 4
    GainCard(*(x0_9 + 8), zx.q(*(x0_9 + 0x18)), zx.q(x19_1), 0x476, 0, 0x476, 0, 0)

return zx.q(x19_1)
