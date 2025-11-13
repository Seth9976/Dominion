// 函数: _Z20DomSoundCardReaction9PlayerWho11DomCardEnum
// 地址: 0xc23eb8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 s<= 0x928)
    switch (arg2)
        case 0x202
            return SoundPlay(*SOUND_SOUND_CARDS_FX_REACTION_MOAT) __tailcall
        case 0x30b
            return SoundPlay(*SOUND_SOUND_CARDS_FX_REACTION_DIPLOMAT) __tailcall
        case 0x31a
            return SoundPlay(*SOUND_SOUND_CARDS_FX_REACTION_SECRET_CHAMBER) __tailcall
        case 0x604
            return SoundPlay(*SOUND_SOUND_CARDS_FX_REACTION_WATCHTOWER) __tailcall
        case 0x704
            return SoundPlay(*SOUND_SOUND_CARDS_FX_REACTION_HORSE_TRADERS) __tailcall
        case 0x802
            return SoundPlay(*SOUND_SOUND_CARDS_FX_REACTION_FOOLS_GOLD) __tailcall
        case 0x807
            return SoundPlay(*SOUND_SOUND_CARDS_FX_REACTION_TUNNEL) __tailcall
        case 0x80d
            return SoundPlay(*SOUND_SOUND_CARDS_FX_REACTION_TRADER) __tailcall
        case 0x901
            return SoundPlay(*SOUND_SOUND_CARDS_FX_REACTION_BEGGAR) __tailcall
        case 0x906
            return SoundPlay(*SOUND_SOUND_CARDS_FX_REACTION_MARKET_SQUARE) __tailcall
    
    return 

if (arg2 s<= 0xe0a)
    if (arg2 == 0x929)
        return SoundPlay(*SOUND_SOUND_CARDS_FX_REACTION_HOVEL) __tailcall
    
    if (arg2 == 0xb06)
        return SoundPlay(*SOUND_SOUND_CARDS_FX_REACTION_CARAVAN_GUARD) __tailcall
    
    if (arg2 == 0xd01)
        return SoundPlay(*SOUND_SOUND_CARDS_FX_REACTION_FAITHFUL_HOUND) __tailcall
else
    uint64_t x8_2 = zx.q(arg2 - 0xf00)
    
    if (x8_2.d u> 0x12)
        if (arg2 == 0xe0b)
            return SoundPlay(*SOUND_SOUND_CARDS_FX_REACTION_PATRON) __tailcall
        
        if (arg2 == 0x1134)
            return SoundPlay(*SOUND_SOUND_CARDS_PLUNDER_FX_REACTION_SHIELD) __tailcall
    else
        switch (x8_2)
            case 0
                return SoundPlay(*SOUND_SOUND_CARDS_FX_REACTION_BLACK_CAT) __tailcall
            case 1
                return SoundPlay(*SOUND_SOUND_CARDS_FX_REACTION_SLEIGH) __tailcall
            case 6
                return SoundPlay(*SOUND_SOUND_CARDS_FX_REACTION_SHEEPDOG) __tailcall
            case 0xe
                return SoundPlay(*SOUND_SOUND_CARDS_FX_REACTION_VILLAGE_GREEN) __tailcall
            case 0x12
                return SoundPlay(*SOUND_SOUND_CARDS_FX_REACTION_FALCONER) __tailcall
