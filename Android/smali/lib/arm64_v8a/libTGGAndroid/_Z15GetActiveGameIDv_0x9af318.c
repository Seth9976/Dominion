// 函数: _Z15GetActiveGameIDv
// 地址: 0x9af318
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(GetClient() + 0x5068) != 2)
    return 0

void* x0_1 = GetClient()
int32_t x9 = *(x0_1 + 0x5068)

if (x9 - 3 u< 2 || x9 == 1)
    return zx.q(*(x0_1 + 0x50a8))

if (x9 == 2)
    return zx.q(*(*(GetClient() + 0x5080) + zx.q(*(x0_1 + 0x506c)) * 0x1338))

pthread_kill(pthread_self(), 6)
XNoReturn()
return GameNotificationInit() __tailcall
