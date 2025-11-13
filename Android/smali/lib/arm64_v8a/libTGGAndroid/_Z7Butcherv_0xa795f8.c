// 函数: _Z7Butcherv
// 地址: 0xa795f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Coffers(2, 0)
int64_t result = MayTrashOne(9, 0)

if (result.d != 0)
    int32_t x19_1 = result.d
    int32_t x0 = CountCoffers()
    int32_t var_38 = Cost(zx.q(x19_1))
    int32_t var_40 = operator+(&var_38, x0)
    CardsSupplyTops(4, 0xffffffff)
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Butcher()::$_3, std::__ndk1::allocator<Butcher()::$_3>, bool (CardID)>::VTable
        * const var_d00 = &_vtable_for_std::__ndk1::__function::__func<Butcher()::$_3, std::__ndk1::allocator<Butcher()::$_3>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
    int32_t* var_cf8_1 = &var_38
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Butcher()::$_3, std::__ndk1::allocator<Butcher()::$_3>, bool (CardID)>::VTable
        * const* var_ce0_1 = &var_d00
    CardIDs var_cc8
    FilterCards(&var_d00, &var_cc8, nullptr)
    
    if (&var_d00 == var_ce0_1)
        (*var_ce0_1)->vFunc_4()
    else if (var_ce0_1 != 0)
        (*var_ce0_1)->j_operator delete()
    
    CardsSupplyTops(4, 0xffffffff)
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Butcher()::$_4, std::__ndk1::allocator<Butcher()::$_4>, bool (CardID)>::VTable
        * const var_19c0 = &_vtable_for_std::__ndk1::__function::__func<Butcher()::$_4, std::__ndk1::allocator<Butcher()::$_4>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
    int32_t* var_19b8_1 = &var_40
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Butcher()::$_4, std::__ndk1::allocator<Butcher()::$_4>, bool (CardID)>::VTable
        * const* var_19a0_1 = &var_19c0
    CardIDs var_1988
    FilterCards(&var_19c0, &var_1988, nullptr)
    
    if (&var_19c0 == var_19a0_1)
        (*var_19a0_1)->vFunc_4()
    else if (var_19a0_1 != 0)
        (*var_19a0_1)->j_operator delete()
    
    operator-=(&var_1988, &var_cc8)
    operator+=(&var_cc8, &var_1988)
    int32_t var_48
    int64_t x21_1 = sx.q(var_48)
    void var_2640
    memset(&var_2640, 0, x21_1 << 2)
    int32_t var_d08
    memset(&var_2640 + (sx.q(var_48) << 2), 0xff, sx.q(var_d08) << 2)
    int32_t x8_8 = var_40
    int128_t var_2680
    __builtin_memset(&var_2680, 0, 0x30)
    var_2680.d = 0x7e
    int128_t var_2660
    __builtin_memset(&var_2660, 0, 0x18)
    var_2680:8.q = &var_2640
    int128_t var_2670
    var_2670:8.d = x21_1.d
    var_2670:0xc.d = x8_8
    result = ChooseCard(&var_cc8, 7, &var_2680, 0xc, 0)
    
    if (result.d != 0)
        int32_t x0_17 = CostOnlyCoin(result) - CostOnlyCoin(zx.q(x19_1))
        
        if (x0_17 s>= 1)
            RemoveCoffers(x0_17, 0)
        
        return GainCard(zx.q(result.d), 0x476, 0, 0, 4)

return result
