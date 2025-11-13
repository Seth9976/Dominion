// 函数: sub_10f5cdc
// 地址: 0x10f5cdc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = arg2[1]

if (*(arg1 + 0x18) == 0)
    goto label_10f5dac

int64_t x10_1 = arg2[2]
char* x0

if (x8 + 1 u>= x10_1)
    int64_t oldmem = *arg2
    size_t bytes_4 = x10_1 << 1
    size_t bytes
    
    if (bytes_4 u< x8 + 1)
        bytes = x8 + 1
    else
        bytes = bytes_4
    
    arg2[2] = bytes
    x0 = realloc(oldmem, bytes)
    *arg2 = x0
    
    if (x0 != 0)
        x8 = arg2[1]
        goto label_10f5d40
else
    x0 = *arg2
label_10f5d40:
    x0[x8] = 0x3c
    arg2[1] += 1
    sub_10f59b0(arg1 + 0x10, arg2)
    int64_t x8_3 = arg2[1]
    int64_t x10_2 = arg2[2]
    char* x0_2
    
    if (x8_3 + 1 u>= x10_2)
        int64_t oldmem_1 = *arg2
        size_t bytes_5 = x10_2 << 1
        size_t bytes_1
        
        if (bytes_5 u< x8_3 + 1)
            bytes_1 = x8_3 + 1
        else
            bytes_1 = bytes_5
        
        arg2[2] = bytes_1
        x0_2 = realloc(oldmem_1, bytes_1)
        *arg2 = x0_2
        
        if (x0_2 != 0)
            x8_3 = arg2[1]
            goto label_10f5d9c
    else
        x0_2 = *arg2
    label_10f5d9c:
        x0_2[x8_3] = 0x3e
        x8 = arg2[1] + 1
        arg2[1] = x8
    label_10f5dac:
        int64_t x10_3 = arg2[2]
        char* x0_3
        
        if (x8 + 1 u>= x10_3)
            int64_t oldmem_2 = *arg2
            size_t bytes_6 = x10_3 << 1
            size_t bytes_2
            
            if (bytes_6 u< x8 + 1)
                bytes_2 = x8 + 1
            else
                bytes_2 = bytes_6
            
            arg2[2] = bytes_2
            x0_3 = realloc(oldmem_2, bytes_2)
            *arg2 = x0_3
            
            if (x0_3 != 0)
                x8 = arg2[1]
                goto label_10f5dec
        else
            x0_3 = *arg2
        label_10f5dec:
            x0_3[x8] = 0x28
            arg2[1] += 1
            sub_10f59b0(arg1 + 0x20, arg2)
            int64_t x8_7 = arg2[1]
            int64_t x10_4 = arg2[2]
            char* result
            
            if (x8_7 + 1 u< x10_4)
                result = *arg2
            label_10f5e48:
                result[x8_7] = 0x29
                arg2[1] += 1
                return result
            
            int64_t oldmem_3 = *arg2
            int64_t bytes_7 = x10_4 << 1
            size_t bytes_3
            
            if (bytes_7 u< x8_7 + 1)
                bytes_3 = x8_7 + 1
            else
                bytes_3 = bytes_7
            
            arg2[2] = bytes_3
            result = realloc(oldmem_3, bytes_3)
            *arg2 = result
            
            if (result != 0)
                x8_7 = arg2[1]
                goto label_10f5e48
std::terminate()
noreturn
