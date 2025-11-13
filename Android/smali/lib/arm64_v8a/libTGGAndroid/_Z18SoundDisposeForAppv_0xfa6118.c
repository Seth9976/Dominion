// 函数: _Z18SoundDisposeForAppv
// 地址: 0xfa6118
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result = *gSoundInterface

if (result != 0)
    (*(*result + 0x18))()
    int64_t* x0 = *gSoundInterface
    
    if (x0 != 0)
        (*(*x0 + 8))()
    
    *gSoundInterface = 0
    void** x19_1 = *gpSoundGlobals
    
    if (*x19_1 == 0)
        result = XPooledFree(x19_1, 0x38)
        *gpSoundGlobals = 0
    else
        void* x8_6 = nullptr
        void* x0_1
        
        while (true)
            if (x8_6 == 0)
                x0_1 = *x19_1
                x8_6 = x0_1
            else
                x0_1 = *x19_1
                x8_6 += 0x80
            
            void* x9_5 = x0_1 + (zx.q(x19_1[1].d) << 7)
            
            if (x8_6 u>= x9_5)
                break
            
            while (true)
                int32_t x10_2 = *(x8_6 + 0x78)
                
                if (x10_2 u>> 0x10 != 0)
                    x19_1[2].d = x10_2 & 0xffff
                    *(x8_6 + 0x78) = x19_1[2].d
                    *(x19_1 + 0x14) -= 1
                    break
                
                x8_6 += 0x80
                
                if (x8_6 u>= x9_5)
                    goto label_fa61cc
        
    label_fa61cc:
        x19_1[1].d = 0
        x19_1[2].d = 0
        result = XFree(x0_1)
        x19_1[4] = 0
        __builtin_memset(x19_1, 0, 0x18)
        x19_1 = *gpSoundGlobals
        
        if (x19_1 != 0)
            result = XPooledFree(x19_1, 0x38)
            *gpSoundGlobals = 0

return result
