// 函数: _Z11UI2MergeRecR3UI2S0_S0_RK16UI2StateBindingsb
// 地址: 0x101da30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg2 + 0x1688) = *(arg3 + 0x1688)
int32_t x8_1 = *(arg3 + 0x1690)
*(arg2 + 0x1370) = 0
*(arg2 + 0x1690) = x8_1
*(arg2 + 0x167c) = *(arg3 + 0x167c)
UI2* result = XString::operator=(arg2 + 0x1650)
int32_t x10 = *(arg3 + 0x1974)

if (x10 != 0)
    int64_t x8_3 = *gUI2
    int32_t x9_1 = *(arg2 + 0x1974)
    UI2* x23_1 = x8_3 + zx.q(x10.w) * 0x19a8
    
    if (x9_1 == 0)
        result = UI2Alloc(arg2)
        x9_1 = *(result + 0x19a0)
        *(result + 5) = 1
        *(arg2 + 0x1974) = x9_1
        x8_3 = *gUI2
    
    UI2* x1_1 = x8_3 + mulu.dp.d(x9_1 & 0xffff, 0x19a8)
    *(x1_1 + 0x1740) = *(arg2 + 0x1740)
    *(x1_1 + 0x17d8) = *(arg2 + 0x17d8)
    result = UI2MergeRec(result, x1_1, x23_1, arg4, arg5 & 1)

int32_t x10_3 = *(arg3 + 0x1978)

if (x10_3 != 0)
    int64_t x8_5 = *gUI2
    int32_t x9_3 = *(arg2 + 0x1978)
    UI2* x23_2 = x8_5 + zx.q(x10_3.w) * 0x19a8
    
    if (x9_3 == 0)
        result = UI2Alloc(arg2)
        *(result + 0x198c) = 1
        x9_3 = *(result + 0x19a0)
        *(arg2 + 0x1978) = x9_3
        x8_5 = *gUI2
    
    UI2* x1_2 = x8_5 + mulu.dp.d(x9_3 & 0xffff, 0x19a8)
    *(x1_2 + 0x1740) = *(arg2 + 0x1740)
    *(x1_2 + 0x17d8) = *(arg2 + 0x17d8)
    result = UI2MergeRec(result, x1_2, x23_2, arg4, arg5 & 1)
    int32_t x10_6 = *(arg3 + 0x197c)
    
    if (x10_6 != 0)
        int64_t x8_7 = *gUI2
        int32_t x9_5 = *(arg2 + 0x197c)
        UI2* x23_3 = x8_7 + zx.q(x10_6.w) * 0x19a8
        
        if (x9_5 == 0)
            result = UI2Alloc(arg2)
            *(result + 0x198c) = 1
            x9_5 = *(result + 0x19a0)
            *(arg2 + 0x197c) = x9_5
            x8_7 = *gUI2
        
        UI2* x1_3 = x8_7 + mulu.dp.d(x9_5 & 0xffff, 0x19a8)
        *(x1_3 + 0x1740) = *(arg2 + 0x1740)
        *(x1_3 + 0x17d8) = *(arg2 + 0x17d8)
        result = UI2MergeRec(result, x1_3, x23_3, arg4, arg5 & 1)
        int32_t x10_9 = *(arg3 + 0x1980)
        
        if (x10_9 != 0)
            int64_t x8_9 = *gUI2
            int32_t x9_7 = *(arg2 + 0x1980)
            UI2* x23_4 = x8_9 + zx.q(x10_9.w) * 0x19a8
            
            if (x9_7 == 0)
                result = UI2Alloc(arg2)
                *(result + 0x198c) = 1
                x9_7 = *(result + 0x19a0)
                *(arg2 + 0x1980) = x9_7
                x8_9 = *gUI2
            
            UI2* x1_4 = x8_9 + mulu.dp.d(x9_7 & 0xffff, 0x19a8)
            *(x1_4 + 0x1740) = *(arg2 + 0x1740)
            *(x1_4 + 0x17d8) = *(arg2 + 0x17d8)
            result = UI2MergeRec(result, x1_4, x23_4, arg4, arg5 & 1)
            int32_t x10_12 = *(arg3 + 0x1984)
            
            if (x10_12 != 0)
                int64_t x8_11 = *gUI2
                int32_t x9_9 = *(arg2 + 0x1984)
                UI2* x23_5 = x8_11 + zx.q(x10_12.w) * 0x19a8
                
                if (x9_9 == 0)
                    result = UI2Alloc(arg2)
                    *(result + 0x198c) = 1
                    x9_9 = *(result + 0x19a0)
                    *(arg2 + 0x1984) = x9_9
                    x8_11 = *gUI2
                
                UI2* x1_5 = x8_11 + mulu.dp.d(x9_9 & 0xffff, 0x19a8)
                *(x1_5 + 0x1740) = *(arg2 + 0x1740)
                *(x1_5 + 0x17d8) = *(arg2 + 0x17d8)
                result = UI2MergeRec(result, x1_5, x23_5, arg4, arg5 & 1)
                int32_t x10_15 = *(arg3 + 0x1988)
                
                if (x10_15 != 0)
                    int64_t x8_13 = *gUI2
                    int32_t x9_11 = *(arg2 + 0x1988)
                    UI2* x23_6 = x8_13 + zx.q(x10_15.w) * 0x19a8
                    
                    if (x9_11 == 0)
                        result = UI2Alloc(arg2)
                        *(result + 0x198c) = 1
                        x9_11 = *(result + 0x19a0)
                        *(arg2 + 0x1988) = x9_11
                        x8_13 = *gUI2
                    
                    UI2* x1_6 = x8_13 + mulu.dp.d(x9_11 & 0xffff, 0x19a8)
                    *(x1_6 + 0x1740) = *(arg2 + 0x1740)
                    *(x1_6 + 0x17d8) = *(arg2 + 0x17d8)
                    result = UI2MergeRec(result, x1_6, x23_6, arg4, arg5 & 1)

int32_t x27 = *(arg3 + 0x1970)

if (x27 != 0)
    int32_t x23_7 = 0
    uint64_t fp_1 = 0
    bool cond:0_1
    
    do
        UI2* x24_1 = *gUI2 + zx.q(*(arg3 + (fp_1 << 0x20 s>> 0x1e) + 0x1870)) * 0x19a8
        UI2* x0_8 = UI2GetOrAllocChild(arg2, x23_7)
        *(x0_8 + 0x1740) = *(arg2 + 0x1740)
        *(x0_8 + 0x17d8) = *(arg2 + 0x17d8)
        result = UI2MergeRec(x0_8, x0_8, x24_1, arg4, arg5 & 1)
        x23_7 += 1
        cond:0_1 = x27 != fp_1.d + 1
        fp_1 = zx.q(fp_1.d + 1)
    while (cond:0_1)

return result
