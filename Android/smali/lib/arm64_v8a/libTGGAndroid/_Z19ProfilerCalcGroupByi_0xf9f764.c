// 函数: _Z19ProfilerCalcGroupByi
// 地址: 0xf9f764
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x16 = *gProfilerGlobals
int32_t* x9_1 = x16 + muls.dp.d(arg1, 0x4a490) + 0x3a980
int32_t x1 = *x9_1

if (x1 s< 1)
    return 

int64_t i = 0
int32_t x11_1 = 0
void* x16_1 = x16 + sx.q(arg1) * 0x4a490

do
    arg1 = *(x16_1 + 0xc)
    
    if (arg1 == 2)
        x11_1 -= 1
    else if (arg1 == 1)
        int64_t var_330[0x64]
        
        if (x11_1 s>= 1)
            arg1 = (*gProfilerGlobals).d
            void* x1_2 = var_330[zx.q(x11_1 - 1)]
            int32_t x3_1 = *(arg1 + IsLandscape)
            
            if (x3_1 == 2)
                if (*(x16_1 + 8) == *(arg1 + IsLandscape+4))
                    *(arg1 + *(x1_2 + 8) * 0x28 + 0xb9b6a8) = 1
            else if (x3_1 == 1 && *(x1_2 + 8) == *(arg1 + IsLandscape+4))
                *(arg1 + *(x16_1 + 8) * 0x28 + 0xb9b6a8) = 1
        
        var_330[sx.q(x11_1)] = x16_1
        x1 = *x9_1
        x11_1 += 1
    
    i += 1
    x16_1 += 0x18
while (i s< sx.q(x1))
