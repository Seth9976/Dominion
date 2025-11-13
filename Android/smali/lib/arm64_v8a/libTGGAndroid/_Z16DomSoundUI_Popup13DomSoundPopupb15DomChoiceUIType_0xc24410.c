// 函数: _Z16DomSoundUI_Popup13DomSoundPopupb15DomChoiceUIType
// 地址: 0xc24410
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1.d u> 6)
    return 

int64_t lr
int64_t var_20 = lr
int32_t x19 = arg2.d
uint64_t* const x8_5
uint64_t* const x9_1

switch (arg1.d)
    case 0, 2
        LocalWho()
        x8_5 = SOUND_SOUND_LOAD_GAME_UI_POPUP_MISC_DESPAWN
        x9_1 = SOUND_SOUND_LOAD_GAME_UI_POPUP_MISC_SPAWN
    label_c244bc:
        uint64_t* const x8_6
        
        if ((x19 & 1) != 0)
            x8_6 = x9_1
        else
            x8_6 = x8_5
        
        return SoundPlay(*x8_6) __tailcall
    case 1
        LocalWho()
        x8_5 = SOUND_SOUND_LOAD_GAME_UI_POPUP_OVERPAY_DESPAWN
        x9_1 = SOUND_SOUND_LOAD_GAME_UI_POPUP_OVERPAY_SPAWN
        goto label_c244bc
    case 3, 4, 5, 6
        LocalWho()
        uint64_t* const x8_2
        
        if ((x19 & 1) != 0)
            x8_2 = SOUND_SOUND_LOAD_GAME_UI_POPUP_REVEAL_SPAWN
        else
            x8_2 = SOUND_SOUND_LOAD_GAME_UI_POPUP_REVEAL_DESPAWN
        
        uint64_t* const x8_3
        
        if ((((arg3 != 0x2e ? 1 : 0) | not.d(x19)) & 1) != 0)
            x8_3 = x8_2
        else
            x8_3 = SOUND_SOUND_CARDS_UI_POPUP_REVEAL_TRASH_LURKER
        
        return SoundPlay(*x8_3) __tailcall
