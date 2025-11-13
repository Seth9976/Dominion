// 函数: sub_a86630
// 地址: 0xa86630
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Tribute()::$_27::operator()() const::'lambda'(), std::__ndk1::allocator<Tribute()::$_27::operator()() const::'lambda'()>, void ()>::VTable
    * const* result = RevealDeck(2, 0x3ee, 0x7e579c)
int32_t var_48

if (var_48 != 0)
    PauseUI(true)
    int32_t var_cc8
    result = DiscardCards(&var_cc8, 0x3ee, 0x14, 7, 0)
    int32_t x8_1 = var_48
    
    if (x8_1 == 2)
        int32_t x0_2 = CardWhat(zx.q(var_cc8))
        int32_t var_cc4
        result = CardWhat(zx.q(var_cc4))
        x8_1 = var_48
        
        if (x0_2 == result.d)
            x8_1 -= 1
            var_48 = x8_1
    
    if (x8_1 s>= 1)
        int64_t i = 0
        
        do
            int32_t x8_6 = (&var_cc8)[i]
            uint64_t x0_4 = zx.q(*(arg1 + 8))
            struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Tribute()::$_27::operator()() const::'lambda'(), std::__ndk1::allocator<Tribute()::$_27::operator()() const::'lambda'()>, void ()>::VTable
                * const var_d00 = &_vtable_for_std::__ndk1::__function::__func<Tribute()::$_27::operator()() const::'lambda'(), std::__ndk1::allocator<Tribute()::$_27::operator()() const::'lambda'()>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
            int32_t var_cf8_1 = x8_6
            struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Tribute()::$_27::operator()() const::'lambda'(), std::__ndk1::allocator<Tribute()::$_27::operator()() const::'lambda'()>, void ()>::VTable
                * const* result_1 = &var_d00
            OtherPlayer(x0_4, &var_d00)
            result = result_1
            
            if (&var_d00 == result)
                result = (*result)->vFunc_4()
            else if (result != 0)
                result = (*result)->j_operator delete()
            
            i += 1
        while (i s< sx.q(var_48))

return result
