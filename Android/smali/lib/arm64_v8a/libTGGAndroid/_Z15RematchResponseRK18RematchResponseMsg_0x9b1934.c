// 函数: _Z15RematchResponseRK18RematchResponseMsg
// 地址: 0x9b1934
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = *arg1
void* x0 = GetClient()
uint64_t x9 = zx.q(*(x0 + 0x5088))
void* x8_1
int64_t x9_1
void* x10_1

if (x9.d != 0)
    x8_1 = *(x0 + 0x5080)
    x9_1 = x8_1 + x9 * 0x1338
    x10_1 = x8_1
    
    while (zx.d(*(x10_1 + 0x1332)) == 0)
        x10_1 += 0x1338
        
        if (x10_1 u>= x9_1)
            goto label_9b19d8

void* result
uint64_t x21_1

if (x9.d != 0 && x10_1 != 0xffffffff)
    while (true)
        if (*x10_1 == x20)
            x21_1 = zx.q(*(x10_1 + 0x1330))
            result = GetClient()
            
            if (zx.d(*(arg1 + 8)) != 0)
                break
            
            return result
        
        if (x10_1 == 0)
            x10_1 = x8_1
        else
            x10_1 += 0x1338
        
        if (x10_1 u>= x9_1)
            goto label_9b19d8
        
        while (zx.d(*(x10_1 + 0x1332)) == 0)
            x10_1 += 0x1338
            
            if (x10_1 u>= x9_1)
                goto label_9b19d8
        
        x21_1 = 0
        
        if (x10_1 == 0xffffffff)
            goto label_9b19dc
    
    goto label_9b19f0

label_9b19d8:
x21_1 = 0
label_9b19dc:
result = GetClient()

if (zx.d(*(arg1 + 8)) != 0)
label_9b19f0:
    void* x8_4 = *(result + 0x5080) + x21_1 * 0x1338
    
    if (*(x8_4 + 0x1304) == 1)
        int32_t x20_1 = *(arg1 + 4)
        void* x0_1 = GetClient()
        uint64_t x9_3 = zx.q(*(x0_1 + 0x5088))
        void* i_1
        int64_t x9_4
        void* i
        
        if (x9_3.d != 0)
            i_1 = *(x0_1 + 0x5080)
            x9_4 = i_1 + x9_3 * 0x1338
            i = i_1
            
            while (zx.d(*(i + 0x1332)) == 0)
                i += 0x1338
                
                if (i u>= x9_4)
                    goto label_9b1aa0
        
        uint64_t x0_2
        
        if (x9_3.d == 0 || i == 0xffffffff)
        label_9b1aa0:
            x0_2 = 0
        else
            do
                if (*i == x20_1)
                    x0_2 = zx.q(*(i + 0x1330))
                    break
                
                if (i == 0)
                    i = i_1
                else
                    i += 0x1338
                
                if (i u>= x9_4)
                    goto label_9b1aa0
                
                while (zx.d(*(i + 0x1332)) == 0)
                    i += 0x1338
                    
                    if (i u>= x9_4)
                        goto label_9b1aa0
                
                x0_2 = 0
            while (i != 0xffffffff)
        
        result = GameResumeMultiplayer(x0_2)
        *(x8_4 + 0x1304) = 2

return result
