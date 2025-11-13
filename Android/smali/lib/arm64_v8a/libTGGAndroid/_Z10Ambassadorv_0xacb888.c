// 函数: _Z10Ambassadorv
// 地址: 0xacb888
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = RevealFromHandTempOne(0x39, 0x15)
int32_t var_14 = result.d

if (result.d != 0)
    int32_t x19_1 = result.d
    result = BoardPileSource(result)
    
    if (result.d != 0)
        result = IsSupplyPile(GetBoardPile(result, false))
        
        if ((result.d & 1) != 0)
            StoreTempDecision(x19_1)
            CardsHand()
            int32_t var_18 = CardWhat(zx.q(x19_1))
            struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Ambassador()::$_3, std::__ndk1::allocator<Ambassador()::$_3>, bool (CardID)>::VTable
                * const var_ce0 = &_vtable_for_std::__ndk1::__function::__func<Ambassador()::$_3, std::__ndk1::allocator<Ambassador()::$_3>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
            int32_t* var_cd8_1 = &var_18
            struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Ambassador()::$_3, std::__ndk1::allocator<Ambassador()::$_3>, bool (CardID)>::VTable
                * const* var_cc0_1 = &var_ce0
            CardIDs var_ca8
            FilterCards(&var_ce0, &var_ca8, nullptr)
            
            if (&var_ce0 == var_cc0_1)
                (*var_cc0_1)->vFunc_4()
            else if (var_cc0_1 != 0)
                (*var_cc0_1)->j_operator delete()
            
            int128_t var_19a0
            __builtin_memset(&var_19a0, 0, 0x20)
            var_19a0.d = 0x3a
            int128_t var_1990
            __builtin_memset(&var_1990:0xc, 0, 0x1c)
            ChooseCardsRange(&var_ca8, 0, 2, 0xc, &var_19a0, 0x14, 0, 0)
            void var_1968
            ReturnToSupply(&var_1968, 0x3ea)
            struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Ambassador()::$_4, std::__ndk1::allocator<Ambassador()::$_4>, void ()>::VTable
                * const var_19d0 = &_vtable_for_std::__ndk1::__function::__func<Ambassador()::$_4, std::__ndk1::allocator<Ambassador()::$_4>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
            int32_t* var_19c8_1 = &var_14
            struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<Ambassador()::$_4, std::__ndk1::allocator<Ambassador()::$_4>, void ()>::VTable
                * const* var_19b0_1 = &var_19d0
            OtherPlayers(&var_19d0)
            
            if (&var_19d0 == var_19b0_1)
                (*var_19b0_1)->vFunc_4()
            else if (var_19b0_1 != 0)
                (*var_19b0_1)->j_operator delete()
            
            return StoreTempDecision(0)

return result
