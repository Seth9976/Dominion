// 函数: _Z9Transportv
// 地址: 0xa8bc80
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsWhereType(0x462, 4)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Transport()::$_24, std::__ndk1::allocator<Transport()::$_24>, bool (CardID)>::VTable
    * const var_cf0 = &_vtable_for_std::__ndk1::__function::__func<Transport()::$_24, std::__ndk1::allocator<Transport()::$_24>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Transport()::$_24, std::__ndk1::allocator<Transport()::$_24>, bool (CardID)>::VTable
    * const* var_cd0 = &var_cf0
CardIDs var_cb8
FilterCards(&var_cf0, &var_cb8, nullptr)

if (&var_cf0 == var_cd0)
    (*var_cd0)->vFunc_4()
else if (var_cd0 != 0)
    (*var_cd0)->j_operator delete()

CardsSupplyTops(0x10, 0xffffffff)
CardIDs var_1978
FilterType(&var_1978, 4)
int32_t var_38
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Transport()::$_25, std::__ndk1::allocator<Transport()::$_25>, void ()>::VTable
    * const* result
int128_t var_2600

if (var_38 == 0)
    __builtin_memset(&var_2600, 0, 0x30)
    var_2600.d = 0xd4
    int128_t var_25f0
    var_25f0:0xc.d = 0
    int128_t var_25e0
    var_25e0:8.q = 0
    int64_t var_25d0_1 = 0
    result = ChooseCard(&var_1978, 0x1d, &var_2600, 0x17, 0)
    
    if (result.d != 0)
        int32_t x19_1 = result.d
        result = MoveCardToPlayer(zx.q(x19_1), 7, zx.q(*(DomGetContext() + 0x18)), 0x462, 0, 0, 
            &var_2600, 0xc)
        
        if (zx.d(var_2600.b) != 0)
            return TriggerEvent(0x13, zx.q(x19_1), 0)
else
    operator+(&var_1978, &var_cb8)
    int128_t var_2640
    __builtin_memset(&var_2640, 0, 0x30)
    int64_t var_2690_1 = 0x85
    var_2640.d = 0xd2
    struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Transport()::$_25, std::__ndk1::allocator<Transport()::$_25>, void ()>::VTable
        * const var_26c0 = &_vtable_for_std::__ndk1::__function::__func<Transport()::$_25, std::__ndk1::allocator<Transport()::$_25>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
    CardIDs* var_26b8_1 = &var_1978
    int128_t var_2630
    __builtin_memset(&var_2630:0xc, 0, 0x1c)
    var_2640:8.q = &var_2600
    struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Transport()::$_25, std::__ndk1::allocator<Transport()::$_25>, void ()>::VTable
        * const* result_1 = &var_26c0
    struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Transport()::$_26, std::__ndk1::allocator<Transport()::$_26>, void ()>::VTable
        * const var_2680 = &_vtable_for_std::__ndk1::__function::__func<Transport()::$_26, std::__ndk1::allocator<Transport()::$_26>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
    struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Transport()::$_26, std::__ndk1::allocator<Transport()::$_26>, void ()>::VTable
        * const* var_2660_1 = &var_2680
    int32_t var_1980
    var_2630:8.d = var_1980
    int64_t var_2650_1 = 0x86
    ChooseOne(&var_26c0, 2, &var_2640)
    
    if (&var_2680 == var_2660_1)
        (*var_2660_1)->vFunc_4()
    else if (var_2660_1 != 0)
        (*var_2660_1)->j_operator delete()
    
    result = result_1
    
    if (&var_26c0 == result)
        return (*result)->vFunc_4()
    
    if (result != 0)
        return (*result)->j_operator delete()
return result
