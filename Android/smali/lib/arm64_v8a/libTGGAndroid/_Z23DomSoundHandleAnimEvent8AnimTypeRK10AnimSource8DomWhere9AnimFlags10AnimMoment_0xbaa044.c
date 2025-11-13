// 函数: _Z23DomSoundHandleAnimEvent8AnimTypeRK10AnimSource8DomWhere9AnimFlags10AnimMoment
// 地址: 0xbaa044
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 == 0 || (arg4 & 0x100) != 0)
    return 

if (arg1.d u> 8)
label_baa190:
    pthread_kill(pthread_self(), 6)
    int64_t x0_13
    AnimSource* x1_10
    int64_t x2_5
    int64_t x3_4
    x0_13, x1_10, x2_5, x3_4 = XNoReturn()
    return DomAnimStart(x0_13, x1_10, x2_5, x3_4) __tailcall

if ((1 << arg1.d & 0x1ec) != 0)
    return 

int32_t x20_1 = *(arg2 + 0xc)

if (arg1.d != 1)
    if (arg1.d != 4)
        goto label_baa190
    
    if ((arg4 & 8) != 0)
        return DomSoundCardReaction(zx.q(*(arg2 + 8)), zx.q(x20_1)) __tailcall
else if (arg5 == 1 && (arg4 & 0x10000) == 0)
    if ((arg4 & 1) != 0)
        DomSoundPlay(zx.q(*(arg2 + 8)), *SOUND_SOUND_LOAD_GAME_FX_LANDPLAY_CARD, "play-impact", 
            false)
        return DomSoundCard(zx.q(*(arg2 + 8)), zx.q(*(arg2 + 0xc)), "play") __tailcall
    
    uint64_t x0_2
    char* x2_1
    XAsset** x8_3
    
    if (arg3 != 2 || (arg4 & 4) == 0)
        uint64_t x1_5
        
        if (*(GetClient() + 0x5068) == 0)
            x1_5 = 0x18
        else
            x1_5 = zx.q(*(ActiveGame() + 0x30))
        
        uint32_t x8_6 = zx.d(*(DomDefGet(zx.q(x20_1), x1_5) + 0xcb))
        x0_2 = zx.q(*(arg2 + 8))
        
        if ((x8_6 & 4) != 0)
            return DomSoundCard(x0_2, zx.q(*(arg2 + 0xc)), "take-artifact-impact") __tailcall
        
        x8_3 = SOUND_SOUND_LOAD_GAME_FX_LAND_CARD
        x2_1 = "other-impact"
    else
        x0_2 = zx.q(*(arg2 + 8))
        x8_3 = SOUND_SOUND_LOAD_GAME_FX_TRASH
        x2_1 = "trash-impact"
    
    return DomSoundPlay(x0_2, *x8_3, x2_1, false) __tailcall
