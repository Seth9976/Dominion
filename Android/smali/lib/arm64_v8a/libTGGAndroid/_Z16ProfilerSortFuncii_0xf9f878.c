// 函数: _Z16ProfilerSortFuncii
// 地址: 0xf9f878
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x23 = sx.q(arg1)
uint64_t x21 = *gProfilerGlobals
int64_t x22 = sx.q(arg2)
int32_t x9 = *(x21 + 0xbc661c)
float* x9_2
float* x10_1

if (x9 == 0x28)
    x10_1 = x21 + 0xb9b688 + x23 * 0x28 + 0x10
    x9_2 = x21 + 0xb9b688 + x22 * 0x28 + 0x10
    
    if (*(x21 + 0xbc6634) != 0)
        goto label_f9f94c
    
    goto label_f9f974

int32_t x9_4 = x9 + *(x21 + 0xb9b680) + 1
x10_1 = x21 + muls.dp.d(x9_4 s% 0x28, 0x4a490) + 0x3aa8c + (x23 << 4)
x9_2 = x21 + muls.dp.d(x9_4 s% 0x28, 0x4a490) + 0x3aa8c + (x22 << 4)

if (*(x21 + 0xbc6634) == 0)
label_f9f974:
    uint64_t x8_1 = zx.q(*(x21 + 0xbc6614))
    
    if (x8_1.d u> 4)
        pthread_kill(pthread_self(), 6)
        XNoReturn()
        return ProfilerCalc() __tailcall
    
    float v0
    float v1
    bool cond:0_1
    
    switch (x8_1)
        case 0
            v0 = x10_1[1]
            v1 = x9_2[1]
            v0 - v1
            cond:0_1 = v0 < v1
            
            if (not(v0 > v1))
            label_f9fa54:
                
                if (cond:0_1)
                    return 0
                
                return zx.q(arg1 s> arg2 ? 1 : 0)
        case 1
            v0 = *x10_1
            v1 = *x9_2
            v0 - v1
            cond:0_1 = v0 < v1
            
            if (v0 <= v1)
                goto label_f9fa54
        case 2
            int32_t x8_2 = x10_1[2]
            int32_t x9_8 = x9_2[2]
            
            if (x8_2 s<= x9_8)
                if (x8_2 s< x9_8)
                    return 0
                
                return zx.q(arg1 s> arg2 ? 1 : 0)
        case 3
            int32_t x0_2 = strcasecmp((x21 + 0xb9b688)[x23 * 5], (x21 + 0xb9b688)[x22 * 5])
            
            if ((x0_2 & 0x80000000) == 0)
                if (x0_2 != 0)
                    return 0
                
                int32_t x0_4 = strcasecmp(*(x21 + 0xb9b688 + x23 * 0x28 + 8), 
                    *(x21 + 0xb9b688 + x22 * 0x28 + 8))
                
                if ((x0_4 & 0x80000000) == 0)
                    if (x0_4 == 0)
                        return zx.q(arg1 s> arg2 ? 1 : 0)
                    
                    return 0
        case 4
            v0 = x10_1[3]
            v1 = x9_2[3]
            v0 - v1
            cond:0_1 = v0 < v1
            
            if (not(v0 > v1))
                goto label_f9fa54
else
label_f9f94c:
    int32_t x11_4 = *(x21 + 0xbc6638)
    
    if (x11_4 != arg1)
        if (x11_4 == arg2)
            return 0
        
        goto label_f9f974

return 1
