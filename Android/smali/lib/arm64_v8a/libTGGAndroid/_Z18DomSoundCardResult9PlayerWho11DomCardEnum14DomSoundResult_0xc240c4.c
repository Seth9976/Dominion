// 函数: _Z18DomSoundCardResult9PlayerWho11DomCardEnum14DomSoundResult
// 地址: 0xc240c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg3
int32_t x20 = arg2
void* result = DomDefGet(zx.q(x20), zx.q(DomCurrentGameVersion()))

if ((zx.d(*(result + 0xcb)) & 0x20) == 0)
label_c2413c:
    
    switch (x19)
        case 0, 2
            return SoundPlay(*SOUND_SOUND_LOAD_GAME_FX_RESULT_MISS) __tailcall
        case 1
            return SoundPlay(*SOUND_SOUND_LOAD_GAME_FX_RESULT_HIT) __tailcall
        case 3
            return SoundPlay(*SOUND_SOUND_LOAD_GAME_FX_RESULT_ROTATE) __tailcall
else
    if (x19 == 0)
        return SoundPlay(*SOUND_SOUND_LOAD_GAME_FX_LANDMARK_MISS) __tailcall
    
    if (x19 == 2)
        result = DisplayWho()
    
    if (x19 != 2 || result.d == arg1)
        uint64_t x8_1 = zx.q(x20 - 0xc32)
        
        if (x8_1.d u<= 0x14)
            XAsset** x8_2
            
            switch (x8_1)
                case 0
                    x8_2 = SOUND_SOUND_CARDS_FX_LANDMARK_AQUEDUCT
                case 1
                    x8_2 = SOUND_SOUND_CARDS_FX_LANDMARK_ARENA
                case 2, 8, 9, 0xc, 0xd, 0xe, 0xf, 0x11, 0x12, 0x13, 0x14
                    x8_2 = SOUND_SOUND_LOAD_GAME_FX_LANDMARK
                case 3
                    x8_2 = SOUND_SOUND_CARDS_FX_LANDMARK_BASILICA
                case 4
                    x8_2 = SOUND_SOUND_CARDS_FX_LANDMARK_BATHS
                case 5
                    x8_2 = SOUND_SOUND_CARDS_FX_LANDMARK_BATTLEFIELD
                case 6
                    x8_2 = SOUND_SOUND_CARDS_FX_LANDMARK_COLONNADE
                case 7
                    x8_2 = SOUND_SOUND_CARDS_FX_LANDMARK_DEFILED_SHRINE
                case 0xa
                    x8_2 = SOUND_SOUND_CARDS_FX_LANDMARK_LABYRINTH
                case 0xb
                    x8_2 = SOUND_SOUND_CARDS_FX_LANDMARK_MOUNTAIN_PASS
                case 0x10
                    x8_2 = SOUND_SOUND_CARDS_FX_LANDMARK_TOMB
            
            result = SoundPlay(*x8_2)
        
        goto label_c2413c
    
    if (x20 == 0x100)
        return SoundPlay(*SOUND_SOUND_LOAD_GAME_FX_RESULT_CURSE_OPPONENT_NO_CURSES) __tailcall

return result
