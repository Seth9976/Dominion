// 函数: _Z19MatchmakingSetState16MatchmakingState6GameID
// 地址: 0x9aad4c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
int32_t* x8 = GetClient() + 0x7778
*x8 = x19
x8[1] = arg2

if (x19 == 2)
    GameDlgManagerShow(0x26, 9)
    return SoundPlayIgnoreFocusLoss(*SOUND_SOUND_LOAD_ALWAYS_FX_MATCHMAKE_JOIN_BECAME_AVAILABLE)
        __tailcall

if (x19 == 1)
    return GameDlgManagerShow(0x26, 9) __tailcall

if (x19 == 0)
    return GameDlgManagerDismiss(9, false) __tailcall

pthread_kill(pthread_self(), 6)
return DisconnectReturnToTitle(XNoReturn()) __tailcall
