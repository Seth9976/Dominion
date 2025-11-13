// 函数: _Z15RecievedTributev
// 地址: 0xac49cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = CountCardsGainedThisTurn()

if (result.d s>= 3)
    int32_t var_ca4 = 0
    CardsSupplyTops(4, 0xffffffff)
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<RecievedTribute()::$_38, std::__ndk1::allocator<RecievedTribute()::$_38>, bool (CardID)>::VTable
        * const var_1960 = &_vtable_for_std::__ndk1::__function::__func<RecievedTribute()::$_38, std::__ndk1::allocator<RecievedTribute()::$_38>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
    int32_t var_ca0[0xc0]
    int32_t (* var_1958_1)[0xc0] = &var_ca0
    int32_t* var_1950_1 = &var_ca4
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<RecievedTribute()::$_38, std::__ndk1::allocator<RecievedTribute()::$_38>, bool (CardID)>::VTable
        * const* var_1940_1 = &var_1960
    CardIDs var_1928
    FilterCards(&var_1960, &var_1928, nullptr)
    
    if (&var_1960 == var_1940_1)
        (*var_1940_1)->vFunc_4()
    else if (var_1940_1 != 0)
        (*var_1940_1)->j_operator delete()
    
    int128_t var_19a0
    __builtin_memset(&var_19a0, 0, 0x30)
    var_19a0.d = 0x132
    int128_t var_1990
    var_1990:0xc.d = 3
    int128_t var_1980
    var_1980:8.q = 0
    int64_t var_1970_1 = 0
    result = MayGainOneOf(&var_1928, &var_19a0, 0x476)
    
    if (result.d != 0)
        int32_t x0_3 = CardWhat(result)
        int64_t x8_4 = sx.q(var_ca4)
        var_ca0[x8_4] = x0_3
        var_ca4 = x8_4.d + 1
        CardsSupplyTops(4, 0xffffffff)
        var_1960 = &_vtable_for_std::__ndk1::__function::__func<RecievedTribute()::$_38, std::__ndk1::allocator<RecievedTribute()::$_38>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
        int32_t (* var_1958_2)[0xc0] = &var_ca0
        int32_t* var_1950_2 = &var_ca4
        struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<RecievedTribute()::$_38, std::__ndk1::allocator<RecievedTribute()::$_38>, bool (CardID)>::VTable
            * const* var_1940_2 = &var_1960
        FilterCards(&var_1960, &var_1928, nullptr)
        
        if (&var_1960 == var_1940_2)
            (*var_1940_2)->vFunc_4()
        else if (var_1940_2 != 0)
            (*var_1940_2)->j_operator delete()
        
        __builtin_memset(&var_19a0, 0, 0x30)
        var_19a0.d = 0x132
        int128_t var_1990_1
        var_1990_1:0xc.d = 2
        int128_t var_1980_1
        var_1980_1:8.q = 0
        int64_t var_1970_2 = 0
        result = MayGainOneOf(&var_1928, &var_19a0, 0x476)
        
        if (result.d != 0)
            int32_t x0_7 = CardWhat(result)
            int64_t x8_8 = sx.q(var_ca4)
            var_ca0[x8_8] = x0_7
            var_ca4 = x8_8.d + 1
            CardsSupplyTops(4, 0xffffffff)
            var_1960 = &_vtable_for_std::__ndk1::__function::__func<RecievedTribute()::$_38, std::__ndk1::allocator<RecievedTribute()::$_38>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
            int32_t (* var_1958_3)[0xc0] = &var_ca0
            int32_t* var_1950_3 = &var_ca4
            struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<RecievedTribute()::$_38, std::__ndk1::allocator<RecievedTribute()::$_38>, bool (CardID)>::VTable
                * const* var_1940_3 = &var_1960
            FilterCards(&var_1960, &var_1928, nullptr)
            
            if (&var_1960 == var_1940_3)
                (*var_1940_3)->vFunc_4()
            else if (var_1940_3 != 0)
                (*var_1940_3)->j_operator delete()
            
            __builtin_memset(&var_19a0, 0, 0x30)
            var_19a0.d = 0x132
            int128_t var_1990_2
            var_1990_2:0xc.d = 1
            int128_t var_1980_2
            var_1980_2:8.q = 0
            int64_t var_1970_3 = 0
            result = MayGainOneOf(&var_1928, &var_19a0, 0x476)
            
            if (result.d != 0)
                result = CardWhat(result)
                var_ca0[sx.q(var_ca4)] = result.d

return result
