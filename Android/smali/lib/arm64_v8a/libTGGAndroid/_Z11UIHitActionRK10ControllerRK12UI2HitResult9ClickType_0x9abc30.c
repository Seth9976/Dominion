// 函数: _Z11UIHitActionRK10ControllerRK12UI2HitResult9ClickType
// 地址: 0x9abc30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 u> 9)
    pthread_kill(pthread_self(), 6)
    Controller* x0_4
    PressInfo* x1_2
    int64_t x2_1
    x0_4, x1_2, x2_1 = XNoReturn()
    return PressAction(x0_4, x1_2, x2_1) __tailcall

ClickState var_350

switch (arg3)
    case 0, 7, 8
        ControllerClickState(arg1, 0)
        int64_t result = UI2UpdateMouseState(&var_350, zx.q(*(arg2 + 8)), 2, *(arg2 + 0xc))
        
        if ((result.d & 1) != 0)
            if ((zx.d(data_11cd570) & 1) == 0)
                int128_t v0_1
                result, v0_1 = __cxa_guard_acquire(&data_11cd570)
                
                if (result.d != 0)
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
                    result = __cxa_guard_release(&data_11cd570, v0_1)
            
            data_11cd600 = 7
        
        return result
    case 1
        ControllerClickState(arg1, 1)
        return UI2UpdateMouseState(&var_350, zx.q(*(arg2 + 8)), 4, *(arg2 + 0xc))
    case 2
        ControllerClickState(arg1, 2)
        return UI2UpdateMouseState(&var_350, zx.q(*(arg2 + 8)), 0x10, *(arg2 + 0xc))
    case 3
        ControllerClickState(arg1, 3)
        return UI2UpdateMouseState(&var_350, zx.q(*(arg2 + 8)), 0x40, *(arg2 + 0xc))
    case 4
        ControllerClickState(arg1, 4)
        return UI2UpdateMouseState(&var_350, zx.q(*(arg2 + 8)), 0x80, *(arg2 + 0xc))
    case 5
        ControllerClickState(arg1, 5)
        return UI2UpdateMouseState(&var_350, zx.q(*(arg2 + 8)), 0x20, *(arg2 + 0xc))
    case 6
        ControllerClickState(arg1, 6)
        return UI2UpdateMouseState(&var_350, zx.q(*(arg2 + 8)), 0x100, *(arg2 + 0xc))
    case 9
        ControllerClickState(arg1, 9)
        return UI2UpdateMouseState(&var_350, zx.q(*(arg2 + 8)), 0x200, *(arg2 + 0xc))
