// 函数: _Z15DomSoundOngoing9PlayerWhoR17SoundOngoingState11DomCardEnum17DomSoundStartStop
// 地址: 0xc2434c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg4 == 0)
    SoundStopHandle(*arg2)
    *arg2 = 0
else if (arg3 == 0x50c)
    XAsset* x21 = *SOUND_SOUND_CARDS_FX_ONGOING_POSSESSION
    int32_t x0
    
    if (arg1.d != 0xffffffff)
        x0 = DisplayWho()
    
    int64_t x0_2
    
    if (arg1.d != 0xffffffff && x0 != arg1.d)
        x0_2 = 0
    else
        x0_2 = SoundPlayLoop(x21)
    
    *arg2 = x0_2.d
