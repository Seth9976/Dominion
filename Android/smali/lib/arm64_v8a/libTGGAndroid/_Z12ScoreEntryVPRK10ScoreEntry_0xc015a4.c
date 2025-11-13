// 函数: _Z12ScoreEntryVPRK10ScoreEntry
// 地址: 0xc015a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *arg1

if (x8 - 1 u< 2)
    return zx.q(*(arg1 + 8))

if (x8 == 3)
    return 0xffffd8f0

if (x8 == 0)
    return zx.q(*(arg1 + 4))

pthread_kill(pthread_self(), 6)
return ScoreWhat(XNoReturn()) __tailcall
