// 函数: sub_a5a380
// 地址: 0xa5a380
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = *arg2
int32_t x9 = **(arg1 + 8)

if (x9 != 0)
    int32_t* x8_1 = *(arg1 + 0x10)
    
    if (x9 == 2)
        if ((IsExpansion(zx.q(x19), zx.q(*x8_1)) & 1) != 0)
            return 0
    else
        if (x9 != 1)
            pthread_kill(pthread_self(), 6)
            int64_t x0_10
            void* x1_2
            x0_10, x1_2 = XNoReturn()
            return sub_a5a410(x0_10, x1_2) __tailcall
        
        if ((IsExpansion(zx.q(x19), zx.q(*x8_1)) & 1) == 0)
            return 0

return (zx.q(IsLandscape(zx.q(x19))) ^ 1) & 1
