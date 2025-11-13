// 函数: _Z31SyncedAchiementLevelFromAILevelb18DbGamePlayerTypeAIb
// 地址: 0x9bf62c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8_2 = zx.q(arg2 + 1)

if (x8_2.d u> 4)
    int64_t lr
    int64_t var_10 = lr
    pthread_kill(pthread_self(), 6)
    GameProfile* x0_2
    int32_t x1
    bool x2
    int32_t x3
    int32_t x4
    int64_t x5
    x0_2, x1, x2, x3, x4, x5 = XNoReturn()
    return MarkRecommendedSetComplete(x0_2, x1, x2, x3, x4, x5) __tailcall

int32_t x8 = 0x7d0

switch (x8_2)
    case 0
        if ((arg3.d & 1) != 0)
            x8 = 0x1b58
        else
            x8 = 0x3e8
    case 1
        x8 = 0xbb8
    case 2
        x8 = 0xfa0
    case 3
        x8 = 0x1388

if ((arg1.d & 1) != 0)
    return zx.q(x8 + 0x186a0)

return zx.q(x8)
