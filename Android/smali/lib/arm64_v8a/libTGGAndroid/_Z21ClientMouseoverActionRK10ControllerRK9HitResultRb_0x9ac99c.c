// 函数: _Z21ClientMouseoverActionRK10ControllerRK9HitResultRb
// 地址: 0x9ac99c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(data_11cd570) & 1) == 0)
    int32_t x0_9
    int128_t v0_1
    x0_9, v0_1 = __cxa_guard_acquire(&data_11cd570)
    
    if (x0_9 != 0)
        v0_1.q = 0
        v0_1:8.q = 0
        data_11cd630 = 0
        data_11cd610 = 0
        data_11cd670 = 0
        data_11cd620 = 0
        data_11cd660 = 0
        data_11cd608 = _vtable_for_HitResult + 0x10
        data_11cd618 = _vtable_for_UI2HitResult + 0x10
        data_11cd648 = _vtable_for_HitResult + 0x10
        data_11cd658 = _vtable_for_UI2HitResult + 0x10
        data_11cd650 = 0
        __cxa_guard_release(&data_11cd570, v0_1)

*arg3 = PressUpdate(arg1, arg2, &data_11cd600) & 1

if ((AppHasFocus() & 1) != 0)
    int32_t x8_2 = *(arg2 + 8)
    ClickState* x0_4
    uint64_t x1_1
    int32_t x3_1
    ClickState var_360
    
    if (x8_2 == 2)
        ControllerClickState(arg1, 0)
        x1_1 = zx.q(*(arg2 + 0x18))
        x0_4 = &var_360
        x3_1 = 0
    else if (x8_2 != 1)
        ControllerClickState(arg1, 0)
        x0_4 = &var_360
        x1_1 = 0
        x3_1 = 0
    else
        ControllerClickState(arg1, 0)
        x1_1 = zx.q(*(arg2 + 0x18))
        x3_1 = *(arg2 + 0x1c)
        x0_4 = &var_360
    UI2UpdateMouseState(x0_4, x1_1, 1, x3_1)
    int32_t x8_3 = *(arg2 + 8)
    uint32_t x1_2 = 0
    
    if (x8_3 - 2 u>= 2 && x8_3 != 0)
        if (x8_3 != 1)
            pthread_kill(pthread_self(), 6)
            GameSetup* x0_11
            PlayerConfig_V1* x1_3
            x0_11, x1_3 = XNoReturn()
            return ComputeGuestPlayerIndex(x0_11, x1_3) __tailcall
        
        x1_2 = *(arg2 + 0xc)
    
    GameSpecific_Mouseover(arg1, x1_2)
    int32_t x8_4 = *(arg2 + 8)
    
    if (x8_4 == 2)
        if (*(arg2 + 0x28) == 1)
            return 2
    else if (x8_4 == 1 && (*(arg2 + 0x18) == 0 || *(arg2 + 0x28) == 1))
        return 2

return 0
