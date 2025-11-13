// 函数: _Z15DomSoundUI_Zoom12DomSoundZoomb
// 地址: 0xc243c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1.d == 1)
    uint64_t* const x8_2
    
    if ((arg2.d & 1) != 0)
        x8_2 = SOUND_SOUND_LOAD_GAME_UI_ZOOM_OPPONENT
    else
        x8_2 = SOUND_SOUND_LOAD_GAME_UI_ZOOM_OPPONENT_DISMISS
    
    return SoundPlay(*x8_2) __tailcall

if (arg1.d != 0)
    return 

uint64_t* const x8

if ((arg2.d & 1) != 0)
    x8 = SOUND_SOUND_LOAD_GAME_UI_ZOOM_CARD
else
    x8 = SOUND_SOUND_LOAD_GAME_UI_ZOOM_CARD_DISMISS

return SoundPlay(*x8) __tailcall
