// 函数: _spEventQueue_drain
// 地址: 0xfbb61c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1[3].d != 0)
    return 

int64_t* x19_1 = arg1
arg1[3].d = 1

if (arg1[2].d s>= 1)
    int32_t i = 0
    
    do
        void* x8_3 = x19_1[1]
        uint64_t x21_2 = zx.q(*(x8_3 + (zx.q(i) << 0x20 s>> 0x1d)))
        
        if (x21_2.d u<= 5)
            int64_t i_1 = sx.q(i)
            void* x20_1 = *(x8_3 + ((i_1 + 1) << 3))
            
            switch (x21_2)
                case 0, 1, 3
                    int64_t x8_4 = *(x20_1 + 0x20)
                    
                    if (x8_4 != 0)
                        x8_4(*x19_1, zx.q(x21_2.d), x20_1, 0)
                    
                    arg1 = *x19_1
                    int64_t x8_5 = arg1[3]
                    
                    if (x8_5 != 0)
                        x8_5(arg1, zx.q(x21_2.d), x20_1, 0)
                case 2
                    int64_t x8_6 = *(x20_1 + 0x20)
                    
                    if (x8_6 != 0)
                        x8_6(*x19_1, 2, x20_1, 0)
                    
                    void* x0_7 = *x19_1
                    int64_t x8_7 = *(x0_7 + 0x18)
                    
                    if (x8_7 != 0)
                        x8_7(x0_7, 2, x20_1, 0)
                    
                    goto label_fbb73c
                case 4
                label_fbb73c:
                    int64_t x8_8 = *(x20_1 + 0x20)
                    
                    if (x8_8 != 0)
                        x8_8(*x19_1, 4, x20_1, 0)
                    
                    void* x0_9 = *x19_1
                    int64_t x8_9 = *(x0_9 + 0x18)
                    
                    if (x8_9 != 0)
                        x8_9(x0_9, 4, x20_1, 0)
                    
                    spIntArray_dispose(*(x20_1 + 0x80))
                    void* x21_1 = *(x20_1 + 0x88)
                    _spFree(*(x21_1 + 8))
                    _spFree(x21_1)
                    _spFree(*(x20_1 + 0x90))
                    _spFree(x20_1)
                case 5
                    int64_t x8_10 = *(x20_1 + 0x20)
                    int64_t x21_3 = *(x8_3 + (i_1 << 3) + 0x10)
                    
                    if (x8_10 != 0)
                        x8_10(*x19_1, 5, x20_1, x21_3)
                    
                    arg1 = *x19_1
                    int64_t x8_11 = arg1[3]
                    
                    if (x8_11 != 0)
                        x8_11(arg1, 5, x20_1, x21_3)
                    
                    i = (i_1 + 1).d
        
        i += 2
    while (i s< x19_1[2].d)

x19_1[2].d = 0
x19_1[3].d = 0
