// 函数: _Z20UIElementButtonSoundRK9UIElement16ButtonSoundState
// 地址: 0x1054bf8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 u> 3)
    pthread_kill(pthread_self(), 6)
    UIElement* x0_4
    ButtonRuntimeState* x1_3
    ButtonMouseState* x2_3
    bool x3_3
    bool x4_3
    int32_t x5_3
    x0_4, x1_3, x2_3, x3_3, x4_3, x5_3 = XNoReturn()
    return ButtonStateUpdate(x0_4, x1_3, x2_3, x3_3, x4_3, x5_3) __tailcall

switch (arg2)
    case 0
        arg1 = *(arg1 + 0x158)
        
        if (arg1 != 0)
            return SoundPlay(arg1) __tailcall
    case 2
        arg1 = *(arg1 + 0x150)
        
        if (arg1 != 0)
            return SoundPlay(arg1) __tailcall
    case 3
        arg1 = *(arg1 + 0x160)
        
        if (arg1 != 0)
            return SoundPlay(arg1) __tailcall
