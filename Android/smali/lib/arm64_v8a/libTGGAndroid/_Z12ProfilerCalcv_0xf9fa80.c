// 函数: _Z12ProfilerCalcv
// 地址: 0xf9fa80
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x8 = *gProfilerGlobals
int64_t x21 = 0xb9b6a8

if (*(x8 + 0xbc6608) s>= 1)
    int64_t i = 0
    int64_t x12_1 = 0xb9b6a8
    
    do
        void* x13_4 = &x8[x12_1]
        *(x13_4 - 0x10) = 0
        *(x13_4 - 8) = 0
        void* x13_6 = *gProfilerGlobals + IsLandscape
        char x13_2
        
        if (*x13_6 != 0)
            x13_2 = (i == zx.q(*(x13_6 + 4)) ? 1 : 0).b
        else
            x13_2 = 1
        
        x8[x12_1] = x13_2
        x8 = *gProfilerGlobals
        i += 1
        x12_1 += 0x28
    while (i s< sx.q(*(x8 + 0xbc6608)))

int64_t i_1 = 0
*(x8 + 0xbc660c) = 0

do
    if (zx.d(x8[0xbc6610]) == 0 || i_1 != zx.q(*(x8 + 0xb9b680)))
        ProfilerCalcFuncData(i_1.d)
        x8 = *gProfilerGlobals
        
        if (*(x8 + 0xbc6608) s>= 1)
            int64_t j = 0
            int32_t* x10_2 = x8 + i_1 * 0x4a490 + 0x3aa94
            int64_t x11_1 = 0xb9b6a4
            
            do
                void* x8_1 = &x8[x11_1]
                float v1_1 = *(x8_1 - 0xc)
                float v2_1 = *(x8_1 - 8)
                j += 1
                x11_1 += 0x28
                *(x8_1 - 4) += *x10_2
                *(x8_1 - 0xc) = x10_2[-2] f+ v1_1
                v1_1 = *x8_1
                *(x8_1 - 8) = x10_2[-1] f+ v2_1
                float v0_1 = x10_2[1]
                x10_2 = &x10_2[4]
                *x8_1 = v0_1 + v1_1
                x8 = *gProfilerGlobals
            while (j s< sx.q(*(x8 + 0xbc6608)))
        
        *(x8 + 0xbc660c) += 1
    
    i_1 += 1
while (i_1 != 0x28)

int64_t var_380[0x64]

if (*(x8 + IsLandscape) != 0)
    for (int64_t i_2 = 0; i_2 != 0x28; i_2 += 1)
        int32_t x2_1 = *(x8 + i_2 * 0x4a490 + 0x3a980)
        
        if (x2_1 s>= 1)
            int64_t j_1 = 0
            int32_t x1_1 = 0
            void* x8_2 = x8 + i_2 * 0x4a490
            
            do
                int32_t x3_1 = *(x8_2 + 0xc)
                
                if (x3_1 == 2)
                    x1_1 -= 1
                else if (x3_1 == 1)
                    if (x1_1 s>= 1)
                        uint64_t x2_2 = *gProfilerGlobals
                        void* x3_3 = var_380[zx.q(x1_1 - 1)]
                        int32_t x5_1 = *(x2_2 + IsLandscape)
                        
                        if (x5_1 == 2)
                            if (*(x8_2 + 8) == *(x2_2 + IsLandscape+4))
                                *(x2_2 + sx.q(*(x3_3 + 8)) * 0x28 + 0xb9b6a8) = 1
                        else if (x5_1 == 1 && *(x3_3 + 8) == *(x2_2 + IsLandscape+4))
                            *(x2_2 + sx.q(*(x8_2 + 8)) * 0x28 + 0xb9b6a8) = 1
                    
                    var_380[sx.q(x1_1)] = x8_2
                    x2_1 = *(x8 + i_2 * 0x4a490 + 0x3a980)
                    x1_1 += 1
                
                j_1 += 1
                x8_2 += 0x18
            while (j_1 s< sx.q(x2_1))
        
        x8 = *gProfilerGlobals

int32_t x19

if (*(x8 + 0xbc6608) s< 1)
    x19 = 0
else
    int64_t i_3 = 0
    x19 = 0
    
    do
        if (*(x8 + x21 - 8) != 0 && zx.d(x8[x21]) != 0)
            *(x8 + (sx.q(x19) << 2) + 0xbc2788) = i_3.d
            x8 = *gProfilerGlobals
            x19 += 1
        
        i_3 += 1
        x21 += 0x28
    while (i_3 s< sx.q(*(x8 + 0xbc6608)))

var_380[0] = ProfilerSortFunc
int64_t result = std::__ndk1::__sort<bool (*&)(int32_t, int32_t), int32_t*>(&x8[0xbc2788], 
    &x8[0xbc2788 + (sx.q(x19) << 2)], &var_380)
int32_t* x8_5 = *gProfilerGlobals + 0xbc6620
int32_t x9_9 = *x8_5
x8_5[4] = x19

if (x9_9 s>= x19)
    *x8_5 = x19 - 1

return result
