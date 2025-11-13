// 函数: _ZN6SoLoud6Soloud25calcActiveVoices_internalEv
// 地址: 0x1071f50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
*(entry_x0 + 0x21e50) = 0
uint64_t x8 = zx.q(*(entry_x0 + 0x34))
int32_t x10

if (x8.d == 0)
    x10 = 0
else
    int64_t x12_1 = 0
    x10 = 0
    int32_t x11_1 = 0
    
    do
        void* x15_1 = entry_x0 + (x12_1 << 3)
        void* x16_1 = *(x15_1 + 0x98)
        
        if (x16_1 != 0)
            int32_t x16_2 = *(x16_1 + 0x10)
            
            if ((x16_2 & 0x24) == 0 || (x16_2 & 0x80) != 0)
                void* x16_4 = entry_x0 + (zx.q(x10) << 2) + 0x20e4c
                *x16_4 = x12_1.d
                x10 += 1
                
                if ((zx.d(*(*(x15_1 + 0x98) + 0x10)) & 0x80) != 0)
                    void* x15_4 = entry_x0 + (zx.q(x11_1) << 2)
                    x11_1 += 1
                    *x16_4 = *(x15_4 + 0x20e4c)
                    *(x15_4 + 0x20e4c) = x12_1.d
        
        x12_1 += 1
    while (x8 != x12_1)
    
    int32_t x8_1 = *(entry_x0 + 0x30)
    
    if (x10 u> x8_1)
        *(entry_x0 + 0x21e4c) = x8_1
        
        if (x11_1 u< x8_1)
            int32_t x17_2 = x10 - x11_1
            void* x10_1 = entry_x0 + (zx.q(x11_1) << 2)
            uint64_t x16_5 = 0
            int32_t x12_2 = 0
            int32_t x13_1 = 1
            
            if (1 s>= x17_2)
                goto label_10720d8
            
            while (true)
                int32_t x16_6
                
                if (x16_5.d == 0x18)
                    x16_6 = 0
                else
                    x16_6 = x16_5.d
                
                int32_t var_70[0x18]
                int32_t x17_3
                
                if (x16_5.d == 0x18)
                    x17_3 = var_70[0]
                else
                    x17_3 = x17_2
                
                int32_t i = *(
                    *(entry_x0 + (sx.q(*(x10_1 + 0x20e4c + (sx.q(x12_2) << 2))) << 3) + 0x98)
                    + 0x3c)
                int32_t x1_4 = x12_2 - 1
                var_70[sx.q(x16_6)] = x17_3
                
                while (true)
                    void* x2_2 = x10_1 + 0x20e50 + (sx.q(x1_4) << 2)
                    uint64_t x3_1
                    
                    do
                        x3_1 = zx.q(*x2_2)
                        x2_2 += 4
                        x1_4 += 1
                    while (*(*(entry_x0 + (x3_1 << 3) + 0x98) + 0x3c) f> i)
                    
                    void* x4_3 = x10_1 + 0x20e4c + (sx.q(x17_3) << 2)
                    uint64_t x5_1
                    
                    do
                        x4_3 -= 4
                        x5_1 = zx.q(*x4_3)
                        x17_3 -= 1
                    while (i f> *(*(entry_x0 + (x5_1 << 3) + 0x98) + 0x3c))
                    
                    if (x1_4 s>= x17_3)
                        break
                    
                    *(x2_2 - 4) = x5_1.d
                    *x4_3 = x3_1.d
                
                x17_2 = x17_3 + 1
                x16_5 = zx.q(x16_6 + 1)
                
                if (x13_1 s>= x17_2)
                label_10720d8:
                    int32_t x1_5 = x17_2
                    
                    if (x12_2 s>= x8_1)
                        break
                    
                    if (x16_5.d == 0)
                        break
                    
                    x16_5 = sx.q(x16_5.d) - 1
                    x17_2 = var_70[x16_5]
                    x12_2 = x1_5
                    x13_1 = x12_2 + 1
                    
                    if (x13_1 s>= x17_2)
                        break
            
            SoLoud::Soloud::mapResampleBuffers_internal()
        
        return 

*(entry_x0 + 0x21e4c) = x10
return SoLoud::Soloud::mapResampleBuffers_internal() __tailcall
