// 函数: _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEPKcmm
// 地址: 0x10e1c2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg1)
uint64_t x8_1
void* x23

if ((x8.d & 1) != 0)
    x8_1 = *(arg1 + 8)
    x23 = *(arg1 + 0x10)
    
    if (x8_1 u< arg3)
        return -1
else
    x23 = &arg1[1]
    x8_1 = x8 u>> 1
    
    if (x8_1 u< arg3)
        return -1

int64_t entry_x3

if (entry_x3 == 0)
    return arg3

void* x0 = x23 + arg3
void* x24_1 = x23 + x8_1
void* x8_2 = x24_1 - x0
void* x22_1

if (x8_2 s>= entry_x3)
    int32_t x21_1 = zx.d(*arg2)
    
    while (true)
        void* x8_4 = x8_2 - entry_x3
        
        if (x8_4 u>= -1)
            goto label_10e1c7c
        
        void* x0_2 = memchr(x0, x21_1, x8_4 + 1)
        
        if (x0_2 == 0)
            goto label_10e1c7c
        
        x22_1 = x0_2
        
        if (memcmp(x0_2, arg2, entry_x3) == 0)
            break
        
        x0 = x22_1 + 1
        x8_2 = x24_1 - x0
        
        if (x8_2 s< entry_x3)
            goto label_10e1c7c
else
label_10e1c7c:
    x22_1 = x24_1

if (x22_1 != x24_1)
    return x22_1 - x23

return -1
