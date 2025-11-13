// 函数: _ZNSt6__ndk19__num_putIwE23__widen_and_group_floatEPcS2_S2_PwRS3_S4_RKNS_6localeE
// 地址: 0x10bba64
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = _ReadMSR(tpidr_el0)
int64_t x8_1 = *(x8 + 0x28)
void* x23 = *arg7
int64_t var_80 = 0
int64_t (* const var_90)() = std::__ndk1::ctype<wchar_t>::id
int64_t (* const var_88)() = std::__ndk1::locale::id::__init
int64_t* var_78
int64_t (* const* var_70)()

if (*std::__ndk1::ctype<wchar_t>::id != -1)
    var_78 = &var_70
    var_70 = &var_90
    std::__ndk1::__call_once(std::__ndk1::ctype<wchar_t>::id, &var_78, sub_10dd4b0)

int64_t x8_3 = *(x23 + 0x10)
int64_t x9_1 = sx.q(*(std::__ndk1::ctype<wchar_t>::id + 8)) - 1

if (x9_1 u< (*(x23 + 0x18) - x8_3) s>> 3)
    int64_t* x25_1 = *(x8_3 + (x9_1 << 3))
    
    if (x25_1 != 0)
        void* x19_1 = *arg7
        void* var_80_1 = nullptr
        var_90 = std::__ndk1::numpunct<wchar_t>::id
        int64_t (* const var_88_1)() = std::__ndk1::locale::id::__init
        wchar_t* x28_1 = arg4
        
        if (*std::__ndk1::numpunct<wchar_t>::id != -1)
            var_78 = &var_70
            var_70 = &var_90
            std::__ndk1::__call_once(std::__ndk1::numpunct<wchar_t>::id, &var_78, sub_10dd4b0)
        
        int64_t x8_5 = *(x19_1 + 0x10)
        char* x21_1 = arg1
        int64_t x9_3 = sx.q(*(std::__ndk1::numpunct<wchar_t>::id + 8)) - 1
        
        if (x9_3 u< (*(x19_1 + 0x18) - x8_5) s>> 3)
            int64_t* x24_1 = *(x8_5 + (x9_3 << 3))
            
            if (x24_1 != 0)
                (*(*x24_1 + 0x28))(x24_1)
                *arg6 = x28_1
                uint32_t x1_2 = zx.d(*x21_1)
                char* x26_1
                
                if (x1_2 != 0x2d)
                    x26_1 = x21_1
                
                if (x1_2 == 0x2d || x1_2 == 0x2b)
                    wchar_t x0_4 = (*(*x25_1 + 0x58))(x25_1, x1_2)
                    wchar_t* x8_9 = *arg6
                    x26_1 = &x21_1[1]
                    *arg6 = &x8_9[1]
                    *x8_9 = x0_4
                
                char* x27_1
                
                if (arg3 - x26_1 s>= 2 && zx.d(*x26_1) == 0x30 && (zx.d(x26_1[1]) | 0x20) == 0x78)
                    wchar_t x0_6 = (*(*x25_1 + 0x58))(x25_1, 0x30)
                    wchar_t* x8_16 = *arg6
                    *arg6 = &x8_16[1]
                    *x8_16 = x0_6
                    wchar_t x0_8 = (*(*x25_1 + 0x58))(x25_1, zx.q(x26_1[1]))
                    wchar_t* x8_19 = *arg6
                    x26_1 = &x26_1[2]
                    *arg6 = &x8_19[1]
                    *x8_19 = x0_8
                    
                    if (x26_1 u>= arg3)
                        x27_1 = x26_1
                    else
                        x27_1 = x26_1
                        
                        while (true)
                            uint32_t __saved_x0 = zx.d(*x27_1)
                            
                            if ((zx.d(data_24bad08) & 1) == 0
                                    && __cxa_guard_acquire(&data_24bad08) != 0)
                                data_24bad00 = newlocale(0x1fbf, 0x739c3c, nullptr)
                                __cxa_guard_release(&data_24bad08)
                                x28_1 = arg4
                            
                            if (isxdigit_l(__saved_x0, data_24bad00) == 0)
                                break
                            
                            x27_1 = &x27_1[1]
                            
                            if (arg3 == x27_1)
                                x27_1 = arg3
                                break
                        
                        x21_1 = arg1
                else if (x26_1 u>= arg3)
                    x27_1 = x26_1
                else
                    x27_1 = x26_1
                    
                    while (true)
                        uint32_t __saved_x0_1 = zx.d(*x27_1)
                        
                        if ((zx.d(data_24bad08) & 1) == 0
                                && __cxa_guard_acquire(&data_24bad08) != 0)
                            data_24bad00 = newlocale(0x1fbf, 0x739c3c, nullptr)
                            __cxa_guard_release(&data_24bad08)
                            x28_1 = arg4
                        
                        if (isdigit_l(__saved_x0_1, data_24bad00) == 0)
                            break
                        
                        x27_1 = &x27_1[1]
                        
                        if (arg3 == x27_1)
                            x27_1 = arg3
                            break
                    
                    x21_1 = arg1
                
                uint64_t x8_22 = zx.q(var_90.b)
                int64_t (* const x8_23)()
                
                if ((x8_22.d & 1) == 0)
                    x8_23 = x8_22 u>> 1
                else
                    x8_23 = var_88_1
                
                wchar_t* x3
                
                if (x8_23 == 0)
                    (*(*x25_1 + 0x60))(x25_1, x26_1, x27_1, *arg6)
                    x3 = &(*arg6)[x27_1 - x26_1]
                    *arg6 = x3
                else
                    if (x26_1 != x27_1)
                        void* x8_24 = x27_1 - 1
                        
                        if (x8_24 u> x26_1)
                            void* x9_9 = &x26_1[1]
                            bool cond:6_1
                            
                            do
                                char x11_1 = *(x9_9 - 1)
                                *(x9_9 - 1) = *x8_24
                                *x8_24 = x11_1
                                x8_24 -= 1
                                cond:6_1 = x9_9 u< x8_24
                                x9_9 += 1
                            while (cond:6_1)
                    
                    int32_t x0_18 = (*(*x24_1 + 0x20))(x24_1)
                    
                    if (x26_1 u>= x27_1)
                        x3 = *arg6
                    else
                        int32_t x23_1 = 0
                        int32_t x21_2 = 0
                        char* x28_2 = x26_1
                        
                        do
                            uint64_t x8_27 = zx.q(x23_1)
                            uint32_t x9_12
                            
                            if ((zx.d(var_90.b) & 1) != 0)
                                x9_12 = zx.d(*(var_80_1 + x8_27))
                                
                                if (x9_12 != 0)
                                label_10bbe04:
                                    
                                    if (x21_2 == x9_12)
                                        int32_t* x9_14 = *arg6
                                        x21_2 = 0
                                        *arg6 = &x9_14[1]
                                        *x9_14 = x0_18
                                        uint64_t x9_15 = zx.q(var_90.b)
                                        int64_t (* const x9_16)()
                                        
                                        if ((x9_15.d & 1) == 0)
                                            x9_16 = x9_15 u>> 1
                                        else
                                            x9_16 = var_88_1
                                        
                                        if (x9_16 - 1 u> x8_27)
                                            x23_1 += 1
                            else
                                x9_12 = zx.d(*(&var_90 + x8_27 + 1))
                                
                                if (x9_12 != 0)
                                    goto label_10bbe04
                            int32_t x0_20 = (*(*x25_1 + 0x58))(x25_1, zx.q(*x28_2))
                            int32_t* x8_30 = *arg6
                            x28_2 = &x28_2[1]
                            x21_2 += 1
                            x3 = &x8_30[1]
                            *arg6 = x3
                            *x8_30 = x0_20
                        while (x27_1 != x28_2)
                        
                        x28_1 = arg4
                        x21_1 = arg1
                    
                    void* x9_19 = x26_1 - x21_1
                    void* x10_8 = &x28_1[x9_19]
                    
                    if (x10_8 != x3)
                        void* x8_34 = x3 - 4
                        
                        if (x8_34 u> x10_8)
                            void* x9_21 = &x28_1[x9_19 + 1]
                            bool cond:8_1
                            
                            do
                                int32_t x11_3 = *(x9_21 - 4)
                                *(x9_21 - 4) = *x8_34
                                *x8_34 = x11_3
                                x8_34 -= 4
                                cond:8_1 = x9_21 u< x8_34
                                x9_21 += 4
                            while (cond:8_1)
                
                if (x27_1 u< arg3)
                    while (true)
                        uint32_t x1_8 = zx.d(*x27_1)
                        
                        if (x1_8 == 0x2e)
                            int32_t x0_25 = (*(*x24_1 + 0x18))(x24_1, x1_8)
                            int32_t* x8_40 = *arg6
                            x27_1 = &x27_1[1]
                            x3 = &x8_40[1]
                            *arg6 = x3
                            *x8_40 = x0_25
                            break
                        
                        int32_t x0_23 = (*(*x25_1 + 0x58))(x25_1, x1_8)
                        int32_t* x8_37 = *arg6
                        x27_1 = &x27_1[1]
                        x3 = &x8_37[1]
                        *arg6 = x3
                        *x8_37 = x0_23
                        
                        if (arg3 == x27_1)
                            x27_1 = arg3
                            break
                
                int64_t result = (*(*x25_1 + 0x60))(x25_1, x27_1, arg3, x3)
                void* x8_44 = &(*arg6)[arg3 - x27_1]
                *arg6 = x8_44
                void* x8_45
                
                if (arg2 == arg3)
                    x8_45 = x8_44
                else
                    x8_45 = &x28_1[arg2 - x21_1]
                
                *arg5 = x8_45
                
                if ((zx.d(var_90.b) & 1) != 0)
                    result = operator delete(var_80_1)
                
                if (*(x8 + 0x28) == x8_1)
                    return result
                
                __stack_chk_fail()
                noreturn

sub_f43870()
noreturn
