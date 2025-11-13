// 函数: _Z13GetSmartplays14SmartplayStyle
// 地址: 0xb11c7c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 == 1)
    int32_t x0_2 = LocalWho()
    return GameGetPlayer(ActiveGame() + 8, zx.q(x0_2)) + 0x28

if (arg1 != 0)
    pthread_kill(pthread_self(), 6)
    return SaveSmartplays(XNoReturn()) __tailcall

void* x0 = GetActiveProfile()
void* result = x0 + 0x5760

if (*(x0 + 0x5960) == 0)
    DefaultSmartplays()
    PlayerSmartplays var_228
    CopySmartplays(result, &var_228)

return result
