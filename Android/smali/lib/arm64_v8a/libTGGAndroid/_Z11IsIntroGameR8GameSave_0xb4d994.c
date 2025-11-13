// 函数: _Z11IsIntroGameR8GameSave
// 地址: 0xb4d994
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t i_2 = zx.q(*(arg1 + 0x11b4))
int32_t x9
int32_t x10

if (i_2.d s< 1)
    x10 = 0
    x9 = 0
else
    x9 = 0
    x10 = 0
    void* __offset(GameSave, 0x6c) x11_1 = arg1 + 0x6c
    uint64_t i_1 = i_2
    uint64_t i
    
    do
        int32_t x13_1 = *(x11_1 - 4)
        
        if (x13_1 u>= 3)
            if (x13_1 - 0x3e8 u< 2)
                x10 += 1
            else
                if (x13_1 != 3)
                    pthread_kill(pthread_self(), 6)
                    uint64_t x0_2
                    int64_t x1
                    x0_2, x1 = XNoReturn()
                    return WaitDurationAmount(x0_2, x1) __tailcall
                
                if (*x11_1 == 3)
                    x9 += 1
        
        i = i_1
        i_1 -= 1
        x11_1 += 0x22c
    while (i != 1)

return zx.q(x10 == 1 ? 1 : 0) & zx.q(x9 + 1 == i_2.d ? 1 : 0)
