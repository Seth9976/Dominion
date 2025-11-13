// 函数: _Z17GetActiveGameDateR4Date
// 地址: 0x9b6598
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetClient()
int32_t x9 = *(x0 + 0x5068)
int32_t x20_1

if (x9 - 3 u< 2 || x9 == 1)
    x20_1 = *(x0 + 0x50c8)
    
    if ((x20_1 & 4) != 0)
    label_9b6600:
        void* x0_2 = GetClient()
        int32_t x8_4 = *(x0_2 + 0x5050)
        *arg1 = *(x0_2 + 0x5048)
        *(arg1 + 8) = x8_4
else
    if (x9 != 2)
        pthread_kill(pthread_self(), 6)
        uint64_t x0_5
        int64_t x1
        x0_5, x1 = XNoReturn()
        return HasFriendsPageAlready(x0_5, x1) __tailcall
    
    x20_1 = *(*(GetClient() + 0x5080) + zx.q(*(x0 + 0x506c)) * 0x1338 + 0x20)
    
    if ((x20_1 & 4) != 0)
        goto label_9b6600

return zx.q(x20_1 u>> 2) & 1
