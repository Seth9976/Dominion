// 函数: sub_10fdb34
// 地址: 0x10fdb34
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = *(arg1 + 0x18)
uint32_t x8 = zx.d(*(x0 + 0xa))

if (x8 == 0)
label_10fdb9c:
    int64_t x8_6 = arg2[1]
    int64_t x10_1 = arg2[2]
    char* x0_3
    
    if (x8_6 + 1 u>= x10_1)
        int64_t oldmem = *arg2
        size_t bytes_1 = x10_1 << 1
        size_t bytes
        
        if (bytes_1 u< x8_6 + 1)
            bytes = x8_6 + 1
        else
            bytes = bytes_1
        
        arg2[2] = bytes
        x0_3 = realloc(oldmem, bytes)
        *arg2 = x0_3
        
        if (x0_3 == 0)
            std::terminate()
            noreturn
        
        x8_6 = arg2[1]
    else
        x0_3 = *arg2
    
    x0_3[x8_6] = 0x29
    arg2[1] += 1
else
    if (x8 != 2)
        goto label_10fdb78
    
    if (((*(*x0 + 8))(x0, arg2) & 1) != 0)
        goto label_10fdb9c
    
    x0 = *(arg1 + 0x18)
label_10fdb78:
    uint32_t x8_3 = zx.d(*(x0 + 0xb))
    
    if (x8_3 == 0)
        goto label_10fdb9c
    
    if (x8_3 == 2 && ((*(*x0 + 0x10))(x0, arg2) & 1) != 0)
        goto label_10fdb9c

jump(*(**(arg1 + 0x18) + 0x28))
