// 函数: _Z11DomLogRange11DomLogStyle9PlayerWho
// 地址: 0xc0f95c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 == 0)
    return zx.q(*(gLog + 0x10)) << 0x20

if (arg1 != 1)
    pthread_kill(pthread_self(), 6)
    uint64_t x0_6
    GameSave* x1
    DomGame* x2
    int64_t x3
    int32_t x4
    int32_t x5
    DomLogLine* x6
    int64_t x7
    x0_6, x1, x2, x3, x4, x5, x6, x7 = XNoReturn()
    int64_t lr
    return DomLogGetLines(x0_6, x1, x2, x3, x4, x5, x6, x7, lr) __tailcall

int32_t x8 = *(gLog + 0x10)
int32_t x11

if (x8 == 0)
    x11 = 0
else
    void* x10_1 = *(gLog + 8)
    int64_t i_2 = sx.q(x8) << 6
    int32_t x12_1 = 0
    x11 = x8
    int32_t* x13_1 = x10_1 + 0x24
    int64_t i_1 = i_2
    int64_t i
    
    do
        if (x13_1[-7] == 6 && *x13_1 == 0)
            x12_1 = x13_1[-2]
        
        i = i_1
        i_1 -= 0x40
        x13_1 = &x13_1[0x10]
    while (i != 0x40)
    
    if (x12_1 s>= 2)
        int32_t x11_1 = 0
        int32_t x13_4 = ((i_2 - -0x3fffffffc0) u>> 6).d + 1
        void* x10_2 = x10_1 + 0x24
        
        while (*(x10_2 - 0x1c) != 6 || *x10_2 != 0 || *(x10_2 - 8) != x12_1 - 1)
            x11_1 += 1
            int64_t i_3 = i_2
            i_2 -= 0x40
            x10_2 += 0x40
            
            if (i_3 == 0x40)
                x11_1 = x13_4
                break
        
        return zx.q(x11_1) | zx.q(x8) << 0x20

return zx.q(x8 - x11) | zx.q(x8) << 0x20
