// 函数: _Z10DivineWindv
// 地址: 0xac3814
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
DomGame* x19 = *(x0 + 8)
int32_t var_c8 = 0
int32_t var_d0 = 0
NotifyLog(x19, 0x3c, 0xffffffff, 0, nullptr, 0, 0, 0)
RemovePile(x19, 0x13)
RemovePile(x19, 0x14)
RemovePile(x19, 0x15)
RemovePile(x19, 0x16)
RemovePile(x19, 0x17)
RemovePile(x19, 0x18)
RemovePile(x19, 0x19)
RemovePile(x19, 0x1a)
RemovePile(x19, 0x1b)
RemovePile(x19, 0x1c)
RemovePile(x19, 0x1d)
RemovePile(x19, 0x1e)
RemovePile(x19, 0x1f)
RemovePile(x19, 0x20)
RemovePileFinalize(x19)
int128_t var_80
__builtin_memset(&var_80, 0, 0x50)
void* x22 = *(DomGetContext() + 8)
uint64_t x1 = zx.q(*(x22 + 0xe84))
int64_t x5

if (x1.d == 0)
    x5 = 0
else
    InsertKingdomPile(x19, x1, &var_80, 0, 0)
    uint64_t x1_1 = zx.q(*(x22 + 0xe88))
    
    if (x1_1.d == 0)
        x5 = 1
    else
        InsertKingdomPile(x19, x1_1, &var_80, 0, 0)
        uint64_t x1_2 = zx.q(*(x22 + 0xe8c))
        
        if (x1_2.d == 0)
            x5 = 2
        else
            InsertKingdomPile(x19, x1_2, &var_80, 0, 0)
            uint64_t x1_3 = zx.q(*(x22 + 0xe90))
            
            if (x1_3.d == 0)
                x5 = 3
            else
                InsertKingdomPile(x19, x1_3, &var_80, 0, 0)
                uint64_t x1_4 = zx.q(*(x22 + 0xe94))
                
                if (x1_4.d == 0)
                    x5 = 4
                else
                    InsertKingdomPile(x19, x1_4, &var_80, 0, 0)
                    uint64_t x1_5 = zx.q(*(x22 + 0xe98))
                    
                    if (x1_5.d == 0)
                        x5 = 5
                    else
                        InsertKingdomPile(x19, x1_5, &var_80, 0, 0)
                        uint64_t x1_6 = zx.q(*(x22 + 0xe9c))
                        
                        if (x1_6.d == 0)
                            x5 = 6
                        else
                            InsertKingdomPile(x19, x1_6, &var_80, 0, 0)
                            uint64_t x1_7 = zx.q(*(x22 + 0xea0))
                            
                            if (x1_7.d == 0)
                                x5 = 7
                            else
                                InsertKingdomPile(x19, x1_7, &var_80, 0, 0)
                                uint64_t x1_8 = zx.q(*(x22 + 0xea4))
                                
                                if (x1_8.d == 0)
                                    x5 = 8
                                else
                                    InsertKingdomPile(x19, x1_8, &var_80, 0, 0)
                                    uint64_t x1_9 = zx.q(*(x22 + 0xea8))
                                    
                                    if (x1_9.d == 0)
                                        x5 = 9
                                    else
                                        InsertKingdomPile(x19, x1_9, &var_80, 0, 0)
                                        x5 = 0xa

int32_t var_c8_1 = 0
int32_t var_d0_1 = 0
NotifyLog(x19, 0x3e, zx.q(*(x0 + 0x18)), 0, x22 + 0xe84, x5, 0, 0)
void* x20_1 = *(DomGetContext() + 8)

if (*(x20_1 + 0xeb0) != 0)
    int32_t x0_31 = NextAvailableLandscapePile(x19)
    struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<DivineWind()::$_20, std::__ndk1::allocator<DivineWind()::$_20>, void ()>::VTable
        * const var_b0
    
    if (x0_31 != 0)
        AddLandscapePile(x19, zx.q(x0_31), zx.q(*(x20_1 + 0xeb0)), nullptr, &var_80)
        
        if ((CardIs(zx.q(*(x20_1 + 0xeb0)), 0x4000000000) & 1) != 0)
            var_b0 = &_vtable_for_std::__ndk1::__function::__func<DivineWind()::$_20, std::__ndk1::allocator<DivineWind()::$_20>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
            struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<DivineWind()::$_20, std::__ndk1::allocator<DivineWind()::$_20>, void ()>::VTable
                * const* var_90_1 = &var_b0
            AllPlayers(&var_b0, 0)
            
            if (&var_b0 == var_90_1)
                (*var_90_1)->vFunc_4()
            else if (var_90_1 != 0)
                (*var_90_1)->j_operator delete()
    
    if (*(x20_1 + 0xeb4) != 0)
        int32_t x0_38 = NextAvailableLandscapePile(x19)
        
        if (x0_38 != 0)
            AddLandscapePile(x19, zx.q(x0_38), zx.q(*(x20_1 + 0xeb4)), nullptr, &var_80)
            
            if ((CardIs(zx.q(*(x20_1 + 0xeb4)), 0x4000000000) & 1) != 0)
                var_b0 = &_vtable_for_std::__ndk1::__function::__func<DivineWind()::$_20, std::__ndk1::allocator<DivineWind()::$_20>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
                struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<DivineWind()::$_20, std::__ndk1::allocator<DivineWind()::$_20>, void ()>::VTable
                    * const* var_90_2 = &var_b0
                AllPlayers(&var_b0, 0)
                
                if (&var_b0 == var_90_2)
                    (*var_90_2)->vFunc_4()
                else if (var_90_2 != 0)
                    (*var_90_2)->j_operator delete()
        
        if (*(x20_1 + 0xeb8) != 0)
            int32_t x0_45 = NextAvailableLandscapePile(x19)
            
            if (x0_45 != 0)
                AddLandscapePile(x19, zx.q(x0_45), zx.q(*(x20_1 + 0xeb8)), nullptr, &var_80)
                
                if ((CardIs(zx.q(*(x20_1 + 0xeb8)), 0x4000000000) & 1) != 0)
                    var_b0 = &_vtable_for_std::__ndk1::__function::__func<DivineWind()::$_20, std::__ndk1::allocator<DivineWind()::$_20>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
                    struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<DivineWind()::$_20, std::__ndk1::allocator<DivineWind()::$_20>, void ()>::VTable
                        * const* var_90_3 = &var_b0
                    AllPlayers(&var_b0, 0)
                    
                    if (&var_b0 == var_90_3)
                        (*var_90_3)->vFunc_4()
                    else if (var_90_3 != 0)
                        (*var_90_3)->j_operator delete()
            
            if (*(x20_1 + 0xebc) != 0)
                int32_t x0_52 = NextAvailableLandscapePile(x19)
                
                if (x0_52 != 0)
                    AddLandscapePile(x19, zx.q(x0_52), zx.q(*(x20_1 + 0xebc)), nullptr, &var_80)
                    
                    if ((CardIs(zx.q(*(x20_1 + 0xebc)), 0x4000000000) & 1) != 0)
                        var_b0 = &_vtable_for_std::__ndk1::__function::__func<DivineWind()::$_20, std::__ndk1::allocator<DivineWind()::$_20>, void ()>{for `std::__ndk1::__function::__base<void ()>'}
                        struct std::__ndk1::__function::__base<void ()>::std::__ndk1::__function::__func<DivineWind()::$_20, std::__ndk1::allocator<DivineWind()::$_20>, void ()>::VTable
                            * const* var_90_4 = &var_b0
                        AllPlayers(&var_b0, 0)
                        
                        if (&var_b0 == var_90_4)
                            (*var_90_4)->vFunc_4()
                        else if (var_90_4 != 0)
                            (*var_90_4)->j_operator delete()

AddExtraPiles(x19, &var_80)
RunSetupAfterFns()
int64_t var_b8 = 0
int32_t var_c0 = 0
int32_t var_c8_2 = 0
int32_t var_d0_2 = 0
return NotifyEffect(x19, 0x2e, 0xffffffff, 0, 0, 0, 0, 0)
