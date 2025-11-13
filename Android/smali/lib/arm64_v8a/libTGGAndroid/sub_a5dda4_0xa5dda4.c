// 函数: sub_a5dda4
// 地址: 0xa5dda4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result = TopDeckCard()

if (result.d != 0)
    int32_t x19_1 = result.d
    DiscardCard(result, 0x3eb, 0xb, 7, 0)
    
    if ((CardIs(zx.q(x19_1), 8) & 1) != 0)
        return GainCurse() __tailcall
    
    result = InSupplyTops(CardWhat(zx.q(x19_1)), 4)
    
    if ((result.d & 1) != 0)
        int32_t x0_5 = CurrentWho()
        int32_t x20_1 = *(arg1 + 8)
        int64_t var_70_1 = 0x35
        struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Jester()::$_4::operator()() const::'lambda'(), std::__ndk1::allocator<Jester()::$_4::operator()() const::'lambda'()>, void ()>::VTable
            * const var_a0
        int64_t* result_1 = &var_a0
        struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Jester()::$_4::operator()() const::'lambda0'(), std::__ndk1::allocator<Jester()::$_4::operator()() const::'lambda0'()>, void ()>::VTable
            * const var_60 = &_vtable_for_std::__ndk1::__function::__func<Jester()::$_4::operator()() const::'lambda0'(), std::__ndk1::allocator<Jester()::$_4::operator()() const::'lambda0'()>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
        uint64_t var_58_1 = zx.q(x0_5) | zx.q(x19_1) << 0x20
        struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Jester()::$_4::operator()() const::'lambda0'(), std::__ndk1::allocator<Jester()::$_4::operator()() const::'lambda0'()>, void ()>::VTable
            * const* var_40_1 = &var_60
        var_a0 = &_vtable_for_std::__ndk1::__function::__func<Jester()::$_4::operator()() const::'lambda'(), std::__ndk1::allocator<Jester()::$_4::operator()() const::'lambda'()>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
        uint64_t var_98_1 = zx.q(x20_1) | zx.q(x19_1) << 0x20
        int64_t var_30_1 = 0x36
        int64_t x8_2 = sx.q(CurrentWho())
        int128_t var_e0
        __builtin_memset(&var_e0, 0, 0x30)
        var_e0.d = 0x53
        int128_t var_d0
        var_d0:0xc.d = x19_1
        int128_t var_c0
        var_c0.q = x8_2
        var_c0:8.q = 0
        int64_t var_b0_1 = 0
        ChooseOnePlayerFaux(zx.q(x20_1), &var_a0, 2, &var_e0)
        
        if (&var_60 == var_40_1)
            (*var_40_1)->vFunc_4()
        else if (var_40_1 != 0)
            (*var_40_1)->j_operator delete()
        
        result = result_1
        
        if (&var_a0 == result)
            return (*(*result + 0x20))()
        
        if (result != 0)
            return (*(*result + 0x28))()

return result
