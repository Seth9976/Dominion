// 函数: _Z25GainCheaperThatSharesType6CardID16TriggerEventFlag
// 地址: 0xae4a60
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg1
int64_t var_38 = CardTypeQuery(*(DomGetContext() + 8), 
    zx.q(CardWhat(*(DomGetContext() + 8), zx.q(x20))), false, -1)
void* x0_6 = DomGetContext()
int32_t var_28 = CardCost(*(x0_6 + 8), zx.q(*(x0_6 + 0x18)), zx.q(x20), 0)
void* x0_9 = DomGetContext()
CardID var_cc0
int32_t x0_11
int128_t v0
x0_11, v0 = CardsSupplyTops(*(x0_9 + 8), zx.q(*(x0_9 + 0x18)), &var_cc0, 4)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<GainCheaperThatSharesType(CardID, TriggerEventFlag)::$_45, std::__ndk1::allocator<GainCheaperThatSharesType(CardID, TriggerEventFlag)::$_45>, bool (CardID)>::VTable
    * const var_cf0 = &_vtable_for_std::__ndk1::__function::__func<GainCheaperThatSharesType(CardID, TriggerEventFlag)::$_45, std::__ndk1::allocator<GainCheaperThatSharesType(CardID, TriggerEventFlag)::$_45>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
int64_t* var_ce0 = &var_38
int32_t var_40 = x0_11
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<GainCheaperThatSharesType(CardID, TriggerEventFlag)::$_45, std::__ndk1::allocator<GainCheaperThatSharesType(CardID, TriggerEventFlag)::$_45>, bool (CardID)>::VTable
    * const* var_cd0 = &var_cf0
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<GainCheaperThatSharesType(CardID, TriggerEventFlag)::$_45, std::__ndk1::allocator<GainCheaperThatSharesType(CardID, TriggerEventFlag)::$_45>, bool (CardID)>::VTable
    * const var_d30
int64_t* var_d10 = &var_d30
var_d30 = &_vtable_for_std::__ndk1::__function::__func<GainCheaperThatSharesType(CardID, TriggerEventFlag)::$_45, std::__ndk1::allocator<GainCheaperThatSharesType(CardID, TriggerEventFlag)::$_45>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
int128_t var_d28 = (&var_28).o
int32_t var_24
int32_t x0_13 = FilterCardsInt(&var_d30, &var_cc0, x0_11, nullptr, &var_24)

if (&var_d30 == var_d10)
    (*(*var_d10 + 0x20))()
else if (var_d10 != 0)
    (*(*var_d10 + 0x28))()

if (&var_cf0 == var_cd0)
    (*var_cd0)->vFunc_4()
else if (var_cd0 != 0)
    (*var_cd0)->j_operator delete()

if (x0_13 == 0)
    return 0

int32_t x8_9 = var_28
int64_t x9_1 = var_38
__builtin_memset(&var_d30, 0, 0x30)
var_d30.d = 0xd8
int32_t var_d14_1 = x8_9
int64_t var_d10_1 = x9_1
int64_t var_d08_1 = 0
int64_t var_d00_1 = 0
uint64_t result = ChooseCard(&var_cc0, 7, &var_d30, 0xc, 0)

if (result.d == 0)
    return result

int32_t x20_1 = result.d
void* x0_17 = DomGetContext()
int32_t var_d40_1 = 4

if ((GainCard(*(x0_17 + 8), zx.q(*(x0_17 + 0x18)), zx.q(x20_1), 0x476, 0, 0x476, 0, zx.q(arg2)) & 1)
        != 0)
    return zx.q(x20_1)

return 0
