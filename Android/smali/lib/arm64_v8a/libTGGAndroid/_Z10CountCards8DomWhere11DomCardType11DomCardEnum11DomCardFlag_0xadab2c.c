// 函数: _Z10CountCards8DomWhere11DomCardType11DomCardEnum11DomCardFlag
// 地址: 0xadab2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg1
int64_t var_68 = arg2
int32_t var_6c = arg3
int32_t var_70 = arg4
void* x0 = DomGetContext()
CardID var_cf8
int32_t var_78
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<CountCards(DomWhere, DomCardType, DomCardEnum, DomCardFlag)::$_30, std::__ndk1::allocator<CountCards(DomWhere, DomCardType, DomCardEnum, DomCardFlag)::$_30>, bool (CardID)>::VTable
    * const var_60
int64_t* var_58
int32_t var_24
int128_t v0
int32_t x2_1

if (x20 == 0)
    int32_t x0_4
    x0_4, v0 = CardsOwned(*(x0 + 8), zx.q(*(x0 + 0x18)), &var_cf8)
    x2_1 = x0_4
    var_78 = x0_4
    
    if (var_68 != 0)
    label_adabdc:
        struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<CountCards(DomWhere, DomCardType, DomCardEnum, DomCardFlag)::$_30, std::__ndk1::allocator<CountCards(DomWhere, DomCardType, DomCardEnum, DomCardFlag)::$_30>, bool (CardID)>::VTable
            * const var_d30 = &_vtable_for_std::__ndk1::__function::__func<CountCards(DomWhere, DomCardType, DomCardEnum, DomCardFlag)::$_30, std::__ndk1::allocator<CountCards(DomWhere, DomCardType, DomCardEnum, DomCardFlag)::$_30>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
        int64_t* var_d28_1 = &var_68
        struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<CountCards(DomWhere, DomCardType, DomCardEnum, DomCardFlag)::$_30, std::__ndk1::allocator<CountCards(DomWhere, DomCardType, DomCardEnum, DomCardFlag)::$_30>, bool (CardID)>::VTable
            * const* var_d10_1 = &var_d30
        int64_t* var_40_1 = &var_60
        var_60 = &_vtable_for_std::__ndk1::__function::__func<CountCards(DomWhere, DomCardType, DomCardEnum, DomCardFlag)::$_30, std::__ndk1::allocator<CountCards(DomWhere, DomCardType, DomCardEnum, DomCardFlag)::$_30>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
        var_58 = &var_68
        int32_t x0_8
        x0_8, v0 = FilterCardsInt(&var_60, &var_cf8, x2_1, nullptr, &var_24)
        var_78 = x0_8
        
        if (&var_60 == var_40_1)
            (*(*var_40_1 + 0x20))()
        else if (var_40_1 != 0)
            (*(*var_40_1 + 0x28))()
        
        if (&var_d30 == var_d10_1)
            (*var_d10_1)->vFunc_4()
        else if (var_d10_1 != 0)
            (*var_d10_1)->j_operator delete()
else
    uint64_t x1
    void* x3
    
    if ((IsGlobalPile(zx.q(x20)) & 1) == 0)
        x1 = zx.q(*(x0 + 0x18))
        x3 = &var_cf8
    else
        x3 = &var_cf8
        x1 = 0xffffffff
    
    int32_t x0_6
    x0_6, v0 = CardsWhere(*(x0 + 8), x1, zx.q(x20), x3)
    x2_1 = x0_6
    var_78 = x0_6
    
    if (var_68 != 0)
        goto label_adabdc

if (var_6c != 0)
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<CountCards(DomWhere, DomCardType, DomCardEnum, DomCardFlag)::$_31, std::__ndk1::allocator<CountCards(DomWhere, DomCardType, DomCardEnum, DomCardFlag)::$_31>, bool (CardID)>::VTable
        * const var_d60 = &_vtable_for_std::__ndk1::__function::__func<CountCards(DomWhere, DomCardType, DomCardEnum, DomCardFlag)::$_31, std::__ndk1::allocator<CountCards(DomWhere, DomCardType, DomCardEnum, DomCardFlag)::$_31>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
    int32_t* var_d58_1 = &var_6c
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<CountCards(DomWhere, DomCardType, DomCardEnum, DomCardFlag)::$_31, std::__ndk1::allocator<CountCards(DomWhere, DomCardType, DomCardEnum, DomCardFlag)::$_31>, bool (CardID)>::VTable
        * const* var_d40_1 = &var_d60
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<CountCards(DomWhere, DomCardType, DomCardEnum, DomCardFlag)::$_30, std::__ndk1::allocator<CountCards(DomWhere, DomCardType, DomCardEnum, DomCardFlag)::$_30>, bool (CardID)>::VTable
        * const* var_40_2 = &var_60
    var_60 = &_vtable_for_std::__ndk1::__function::__func<CountCards(DomWhere, DomCardType, DomCardEnum, DomCardFlag)::$_31, std::__ndk1::allocator<CountCards(DomWhere, DomCardType, DomCardEnum, DomCardFlag)::$_31>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
    var_58 = &var_6c
    int32_t x0_12
    x0_12, v0 = FilterCardsInt(&var_60, &var_cf8, var_78, nullptr, &var_24)
    var_78 = x0_12
    
    if (&var_60 == var_40_2)
        (*var_40_2)->vFunc_4()
    else if (var_40_2 != 0)
        (*var_40_2)->j_operator delete()
    
    if (&var_d60 == var_d40_1)
        (*var_d40_1)->vFunc_4()
    else if (var_d40_1 != 0)
        (*var_d40_1)->j_operator delete()

if (var_70 != 0xffffffff)
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<CountCards(DomWhere, DomCardType, DomCardEnum, DomCardFlag)::$_32, std::__ndk1::allocator<CountCards(DomWhere, DomCardType, DomCardEnum, DomCardFlag)::$_32>, bool (CardID)>::VTable
        * const var_d90 = &_vtable_for_std::__ndk1::__function::__func<CountCards(DomWhere, DomCardType, DomCardEnum, DomCardFlag)::$_32, std::__ndk1::allocator<CountCards(DomWhere, DomCardType, DomCardEnum, DomCardFlag)::$_32>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
    int32_t* var_d80_1 = &var_70
    var_60 = &_vtable_for_std::__ndk1::__function::__func<CountCards(DomWhere, DomCardType, DomCardEnum, DomCardFlag)::$_32, std::__ndk1::allocator<CountCards(DomWhere, DomCardType, DomCardEnum, DomCardFlag)::$_32>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<CountCards(DomWhere, DomCardType, DomCardEnum, DomCardFlag)::$_32, std::__ndk1::allocator<CountCards(DomWhere, DomCardType, DomCardEnum, DomCardFlag)::$_32>, bool (CardID)>::VTable
        * const* var_d70_1 = &var_d90
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<CountCards(DomWhere, DomCardType, DomCardEnum, DomCardFlag)::$_30, std::__ndk1::allocator<CountCards(DomWhere, DomCardType, DomCardEnum, DomCardFlag)::$_30>, bool (CardID)>::VTable
        * const* var_40_3 = &var_60
    var_58.o = x0.o
    var_78 = FilterCardsInt(&var_60, &var_cf8, var_78, nullptr, &var_24)
    
    if (&var_60 == var_40_3)
        (*var_40_3)->vFunc_4()
    else if (var_40_3 != 0)
        (*var_40_3)->j_operator delete()
    
    if (&var_d90 == var_d70_1)
        (*var_d70_1)->vFunc_4()
    else if (var_d70_1 != 0)
        (*var_d70_1)->j_operator delete()

return zx.q(var_78)
