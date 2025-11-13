// 函数: _Z17SetDefaultAILevel18DbGamePlayerTypeAI
// 地址: 0xb00684
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
int32_t* x0 = ActiveGame()
int32_t var_14

if ((IsCampaignMission(zx.q(*x0), &var_14) & 1) != 0)
    void* result = GetActiveProfile()
    *(result + 0x3588) = x19
    return result

if ((zx.d(x0[8].b) & 4) == 0)
    pthread_kill(pthread_self(), 6)
    return PlayerInfoFloatingClick(XNoReturn()) __tailcall

*(GetActiveProfile() + 0x75a0) = x19
return SaveProfiles()
