// 函数: _Z24AttachmentDisposeForGamev
// 地址: 0xf69870
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x21 = *(*gpGameData + 0x28)

while (true)
    void* x8_1 = *x21
    void* x19 = x8_1
    
    while (true)
        int64_t x8_2 = x8_1 + zx.q(x21[1].d) * 0x34
        
        if (x19 u>= x8_2)
        label_f698e8:
            uint64_t x20 = *gpGameData
            int64_t* x19_1 = *(x20 + 0x28)
            int64_t result
            
            if (*x19_1 == 0)
                result = XPooledFree(x19_1, 0x28)
                *(x20 + 0x28) = 0
            else
                void* x9_3 = nullptr
                void* x0_2
                
                while (true)
                    if (x9_3 == 0)
                        x0_2 = *x19_1
                        x9_3 = x0_2
                    else
                        x0_2 = *x19_1
                        x9_3 += 0x34
                    
                    int64_t x10_5 = x0_2 + zx.q(x19_1[1].d) * 0x34
                    
                    if (x9_3 u>= x10_5)
                        break
                    
                    while (true)
                        int32_t x11_2 = *(x9_3 + 0x30)
                        
                        if (x11_2 u>> 0x10 != 0)
                            x19_1[2].d = x11_2 & 0xffff
                            *(x9_3 + 0x30) = x19_1[2].d
                            *(x19_1 + 0x14) -= 1
                            break
                        
                        x9_3 += 0x34
                        
                        if (x9_3 u>= x10_5)
                            goto label_f69964
                
            label_f69964:
                x19_1[1].d = 0
                x19_1[2].d = 0
                result = XFree(x0_2)
                x19_1[4] = 0
                __builtin_memset(x19_1, 0, 0x18)
                x19_1 = *(x20 + 0x28)
                
                if (x19_1 != 0)
                    result = XPooledFree(x19_1, 0x28)
                    *(x20 + 0x28) = 0
            
            return result
        
        while (zx.d(*(x19 + 0x32)) == 0)
            x19 += 0x34
            
            if (x19 u>= x8_2)
                goto label_f698e8
        
        AttachmentDestroy(x19)
        
        if (x19 == 0)
            break
        
        x8_1 = *x21
        x19 += 0x34
