// 函数: sub_10fe0b0
// 地址: 0x10fe0b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result = *(arg1 + 0x10)

if (zx.d(result[1].b) == 0xa)
    void* x9_1 = result[2]
    
    if (zx.d(*(x9_1 + 8)) == 7)
        char* x8_2 = *(x9_1 + 0x10)
        int64_t x9_2 = *(x9_1 + 0x18)
        
        if (x9_2 - x8_2 == 0xb)
            if (x8_2 == x9_2)
                return result
            
            char const* const x10_2 = "objc_object"
            
            while (zx.d(*x8_2) == zx.d(*x10_2))
                x8_2 = &x8_2[1]
                x10_2 = &x10_2[1]
                
                if (x9_2 == x8_2)
                    return result

uint32_t x8_3 = zx.d(*(result + 0xa))

if (x8_3 == 0)
label_10fe184:
    int64_t x8_9 = arg2[1]
    int64_t x10_3 = arg2[2]
    char* x0_2
    
    if (x8_9 + 1 u>= x10_3)
        int64_t oldmem = *arg2
        size_t bytes_1 = x10_3 << 1
        size_t bytes
        
        if (bytes_1 u< x8_9 + 1)
            bytes = x8_9 + 1
        else
            bytes = bytes_1
        
        arg2[2] = bytes
        x0_2 = realloc(oldmem, bytes)
        *arg2 = x0_2
        
        if (x0_2 == 0)
            std::terminate()
            noreturn
        
        x8_9 = arg2[1]
    else
        x0_2 = *arg2
    
    x0_2[x8_9] = 0x29
    arg2[1] += 1
else
    if (x8_3 != 2)
        goto label_10fe160
    
    if (((*(*result + 8))(result, arg2) & 1) != 0)
        goto label_10fe184
    
    result = *(arg1 + 0x10)
label_10fe160:
    uint32_t x8_6 = zx.d(*(result + 0xb))
    
    if (x8_6 == 0)
        goto label_10fe184
    
    if (x8_6 == 2 && ((*(*result + 0x10))(result, arg2) & 1) != 0)
        goto label_10fe184

jump(*(**(arg1 + 0x10) + 0x28))
