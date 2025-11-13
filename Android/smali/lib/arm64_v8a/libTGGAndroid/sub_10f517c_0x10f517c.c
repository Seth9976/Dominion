// 函数: sub_10f517c
// 地址: 0x10f517c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = arg2[1]
int64_t x10 = arg2[2]
int64_t x0

if (x8 + 8 u>= x10)
    int64_t oldmem = *arg2
    int64_t bytes_3 = x10 << 1
    int64_t bytes
    
    if (bytes_3 u< x8 + 8)
        bytes = x8 + 8
    else
        bytes = bytes_3
    
    arg2[2] = bytes
    x0 = realloc(oldmem, bytes)
    *arg2 = x0
    
    if (x0 != 0)
        x8 = arg2[1]
        goto label_10f51e4
else
    x0 = *arg2
label_10f51e4:
    __builtin_strncpy(x0 + x8, "\'unnamed", 8)
    int64_t x8_2 = arg2[1] + 8
    arg2[1] = x8_2
    int64_t x21_1 = *(arg1 + 0x10)
    int64_t x9_1 = *(arg1 + 0x18)
    size_t x20_1 = x9_1 - x21_1
    
    if (x9_1 == x21_1)
        goto label_10f5258
    
    int64_t x10_1 = arg2[2]
    int64_t bytes_6 = x8_2 + x20_1
    int64_t x0_1
    
    if (bytes_6 u>= x10_1)
        int64_t oldmem_1 = *arg2
        int64_t bytes_4 = x10_1 << 1
        int64_t bytes_1
        
        bytes_1 = bytes_4 u< bytes_6 ? bytes_6 : bytes_4
        
        arg2[2] = bytes_1
        x0_1 = realloc(oldmem_1, bytes_1)
        *arg2 = x0_1
        
        if (x0_1 != 0)
            x8_2 = arg2[1]
            goto label_10f5248
    else
        x0_1 = *arg2
    label_10f5248:
        memmove(x0_1 + x8_2, x21_1, x20_1)
        x8_2 = arg2[1] + x20_1
        arg2[1] = x8_2
    label_10f5258:
        int64_t x10_2 = arg2[2]
        char* result
        
        if (x8_2 + 1 u< x10_2)
            result = *arg2
        label_10f5298:
            result[x8_2] = 0x27
            arg2[1] += 1
            return result
        
        int64_t oldmem_2 = *arg2
        int64_t bytes_5 = x10_2 << 1
        size_t bytes_2
        
        if (bytes_5 u< x8_2 + 1)
            bytes_2 = x8_2 + 1
        else
            bytes_2 = bytes_5
        
        arg2[2] = bytes_2
        result = realloc(oldmem_2, bytes_2)
        *arg2 = result
        
        if (result != 0)
            x8_2 = arg2[1]
            goto label_10f5298
std::terminate()
noreturn
