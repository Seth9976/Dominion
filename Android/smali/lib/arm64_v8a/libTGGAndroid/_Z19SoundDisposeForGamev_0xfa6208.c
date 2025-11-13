// 函数: _Z19SoundDisposeForGamev
// 地址: 0xfa6208
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*gSoundInterface == 0)
    return 

int64_t* x8_1 = *gpSoundGlobals

while (true)
    void* x9_1 = *x8_1
    void* x19_1 = x9_1
    
    while (true)
        void* x9_2 = x9_1 + (zx.q(x8_1[1].d) << 7)
        
        if (x19_1 u>= x9_2)
        label_fa6294:
            
            while (true)
                void* x9_3 = *x8_1
                void* x19_2 = x9_3
                
                while (true)
                    void* x8_5 = x9_3 + (zx.q(x8_1[1].d) << 7)
                    
                    if (x19_2 u>= x8_5)
                        return 
                    
                    while (zx.d(*(x19_2 + 0x7a)) == 0)
                        x19_2 += 0x80
                        
                        if (x19_2 u>= x8_5)
                            return 
                    
                    SoundInstanceFree(x19_2)
                    x8_1 = *gpSoundGlobals
                    
                    if (x19_2 == 0)
                        break
                    
                    x9_3 = *x8_1
                    x19_2 += 0x80
        else
            while (zx.d(*(x19_1 + 0x7a)) == 0)
                x19_1 += 0x80
                
                if (x19_1 u>= x9_2)
                    goto label_fa6294
            
            int64_t* x0_1 = *gSoundInterface
            (*(*x0_1 + 0x50))(x0_1, x19_1)
            *(x19_1 + 0x72) = 0
            x8_1 = *gpSoundGlobals
            
            if (x19_1 == 0)
                break
            
            x9_1 = *x8_1
            x19_1 += 0x80
