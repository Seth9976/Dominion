// 函数: _Z7Prosperv
// 地址: 0xaa39c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

GainLoot(0x476)
int32_t var_34 = 0

while (true)
    CardsSupplyTops(4, 0xffffffff)
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Prosper()::$_70, std::__ndk1::allocator<Prosper()::$_70>, bool (CardID)>::VTable
        * const var_1980 = &_vtable_for_std::__ndk1::__function::__func<Prosper()::$_70, std::__ndk1::allocator<Prosper()::$_70>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
    int32_t var_cc0[0xc0]
    int32_t (* var_1978_1)[0xc0] = &var_cc0
    int32_t* var_1970_1 = &var_34
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Prosper()::$_70, std::__ndk1::allocator<Prosper()::$_70>, bool (CardID)>::VTable
        * const* result_1 = &var_1980
    CardIDs var_1948
    FilterCards(&var_1980, &var_1948, nullptr)
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Prosper()::$_70, std::__ndk1::allocator<Prosper()::$_70>, bool (CardID)>::VTable
        * const* result = result_1
    
    if (&var_1980 == result)
        result = (*result)->vFunc_4()
    else if (result != 0)
        result = (*result)->j_operator delete()
    
    int32_t var_cc8
    
    if (var_cc8 == 0)
        return result
    
    int128_t var_19c0
    __builtin_memset(&var_19c0, 0, 0x30)
    var_19c0.d = 0x11b
    int128_t var_19b0_1
    var_19b0_1:0xc.d = 0
    int128_t var_19a0_1
    var_19a0_1:8.q = 0
    int64_t var_1990_1 = 0
    result = MayGainOneOf(&var_1948, &var_19c0, 0x476)
    
    if (result.d == 0)
        return result
    
    int32_t x0_3 = CardWhat(result)
    int64_t x8_5 = sx.q(var_34)
    var_34 = x8_5.d + 1
    var_cc0[x8_5] = x0_3
