// 函数: _Z12TryAddResultP10BestResultRiiRK14SearchableCardi
// 地址: 0xb27c38
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t i_2 = zx.q(*arg2)
BestResult* x23 = arg1

if (i_2.d s>= 1)
    void* __offset(BestResult, 0x8) x9_1 = x23 + 8
    uint64_t i_1 = i_2
    uint64_t i
    
    do
        if (*(*(x9_1 - 8) + 4) == *(arg4 + 4))
            if (*x9_1 s> arg5)
                *(x9_1 - 8) = arg4
                *x9_1 = arg5
            
            goto label_b27d84
        
        i = i_1
        i_1 -= 1
        x9_1 += 0x10
    while (i != 1)

if (i_2.d s< 1 || i_2.d s< 1)
label_b27d10:
    
    if (i_2.d s< arg3)
        void* x8_2 = x23 + (sx.q(i_2.d) << 4)
        *arg2 = i_2.d + 1
        *x8_2 = arg4
        *(x8_2 + 8) = arg5
else
    int64_t x27_1 = 0
    SearchableCard** x24_1 = x23
    
    while (true)
        int32_t x9_2 = x24_1[1].d
        
        if (x9_2 s<= arg5)
            if (x9_2 == arg5)
                *x24_1
                arg1 = strcmp(XString::operator char const*(), XString::operator char const*())
                i_2 = zx.q(*arg2)
            
            if (x9_2 != arg5 || arg1.d s< 1)
                x27_1 += 1
                x24_1 = &x24_1[2]
                
                if (x27_1 s>= sx.q(i_2.d))
                    goto label_b27d10
                
                continue
        
        int32_t x9_3
        
        if (i_2.d != arg3)
            x9_3 = i_2.d - x27_1.d
            *arg2 = i_2.d + 1
        else
            x9_3 = not.d(x27_1.d) + arg3
        
        memmove(&x24_1[2], x24_1, sx.q(x9_3 << 4))
        *x24_1 = arg4
        x24_1[1].d = arg5
        break

label_b27d84:
