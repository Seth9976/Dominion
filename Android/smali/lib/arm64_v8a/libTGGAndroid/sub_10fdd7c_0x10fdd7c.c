// 函数: sub_10fdd7c
// 地址: 0x10fdd7c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x21 = *(arg1 + 0x10)
void* result
char* x8_22
char x9_7
int64_t* x23_2

if (zx.d(x21[1].b) != 0xa)
label_10fde2c:
    (*(*x21 + 0x20))(x21, arg2)
    int64_t* x0_2 = *(arg1 + 0x10)
    uint32_t x8_6 = zx.d(*(x0_2 + 0xa))
    
    if (x8_6 != 0)
        if (x8_6 != 2)
            goto label_10fdea8
        
        if (((*(*x0_2 + 8))(x0_2, arg2) & 1) == 0)
            goto label_10fdea8
        
        goto label_10fde58
    
label_10fde58:
    int64_t x8_9 = arg2[1]
    int64_t x10_4 = arg2[2]
    char* x0_4
    
    if (x8_9 + 1 u>= x10_4)
        int64_t oldmem = *arg2
        size_t bytes_6 = x10_4 << 1
        size_t bytes
        
        if (bytes_6 u< x8_9 + 1)
            bytes = x8_9 + 1
        else
            bytes = bytes_6
        
        arg2[2] = bytes
        x0_4 = realloc(oldmem, bytes)
        *arg2 = x0_4
        
        if (x0_4 != 0)
            x8_9 = arg2[1]
            goto label_10fde98
    else
        x0_4 = *arg2
    label_10fde98:
        x0_4[x8_9] = 0x20
        arg2[1] += 1
    label_10fdea8:
        int64_t* x0_6 = *(arg1 + 0x10)
        uint32_t x8_12 = zx.d(*(x0_6 + 0xa))
        
        if (x8_12 != 0)
            if (x8_12 == 2)
                if (((*(*x0_6 + 8))(x0_6, arg2) & 1) != 0)
                    goto label_10fdef8
                
                x0_6 = *(arg1 + 0x10)
            
            uint32_t x8_15 = zx.d(*(x0_6 + 0xb))
            
            if (x8_15 == 0)
                goto label_10fdef8
            
            if (x8_15 != 2)
                goto label_10fdf4c
            
            if (((*(*x0_6 + 0x10))(x0_6, arg2) & 1) == 0)
                goto label_10fdf4c
            
            goto label_10fdef8
        
    label_10fdef8:
        int64_t x8_18 = arg2[1]
        int64_t x10_5 = arg2[2]
        char* x0_8
        
        if (x8_18 + 1 u>= x10_5)
            int64_t oldmem_1 = *arg2
            size_t bytes_7 = x10_5 << 1
            size_t bytes_1
            
            if (bytes_7 u< x8_18 + 1)
                bytes_1 = x8_18 + 1
            else
                bytes_1 = bytes_7
            
            arg2[2] = bytes_1
            x0_8 = realloc(oldmem_1, bytes_1)
            *arg2 = x0_8
            
            if (x0_8 != 0)
                x8_18 = arg2[1]
                goto label_10fdf38
        else
            x0_8 = *arg2
        label_10fdf38:
            x0_8[x8_18] = 0x28
            arg2[1] += 1
        label_10fdf4c:
            x23_2 = &arg2[1]
            int64_t x8_21 = *x23_2
            int64_t x10_6 = x23_2[1]
            
            if (x8_21 + 1 u< x10_6)
                result = *arg2
            label_10fdf8c:
                x8_22 = result + x8_21
                x9_7 = 0x2a
                goto label_10fdf94
            
            int64_t oldmem_2 = *arg2
            size_t bytes_8 = x10_6 << 1
            size_t bytes_2
            
            if (bytes_8 u< x8_21 + 1)
                bytes_2 = x8_21 + 1
            else
                bytes_2 = bytes_8
            
            arg2[2] = bytes_2
            result = realloc(oldmem_2, bytes_2)
            *arg2 = result
            
            if (result != 0)
                x8_21 = *x23_2
                goto label_10fdf8c
else
    void* x9_1 = x21[2]
    
    if (zx.d(*(x9_1 + 8)) != 7)
        goto label_10fde2c
    
    char* x8_2 = *(x9_1 + 0x10)
    int64_t x9_2 = *(x9_1 + 0x18)
    
    if (x9_2 - x8_2 != 0xb)
        goto label_10fde2c
    
    if (x8_2 != x9_2)
        char const* const x10_2 = "objc_object"
        
        do
            if (zx.d(*x8_2) != zx.d(*x10_2))
                goto label_10fde2c
            
            x8_2 = &x8_2[1]
            x10_2 = &x10_2[1]
        while (x9_2 != x8_2)
    
    x23_2 = &arg2[1]
    int64_t x8_3 = *x23_2
    int64_t x10_3 = x23_2[1]
    void* x0
    
    if (x8_3 + 3 u>= x10_3)
        int64_t oldmem_3 = *arg2
        size_t bytes_9 = x10_3 << 1
        size_t bytes_3
        
        if (bytes_9 u< x8_3 + 3)
            bytes_3 = x8_3 + 3
        else
            bytes_3 = bytes_9
        
        arg2[2] = bytes_3
        x0 = realloc(oldmem_3, bytes_3)
        *arg2 = x0
        
        if (x0 != 0)
            x8_3 = *x23_2
            goto label_10fdfe0
    else
        x0 = *arg2
    label_10fdfe0:
        int16_t* x8_25 = x0 + x8_3
        x8_25[1].b = 0x3c
        *x8_25 = 0x6469
        int64_t x8_27 = *x23_2 + 3
        *x23_2 = x8_27
        int64_t x22_1 = x21[3]
        int64_t x9_8 = x21[4]
        size_t x20_1 = x9_8 - x22_1
        
        if (x9_8 == x22_1)
            goto label_10fe064
        
        int64_t x10_7 = arg2[2]
        int64_t bytes_12 = x8_27 + x20_1
        int64_t x0_9
        
        if (bytes_12 u>= x10_7)
            int64_t oldmem_4 = *arg2
            int64_t bytes_10 = x10_7 << 1
            int64_t bytes_4
            
            bytes_4 = bytes_10 u< bytes_12 ? bytes_12 : bytes_10
            
            arg2[2] = bytes_4
            x0_9 = realloc(oldmem_4, bytes_4)
            *arg2 = x0_9
            
            if (x0_9 != 0)
                x8_27 = *x23_2
                goto label_10fe054
        else
            x0_9 = *arg2
        label_10fe054:
            memmove(x0_9 + x8_27, x22_1, x20_1)
            x8_27 = *x23_2 + x20_1
            *x23_2 = x8_27
        label_10fe064:
            int64_t x10_8 = arg2[2]
            
            if (x8_27 + 1 u< x10_8)
                result = *arg2
            label_10fe0a0:
                x8_22 = result + x8_27
                x9_7 = 0x3e
            label_10fdf94:
                *x8_22 = x9_7
                *x23_2 += 1
                return result
            
            int64_t oldmem_5 = *arg2
            int64_t bytes_11 = x10_8 << 1
            int64_t bytes_5
            
            if (bytes_11 u< x8_27 + 1)
                bytes_5 = x8_27 + 1
            else
                bytes_5 = bytes_11
            
            arg2[2] = bytes_5
            result = realloc(oldmem_5, bytes_5)
            *arg2 = result
            
            if (result != 0)
                x8_27 = *x23_2
                goto label_10fe0a0
std::terminate()
noreturn
