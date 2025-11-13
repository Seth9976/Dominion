// 函数: _Z19GetPlayableFromHand11DomCardEnum
// 地址: 0xad958c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg1
CardsWhereType(0x3ea, 0, 0)
CardsWhereType(0x3eb, 0x100000000000, 0)
int32_t i_2
uint64_t i_1 = zx.q(i_2)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<GetPlayableFromHand(DomCardEnum)::$_25, std::__ndk1::allocator<GetPlayableFromHand(DomCardEnum)::$_25>, bool (CardID)>::VTable
    * const var_cc0
CardIDs* entry_x8

if (i_1.d s>= 1)
    int64_t* x9_1 = &var_cc0
    uint64_t i
    
    do
        int32_t x10_1 = *x9_1
        x9_1 += 4
        int64_t x11_1 = sx.q(*(entry_x8 + 0xc80))
        i = i_1
        i_1 -= 1
        *(entry_x8 + 0xc80) = x11_1.d + 1
        *(entry_x8 + (x11_1 << 2)) = x10_1
    while (i != 1)

int32_t x2 = *(entry_x8 + 0xc80)
int32_t var_ce8 = x20
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<GetPlayableFromHand(DomCardEnum)::$_25, std::__ndk1::allocator<GetPlayableFromHand(DomCardEnum)::$_25>, bool (CardID)>::VTable
    * const var_cf0 = &_vtable_for_std::__ndk1::__function::__func<GetPlayableFromHand(DomCardEnum)::$_25, std::__ndk1::allocator<GetPlayableFromHand(DomCardEnum)::$_25>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<GetPlayableFromHand(DomCardEnum)::$_25, std::__ndk1::allocator<GetPlayableFromHand(DomCardEnum)::$_25>, bool (CardID)>::VTable
    * const* var_cd0 = &var_cf0
int64_t* var_ca0 = &var_cc0
var_cc0 = &_vtable_for_std::__ndk1::__function::__func<GetPlayableFromHand(DomCardEnum)::$_25, std::__ndk1::allocator<GetPlayableFromHand(DomCardEnum)::$_25>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
int32_t var_cb8 = x20
int32_t var_24
*(entry_x8 + 0xc80) = FilterCardsInt(&var_cc0, entry_x8, x2, nullptr, &var_24)

if (&var_cc0 == var_ca0)
    (*(*var_ca0 + 0x20))()
else if (var_ca0 != 0)
    (*(*var_ca0 + 0x28))()

if (&var_cf0 == var_cd0)
    (*var_cd0)->vFunc_4()
else if (var_cd0 != 0)
    (*var_cd0)->j_operator delete()

void* x0_4 = DomGetContext()
return FilterPlayableFromHand(*(x0_4 + 8), zx.q(*(x0_4 + 0x18)), entry_x8)
