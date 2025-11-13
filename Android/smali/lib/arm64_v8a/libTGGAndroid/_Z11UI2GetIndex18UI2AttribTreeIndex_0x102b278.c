// 函数: _Z11UI2GetIndex18UI2AttribTreeIndex
// 地址: 0x102b278
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x12 = zx.q(*(gUI2 + 8))

if (x12.d != 0)
    void* x9_1 = *gUI2
    void* i = x9_1
    
    do
        if (zx.d(*(i + 0x19a2)) != 0)
            if (i != 0xffffffff)
                void* j
                
                do
                    if (*(i + 0x1688) != *(gUI2Editor + 0x6008) || zx.d(*(i + 0x17d8)) != 0)
                    label_102b2f0:
                        j = x9_1
                        
                        if (i != 0)
                            j = i + 0x19a8
                    else
                        void* i_1 = i
                        
                        while (true)
                            if (zx.d(*(i_1 + 5)) != 0)
                                goto label_102b2f0
                            
                            i_1 = *(i_1 + 0x17d0)
                            
                            if (i_1 == 0)
                                if (*(i + 0x1690) == arg1)
                                    return i
                                
                                break
                        
                        j = i + 0x19a8
                    
                    while (true)
                        if (j u>= x9_1 + x12 * 0x19a8)
                            goto label_102b358
                        
                        if (zx.d(*(j + 0x19a2)) != 0)
                            break
                        
                        j += 0x19a8
                    
                    i = j
                while (j != 0xffffffff)
            
            break
        
        i += 0x19a8
    while (i u< x9_1 + x12 * 0x19a8)

label_102b358:
pthread_kill(pthread_self(), 6)
XNoReturn()
return UI2EditorForceUpdateAll() __tailcall
