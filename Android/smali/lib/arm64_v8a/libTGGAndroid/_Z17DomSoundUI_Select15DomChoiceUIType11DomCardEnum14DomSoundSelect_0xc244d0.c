// 函数: _Z17DomSoundUI_Select15DomChoiceUIType11DomCardEnum14DomSoundSelect
// 地址: 0xc244d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 == 2)
    LocalWho()
    return SoundPlay(*SOUND_SOUND_LOAD_ALWAYS_UI_SELECT_CARD_TOGGLE_OFF) __tailcall

if (arg3 == 1)
    LocalWho()
    return SoundPlay(*SOUND_SOUND_LOAD_ALWAYS_UI_SELECT_CARD_TOGGLE_ON) __tailcall

if (arg3 != 0)
    pthread_kill(pthread_self(), 6)
    int64_t x0_7
    int64_t x1_3
    x0_7, x1_3 = XNoReturn()
    return DomSoundUI_Rearrange(x0_7, x1_3) __tailcall

if (arg1.d - 1 u< 3)
    return 

LocalWho()
return SoundPlay(*SOUND_SOUND_LOAD_GAME_UI_SELECT_CARD) __tailcall
