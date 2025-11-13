// 函数: _Z23StructureDisposeForGamev
// 地址: 0xfd23a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x21 = **gpGameData

while (true)
    void* x8_1 = *x21
    void* x19 = x8_1
    
    while (true)
        int64_t x8_2 = x8_1 + zx.q(x21[1].d) * 0x98
        
        if (x19 u>= x8_2)
        label_fd241c:
            int64_t* x22 = *gpGameData
            int64_t* x19_1 = *x22
            int64_t result
            
            if (*x19_1 == 0)
                result = XPooledFree(x19_1, 0x28)
                *x22 = 0
            else
            label_fd2444:
                void* x0_2 = *x19_1
                void* x20_1 = x0_2
                
                while (true)
                    int64_t x8_5 = x0_2 + zx.q(x19_1[1].d) * 0x98
                    
                    if (x20_1 u>= x8_5)
                        break
                    
                    while (zx.d(*(x20_1 + 0x92)) == 0)
                        x20_1 += 0x98
                        
                        if (x20_1 u>= x8_5)
                            goto label_fd24d4
                    
                    void* i = *(x20_1 + 0x50)
                    
                    while (i != 0)
                        void* i_1 = i
                        i = *(i + 0x18)
                        XString::~XString()
                        XPooledFree(i_1, 0x28)
                    
                    __builtin_memset(x20_1 + 0x50, 0, 0x14)
                    XString::~XString()
                    x19_1[2].d = zx.d(*(x20_1 + 0x90))
                    *(x20_1 + 0x90) = x19_1[2].d
                    *(x19_1 + 0x14) -= 1
                    
                    if (x20_1 == 0)
                        goto label_fd2444
                    
                    x0_2 = *x19_1
                    x20_1 += 0x98
                
            label_fd24d4:
                x19_1[1].d = 0
                x19_1[2].d = 0
                result = XFree(x0_2)
                x19_1[4] = 0
                __builtin_memset(x19_1, 0, 0x18)
                x19_1 = *x22
                
                if (x19_1 != 0)
                    result = XPooledFree(x19_1, 0x28)
                    *x22 = 0
            
            return result
        
        while (zx.d(*(x19 + 0x92)) == 0)
            x19 += 0x98
            
            if (x19 u>= x8_2)
                goto label_fd241c
        
        StructureDestroy(x19)
        
        if (x19 == 0)
            break
        
        x8_1 = *x21
        x19 += 0x98
