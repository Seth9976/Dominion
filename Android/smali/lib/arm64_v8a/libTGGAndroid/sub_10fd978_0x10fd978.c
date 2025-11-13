// 函数: sub_10fd978
// 地址: 0x10fd978
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

(*(**(arg1 + 0x18) + 0x20))()
int64_t* x0_1 = *(arg1 + 0x18)
uint32_t x8_2 = zx.d(*(x0_1 + 0xa))
char* x8_10
char x9_1

if (x8_2 == 0)
label_10fd9f0:
    int64_t x8_8 = arg2[1]
    int64_t x10 = arg2[2]
    void* x0_4
    
    if (x8_8 + 1 u>= x10)
        int64_t oldmem = *arg2
        size_t bytes_3 = x10 << 1
        size_t bytes
        
        if (bytes_3 u< x8_8 + 1)
            bytes = x8_8 + 1
        else
            bytes = bytes_3
        
        arg2[2] = bytes
        x0_4 = realloc(oldmem, bytes)
        *arg2 = x0_4
        
        if (x0_4 != 0)
            x8_8 = arg2[1]
            goto label_10fda2c
    else
        x0_4 = *arg2
    label_10fda2c:
        x8_10 = x0_4 + x8_8
        x9_1 = 0x28
    label_10fda7c:
        *x8_10 = x9_1
        arg2[1] += 1
        int64_t* x20_1 = *(arg1 + 0x10)
        (*(*x20_1 + 0x20))(x20_1, arg2)
        
        if (zx.d(*(x20_1 + 9)) != 1)
            (*(*x20_1 + 0x28))(x20_1, arg2)
        
        int64_t x8_18 = arg2[1]
        int64_t x10_2 = arg2[2]
        void* result
        
        if (x8_18 + 3 u< x10_2)
            result = *arg2
        label_10fdb00:
            int16_t* x8_19 = result + x8_18
            x8_19[1].b = 0x2a
            *x8_19 = 0x3a3a
            arg2[1] += 3
            return result
        
        int64_t oldmem_2 = *arg2
        int64_t bytes_5 = x10_2 << 1
        int64_t bytes_2
        
        if (bytes_5 u< x8_18 + 3)
            bytes_2 = x8_18 + 3
        else
            bytes_2 = bytes_5
        
        arg2[2] = bytes_2
        result = realloc(oldmem_2, bytes_2)
        *arg2 = result
        
        if (result != 0)
            x8_18 = arg2[1]
            goto label_10fdb00
else
    if (x8_2 == 2)
        if (((*(*x0_1 + 8))(x0_1, arg2) & 1) != 0)
            goto label_10fd9f0
        
        x0_1 = *(arg1 + 0x18)
    
    uint32_t x8_5 = zx.d(*(x0_1 + 0xb))
    
    if (x8_5 == 0)
        goto label_10fd9f0
    
    int32_t x0_3
    
    if (x8_5 == 2)
        x0_3 = (*(*x0_1 + 0x10))(x0_1, arg2)
    
    if (x8_5 == 2 && (x0_3 & 1) != 0)
        goto label_10fd9f0
    
    int64_t x8_9 = arg2[1]
    int64_t x10_1 = arg2[2]
    void* x0_5
    
    if (x8_9 + 1 u< x10_1)
        x0_5 = *arg2
    label_10fda74:
        x8_10 = x0_5 + x8_9
        x9_1 = 0x20
        goto label_10fda7c
    
    int64_t oldmem_1 = *arg2
    size_t bytes_4 = x10_1 << 1
    size_t bytes_1
    
    if (bytes_4 u< x8_9 + 1)
        bytes_1 = x8_9 + 1
    else
        bytes_1 = bytes_4
    
    arg2[2] = bytes_1
    x0_5 = realloc(oldmem_1, bytes_1)
    *arg2 = x0_5
    
    if (x0_5 != 0)
        x8_9 = arg2[1]
        goto label_10fda74
std::terminate()
noreturn
