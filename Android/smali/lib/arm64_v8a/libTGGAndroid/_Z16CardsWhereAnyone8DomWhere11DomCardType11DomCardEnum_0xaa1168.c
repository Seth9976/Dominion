// 函数: _Z16CardsWhereAnyone8DomWhere11DomCardType11DomCardEnum
// 地址: 0xaa1168
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i = arg1
int64_t var_38 = arg2
int32_t var_3c = arg3
void* x0 = DomGetContext()
CardIDs* entry_x8
*(entry_x8 + 0xc80) = 0
int64_t* result = *(x0 + 8)

if (result[0x1a8].d s>= 1)
    if (i == 0)
        int32_t x8_6 = 0
        
        do
            int32_t x0_3 = CardsOwned(result, zx.q(i), entry_x8 + (sx.q(x8_6) << 2))
            i += 1
            x8_6 = *(entry_x8 + 0xc80) + x0_3
            *(entry_x8 + 0xc80) = x8_6
            result = *(x0 + 8)
        while (i s< result[0x1a8].d)
    else
        int32_t i_1 = 0
        
        do
            IsGlobalPile(zx.q(i))
            result = CardsWhere(*(x0 + 8), zx.q(i_1), zx.q(i), 
                entry_x8 + (sx.q(*(entry_x8 + 0xc80)) << 2))
            i_1 += 1
            *(entry_x8 + 0xc80) += result.d
        while (i_1 s< *(*(x0 + 8) + 0xd40))

if (arg2 != 0)
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<CardsWhereAnyone(DomWhere, DomCardType, DomCardEnum)::$_0, std::__ndk1::allocator<CardsWhereAnyone(DomWhere, DomCardType, DomCardEnum)::$_0>, bool (CardID)>::VTable
        * const var_70 = &_vtable_for_std::__ndk1::__function::__func<CardsWhereAnyone(DomWhere, DomCardType, DomCardEnum)::$_0, std::__ndk1::allocator<CardsWhereAnyone(DomWhere, DomCardType, DomCardEnum)::$_0>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
    int64_t* var_68_1 = &var_38
    int64_t* result_2 = &var_70
    FilterCards(&var_70, entry_x8, nullptr)
    result = result_2
    
    if (&var_70 == result)
        result = (*(*result + 0x20))()
    else if (result != 0)
        result = (*(*result + 0x28))()

if (var_3c != 0)
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<CardsWhereAnyone(DomWhere, DomCardType, DomCardEnum)::$_1, std::__ndk1::allocator<CardsWhereAnyone(DomWhere, DomCardType, DomCardEnum)::$_1>, bool (CardID)>::VTable
        * const var_a0 = &_vtable_for_std::__ndk1::__function::__func<CardsWhereAnyone(DomWhere, DomCardType, DomCardEnum)::$_1, std::__ndk1::allocator<CardsWhereAnyone(DomWhere, DomCardType, DomCardEnum)::$_1>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
    int32_t* var_98_1 = &var_3c
    int64_t* result_1 = &var_a0
    FilterCards(&var_a0, entry_x8, nullptr)
    result = result_1
    
    if (&var_a0 == result)
        return (*(*result + 0x20))()
    
    if (result != 0)
        return (*(*result + 0x28))()

return result
