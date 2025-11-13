// 函数: sub_9fcf9c
// 地址: 0x9fcf9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

for (int64_t i = 0; i != 0x10000; i += 1)
    for (void* j = *(&data_12f9f30 + (i << 3)); j != 0; j = *(j + 0x18))
        *(*(j + 8) + 0xe5) = 0

int64_t result = sub_9f54c0(*((sx.q(arg1) << 3) + 0x14a7240))
int64_t x23 = 0

while (true)
    void* x20_1 = *(&data_12f9f30 + (x23 << 3))
    
    if (x20_1 != 0)
        void* x25_1 = nullptr
        
        while (true)
            void* x8_2 = *(x20_1 + 8)
            
            if (*(x8_2 + 0xb4) == arg1 && zx.d(*(x8_2 + 0xe5)) == 0)
                void* x9_4
                
                if (x25_1 == 0)
                    x9_4 = &data_12f9f30 + (x23 << 3)
                else
                    x9_4 = x25_1 + 0x18
                
                *x9_4 = *(x20_1 + 0x18)
                void* x21_1 = *(x20_1 + 8)
                
                if (*(x21_1 + 0xd8) s>= 1)
                    int64_t x26_1 = 0
                    int64_t x27_1 = 0
                    int64_t x8_5
                    
                    do
                        void* x8_6 = *(x21_1 + 0xd0)
                        void* x0_1 = *(x8_6 + x26_1 + 0x10)
                        
                        if (x0_1 != 0)
                            operator delete[](x0_1)
                            x21_1 = *(x20_1 + 8)
                            x8_6 = *(x21_1 + 0xd0)
                        
                        void* x0_2 = *(x8_6 + x26_1 + 0x20)
                        
                        if (x0_2 != 0)
                            operator delete[](x0_2)
                            x21_1 = *(x20_1 + 8)
                        
                        x8_5 = sx.q(*(x21_1 + 0xd8))
                        x27_1 += 1
                        x26_1 += 0x70
                    while (x27_1 s< x8_5)
                    
                    if (x8_5.d s>= 1)
                        int64_t x26_2 = 0
                        int64_t i_1 = 0
                        
                        do
                            int64_t* x8_9 = *(x21_1 + 0xd0)
                            void* x0_3 = *(x8_9 + x26_2)
                            
                            if (x0_3 != 0)
                                operator delete[](x0_3)
                                x8_9 = *(x21_1 + 0xd0)
                            
                            void* x0_4 = *(x8_9 + x26_2 + 0x48)
                            
                            if (x0_4 != 0)
                                operator delete[](x0_4)
                            
                            i_1 += 1
                            x26_2 += 0x70
                        while (i_1 s< sx.q(*(x21_1 + 0xd8)))
                
                void* x0_5 = *(x21_1 + 0xd0)
                
                if (x0_5 != 0)
                    operator delete[](x0_5)
                
                operator delete(x21_1)
                result = operator delete(x20_1)
                void* x8_12
                
                if (x25_1 == 0)
                    x8_12 = &data_12f9f30 + (x23 << 3)
                else
                    x8_12 = x25_1 + 0x18
                
                x20_1 = *x8_12
                
                if (x20_1 == 0)
                    break
                
                continue
            
            *(x8_2 + 0xe5) = 0
            x25_1 = x20_1
            x20_1 = *(x20_1 + 0x18)
            
            if (x20_1 == 0)
                break
    
    x23 += 1
    
    if (x23 == 0x10000)
        break

return result
