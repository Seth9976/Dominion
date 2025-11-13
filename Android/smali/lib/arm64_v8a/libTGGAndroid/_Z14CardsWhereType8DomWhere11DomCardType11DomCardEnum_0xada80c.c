// 函数: _Z14CardsWhereType8DomWhere11DomCardType11DomCardEnum
// 地址: 0xada80c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x20 = arg2
int32_t x21 = arg1
int64_t var_68 = arg2
int32_t var_28 = arg3
void* x0 = DomGetContext()
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<CardsWhereType(DomWhere, DomCardType, DomCardEnum)::$_27, std::__ndk1::allocator<CardsWhereType(DomWhere, DomCardType, DomCardEnum)::$_27>, bool (CardID)>::VTable
    * const var_60
int32_t var_24
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<CardsWhereType(DomWhere, DomCardType, DomCardEnum)::$_27, std::__ndk1::allocator<CardsWhereType(DomWhere, DomCardType, DomCardEnum)::$_27>, bool (CardID)>::VTable
    * const* result
CardID* entry_x8
int32_t x2_1

if (x21 == 0)
    result = CardsOwned(*(x0 + 8), zx.q(*(x0 + 0x18)), entry_x8)
    x2_1 = result.d
    *(entry_x8 + 0xc80) = result.d
    
    if (x20 != 0)
    label_ada8b8:
        struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<CardsWhereType(DomWhere, DomCardType, DomCardEnum)::$_27, std::__ndk1::allocator<CardsWhereType(DomWhere, DomCardType, DomCardEnum)::$_27>, bool (CardID)>::VTable
            * const var_a0 = &_vtable_for_std::__ndk1::__function::__func<CardsWhereType(DomWhere, DomCardType, DomCardEnum)::$_27, std::__ndk1::allocator<CardsWhereType(DomWhere, DomCardType, DomCardEnum)::$_27>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
        int64_t* var_98_1 = &var_68
        struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<CardsWhereType(DomWhere, DomCardType, DomCardEnum)::$_27, std::__ndk1::allocator<CardsWhereType(DomWhere, DomCardType, DomCardEnum)::$_27>, bool (CardID)>::VTable
            * const* result_2 = &var_a0
        int64_t* var_40_1 = &var_60
        var_60 = &_vtable_for_std::__ndk1::__function::__func<CardsWhereType(DomWhere, DomCardType, DomCardEnum)::$_27, std::__ndk1::allocator<CardsWhereType(DomWhere, DomCardType, DomCardEnum)::$_27>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
        int64_t* var_58_1 = &var_68
        *(entry_x8 + 0xc80) = FilterCardsInt(&var_60, entry_x8, x2_1, nullptr, &var_24)
        
        if (&var_60 == var_40_1)
            (*(*var_40_1 + 0x20))()
        else if (var_40_1 != 0)
            (*(*var_40_1 + 0x28))()
        
        result = result_2
        
        if (&var_a0 == result)
            result = (*result)->vFunc_4()
        else if (result != 0)
            result = (*result)->j_operator delete()
else
    uint64_t x1
    
    if ((IsGlobalPile(zx.q(x21)) & 1) == 0)
        x1 = zx.q(*(x0 + 0x18))
    else
        x1 = 0xffffffff
    
    result = CardsWhere(*(x0 + 8), x1, zx.q(x21), entry_x8)
    x2_1 = result.d
    *(entry_x8 + 0xc80) = result.d
    
    if (x20 != 0)
        goto label_ada8b8

if (var_28 != 0)
    int32_t x2_3 = *(entry_x8 + 0xc80)
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<CardsWhereType(DomWhere, DomCardType, DomCardEnum)::$_27, std::__ndk1::allocator<CardsWhereType(DomWhere, DomCardType, DomCardEnum)::$_27>, bool (CardID)>::VTable
        * var_d0 = &_vtable_for_std::__ndk1::__function::__func<CardsWhereType(DomWhere, DomCardType, DomCardEnum)::$_28, std::__ndk1::allocator<CardsWhereType(DomWhere, DomCardType, DomCardEnum)::$_28>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
    int32_t* var_c8_1 = &var_28
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<CardsWhereType(DomWhere, DomCardType, DomCardEnum)::$_27, std::__ndk1::allocator<CardsWhereType(DomWhere, DomCardType, DomCardEnum)::$_27>, bool (CardID)>::VTable
        ** result_1 = &var_d0
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<CardsWhereType(DomWhere, DomCardType, DomCardEnum)::$_27, std::__ndk1::allocator<CardsWhereType(DomWhere, DomCardType, DomCardEnum)::$_27>, bool (CardID)>::VTable
        * const* var_40_2 = &var_60
    var_60 = &_vtable_for_std::__ndk1::__function::__func<CardsWhereType(DomWhere, DomCardType, DomCardEnum)::$_28, std::__ndk1::allocator<CardsWhereType(DomWhere, DomCardType, DomCardEnum)::$_28>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
    int32_t* var_58_2 = &var_28
    *(entry_x8 + 0xc80) = FilterCardsInt(&var_60, entry_x8, x2_3, nullptr, &var_24)
    
    if (&var_60 == var_40_2)
        (*var_40_2)->vFunc_4()
    else if (var_40_2 != 0)
        (*var_40_2)->j_operator delete()
    
    result = result_1
    
    if (&var_d0 == result)
        return (*result)->vFunc_4()
    
    if (result != 0)
        return (*result)->j_operator delete()

return result
