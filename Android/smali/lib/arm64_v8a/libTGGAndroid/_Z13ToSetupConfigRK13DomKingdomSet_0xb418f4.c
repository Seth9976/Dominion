// 函数: _Z13ToSetupConfigRK13DomKingdomSet
// 地址: 0xb418f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = *arg1

if (x9 == 0)
    GetActiveProfile()
    *(arg1 + 8)
    return DomSetupConfigFromString(XString::operator char const*(), GameLatestVersion(4, false))
        __tailcall

if (x9 == 1)
    return ToSetupConfig(*(arg1 + 8)) __tailcall

pthread_kill(pthread_self(), 6)
return ToSetupConfig(XNoReturn()) __tailcall
