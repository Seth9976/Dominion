// 函数: _Z18GetUserOnlineStatev
// 地址: 0x9bbc78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(GetActiveProfile() + 0x4324)

if (x8 == 0)
    if (*(GetClient() + 0x1c) != 6)
        return zx.q(*(GetClient() + 0x1c) != 8 ? 1 : 0)
    
    return 0

if (x8 == 1)
    return 3

if (x8 == 2)
    return 2

pthread_kill(pthread_self(), 6)
return CountTotalWins(XNoReturn()) __tailcall
