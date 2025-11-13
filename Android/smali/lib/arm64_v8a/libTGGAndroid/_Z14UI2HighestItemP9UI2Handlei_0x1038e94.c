// 函数: _Z14UI2HighestItemP9UI2Handlei
// 地址: 0x1038e94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 s>= 1)
    UI2Handle* x8_1 = arg1
    void* result = nullptr
    uint64_t i_1 = zx.q(arg2)
    int64_t x9_1 = *gUI2
    uint64_t i
    
    do
        uint64_t x12_1 = zx.q(*x8_1)
        
        if (result == 0 || *(result + 0x1690) s< *(x9_1 + x12_1 * 0x19a8 + 0x1690))
            result = x9_1 + x12_1 * 0x19a8
        
        i = i_1
        i_1 -= 1
        x8_1 += 4
    while (i != 1)
    
    if (result != 0)
        return result

pthread_kill(pthread_self(), 6)
return UI2FindParent(XNoReturn()) __tailcall
