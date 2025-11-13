// 函数: _Z7Developv
// 地址: 0xa7c474
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Develop()::$_3, std::__ndk1::allocator<Develop()::$_3>, bool (CardID)>::VTable
    * const* result = TrashOne(9, 0)

if (result.d != 0)
    int32_t x19_1 = result.d
    int32_t var_38 = Cost(result)
    int32_t var_40 = operator+(&var_38, 1)
    int32_t var_48 = operator-(&var_38, 1)
    CardsSupplyTops(4, 0xffffffff)
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Develop()::$_1, std::__ndk1::allocator<Develop()::$_1>, bool (CardID)>::VTable
        * const var_d00 = &_vtable_for_std::__ndk1::__function::__func<Develop()::$_1, std::__ndk1::allocator<Develop()::$_1>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
    int32_t* var_cf8_1 = &var_40
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Develop()::$_1, std::__ndk1::allocator<Develop()::$_1>, bool (CardID)>::VTable
        * const* var_ce0_1 = &var_d00
    CardIDs var_cd0
    FilterCards(&var_d00, &var_cd0, nullptr)
    
    if (&var_d00 == var_ce0_1)
        (*var_ce0_1)->vFunc_4()
    else if (var_ce0_1 != 0)
        (*var_ce0_1)->j_operator delete()
    
    CardsSupplyTops(4, 0xffffffff)
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Develop()::$_2, std::__ndk1::allocator<Develop()::$_2>, bool (CardID)>::VTable
        * const var_19c0 = &_vtable_for_std::__ndk1::__function::__func<Develop()::$_2, std::__ndk1::allocator<Develop()::$_2>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
    int32_t* var_19b8_1 = &var_48
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Develop()::$_2, std::__ndk1::allocator<Develop()::$_2>, bool (CardID)>::VTable
        * const* var_19a0_1 = &var_19c0
    CardIDs var_1988
    FilterCards(&var_19c0, &var_1988, nullptr)
    
    if (&var_19c0 == var_19a0_1)
        (*var_19a0_1)->vFunc_4()
    else if (var_19a0_1 != 0)
        (*var_19a0_1)->j_operator delete()
    
    result = operator+(&var_cd0, &var_1988)
    int32_t var_19c8
    
    if (var_19c8 != 0)
        int32_t x8_8 = var_48
        int32_t var_d08
        int32_t x21_1 = var_d08
        int128_t var_32e0
        int128_t var_32c0
        
        if ((x8_8 & 0x80000000) != 0)
            int32_t x8_9 = var_40
            __builtin_memset(&var_32e0, 0, 0x30)
            var_32e0.d = 0xa
            int128_t var_32d0_1
            var_32d0_1:0xc.d = x8_9
            int64_t var_32b0_1 = 0
        else
            int64_t x9_1 = sx.q(var_40)
            __builtin_memset(&var_32e0, 0, 0x38)
            var_32e0.d = 0x5b
            int128_t var_32d0
            var_32d0:0xc.d = x8_8
            var_32c0.q = x9_1
        
        var_32c0:8.q = 0
        CardIDs var_2648
        result = ChooseCard(&var_2648, 7, &var_32e0, 0xc, 0)
        int32_t x20_1 = result.d
        
        if (result.d != 0)
            GainCard(zx.q(x20_1), 0x3eb, 0, 0, 4)
            int32_t var_50
            int64_t x9_2 = sx.q(var_50)
            int32_t var_2650 = Cost(zx.q(x19_1))
            int32_t x0_15
            
            if (x9_2.d == 0)
            label_a7c6ac:
                x0_15 = operator+(&var_2650, 1)
                x21_1 = var_50
            else
                CardIDs* x8_10 = &var_cd0
                int64_t x9_3 = x9_2 << 2
                
                while (true)
                    int32_t x10_1 = *x8_10
                    x8_10 += 4
                    
                    if (x10_1 == x20_1)
                        x0_15 = operator-(&var_2650, 1)
                        break
                    
                    int64_t temp0_1 = x9_3
                    x9_3 -= 4
                    
                    if (temp0_1 == 4)
                        goto label_a7c6ac
            
            var_2650 = x0_15
            CardsSupplyTops(4, 0xffffffff)
            memcpy(&var_2648, &var_32e0, 0xc84)
            struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Develop()::$_3, std::__ndk1::allocator<Develop()::$_3>, bool (CardID)>::VTable
                * const var_3310 = &_vtable_for_std::__ndk1::__function::__func<Develop()::$_3, std::__ndk1::allocator<Develop()::$_3>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
            int32_t* var_3308_1 = &var_2650
            struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Develop()::$_3, std::__ndk1::allocator<Develop()::$_3>, bool (CardID)>::VTable
                * const* result_1 = &var_3310
            FilterCards(&var_3310, &var_2648, nullptr)
            result = result_1
            
            if (&var_3310 == result)
                result = (*result)->vFunc_4()
            else if (result != 0)
                result = (*result)->j_operator delete()
            
            if (var_19c8 != 0)
                if (x21_1 == 0)
                    int32_t x8_16 = var_2650
                    __builtin_memset(&var_32e0, 0, 0x30)
                    var_32e0.d = 0xa
                    int128_t var_32d0_3
                    var_32d0_3:0xc.d = x8_16
                    int128_t var_32c0_2
                    var_32c0_2:8.q = 0
                    int64_t var_32b0_3 = 0
                    result = MayChooseCard(&var_2648, 7, &var_32e0, 0xc)
                    
                    if (result.d != 0)
                        return GainCard(result, 0x3eb, 0, 0, 4)
                else
                    int32_t x8_15 = var_2650
                    __builtin_memset(&var_32e0, 0, 0x30)
                    var_32e0.d = 0xa
                    int128_t var_32d0_2
                    var_32d0_2:0xc.d = x8_15
                    int128_t var_32c0_1
                    var_32c0_1:8.q = 0
                    int64_t var_32b0_2 = 0
                    result = ChooseCard(&var_2648, 7, &var_32e0, 0xc, 0)
                    
                    if (result.d != 0)
                        return GainCard(result, 0x3eb, 0, 0, 4)

return result
