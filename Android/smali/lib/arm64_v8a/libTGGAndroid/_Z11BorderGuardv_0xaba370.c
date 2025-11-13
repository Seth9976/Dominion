// 函数: _Z11BorderGuardv
// 地址: 0xaba370
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Action(1, 0)
int32_t x19

if ((HasArtifact(0xe1c) & 1) != 0)
    x19 = 3
else
    x19 = 2

RevealDeck(x19, 0x3ee, 0x7ea4f8)
PauseUI(true)
int32_t x19_1 = 0
int32_t var_cb8[0x320]
int32_t var_38

if (var_38 == x19)
    int64_t i = 0
    
    do
        int32_t x0_3 = CardIs(zx.q(var_cb8[i]), 4)
        x19_1 = x0_3
        
        if ((x0_3 & 1) == 0)
            break
        
        i += 1
    while (i s< sx.q(var_38))

int128_t var_d40
__builtin_memset(&var_d40, 0, 0x28)
var_d40.d = 0x1c
int128_t var_d30
var_d30:0xc.d = 1
int128_t* result_1 = 0
int64_t var_d10 = 0
int128_t* result = ChooseCard(&var_cb8, 0x14, &var_d40, 0xe, 0)

if (result.d != 0)
    int32_t x20_1 = result.d
    operator-=(&var_cb8, zx.q(x20_1))
    MoveCardTo(zx.q(x20_1), 0x3ee, 0x3ea, 3, 0, 0xb, 0)
    DiscardCards(&var_cb8, 0x3ee, 0xb, 7, 0)
    int32_t x0_8 = HasArtifact(0xe1c)
    result = HasArtifact(0xe1a)
    
    if ((x19_1 & 1) != 0)
        struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<BorderGuard()::$_4, std::__ndk1::allocator<BorderGuard()::$_4>, void ()>::VTable
            * const x8_3
        struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<BorderGuard()::$_5, std::__ndk1::allocator<BorderGuard()::$_5>, void ()>::VTable
            * const x11_1
        int64_t v0_1
        int64_t v1_1
        
        if (((x0_8 | result.d) & 1) == 0)
            v0_1 = 0x8c
            v1_1 = 0x8d
            x8_3 = &_vtable_for_std::__ndk1::__function::__func<BorderGuard()::$_0, std::__ndk1::allocator<BorderGuard()::$_0>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
            x11_1 = &_vtable_for_std::__ndk1::__function::__func<BorderGuard()::$_1, std::__ndk1::allocator<BorderGuard()::$_1>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
        label_aba520:
            var_d40.q = x8_3
            result_1 = &var_d40
            struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<BorderGuard()::$_5, std::__ndk1::allocator<BorderGuard()::$_5>, void ()>::VTable
                * const var_d00 = x11_1
            struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<BorderGuard()::$_5, std::__ndk1::allocator<BorderGuard()::$_5>, void ()>::VTable
                * const* var_ce0_1 = &var_d00
            int64_t var_d10_1 = v0_1
            int64_t var_cd0_1 = v1_1
            ChooseOneFaux(&var_d40, 2, DOMCHOICEUI_DEFAULT)
            
            if (&var_d00 == var_ce0_1)
                (*var_ce0_1)->vFunc_4()
            else if (var_ce0_1 != 0)
                (*var_ce0_1)->j_operator delete()
            
            result = result_1
            
            if (&var_d40 == result)
                return (*(*result + 0x20))()
            
            if (result != 0)
                return (*(*result + 0x28))()
        else
            if ((x0_8 & 1) == 0)
                v0_1 = 0x8c
                v1_1 = 0x8e
                x8_3 = &_vtable_for_std::__ndk1::__function::__func<BorderGuard()::$_2, std::__ndk1::allocator<BorderGuard()::$_2>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
                x11_1 = &_vtable_for_std::__ndk1::__function::__func<BorderGuard()::$_3, std::__ndk1::allocator<BorderGuard()::$_3>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
                goto label_aba520
            
            if ((result.d & 1) == 0)
                v0_1 = 0x8e
                v1_1 = 0x8d
                x8_3 = &_vtable_for_std::__ndk1::__function::__func<BorderGuard()::$_4, std::__ndk1::allocator<BorderGuard()::$_4>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
                x11_1 = &_vtable_for_std::__ndk1::__function::__func<BorderGuard()::$_5, std::__ndk1::allocator<BorderGuard()::$_5>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
                goto label_aba520

return result
