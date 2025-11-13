// 函数: sub_10fe4d0
// 地址: 0x10fe4d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (zx.d(*(arg1 + 0x1c)) != 0)
    return 

int64_t* x21_1 = *(arg1 + 0x10)
*(arg1 + 0x1c) = 1
void* x0_1 = (*(*x21_1 + 0x18))(x21_1)

while (zx.d(*(x0_1 + 8)) == 0xc)
    x21_1 = *(x0_1 + 0x10)
    x0_1 = (*(*x21_1 + 0x18))(x21_1, arg2)

uint32_t x8_6 = zx.d(*(x21_1 + 0xa))

if (x8_6 == 0)
label_10fe594:
    size_t x0_7 = __strlen_chk(&data_797a7e, 2)
    
    if (x0_7 != 0)
        int64_t x8_12 = arg2[1]
        int64_t x10_1 = arg2[2]
        int64_t bytes_2 = x8_12 + x0_7
        int64_t x0_8
        
        if (bytes_2 u>= x10_1)
            int64_t oldmem = *arg2
            int64_t bytes_1 = x10_1 << 1
            int64_t bytes
            
            bytes = bytes_1 u< bytes_2 ? bytes_2 : bytes_1
            
            arg2[2] = bytes
            x0_8 = realloc(oldmem, bytes)
            *arg2 = x0_8
            
            if (x0_8 == 0)
                std::terminate()
                noreturn
            
            x8_12 = arg2[1]
        else
            x0_8 = *arg2
        
        memcpy(x0_8 + x8_12, &data_797a7e, x0_7)
        arg2[1] += x0_7
else
    int32_t x0_4
    
    if (x8_6 == 2)
        x0_4 = (*(*x21_1 + 8))(x21_1, arg2)
    
    if (x8_6 == 2 && (x0_4 & 1) != 0)
        goto label_10fe594
    
    uint32_t x8_9 = zx.d(*(x21_1 + 0xb))
    
    if (x8_9 == 0)
        goto label_10fe594
    
    if (x8_9 == 2 && ((*(*x21_1 + 0x10))(x21_1, arg2) & 1) != 0)
        goto label_10fe594

(*(*x21_1 + 0x28))(x21_1, arg2)
*(arg1 + 0x1c) = 0
