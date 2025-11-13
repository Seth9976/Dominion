// 函数: _Z27CardsBeingDiscardedFromPlay6CardID11DomCardType
// 地址: 0xae4260
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x21 = arg2
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<CardsBeingDiscardedFromPlay(CardID, DomCardType)::$_42, std::__ndk1::allocator<CardsBeingDiscardedFromPlay(CardID, DomCardType)::$_42>, bool (CardID)>::VTable
    * const* result
CardID* entry_x8

if (arg1 == 0)
    CardsWhereType(0x3e9, x21, 0)
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<CardsBeingDiscardedFromPlay(CardID, DomCardType)::$_42, std::__ndk1::allocator<CardsBeingDiscardedFromPlay(CardID, DomCardType)::$_42>, bool (CardID)>::VTable
        * const var_cc0
    memcpy(entry_x8, &var_cc0, 0xc84)
    int32_t x2_1 = *(entry_x8 + 0xc80)
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<CardsBeingDiscardedFromPlay(CardID, DomCardType)::$_42, std::__ndk1::allocator<CardsBeingDiscardedFromPlay(CardID, DomCardType)::$_42>, bool (CardID)>::VTable
        * const var_cf0 = &_vtable_for_std::__ndk1::__function::__func<CardsBeingDiscardedFromPlay(CardID, DomCardType)::$_42, std::__ndk1::allocator<CardsBeingDiscardedFromPlay(CardID, DomCardType)::$_42>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<CardsBeingDiscardedFromPlay(CardID, DomCardType)::$_42, std::__ndk1::allocator<CardsBeingDiscardedFromPlay(CardID, DomCardType)::$_42>, bool (CardID)>::VTable
        * const* result_1 = &var_cf0
    int64_t* var_ca0_1 = &var_cc0
    var_cc0 = &_vtable_for_std::__ndk1::__function::__func<CardsBeingDiscardedFromPlay(CardID, DomCardType)::$_42, std::__ndk1::allocator<CardsBeingDiscardedFromPlay(CardID, DomCardType)::$_42>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
    int32_t var_24
    *(entry_x8 + 0xc80) = FilterCardsInt(&var_cc0, entry_x8, x2_1, nullptr, &var_24)
    
    if (&var_cc0 == var_ca0_1)
        (*(*var_ca0_1 + 0x20))()
    else if (var_ca0_1 != 0)
        (*(*var_ca0_1 + 0x28))()
    
    result = result_1
    
    if (&var_cf0 == result)
        return (*result)->vFunc_4()
    
    if (result != 0)
        return (*result)->j_operator delete()
else
    int32_t x20_1 = arg1
    *(entry_x8 + 0xc80) = 0
    result = CardIs(*(DomGetContext() + 8), zx.q(x20_1), x21)
    
    if ((result.d & 1) != 0)
        result = GameAssert((*(entry_x8 + 0xc80) s< 0x320 ? 1 : 0).b)
        int64_t x8_1 = sx.q(*(entry_x8 + 0xc80))
        *(entry_x8 + 0xc80) = x8_1.d + 1
        *(entry_x8 + (x8_1 << 2)) = x20_1
return result
