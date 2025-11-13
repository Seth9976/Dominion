// 函数: _Z3Orbv
// 地址: 0xaa2d2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

LookThroughDiscard()
CardsWhere(0x3ec)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Orb()::$_48, std::__ndk1::allocator<Orb()::$_48>, bool (CardID)>::VTable
    * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<Orb()::$_48, std::__ndk1::allocator<Orb()::$_48>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Orb()::$_48, std::__ndk1::allocator<Orb()::$_48>, bool (CardID)>::VTable
    * const* var_cc0 = &var_ce0
CardIDs var_ca8
FilterCards(&var_ce0, &var_ca8, nullptr)

if (&var_ce0 == var_cc0)
    (*var_cc0)->vFunc_4()
else if (var_cc0 != 0)
    (*var_cc0)->j_operator delete()

int32_t var_28
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Orb()::$_51, std::__ndk1::allocator<Orb()::$_51>, void ()>::VTable
    * const* result
int64_t (* const x8_12)(void* arg1)
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Orb()::$_51, std::__ndk1::allocator<Orb()::$_51>, void ()>::VTable
    * const var_d60
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Orb()::$_52, std::__ndk1::allocator<Orb()::$_52>, void ()>::VTable
    * const var_d20

if (var_28 == 0)
    var_d60 = &_vtable_for_std::__ndk1::__function::__func<Orb()::$_49, std::__ndk1::allocator<Orb()::$_49>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
    struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Orb()::$_51, std::__ndk1::allocator<Orb()::$_51>, void ()>::VTable
        ** result_2 = &var_d60
    var_d20 = &_vtable_for_std::__ndk1::__function::__func<Orb()::$_50, std::__ndk1::allocator<Orb()::$_50>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
    struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Orb()::$_52, std::__ndk1::allocator<Orb()::$_52>, void ()>::VTable
        * const* var_d00_1 = &var_d20
    int64_t var_d30_1 = 0xc8
    int64_t var_cf0_1 = 0xca
    ChooseOne(&var_d60, 2, DOMCHOICEUI_DEFAULT)
    
    if (&var_d20 == var_d00_1)
        (*var_d00_1)->vFunc_4()
    else if (var_d00_1 != 0)
        (*var_d00_1)->j_operator delete()
    
    result = result_2
    
    if (&var_d60 == result)
        x8_12 = (*result)->vFunc_4
    else
        if (result == 0)
            return result
        
        x8_12 = (*result)->j_operator delete
else
    int128_t var_da0
    __builtin_memset(&var_da0, 0, 0x30)
    int64_t var_d30 = 0xc9
    var_da0.d = 0x114
    var_d60 = &_vtable_for_std::__ndk1::__function::__func<Orb()::$_51, std::__ndk1::allocator<Orb()::$_51>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
    CardIDs* var_d58_1 = &var_ca8
    struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Orb()::$_51, std::__ndk1::allocator<Orb()::$_51>, void ()>::VTable
        * const* result_1 = &var_d60
    int128_t var_d90
    __builtin_memset(&var_d90:0xc, 0, 0x1c)
    var_da0:8.q = &var_ca8
    var_d20 = &_vtable_for_std::__ndk1::__function::__func<Orb()::$_52, std::__ndk1::allocator<Orb()::$_52>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
    struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Orb()::$_52, std::__ndk1::allocator<Orb()::$_52>, void ()>::VTable
        * const* var_d00 = &var_d20
    int64_t var_cf0 = 0xca
    var_d90:8.d = var_28
    ChooseOne(&var_d60, 2, &var_da0)
    
    if (&var_d20 == var_d00)
        (*var_d00)->vFunc_4()
    else if (var_d00 != 0)
        (*var_d00)->j_operator delete()
    
    result = result_1
    
    if (&var_d60 == result)
        x8_12 = (*result)->vFunc_4
    else
        if (result == 0)
            return result
        
        x8_12 = (*result)->j_operator delete
return x8_12(result)
