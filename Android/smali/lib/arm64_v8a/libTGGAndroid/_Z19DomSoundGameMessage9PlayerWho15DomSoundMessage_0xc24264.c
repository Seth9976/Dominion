// 函数: _Z19DomSoundGameMessage9PlayerWho15DomSoundMessage
// 地址: 0xc24264
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 u> 5)
    return 

switch (arg2)
    case 0
        return SoundPlay(*SOUND_SOUND_LOAD_GAME_FX_SHUFFLE_CARDS) __tailcall
    case 1
        if (LocalWho() != arg1.d)
            return SoundPlay(*SOUND_SOUND_LOAD_GAME_FX_TURN_BEGIN_OPPONENT) __tailcall
        
        return SoundPlayIgnoreFocusLoss(*SOUND_SOUND_LOAD_GAME_FX_TURN_BEGIN) __tailcall
    case 2
        return SoundPlayIgnoreFocusLoss(*SOUND_SOUND_LOAD_GAME_FX_TURN_REACTION) __tailcall
    case 3
        return SoundPlayIgnoreFocusLoss(*SOUND_SOUND_LOAD_GAME_FX_TURN_RESUME) __tailcall
    case 4
        return SoundPlay(*SOUND_SOUND_LOAD_GAME_FX_GAMEOVER_VICTORY) __tailcall
    case 5
        return SoundPlay(*SOUND_SOUND_LOAD_GAME_FX_GAMEOVER_DEFEAT) __tailcall
