// 函数: _Z18WaitDurationAmount12DurationType9GameSpeed
// 地址: 0xb4da30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = zx.q(arg1)

if (arg2 == 3)
    return zx.q(*((x20 << 4) + 0x7ef4d0))

if (arg2 == 1)
    return zx.q(*((x20 << 4) + 0x7ef4cc))

if (arg2 != 0)
label_b4db64:
    pthread_kill(pthread_self(), 6)
    DomEffectData* x0_7
    UIWaitStyle* x1
    x0_7, x1 = XNoReturn()
    return WaitDuration(x0_7, x1) __tailcall

if (*(GetClient() + 0x5068) == 1)
    void* x0_1 = ActiveGame()
    uint64_t x8_2 = zx.q(*(x0_1 + 0x11b4))
    
    if (x8_2.d s>= 1)
        int32_t x9_1 = 0
        int32_t x10_1 = 0
        void* x11_1 = x0_1 + 0x6c
        uint64_t x12_1 = x8_2
        
        while (true)
            int32_t x13_1 = *(x11_1 - 4)
            
            if (x13_1 u>= 3)
                if (x13_1 - 0x3e8 u< 2)
                    x10_1 += 1
                else
                    if (x13_1 != 3)
                        goto label_b4db64
                    
                    if (*x11_1 == 3)
                        x9_1 += 1
            
            uint64_t temp0_1 = x12_1
            x12_1 -= 1
            x11_1 += 0x22c
            
            if (temp0_1 == 1)
                if (arg1 == 8 && x10_1 == 1 && x9_1 + 1 == x8_2.d)
                    return zx.q(*((x20 << 4) + 0x7ef4c8) << 1)
                
                break

return zx.q(*((x20 << 4) + 0x7ef4c8))
