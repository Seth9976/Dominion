// 函数: _Z20ProfilerSelectParenti
// 地址: 0xfa090c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x8 = *gProfilerGlobals

if (*(x8 + 0xbc6608) s>= 1)
    int64_t i = 0
    int64_t x11_1 = 0xb9b6a8
    
    do
        x8[x11_1] = 0
        x8 = *gProfilerGlobals
        i += 1
        x11_1 += 0x28
    while (i s< sx.q(*(x8 + 0xbc6608)))

void* x10_1 = &x8[0x3a980]
*(x8 + IsLandscape) = 2
*(x8 + IsLandscape+4) = arg1
int32_t x1 = *x10_1

if (x1 s>= 1)
    int64_t i_1 = 0
    int32_t x12_1 = 0
    
    do
        int32_t x2_1 = *(x8 + 0xc)
        
        if (x2_1 == 2)
            x12_1 -= 1
        else if (x2_1 == 1)
            int64_t var_330[0x64]
            
            if (x12_1 s>= 1)
                uint64_t x1_1 = *gProfilerGlobals
                void* x2_3 = var_330[zx.q(x12_1 - 1)]
                int32_t x4_1 = *(x1_1 + IsLandscape)
                
                if (x4_1 == 2)
                    if (*(x8 + 8) == *(x1_1 + IsLandscape+4))
                        *(x1_1 + sx.q(*(x2_3 + 8)) * 0x28 + 0xb9b6a8) = 1
                else if (x4_1 == 1 && *(x2_3 + 8) == *(x1_1 + IsLandscape+4))
                    *(x1_1 + sx.q(*(x8 + 8)) * 0x28 + 0xb9b6a8) = 1
            
            var_330[sx.q(x12_1)] = x8
            x1 = *x10_1
            x12_1 += 1
        
        i_1 += 1
        x8 = &x8[0x18]
    while (i_1 s< sx.q(x1))
    
    x8 = *gProfilerGlobals

int64_t x10_2 = sx.q(*(x8 + 0xbc6608))

if (x10_2.d s>= 1)
    int64_t x11_2 = 0
    void* x8_1 = &x8[0xb9b6a8]
    
    do
        if (zx.q(arg1) != x11_2 && zx.d(*x8_1) != 0)
            *(x8 + 0xbc6634) = 1
            *(x8 + 0xbc6638) = x11_2.d
            return 
        
        x11_2 += 1
        x8_1 += 0x28
    while (x11_2 s< x10_2)

*(x8 + 0xbc6634) = 0
