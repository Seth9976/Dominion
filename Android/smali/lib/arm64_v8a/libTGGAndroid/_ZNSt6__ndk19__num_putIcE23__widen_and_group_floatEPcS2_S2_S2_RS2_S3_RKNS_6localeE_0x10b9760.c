// 函数: _ZNSt6__ndk19__num_putIcE23__widen_and_group_floatEPcS2_S2_S2_RS2_S3_RKNS_6localeE
// 地址: 0x10b9760
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x28 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x28 + 0x28)
void* x23 = *arg7
int64_t var_80 = 0
int64_t (* const var_90)() = std::__ndk1::ctype<char>::id
int64_t (* const var_88)() = std::__ndk1::locale::id::__init
int64_t* var_78
int64_t (* const* var_70)()

if (*std::__ndk1::ctype<char>::id != -1)
    var_78 = &var_70
    var_70 = &var_90
    std::__ndk1::__call_once(std::__ndk1::ctype<char>::id, &var_78, sub_10dd4b0)

int64_t x8_2 = *(x23 + 0x10)
int64_t x9_1 = sx.q(*(std::__ndk1::ctype<char>::id + 8)) - 1

if (x9_1 u< (*(x23 + 0x18) - x8_2) s>> 3)
    int64_t* x25_1 = *(x8_2 + (x9_1 << 3))
    
    if (x25_1 != 0)
        void* x19_1 = *arg7
        void* var_80_1 = nullptr
        var_90 = std::__ndk1::numpunct<char>::id
        int64_t (* const var_88_1)() = std::__ndk1::locale::id::__init
        char* x24_1 = arg4
        
        if (*std::__ndk1::numpunct<char>::id != -1)
            var_78 = &var_70
            var_70 = &var_90
            std::__ndk1::__call_once(std::__ndk1::numpunct<char>::id, &var_78, sub_10dd4b0)
        
        int64_t x8_4 = *(x19_1 + 0x10)
        int64_t x9_3 = sx.q(*(std::__ndk1::numpunct<char>::id + 8)) - 1
        
        if (x9_3 u< (*(x19_1 + 0x18) - x8_4) s>> 3)
            int64_t* x21_1 = *(x8_4 + (x9_3 << 3))
            
            if (x21_1 != 0)
                (*(*x21_1 + 0x28))(x21_1)
                char* x19_2 = arg1
                *arg6 = x24_1
                uint32_t x1_2 = zx.d(*x19_2)
                char* x26_1
                
                if (x1_2 != 0x2d)
                    x26_1 = x19_2
                
                if (x1_2 == 0x2d || x1_2 == 0x2b)
                    char x0_4 = (*(*x25_1 + 0x38))(x25_1, x1_2)
                    char* x8_8 = *arg6
                    x26_1 = &x19_2[1]
                    *arg6 = &x8_8[1]
                    *x8_8 = x0_4
                
                int64_t* var_a8 = x21_1
                char* x27_1
                
                if (arg3 - x26_1 s>= 2 && zx.d(*x26_1) == 0x30 && (zx.d(x26_1[1]) | 0x20) == 0x78)
                    char x0_6 = (*(*x25_1 + 0x38))(x25_1, 0x30)
                    char* x8_15 = *arg6
                    *arg6 = &x8_15[1]
                    *x8_15 = x0_6
                    char x0_8 = (*(*x25_1 + 0x38))(x25_1, zx.q(x26_1[1]))
                    char* x8_18 = *arg6
                    x26_1 = &x26_1[2]
                    *arg6 = &x8_18[1]
                    *x8_18 = x0_8
                    
                    if (x26_1 u< arg3)
                        x27_1 = x26_1
                        
                        do
                            uint32_t __saved_x0 = zx.d(*x27_1)
                            
                            if ((zx.d(data_24bad08) & 1) == 0
                                    && __cxa_guard_acquire(&data_24bad08) != 0)
                                data_24bad00 = newlocale(0x1fbf, 0x739c3c, nullptr)
                                __cxa_guard_release(&data_24bad08)
                                x24_1 = arg4
                            
                            if (isxdigit_l(__saved_x0, data_24bad00) == 0)
                                goto label_10b9a54
                            
                            x27_1 = &x27_1[1]
                        while (arg3 != x27_1)
                        
                        goto label_10b9a50
                    
                    x27_1 = x26_1
                else if (x26_1 u>= arg3)
                    x27_1 = x26_1
                else
                    x27_1 = x26_1
                    
                    do
                        uint32_t __saved_x0_1 = zx.d(*x27_1)
                        
                        if ((zx.d(data_24bad08) & 1) == 0
                                && __cxa_guard_acquire(&data_24bad08) != 0)
                            data_24bad00 = newlocale(0x1fbf, 0x739c3c, nullptr)
                            __cxa_guard_release(&data_24bad08)
                            x24_1 = arg4
                        
                        if (isdigit_l(__saved_x0_1, data_24bad00) == 0)
                            goto label_10b9a54
                        
                        x27_1 = &x27_1[1]
                    while (arg3 != x27_1)
                    
                label_10b9a50:
                    x27_1 = arg3
                label_10b9a54:
                    x19_2 = arg1
                    x21_1 = var_a8
                
                uint64_t x8_21 = zx.q(var_90.b)
                int64_t (* const x8_22)()
                
                if ((x8_21.d & 1) == 0)
                    x8_22 = x8_21 u>> 1
                else
                    x8_22 = var_88_1
                
                if (x8_22 == 0)
                    (*(*x25_1 + 0x40))(x25_1, x26_1, x27_1, *arg6)
                    *arg6 = &(*arg6)[x27_1 - x26_1]
                    
                    if (x27_1 u< arg3)
                    label_10b9c00:
                        
                        while (true)
                            uint32_t x1_8 = zx.d(*x27_1)
                            
                            if (x1_8 == 0x2e)
                                char x0_25 = (*(*var_a8 + 0x18))(var_a8, x1_8)
                                char* x8_41 = *arg6
                                x27_1 = &x27_1[1]
                                *arg6 = &x8_41[1]
                                *x8_41 = x0_25
                                break
                            
                            char x0_23 = (*(*x25_1 + 0x38))(x25_1, x1_8)
                            char* x8_38 = *arg6
                            x27_1 = &x27_1[1]
                            *arg6 = &x8_38[1]
                            *x8_38 = x0_23
                            
                            if (arg3 == x27_1)
                                x27_1 = arg3
                                break
                else
                    if (x26_1 != x27_1)
                        void* x8_23 = x27_1 - 1
                        
                        if (x8_23 u> x26_1)
                            void* x9_9 = &x26_1[1]
                            bool cond:6_1
                            
                            do
                                char x11_1 = *(x9_9 - 1)
                                *(x9_9 - 1) = *x8_23
                                *x8_23 = x11_1
                                x8_23 -= 1
                                cond:6_1 = x9_9 u< x8_23
                                x9_9 += 1
                            while (cond:6_1)
                    
                    char x0_18 = (*(*x21_1 + 0x20))(x21_1)
                    
                    if (x26_1 u< x27_1)
                        int32_t x23_1 = 0
                        int32_t x21_2 = 0
                        char* x28_1 = x26_1
                        
                        do
                            uint64_t x8_26 = zx.q(x23_1)
                            uint32_t x9_12
                            
                            if ((zx.d(var_90.b) & 1) != 0)
                                x9_12 = zx.d(*(var_80_1 + x8_26))
                                
                                if (x9_12 != 0)
                                label_10b9b00:
                                    
                                    if (x21_2 == x9_12)
                                        char* x9_14 = *arg6
                                        x21_2 = 0
                                        *arg6 = &x9_14[1]
                                        *x9_14 = x0_18
                                        uint64_t x9_15 = zx.q(var_90.b)
                                        int64_t (* const x9_16)()
                                        
                                        if ((x9_15.d & 1) == 0)
                                            x9_16 = x9_15 u>> 1
                                        else
                                            x9_16 = var_88_1
                                        
                                        if (x9_16 - 1 u> x8_26)
                                            x23_1 += 1
                            else
                                x9_12 = zx.d(*(&var_90 + x8_26 + 1))
                                
                                if (x9_12 != 0)
                                    goto label_10b9b00
                            char x0_20 = (*(*x25_1 + 0x38))(x25_1, zx.q(*x28_1))
                            char* x8_29 = *arg6
                            x28_1 = &x28_1[1]
                            x21_2 += 1
                            *arg6 = &x8_29[1]
                            *x8_29 = x0_20
                        while (x27_1 != x28_1)
                    
                    x24_1 = arg4
                    x19_2 = arg1
                    char* x8_30 = *arg6
                    void* x9_19 = x26_1 - x19_2
                    int64_t x10_8 = x24_1 + x9_19
                    
                    if (x10_8 != x8_30)
                        void* x8_31 = x8_30 - 1
                        
                        if (x8_31 u> x10_8)
                            void* x9_21 = x9_19 + x24_1 + 1
                            bool cond:8_1
                            
                            do
                                char x11_3 = *(x9_21 - 1)
                                *(x9_21 - 1) = *x8_31
                                *x8_31 = x11_3
                                x8_31 -= 1
                                cond:8_1 = x9_21 u< x8_31
                                x9_21 += 1
                            while (cond:8_1)
                    
                    if (x27_1 u< arg3)
                        goto label_10b9c00
                
                int64_t result = (*(*x25_1 + 0x40))(x25_1, x27_1, arg3, *arg6)
                char* x8_45 = &(*arg6)[arg3 - x27_1]
                *arg6 = x8_45
                char* x8_46
                
                if (arg2 == arg3)
                    x8_46 = x8_45
                else
                    x8_46 = x24_1 + arg2 - x19_2
                
                *arg5 = x8_46
                
                if ((zx.d(var_90.b) & 1) != 0)
                    result = operator delete(var_80_1)
                
                if (*(x28 + 0x28) == x8)
                    return result
                
                __stack_chk_fail()
                noreturn

sub_f43870()
noreturn
