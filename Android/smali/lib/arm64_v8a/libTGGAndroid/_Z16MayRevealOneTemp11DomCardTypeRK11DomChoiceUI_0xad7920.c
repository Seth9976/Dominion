// 函数: _Z16MayRevealOneTemp11DomCardTypeRK11DomChoiceUI
// 地址: 0xad7920
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_d08 = arg1
CardsWhereType(0x3ea, 0, 0)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<MayRevealOneTemp(DomCardType, DomChoiceUI const&)::$_22, std::__ndk1::allocator<MayRevealOneTemp(DomCardType, DomChoiceUI const&)::$_22>, bool (CardID)>::VTable
    * const var_19c0 = &_vtable_for_std::__ndk1::__function::__func<MayRevealOneTemp(DomCardType, DomChoiceUI const&)::$_22, std::__ndk1::allocator<MayRevealOneTemp(DomCardType, DomChoiceUI const&)::$_22>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
int64_t* var_19b8 = &var_d08
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<MayRevealOneTemp(DomCardType, DomChoiceUI const&)::$_22, std::__ndk1::allocator<MayRevealOneTemp(DomCardType, DomChoiceUI const&)::$_22>, bool (CardID)>::VTable
    * const* var_19a0 = &var_19c0
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<MayRevealOneTemp(DomCardType, DomChoiceUI const&)::$_22, std::__ndk1::allocator<MayRevealOneTemp(DomCardType, DomChoiceUI const&)::$_22>, bool (CardID)>::VTable
    * const var_d00
int64_t* var_ce0 = &var_d00
var_d00 = &_vtable_for_std::__ndk1::__function::__func<MayRevealOneTemp(DomCardType, DomChoiceUI const&)::$_22, std::__ndk1::allocator<MayRevealOneTemp(DomCardType, DomChoiceUI const&)::$_22>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
int64_t* var_cf8 = &var_d08
int32_t var_2648
CardID var_1990
int32_t var_d10
int32_t x0_1 = FilterCardsInt(&var_d00, &var_1990, var_d10, nullptr, &var_2648)

if (&var_d00 == var_ce0)
    (*(*var_ce0 + 0x20))()
else if (var_ce0 != 0)
    (*(*var_ce0 + 0x28))()

if (&var_19c0 == var_19a0)
    (*var_19a0)->vFunc_4()
else if (var_19a0 != 0)
    (*var_19a0)->j_operator delete()

if (x0_1 != 0)
    int32_t* x0_4
    int128_t v0_1
    int128_t v1_1
    int128_t v2_1
    x0_4, v0_1, v1_1, v2_1 = DomGetContext()
    int64_t var_40_1 = *(arg2 + 0x30)
    int128_t var_60_1 = *(arg2 + 0x10)
    int128_t var_50_1 = *(arg2 + 0x20)
    int128_t var_70 = *arg2
    var_50_1:8.q = *(x0_4 + 0x40)
    memcpy(&var_d00, &var_1990, 0xc84)
    uint64_t x2_1 = zx.q(x0_4[6])
    int32_t x8_10 = x0_4[7]
    DomGame* x0_6 = *(x0_4 + 8)
    var_2648 = *x0_4
    int32_t var_2644_1 = x8_10
    int32_t var_2650_1 = 0
    int32_t var_2658_1 = 0
    int32_t var_2660_1 = 0x11
    int128_t* var_2668_1 = &var_70
    int32_t var_2670_1 = 0x20
    int32_t var_80
    int32_t var_80_1 = QueueChoiceCards(x0_6, &var_2648, x2_1, 1, &var_d00, zx.q(var_80), 1, 0)
    memcpy(&var_2648, &var_d00, 0xc84)
    int32_t var_19c8
    
    if (var_19c8 != 0)
        void* x0_9 = DomGetContext()
        RevealTemp(*(x0_9 + 8), &var_2648, 0x3ea, *(x0_9 + 0x40), zx.q(*(x0_9 + 0x48)), 0, 0)
        
        if (var_19c8 != 0)
            return zx.q(var_2648)

return 0
