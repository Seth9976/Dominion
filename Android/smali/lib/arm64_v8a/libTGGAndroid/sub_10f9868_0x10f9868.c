// 函数: sub_10f9868
// 地址: 0x10f9868
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = arg2[1]
int64_t x10 = arg2[2]
size_t bytes_8 = x8 + 1

if (zx.d(*(arg1 + 0x20)) == 0)
    char* x0_1
    
    if (bytes_8 u< x10)
        x0_1 = *arg2
    label_10f9994:
        arg2[1] = bytes_8
        x0_1[x8] = 0x2e
        int64_t* x21_2 = *(arg1 + 0x10)
        (*(*x21_2 + 0x20))(x21_2, arg2)
        
        if (zx.d(*(x21_2 + 9)) != 1)
            (*(*x21_2 + 0x28))(x21_2, arg2)
        
        goto label_10f99d8
    
    int64_t oldmem_2 = *arg2
    size_t bytes_6 = x10 << 1
    size_t bytes_2
    
    bytes_2 = bytes_6 u< bytes_8 ? bytes_8 : bytes_6
    
    arg2[2] = bytes_2
    x0_1 = realloc(oldmem_2, bytes_2)
    *arg2 = x0_1
    
    if (x0_1 != 0)
        x8 = arg2[1]
        bytes_8 = x8 + 1
        goto label_10f9994
else
    char* x0
    
    if (bytes_8 u>= x10)
        int64_t oldmem = *arg2
        size_t bytes_4 = x10 << 1
        size_t bytes
        
        bytes = bytes_4 u< bytes_8 ? bytes_8 : bytes_4
        
        arg2[2] = bytes
        x0 = realloc(oldmem, bytes)
        *arg2 = x0
        
        if (x0 != 0)
            x8 = arg2[1]
            bytes_8 = x8 + 1
            goto label_10f98d8
    else
        x0 = *arg2
    label_10f98d8:
        arg2[1] = bytes_8
        x0[x8] = 0x5b
        int64_t* x21_1 = *(arg1 + 0x10)
        (*(*x21_1 + 0x20))(x21_1, arg2)
        
        if (zx.d(*(x21_1 + 9)) != 1)
            (*(*x21_1 + 0x28))(x21_1, arg2)
        
        int64_t x8_6 = arg2[1]
        int64_t x10_1 = arg2[2]
        size_t bytes_9 = x8_6 + 1
        char* x0_4
        
        if (bytes_9 u>= x10_1)
            int64_t oldmem_1 = *arg2
            size_t bytes_5 = x10_1 << 1
            size_t bytes_1
            
            bytes_1 = bytes_5 u< bytes_9 ? bytes_9 : bytes_5
            
            arg2[2] = bytes_1
            x0_4 = realloc(oldmem_1, bytes_1)
            *arg2 = x0_4
            
            if (x0_4 != 0)
                x8_6 = arg2[1]
                bytes_9 = x8_6 + 1
                goto label_10f995c
        else
            x0_4 = *arg2
        label_10f995c:
            arg2[1] = bytes_9
            x0_4[x8_6] = 0x5d
        label_10f99d8:
            int64_t* x21_3 = *(arg1 + 0x18)
            
            if (zx.d(x21_3[1].b) - 0x49 u< 2)
                goto label_10f9a5c
            
            int64_t x8_14 = arg2[1]
            int64_t x10_2 = arg2[2]
            void* x0_7
            
            if (x8_14 + 3 u< x10_2)
                x0_7 = *arg2
            label_10f9a28:
                int16_t* x8_15 = x0_7 + x8_14
                x8_15[1].b = 0x20
                *x8_15 = 0x3d20
                arg2[1] += 3
                x21_3 = *(arg1 + 0x18)
            label_10f9a5c:
                int64_t result = (*(*x21_3 + 0x20))(x21_3, arg2)
                
                if (zx.d(*(x21_3 + 9)) != 1)
                    jump(*(*x21_3 + 0x28))
                
                return result
            
            int64_t oldmem_3 = *arg2
            size_t bytes_7 = x10_2 << 1
            size_t bytes_3
            
            if (bytes_7 u< x8_14 + 3)
                bytes_3 = x8_14 + 3
            else
                bytes_3 = bytes_7
            
            arg2[2] = bytes_3
            x0_7 = realloc(oldmem_3, bytes_3)
            *arg2 = x0_7
            
            if (x0_7 != 0)
                x8_14 = arg2[1]
                goto label_10f9a28

std::terminate()
noreturn
