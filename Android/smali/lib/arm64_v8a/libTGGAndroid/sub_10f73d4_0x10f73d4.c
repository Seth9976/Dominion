// 函数: sub_10f73d4
// 地址: 0x10f73d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = arg2[1]
int64_t x10 = arg2[2]
char* x0

if (x8 + 1 u>= x10)
    int64_t oldmem = *arg2
    size_t bytes_3 = x10 << 1
    size_t bytes
    
    if (bytes_3 u< x8 + 1)
        bytes = x8 + 1
    else
        bytes = bytes_3
    
    arg2[2] = bytes
    x0 = realloc(oldmem, bytes)
    *arg2 = x0
    
    if (x0 != 0)
        x8 = arg2[1]
        goto label_10f7430
else
    x0 = *arg2
label_10f7430:
    x0[x8] = 0x28
    arg2[1] += 1
    int64_t* x21_1 = *(arg1 + 0x10)
    (*(*x21_1 + 0x20))(x21_1, arg2)
    
    if (zx.d(*(x21_1 + 9)) != 1)
        (*(*x21_1 + 0x28))(x21_1, arg2)
    
    int64_t x8_8 = arg2[1]
    int64_t x10_1 = arg2[2]
    int16_t* x0_3
    
    if (x8_8 + 2 u>= x10_1)
        int64_t oldmem_1 = *arg2
        size_t bytes_4 = x10_1 << 1
        size_t bytes_1
        
        if (bytes_4 u< x8_8 + 2)
            bytes_1 = x8_8 + 2
        else
            bytes_1 = bytes_4
        
        arg2[2] = bytes_1
        x0_3 = realloc(oldmem_1, bytes_1)
        *arg2 = x0_3
        
        if (x0_3 != 0)
            x8_8 = arg2[1]
            goto label_10f74b8
    else
        x0_3 = *arg2
    label_10f74b8:
        *(x0_3 + x8_8) = 0x2829
        arg2[1] += 2
        sub_10f59b0(arg1 + 0x18, arg2)
        int64_t x8_11 = arg2[1]
        int64_t x10_2 = arg2[2]
        char* result
        
        if (x8_11 + 1 u< x10_2)
            result = *arg2
        label_10f7514:
            result[x8_11] = 0x29
            arg2[1] += 1
            return result
        
        int64_t oldmem_2 = *arg2
        int64_t bytes_5 = x10_2 << 1
        size_t bytes_2
        
        if (bytes_5 u< x8_11 + 1)
            bytes_2 = x8_11 + 1
        else
            bytes_2 = bytes_5
        
        arg2[2] = bytes_2
        result = realloc(oldmem_2, bytes_2)
        *arg2 = result
        
        if (result != 0)
            x8_11 = arg2[1]
            goto label_10f7514
std::terminate()
noreturn
