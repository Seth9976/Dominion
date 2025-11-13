// 函数: _Z22GameSpecific_JoinAsyncv
// 地址: 0xb2c09c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_14
int32_t x0_1 = AsyncMatchmakingGetState(&var_14)
void* x0_2 = GetActiveProfile()
int32_t x9_1

if (x0_1 == 1)
    x9_1 = *(x0_2 + 0x757c) & 0xfffffffe
else
    if (x0_1 != 0)
        pthread_kill(pthread_self(), 6)
        return DomAsyncMatchmakingSettingsClick(XNoReturn()) __tailcall
    
    x9_1 = *(x0_2 + 0x757c) | 1

*(x0_2 + 0x757c) = x9_1
*(x0_2 + 0x42f0) = CurrentDateTime()
SaveProfiles()
return PostAsyncSettings()
