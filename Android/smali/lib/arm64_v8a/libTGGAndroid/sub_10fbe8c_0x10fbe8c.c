// 函数: sub_10fbe8c
// 地址: 0x10fbe8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x21 = *(arg1 + 0x10)
(*(*x21 + 0x20))(x21)

if (zx.d(*(x21 + 9)) != 1)
    (*(*x21 + 0x28))(x21, arg2)

int64_t x8_5 = arg2[1]
int64_t x10 = arg2[2]
int16_t* x0_2

if (x8_5 + 2 u>= x10)
    int64_t oldmem = *arg2
    size_t bytes_3 = x10 << 1
    size_t bytes
    
    if (bytes_3 u< x8_5 + 2)
        bytes = x8_5 + 2
    else
        bytes = bytes_3
    
    arg2[2] = bytes
    x0_2 = realloc(oldmem, bytes)
    *arg2 = x0_2
    
    if (x0_2 != 0)
        x8_5 = arg2[1]
        goto label_10fbf1c
else
    x0_2 = *arg2
label_10fbf1c:
    *(x0_2 + x8_5) = 0x2820
    int64_t x8_7 = arg2[1] + 2
    arg2[1] = x8_7
    int64_t x21_1 = *(arg1 + 0x18)
    int64_t x9_1 = *(arg1 + 0x20)
    size_t x20_1 = x9_1 - x21_1
    
    if (x9_1 == x21_1)
        goto label_10fbf90
    
    int64_t x10_1 = arg2[2]
    int64_t bytes_6 = x8_7 + x20_1
    int64_t x0_3
    
    if (bytes_6 u>= x10_1)
        int64_t oldmem_1 = *arg2
        int64_t bytes_4 = x10_1 << 1
        int64_t bytes_1
        
        bytes_1 = bytes_4 u< bytes_6 ? bytes_6 : bytes_4
        
        arg2[2] = bytes_1
        x0_3 = realloc(oldmem_1, bytes_1)
        *arg2 = x0_3
        
        if (x0_3 != 0)
            x8_7 = arg2[1]
            goto label_10fbf80
    else
        x0_3 = *arg2
    label_10fbf80:
        memmove(x0_3 + x8_7, x21_1, x20_1)
        x8_7 = arg2[1] + x20_1
        arg2[1] = x8_7
    label_10fbf90:
        int64_t x10_2 = arg2[2]
        char* result
        
        if (x8_7 + 1 u< x10_2)
            result = *arg2
        label_10fbfd0:
            result[x8_7] = 0x29
            arg2[1] += 1
            return result
        
        int64_t oldmem_2 = *arg2
        int64_t bytes_5 = x10_2 << 1
        size_t bytes_2
        
        if (bytes_5 u< x8_7 + 1)
            bytes_2 = x8_7 + 1
        else
            bytes_2 = bytes_5
        
        arg2[2] = bytes_2
        result = realloc(oldmem_2, bytes_2)
        *arg2 = result
        
        if (result != 0)
            x8_7 = arg2[1]
            goto label_10fbfd0
std::terminate()
noreturn
