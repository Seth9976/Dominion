// 函数: sub_10f39a4
// 地址: 0x10f39a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = _ReadMSR(tpidr_el0)
int64_t var_68 = *(x25 + 0x28)

if (arg2 != 0)
    arg1[0x54] = arg1[0x53]

char* x9 = *arg1
void* x8_2 = arg1[1]
void* result

if (x8_2 - x9 u< 2 || zx.d(*x9) != 0x55)
    result = nullptr
else if (zx.d(x9[1]) == 0x74)
    void* x20_1 = &x9[2]
    *arg1 = x20_1
    
    if (x8_2 == x20_1)
        result = nullptr
    else
        void* x9_1
        void* x21_1
        
        if (zx.d(*x20_1) - 0x30 u<= 9)
            void* x10_8 = &x9[3]
            
            while (true)
                x9_1 = x10_8
                *arg1 = x10_8
                
                if (x8_2 == x10_8)
                    x21_1 = x8_2
                    break
                
                x10_8 = x9_1 + 1
                
                if (zx.d(*x9_1) - 0x30 u>= 0xa)
                    x21_1 = x10_8 - 1
                    break
        else
            x21_1 = nullptr
            x9_1 = x20_1
            x20_1 = nullptr
        
        if (x9_1 == x8_2 || zx.d(*x9_1) != 0x5f)
            result = nullptr
        else
            void** x22_3 = arg1[0x266]
            *arg1 = x9_1 + 1
            int64_t x8_13 = x22_3[1]
            
            if (x8_13 + 0x20 u>= 0xff0)
                void** x0_7 = malloc(0x1000)
                
                if (x0_7 == 0)
                    std::terminate()
                    noreturn
                
                x8_13 = 0
                *x0_7 = x22_3
                x0_7[1] = 0
                x22_3 = x0_7
                arg1[0x266] = x0_7
            
            x22_3[1] = x8_13 + 0x20
            result = x22_3 + x8_13 + 0x10
            *result = &_vtable_for_(anonymous namespace)::itanium_demangle::UnnamedTypeName{for `(anonymous namespace)::itanium_demangle::Node'}
            *(result + 8) = 0x101012c
            *(result + 0x10) = x20_1
            *(result + 0x18) = x21_1
else if (zx.d(*x9) != 0x55)
    result = nullptr
else if (zx.d(x9[1]) == 0x6c)
    int64_t x9_2 = arg1[0x54]
    int64_t x10_7 = arg1[0x53]
    int64_t x26_1 = arg1[0x62]
    *arg1 = &x9[2]
    int64_t x9_4 = (x9_2 - x10_7) s>> 3
    arg1[0x62] = x9_4
    int128_t var_a8
    int128_t* var_c0 = &var_a8
    int128_t* var_b8_1 = &var_a8
    int64_t* var_b0_1 = &var_68
    __builtin_memset(&var_a8, 0, 0x40)
    int128_t** var_d8 = &var_c0
    sub_10ef86c(&arg1[0x53], &var_d8)
    int64_t x21_2 = arg1[2]
    char* x8_4 = *arg1
    int64_t x23_1 = arg1[3]
    int64_t x2_2
    int64_t x8_15
    
    if (arg1[1] == x8_4)
        x2_2 = x23_1
        x8_15 = x21_2
    label_10f3d34:
        int64_t x24_3 = (x23_1 - x21_2) s>> 3 << 3
        void* x0_10
        int64_t x1_4
        x0_10, x1_4 = sub_10f7304(arg1, x8_15 + x24_3, x2_2)
        arg1[3] = arg1[2] + x24_3
        
        if (x1_4 == 0)
            arg1[0x54] -= 8
        
        int64_t x0_11 = __strlen_chk(&data_7727af, 3)
        void* x8_20 = *arg1
        void* x8_22
        
        if (x0_11 u<= arg1[1] - x8_20)
            if (x0_11 != 0)
                void* const x9_22 = &data_7727af
                int64_t x10_13 = x0_11
                void* x11_7 = x8_20
                
                while (zx.d(*x9_22) == zx.d(*x11_7))
                    x9_22 += 1
                    int64_t temp0_1 = x10_13
                    x10_13 -= 1
                    x11_7 += 1
                    
                    if (temp0_1 == 1)
                        goto label_10f3df8
                
                goto label_10f3d8c
            
        label_10f3df8:
            x8_22 = x8_20 + x0_11
        else
        label_10f3d8c:
            
            while (true)
                int128_t** x0_13 = sub_10eb95c(arg1)
                var_d8 = x0_13
                
                if (x0_13 == 0)
                    goto label_10f3ed8_1
                
                sub_10ede98(&arg1[2], &var_d8)
                char* x8_21 = *arg1
                
                if (x8_21 != arg1[1])
                    if (zx.d(*x8_21) == 0x45)
                        x8_22 = &x8_21[1]
                        break
        
        int64_t x9_23 = arg1[2]
        int64_t x2_3 = arg1[3]
        *arg1 = x8_22
        void* x0_16
        int64_t x1_7
        x0_16, x1_7 = sub_10f7304(arg1, x9_23 + x24_3, x2_3)
        void* x8_23 = arg1[1]
        char* x28_1 = *arg1
        arg1[3] = arg1[2] + x24_3
        char* x9_28
        void* x22_4
        
        if (x8_23 == x28_1 || zx.d(*x28_1) - 0x30 u> 9)
            x22_4 = nullptr
            x9_28 = x28_1
            x28_1 = nullptr
        else
            void* x10_15 = &x28_1[1]
            
            while (true)
                x9_28 = x10_15
                *arg1 = x10_15
                
                if (x8_23 == x10_15)
                    x22_4 = x8_23
                    break
                
                x10_15 = &x9_28[1]
                
                if (zx.d(*x9_28) - 0x30 u>= 0xa)
                    x22_4 = x10_15 - 1
                    break
        
        if (x9_28 == x8_23 || zx.d(*x9_28) != 0x5f)
        label_10f3ed8:
            result = nullptr
        else
            void** x20_4 = arg1[0x266]
            *arg1 = &x9_28[1]
            int64_t x8_26 = x20_4[1]
            
            if (x8_26 + 0x40 u>= 0xff0)
                void** x0_17 = malloc(0x1000)
                
                if (x0_17 == 0)
                    std::terminate()
                    noreturn
                
                x8_26 = 0
                *x0_17 = x20_4
                x0_17[1] = 0
                arg1[0x266] = x0_17
                x20_4 = x0_17
            
            x20_4[1] = x8_26 + 0x40
            result = x20_4 + x8_26 + 0x10
            *result = &_vtable_for_(anonymous namespace)::itanium_demangle::ClosureTypeName{for `(anonymous namespace)::itanium_demangle::Node'}
            *(result + 8) = 0x101012d
            *(result + 0x10) = x0_10
            *(result + 0x18) = x1_4
            *(result + 0x20) = x0_16
            *(result + 0x28) = x1_7
            *(result + 0x30) = x28_1
            *(result + 0x38) = x22_4
    else
        while (true)
            if (zx.d(*x8_4) == 0x54)
                size_t x0_1 = __strlen_chk("yptn", 5)
                void* x8_6 = *arg1
                uint32_t x1_1
                
                if (arg1[1] - x8_6 u< 2)
                    x1_1 = 0
                else
                    x1_1 = zx.d(*(x8_6 + 1))
                
                if (x0_1 != 0)
                    int64_t x0_2 = memchr("yptn", x1_1, x0_1)
                    
                    if (x0_2 != 0 && x0_2 != 0x77d740)
                        int128_t** x0_4 = sub_10f4c28(arg1)
                        var_d8 = x0_4
                        
                        if (x0_4 == 0)
                            break
                        
                        sub_10ede98(&arg1[2], &var_d8)
                        x8_4 = *arg1
                        
                        if (arg1[1] != x8_4)
                            continue
            
            x8_15 = arg1[2]
            x2_2 = arg1[3]
            goto label_10f3d34
        
    label_10f3ed8_1:
        result = nullptr
    arg1[0x54] = arg1[0x53] + (x9_4 << 3)
    int128_t* x0_18 = var_c0
    
    if (x0_18 != &var_a8)
        free(x0_18)
    
    arg1[0x62] = x26_1
else if (zx.d(*x9) != 0x55 || zx.d(x9[1]) != 0x62)
    result = nullptr
else
    void* x10_12 = &x9[2]
    *arg1 = x10_12
    
    if (x8_2 == x10_12)
        result = nullptr
    else
        if (zx.d(*x10_12) - 0x30 u<= 9)
            void* x9_9 = &x9[3]
            
            do
                x10_12 = x9_9
                *arg1 = x9_9
                
                if (x8_2 == x9_9)
                    break
                
                x9_9 = x10_12 + 1
            while (zx.d(*x10_12) - 0x30 u< 0xa)
        
        if (x10_12 == x8_2 || zx.d(*x10_12) != 0x5f)
            result = nullptr
        else
            void** x20_2 = arg1[0x266]
            *arg1 = x10_12 + 1
            int64_t x8_10 = x20_2[1]
            
            if (x8_10 + 0x20 u>= 0xff0)
                void** x0_6 = malloc(0x1000)
                
                if (x0_6 == 0)
                    std::terminate()
                    noreturn
                
                x8_10 = 0
                *x0_6 = x20_2
                x0_6[1] = 0
                x20_2 = x0_6
                arg1[0x266] = x0_6
            
            x20_2[1] = x8_10 + 0x20
            result = x20_2 + x8_10 + 0x10
            *result = &_vtable_for_(anonymous namespace)::itanium_demangle::NameType{for `(anonymous namespace)::itanium_demangle::Node'}
            *(result + 8) = 0x1010107
            *(result + 0x10) = "'block-literal'"
            *(result + 0x18) = &data_7869cd[0xf]

if (*(x25 + 0x28) == var_68)
    return result

__stack_chk_fail()
noreturn
