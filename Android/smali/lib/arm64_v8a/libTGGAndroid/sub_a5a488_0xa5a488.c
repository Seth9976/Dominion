// 函数: sub_a5a488
// 地址: 0xa5a488
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = *arg2
int32_t x9 = **(arg1 + 8)

if (x9 != 0)
    void* x8_1 = *(arg1 + 0x10)
    
    if (x9 == 2)
        if ((IsExpansion(zx.q(x19), zx.q(*(x8_1 + 4))) & 1) != 0)
            return 0
    else
        if (x9 != 1)
            pthread_kill(pthread_self(), 6)
            int64_t x0_8
            void* x1_3
            x0_8, x1_3 = XNoReturn()
            return sub_a5a4f8(x0_8, x1_3) __tailcall
        
        if ((IsExpansion(zx.q(x19), zx.q(*(x8_1 + 4))) & 1) == 0)
            return 0

return IsLandscape(zx.q(x19)) __tailcall
