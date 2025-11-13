// 函数: _Z15ClientHitActionRK10ControllerRK9HitResult9ClickType
// 地址: 0x9ac73c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg3
Controller const& x21 = arg1

if ((zx.d(data_11cd570) & 1) == 0)
    int128_t v0_1
    arg1, v0_1 = __cxa_guard_acquire(&data_11cd570)
    
    if (arg1.d != 0)
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

if (data_11cd600 == 7)
    return 

void* __offset(vtable_for_UI2HitResult, 0x10) var_50
int32_t var_24

if (x19 == 7)
    if ((CardsetIsZoomedAny(&var_50, &var_24) & 1) != 0)
        data_11cd604 = 0x40
        PressStart(x21, &data_11cd600, arg2)
    else if (*(arg2 + 8) != 3)
        if ((GameDlgManagerDialogActive(5) & 1) == 0 || (*(arg2 + 8) == 2 && *(arg2 + 0x28) == 1))
            int32_t x0_4 = GameSpecific_HitCalcPressStyle(arg2)
            data_11cd604 = x0_4
            
            if (x0_4 != 0)
                PressStart(x21, &data_11cd600, arg2)
        else
            data_11cd604 = 0xc0
            PressStart(x21, &data_11cd600, arg2)
    else
        data_11cd604 = 0xc6
        PressStart(x21, &data_11cd600, arg2)

if ((CardsetIsZoomedAny(&var_50, &var_24) & 1) == 0 && *(arg2 + 8) != 3)
    if ((GameDlgManagerDialogActive(5) & 1) != 0 && (*(arg2 + 8) != 2 || *(arg2 + 0x28) != 1))
        goto label_9ac864
    
    if (GameSpecific_HitCalcPressStyle(arg2).d != 0x10)
        goto label_9ac864
    
    return 

label_9ac864:
GameSpecific_GeneralAction(x21, arg2, zx.q(x19))
uint64_t x8_9 = zx.q(*(arg2 + 8))

if (x8_9.d u> 3)
    pthread_kill(pthread_self(), 6)
    Controller* x0_16
    HitResult* x1_7
    bool* x2_4
    x0_16, x1_7, x2_4 = XNoReturn()
    return ClientMouseoverAction(x0_16, x1_7, x2_4) __tailcall

switch (x8_9)
    case 0
        int32_t var_38_1 = 0
        var_50 = _vtable_for_UI2HitResult + 0x10
        int64_t var_48_1 = 0
        UIHitAction(x21, &var_50, zx.q(x19))
    case 1
        if (*(arg2 + 0x18) == 0 || *(arg2 + 0x28) == 3)
            GameSpecific_HitAction(x21, *(arg2 + 0xc), zx.q(x19))
        else
            UIHitAction(x21, arg2 + 0x10, zx.q(x19))
    case 2
        UIHitAction(x21, arg2 + 0x10, zx.q(x19))
    case 3
        if (x19 != 7)
            if (x19 == 1)
                CardsetZoom(*(arg2 + 0x30), zx.q(*(arg2 + 0x38)))
            else if (x19 == 0)
                GameSpecific_CardsetHitAction(*(arg2 + 0x30), zx.q(*(arg2 + 0x38)))
