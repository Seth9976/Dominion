// 函数: _Z29GangOfPickpockets_StartOfTurnv
// 地址: 0xa1b0c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<GangOfPickpockets_StartOfTurn()::$_60, std::__ndk1::allocator<GangOfPickpockets_StartOfTurn()::$_60>, void ()>::VTable
    * const* result = CardsWhere(0x3ea)
int32_t var_28

if (var_28 s>= 5)
    void* x0 = DomGetContext()
    
    if (CountTokensPlayer(*(x0 + 8), zx.q(*(x0 + 0x18)), 0x1000) s< 1)
        return DiscardDownTo(4, 0xfa, 0)
    
    struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<GangOfPickpockets_StartOfTurn()::$_60, std::__ndk1::allocator<GangOfPickpockets_StartOfTurn()::$_60>, void ()>::VTable
        * const var_d30 = &_vtable_for_std::__ndk1::__function::__func<GangOfPickpockets_StartOfTurn()::$_60, std::__ndk1::allocator<GangOfPickpockets_StartOfTurn()::$_60>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
    struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<GangOfPickpockets_StartOfTurn()::$_60, std::__ndk1::allocator<GangOfPickpockets_StartOfTurn()::$_60>, void ()>::VTable
        * const* result_1 = &var_d30
    struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<GangOfPickpockets_StartOfTurn()::$_61, std::__ndk1::allocator<GangOfPickpockets_StartOfTurn()::$_61>, void ()>::VTable
        * const var_cf0 = &_vtable_for_std::__ndk1::__function::__func<GangOfPickpockets_StartOfTurn()::$_61, std::__ndk1::allocator<GangOfPickpockets_StartOfTurn()::$_61>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
    struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<GangOfPickpockets_StartOfTurn()::$_61, std::__ndk1::allocator<GangOfPickpockets_StartOfTurn()::$_61>, void ()>::VTable
        * const* var_cd0_1 = &var_cf0
    int64_t var_d00_1 = 0x93
    int64_t var_cc0_1 = 0x12
    ChooseOneFaux(&var_d30, 2, DOMCHOICEUI_DEFAULT)
    
    if (&var_cf0 == var_cd0_1)
        (*var_cd0_1)->vFunc_4()
    else if (var_cd0_1 != 0)
        (*var_cd0_1)->j_operator delete()
    
    result = result_1
    
    if (&var_d30 == result)
        return (*result)->vFunc_4()
    
    if (result != 0)
        return (*result)->j_operator delete()

return result
