// 函数: _Z7MayGain11DomCardEnum8DomWhereRK11DomChoiceUI
// 地址: 0xad6084
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_d04 = arg1
void* x0 = DomGetContext()
CardID var_1988
int32_t x0_2 = CardsBoardTops(*(x0 + 8), zx.q(*(x0 + 0x18)), &var_1988, 4)
int32_t var_d08 = x0_2
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<MayGain(DomCardEnum, DomWhere, DomChoiceUI const&)::$_14, std::__ndk1::allocator<MayGain(DomCardEnum, DomWhere, DomChoiceUI const&)::$_14>, bool (CardID)>::VTable
    * const var_19c0 = &_vtable_for_std::__ndk1::__function::__func<MayGain(DomCardEnum, DomWhere, DomChoiceUI const&)::$_14, std::__ndk1::allocator<MayGain(DomCardEnum, DomWhere, DomChoiceUI const&)::$_14>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
int32_t* var_19b8 = &var_d04
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<MayGain(DomCardEnum, DomWhere, DomChoiceUI const&)::$_14, std::__ndk1::allocator<MayGain(DomCardEnum, DomWhere, DomChoiceUI const&)::$_14>, bool (CardID)>::VTable
    * const* var_19a0 = &var_19c0
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<MayGain(DomCardEnum, DomWhere, DomChoiceUI const&)::$_14, std::__ndk1::allocator<MayGain(DomCardEnum, DomWhere, DomChoiceUI const&)::$_14>, bool (CardID)>::VTable
    * const var_d00
int64_t* var_ce0 = &var_d00
var_d00 = &_vtable_for_std::__ndk1::__function::__func<MayGain(DomCardEnum, DomWhere, DomChoiceUI const&)::$_14, std::__ndk1::allocator<MayGain(DomCardEnum, DomWhere, DomChoiceUI const&)::$_14>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
int32_t* var_cf8 = &var_d04
int128_t var_70
int32_t x0_4 = FilterCardsInt(&var_d00, &var_1988, x0_2, nullptr, &var_70)

if (&var_d00 == var_ce0)
    (*(*var_ce0 + 0x20))()
else if (var_ce0 != 0)
    (*(*var_ce0 + 0x28))()

if (&var_19c0 == var_19a0)
    (*var_19a0)->vFunc_4()
else if (var_19a0 != 0)
    (*var_19a0)->j_operator delete()

if (x0_4 == 0)
    return 0

int32_t* x0_7
int128_t v0_1
int128_t v1_1
int128_t v2_1
x0_7, v0_1, v1_1, v2_1 = DomGetContext()
int64_t var_40_1 = *(arg3 + 0x30)
int128_t var_50_1 = *(arg3 + 0x20)
int128_t var_60_1 = *(arg3 + 0x10)
var_70 = *arg3
var_50_1:8.q = *(x0_7 + 0x40)
memcpy(&var_d00, &var_1988, 0xc84)
DomGame* x0_9 = *(x0_7 + 8)
int32_t var_28 = *x0_7
int32_t var_24_1 = x0_7[7]
int32_t var_19d0_1 = 0
int32_t var_19d8_1 = 0
int32_t var_19e0_1 = 0xc
int128_t* var_19e8_1 = &var_70
int32_t var_19f0_1 = 7
int32_t var_80

if (QueueChoiceCards(x0_9, &var_28, zx.q(x0_7[6]), 1, &var_d00, zx.q(var_80), 1, 0) != 0)
    int32_t x20_1 = var_d00.d
    
    if (x20_1 != 0)
        void* x0_12 = DomGetContext()
        int32_t var_19f0_2 = 4
        
        if ((GainCard(*(x0_12 + 8), zx.q(*(x0_12 + 0x18)), zx.q(x20_1), zx.q(arg2), 0, 0x476, 0, 0)
                & 1) != 0)
            return zx.q(x20_1)

return 0
