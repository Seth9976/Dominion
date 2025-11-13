// 函数: _Z11CapitalCityv
// 地址: 0xa18e74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Card(1, 0, 0, nullptr)
Action(2, 0)
MayDiscardExactly(2, 0x3b)
int32_t var_28

if (var_28 == 2)
    MoneyPlus(2, 0, false)

int32_t x0 = CountMoney()
int32_t x0_1 = CountCoffers()
struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<CapitalCity()::$_18, std::__ndk1::allocator<CapitalCity()::$_18>, void ()>::VTable
    * const* result
int128_t var_d20

if (x0 s< 2)
    result = IsTurn()
    
    if (x0_1 + x0 s>= 2 && (result.d & 1) != 0)
        int32_t var_d48_1 = x0
        struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<CapitalCity()::$_18, std::__ndk1::allocator<CapitalCity()::$_18>, void ()>::VTable
            * var_d50 = &_vtable_for_std::__ndk1::__function::__func<CapitalCity()::$_19, std::__ndk1::allocator<CapitalCity()::$_19>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
        struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<CapitalCity()::$_18, std::__ndk1::allocator<CapitalCity()::$_18>, void ()>::VTable
            ** result_1 = &var_d50
        __builtin_memset(&var_d20, 0, 0x30)
        var_d20.d = 0xda
        int128_t var_d10_1
        var_d10_1:0xc.d = 0
        int128_t var_d00_1
        var_d00_1:8.q = 0
        int64_t var_cf0_2 = 0
        May(&var_d50, 0xb9, &var_d20)
        result = result_1
        
        if (&var_d50 == result)
            return (*result)->vFunc_4(result)
        
        if (result != 0)
            return (*result)->j_operator delete(result)
else
    struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<CapitalCity()::$_18, std::__ndk1::allocator<CapitalCity()::$_18>, void ()>::VTable
        * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<CapitalCity()::$_18, std::__ndk1::allocator<CapitalCity()::$_18>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
    struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<CapitalCity()::$_18, std::__ndk1::allocator<CapitalCity()::$_18>, void ()>::VTable
        * const* result_2 = &var_ce0
    __builtin_memset(&var_d20, 0, 0x30)
    var_d20.d = 0xd9
    int128_t var_d10
    var_d10:0xc.d = 0
    int128_t var_d00
    var_d00:8.q = 0
    int64_t var_cf0_1 = 0
    May(&var_ce0, 0xb9, &var_d20)
    result = result_2
    
    if (&var_ce0 == result)
        return (*result)->vFunc_4(result)
    
    if (result != 0)
        return (*result)->j_operator delete(result)
return result
