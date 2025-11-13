// 函数: _Z16MatchmakingClickRK12UI2ClickInfo
// 地址: 0x9caab8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_18
XString::XString(&var_18)
int32_t x0_2 = operator==(&var_18, *(arg1 + 8))
XString::~XString()

if ((x0_2 & 1) != 0)
    int32_t x8_1 = *(GetClient() + 0x7778)
    
    if (x8_1 == 2)
        ClientMatchmakingJoin()
        return 0
    
    if (x8_1 != 1)
        pthread_kill(pthread_self(), 6)
        return MatchmakingUpdate(XNoReturn()) __tailcall
    
    ClientMatchmakingCancel()

return 0
