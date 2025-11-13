// 函数: sub_10ee7a8
// 地址: 0x10ee7a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x10 = _ReadMSR(tpidr_el0)
int64_t var_68 = *(x10 + 0x28)
char* x8_1 = *arg1
void* result

if (x8_1 == arg1[1] || zx.d(*x8_1) != 0x49)
    result = nullptr
else
    *arg1 = &x8_1[1]
    void* result_1
    
    if ((arg2 & 1) != 0)
        arg1[0x54] = arg1[0x53]
        result_1 = &arg1[0x48]
        sub_10ef86c(&arg1[0x53], &result_1)
        arg1[0x49] = arg1[0x48]
    
    int64_t* x26_1 = &var_68
    void* x25_1 = &arg1[0x5a]
    int64_t x8_6 = (arg1[3] - arg1[2]) s>> 3
    
    while (true)
        char* x8_7 = *arg1
        
        if (x8_7 != arg1[1] && zx.d(*x8_7) == 0x45)
            *arg1 = &x8_7[1]
            int64_t x21_3 = x8_6 << 3
            void* x0_11
            int64_t x1_7
            x0_11, x1_7 = sub_10f7304(arg1, arg1[2] + x21_3, arg1[3])
            void** x22_1 = arg1[0x266]
            arg1[3] = arg1[2] + x21_3
            int64_t x8_20 = x22_1[1]
            
            if (x8_20 + 0x20 u< 0xff0)
                goto label_10eeba0
            
            void** x0_12 = malloc(0x1000)
            
            if (x0_12 != 0)
                x8_20 = 0
                *x0_12 = x22_1
                x0_12[1] = 0
                x22_1 = x0_12
                arg1[0x266] = x0_12
            label_10eeba0:
                x22_1[1] = x8_20 + 0x20
                result = x22_1 + x8_20 + 0x10
                *result = &_vtable_for_(anonymous namespace)::itanium_demangle::TemplateArgs{for `(anonymous namespace)::itanium_demangle::Node'}
                *(result + 8) = 0x1010123
                *(result + 0x10) = x0_11
                *(result + 0x18) = x1_7
                break
        else if ((arg2 & 1) == 0)
            result = sub_10edca8(arg1)
            result_1 = result
            
            if (result == 0)
                break
            
            sub_10ede98(&arg1[2], &result_1)
            continue
        else
            int128_t v0
            v0.q = 0
            v0:8.q = 0
            int128_t var_88
            result_1 = &var_88
            int128_t* var_98_1 = &var_88
            int64_t* var_90_1 = x26_1
            __builtin_memset(&var_88, 0, 0x20)
            void* result_3 = arg1[0x53]
            
            if (result_3 == &arg1[0x56])
                int64_t x8_8 = arg1[0x54]
                void* x8_9
                void* result_6
                int64_t x10_4
                
                if (x8_8 == &arg1[0x56])
                    x10_4 = 0
                    x8_9 = &arg1[0x56]
                    result_6 = &var_88
                else
                    __memmove_chk(&var_88, &arg1[0x56], x8_8 - &arg1[0x56], 0x20)
                    x8_9 = arg1[0x53]
                    result_6 = result_1
                    x10_4 = (arg1[0x54] - x8_9) s>> 3
                
                var_98_1 = result_6 + (x10_4 << 3)
                arg1[0x54] = x8_9
            else
                result_1 = result_3
                var_98_1.o = *(arg1 + 0x2a0)
                arg1[0x53] = &arg1[0x56]
                arg1[0x54] = &arg1[0x56]
                arg1[0x55] = x25_1
            
            struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::NewExpr::VTable
                ** x0_5
            x0_5, v0 = sub_10edca8(arg1)
            void* result_4 = result_1
            struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::NewExpr::VTable
                ** var_a8 = x0_5
            void* result_2 = arg1[0x53]
            void* result_5
            
            if (result_4 == &var_88)
                if (result_2 == &arg1[0x56])
                    result_5 = &var_88
                else
                    free(result_2)
                    arg1[0x53] = &arg1[0x56]
                    arg1[0x54] = &arg1[0x56]
                    arg1[0x55] = x25_1
                    result_5 = result_1
                    result_2 = &arg1[0x56]
                
                void* x9_8
                int64_t x10_7
                
                if (var_98_1 == result_5)
                    x10_7 = 0
                    x9_8 = &arg1[0x56]
                else
                    memmove(result_2, result_5, var_98_1 - result_5)
                    result_5 = result_1
                    x9_8 = arg1[0x53]
                    x10_7 = (var_98_1 - result_5) s>> 3
                
                arg1[0x54] = x9_8 + (x10_7 << 3)
                void* result_8 = result_5
                
                if (x0_5 == 0)
                    goto label_10eeb0c
                
                goto label_10ee9fc
            
            arg1[0x53] = result_4
            
            if (result_2 != &arg1[0x56])
                int64_t x8_10 = arg1[0x55]
                *(arg1 + 0x2a0) = var_98_1.o
                int64_t var_90_2 = x8_10
                result_1 = result_2
                void* result_7 = result_2
                
                if (x0_5 != 0)
                    goto label_10ee9fc
                
                result_5 = result_2
                goto label_10eeb0c
            
            *(arg1 + 0x2a0) = var_98_1.o
            result_1 = &var_88
            int128_t* var_98_2 = &var_88
            int64_t* var_90_3 = x26_1
            
            if (x0_5 != 0)
            label_10ee9fc:
                sub_10ede98(&arg1[2], &var_a8)
                struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::NewExpr::VTable
                    ** var_b0 = x0_5
                
                if (zx.d(x0_5[1].b) != 0x21)
                label_10eeb00:
                    sub_10f52c8(*(arg1[0x54] - 8), &var_b0)
                    result_5 = result_1
                    goto label_10eeb0c
                
                void** x27_1 = arg1[0x266]
                int64_t* x28_1 = x0_5[2]
                int64_t x25_2 = x0_5[3]
                int64_t x8_12 = x27_1[1]
                
                if (x8_12 + 0x20 u< 0xff0)
                    goto label_10eea4c
                
                void** x0_7 = malloc(0x1000)
                
                if (x0_7 != 0)
                    x8_12 = 0
                    *x0_7 = x27_1
                    x0_7[1] = 0
                    x27_1 = x0_7
                    arg1[0x266] = x0_7
                label_10eea4c:
                    x27_1[1] = x8_12 + 0x20
                    *(x27_1 + x8_12 + 0x10) = &_vtable_for_(anonymous namespace)::itanium_demangle::ParameterPack{for `(anonymous namespace)::itanium_demangle::Node'}
                    *(x27_1 + x8_12 + 0x18) = 0x2020220
                    int64_t x9_12 = x25_2 << 3
                    *(x27_1 + x8_12 + 0x20) = x28_1
                    *(x27_1 + x8_12 + 0x28) = x25_2
                    
                    if (x25_2 == 0)
                    label_10eea9c:
                        *(x27_1 + x8_12 + 0x1a) = 1
                    else
                        int64_t x10_8 = x9_12
                        int64_t* x11_1 = x28_1
                        
                        while (true)
                            void* x12_1 = *x11_1
                            x11_1 = &x11_1[1]
                            
                            if (zx.d(*(x12_1 + 0xa)) != 1)
                                break
                            
                            int64_t temp0_1 = x10_8
                            x10_8 -= 8
                            
                            if (temp0_1 == 8)
                                goto label_10eea9c
                    
                    if (x25_2 == 0)
                    label_10eeac4:
                        *(x27_1 + x8_12 + 0x1b) = 1
                    else
                        int64_t x10_9 = x9_12
                        int64_t* x11_2 = x28_1
                        
                        while (true)
                            void* x12_3 = *x11_2
                            x11_2 = &x11_2[1]
                            
                            if (zx.d(*(x12_3 + 0xb)) != 1)
                                break
                            
                            int64_t temp1_1 = x10_9
                            x10_9 -= 8
                            
                            if (temp1_1 == 8)
                                goto label_10eeac4
                    
                    if (x25_2 == 0)
                    label_10eeae4:
                        *(x27_1 + x8_12 + 0x19) = 1
                    else
                        while (true)
                            void* x10_10 = *x28_1
                            x28_1 = &x28_1[1]
                            
                            if (zx.d(*(x10_10 + 9)) != 1)
                                break
                            
                            int64_t temp2_1 = x9_12
                            x9_12 -= 8
                            
                            if (temp2_1 == 8)
                                goto label_10eeae4
                    
                    x26_1 = &var_68
                    var_b0 = x27_1 + x8_12 + 0x10
                    goto label_10eeb00
            else
                result_5 = &var_88
            label_10eeb0c:
                
                if (result_5 != &var_88)
                    free(result_5)
                
                if (x0_5 != 0)
                    continue
                
                result = nullptr
                break
        
        std::terminate()
        noreturn

if (*(x10 + 0x28) == var_68)
    return result

__stack_chk_fail()
noreturn
