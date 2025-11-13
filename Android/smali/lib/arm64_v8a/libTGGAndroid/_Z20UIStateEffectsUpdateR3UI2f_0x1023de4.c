// 函数: _Z20UIStateEffectsUpdateR3UI2f
// 地址: 0x1023de4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_40 = v8

if (*(arg1 + 0x17c0) s< 1)
    return 

v8 = arg2.q
int32_t x20_1 = 0

while (true)
    int32_t* x23_1 = *(arg1 + 0x17b8)
    int64_t x22_1 = sx.q(x20_1)
    int32_t x8_3 = *(x23_1 + muls.dp.d(x20_1, 0x30))
    
    if (x8_3 == 1)
        UI2SetState(arg1, *(x23_1 + x22_1 * 0x30 + 0x28), 0xfffffc18, 0, fconvert.s(1f))
    else
        if (x8_3 != 0)
            pthread_kill(pthread_self(), 6)
            UI2* x0_4
            char** x1_4
            x0_4, x1_4 = XNoReturn()
            return HasForceState(x0_4, x1_4) __tailcall
        
        UI2SetStateByName(arg1, *(x23_1 + x22_1 * 0x30 + 0x18))
    
    void* x8_6 = x23_1 + x22_1 * 0x30
    arg2 = *(x8_6 + 0x20) f- v8.d
    *(x8_6 + 0x20) = arg2
    
    if (arg2 > 0f)
        x20_1 += 1
        
        if (x20_1 s>= *(arg1 + 0x17c0))
            break
    else
        int32_t x8_7 = *(arg1 + 0x17c0)
        int32_t x9_2 = x8_7 + not.d(x20_1)
        
        if (x9_2 s>= 1)
            int64_t x0_2 = *(arg1 + 0x17b8) + x22_1 * 0x30
            memmove(x0_2, x0_2 + 0x30, mulu.dp.d(x9_2, 0x30))
            x8_7 = *(arg1 + 0x17c0)
        
        *(arg1 + 0x17c0) = x8_7 - 1
        
        if (x20_1 s>= x8_7 - 1)
            break
