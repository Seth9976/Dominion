// 函数: _Z16DomSoundCardGain9PlayerWho11DomCardEnum
// 地址: 0xc23b9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg2
int32_t x19 = arg1
DomGame* x0 = DomGameGet()
int32_t x0_1 = GetObeliskPile(x0)

if (x0_1 != 0 && BoardPileSource(x0, zx.q(x20), false) == x0_1)
    SoundPlay(*SOUND_SOUND_CARDS_FX_GAIN_OBELISK_CARD)

uint64_t* const x8_1

if (x20 s<= 0x70d)
    uint64_t x8_3 = zx.q(x20 - 0x100)
    
    if (x8_3.d u<= 6)
        switch (x8_3)
            case 0
                x8_1 = SOUND_SOUND_LOAD_GAME_FX_GAIN_CURSE
            case 1
                x8_1 = SOUND_SOUND_CARDS_FX_GAIN_VICTORY_ESTATE
            case 2
                x8_1 = SOUND_SOUND_CARDS_FX_GAIN_VICTORY_DUCHY
            case 3
                x8_1 = SOUND_SOUND_CARDS_FX_GAIN_VICTORY_PROVINCE
            case 4
                x8_1 = SOUND_SOUND_CARDS_FX_GAIN_TREASURE_COPPER
            case 5
                x8_1 = SOUND_SOUND_CARDS_FX_GAIN_TREASURE_SILVER
            case 6
                x8_1 = SOUND_SOUND_CARDS_FX_GAIN_TREASURE_GOLD
    else if (x20 == 0x600)
        x8_1 = SOUND_SOUND_CARDS_FX_GAIN_TREASURE_PLATINUM
    else
        if (x20 != 0x601)
            goto label_c23dcc
        
        x8_1 = SOUND_SOUND_CARDS_FX_GAIN_VICTORY_COLONY
else if (x20 s<= 0x923)
    uint64_t x8_4 = zx.q(x20 - 0x70e)
    int64_t result
    uint64_t* const x8_7
    XAsset* x20_1
    
    if (x8_4.d u> 0xf)
    label_c23dcc:
        void* x0_17 = DomDefGet(zx.q(x20), zx.q(DomCurrentGameVersion()))
        int32_t x8_6 = (*(x0_17 + 0xc8)).d
        
        if ((x8_6 & 2) != 0)
            int32_t x8_8 = *(x0_17 + 0xc4)
            
            if (x8_8 s<= 4)
                x8_1 = SOUND_SOUND_LOAD_GAME_FX_GAIN_TREASURE_MISC_COST_0_4
            else if (x8_8 s> 6)
                x8_1 = SOUND_SOUND_LOAD_GAME_FX_GAIN_TREASURE_MISC_COST_7_UP
            else
                x8_1 = SOUND_SOUND_LOAD_GAME_FX_GAIN_TREASURE_MISC_COST_5_6
        else if ((x8_6 & 8) != 0)
            x8_1 = SOUND_SOUND_LOAD_GAME_FX_GAIN_VICTORY_MISC
        else
            x8_1 = SOUND_SOUND_LOAD_GAME_FX_GAIN_CARD
    else
        switch (x8_4)
            case 0
                if (DisplayWho() != x19)
                    x8_7 = SOUND_SOUND_CARDS_FX_OPPONENT_GAIN_PRIZE_BAG_OF_GOLD
                label_c23e20:
                    x20_1 = *x8_7
                    result = DisplayWho()
                    
                    if (result.d == x19)
                        return SoundPlay(x20_1) __tailcall
                    
                    return result
                
                x8_1 = SOUND_SOUND_CARDS_FX_GAIN_PRIZE_BAG_OF_GOLD
            case 1
                if (DisplayWho() != x19)
                    x8_7 = SOUND_SOUND_CARDS_FX_OPPONENT_GAIN_PRIZE_DIADEM
                    goto label_c23e20
                
                x8_1 = SOUND_SOUND_CARDS_FX_GAIN_PRIZE_DIADEM
            case 2
                if (DisplayWho() != x19)
                    x8_7 = SOUND_SOUND_CARDS_FX_OPPONENT_GAIN_PRIZE_FOLLOWERS
                    goto label_c23e20
                
                x8_1 = SOUND_SOUND_CARDS_FX_GAIN_PRIZE_FOLLOWERS
            case 3
                if (DisplayWho() != x19)
                    x8_7 = SOUND_SOUND_CARDS_FX_OPPONENT_GAIN_PRIZE_PRINCESS
                    goto label_c23e20
                
                x8_1 = SOUND_SOUND_CARDS_FX_GAIN_PRIZE_PRINCESS
            case 4
                bool cond:0_1 = DisplayWho() == x19
                x20_1 = *SOUND_SOUND_CARDS_FX_OPPONENT_GAIN_PRIZE_TRUSTY_STEED
                
                if (cond:0_1)
                    return SoundPlay(x20_1) __tailcall
                
                result = DisplayWho()
                
                if (result.d != x19)
                    return result
                
                return SoundPlay(x20_1) __tailcall
            case 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe
                goto label_c23dcc
            case 0xf
                if (DisplayWho() != x19)
                    x8_7 = SOUND_SOUND_CARDS_CORNUCOPIA2E_FX_OPPONENT_GAIN_PRIZE_COURSER
                    goto label_c23e20
                
                x8_1 = SOUND_SOUND_CARDS_CORNUCOPIA2E_FX_GAIN_PRIZE_COURSER
else if (x20 - 0x924 u< 5)
    x8_1 = SOUND_SOUND_CARDS_FX_GAIN_RUINS
else if (x20 == 0xd29)
    x8_1 = SOUND_SOUND_CARDS_FX_GAIN_WISH
else
    if (x20 != 0xd2f)
        goto label_c23dcc
    
    x8_1 = SOUND_SOUND_CARDS_FX_GAIN_GHOST

return SoundPlay(*x8_1) __tailcall
