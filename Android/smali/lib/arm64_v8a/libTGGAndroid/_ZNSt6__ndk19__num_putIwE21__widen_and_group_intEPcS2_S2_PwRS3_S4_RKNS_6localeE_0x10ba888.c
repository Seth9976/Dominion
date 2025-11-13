// 函数: _ZNSt6__ndk19__num_putIwE21__widen_and_group_intEPcS2_S2_PwRS3_S4_RKNS_6localeE
// 地址: 0x10ba888
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x27 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x27 + 0x28)
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

int64_t x8_2 = *(x23 + 0x10)
int64_t x9_1 = sx.q(*(std::__ndk1::ctype<wchar_t>::id + 8)) - 1

if (x9_1 u< (*(x23 + 0x18) - x8_2) s>> 3)
    int64_t* x25_1 = *(x8_2 + (x9_1 << 3))
    
    if (x25_1 != 0)
        void* x23_1 = *arg7
        void* var_80_1 = nullptr
        var_90 = std::__ndk1::numpunct<wchar_t>::id
        int64_t (* const var_88_1)() = std::__ndk1::locale::id::__init
        
        if (*std::__ndk1::numpunct<wchar_t>::id != -1)
            var_78 = &var_70
            var_70 = &var_90
            std::__ndk1::__call_once(std::__ndk1::numpunct<wchar_t>::id, &var_78, sub_10dd4b0)
        
        int64_t x8_4 = *(x23_1 + 0x10)
        int64_t x9_3 = sx.q(*(std::__ndk1::numpunct<wchar_t>::id + 8)) - 1
        
        if (x9_3 u< (*(x23_1 + 0x18) - x8_4) s>> 3)
            int64_t* x26_1 = *(x8_4 + (x9_3 << 3))
            
            if (x26_1 != 0)
                (*(*x26_1 + 0x28))(x26_1)
                uint64_t x8_6 = zx.q(var_90.b)
                wchar_t* x19 = arg4
                int64_t (* const x8_7)()
                
                if ((x8_6.d & 1) == 0)
                    x8_7 = x8_6 u>> 1
                else
                    x8_7 = var_88_1
                
                int64_t result
                
                if (x8_7 == 0)
                    result = (*(*x25_1 + 0x60))(x25_1, arg1, arg3, x19)
                    *arg6 = &x19[arg3 - arg1]
                else
                    *arg6 = x19
                    uint32_t x1_2 = zx.d(*arg1)
                    char* x24_1
                    
                    if (x1_2 != 0x2d)
                        x24_1 = arg1
                    
                    if (x1_2 == 0x2d || x1_2 == 0x2b)
                        wchar_t x0_4 = (*(*x25_1 + 0x58))(x25_1, x1_2)
                        wchar_t* x8_10 = *arg6
                        x24_1 = &arg1[1]
                        *arg6 = &x8_10[1]
                        *x8_10 = x0_4
                    
                    if (arg3 - x24_1 s>= 2 && zx.d(*x24_1) == 0x30
                            && (zx.d(x24_1[1]) | 0x20) == 0x78)
                        wchar_t x0_6 = (*(*x25_1 + 0x58))(x25_1, 0x30)
                        wchar_t* x8_17 = *arg6
                        *arg6 = &x8_17[1]
                        *x8_17 = x0_6
                        wchar_t x0_8 = (*(*x25_1 + 0x58))(x25_1, zx.q(x24_1[1]))
                        wchar_t* x8_20 = *arg6
                        x24_1 = &x24_1[2]
                        *arg6 = &x8_20[1]
                        *x8_20 = x0_8
                    
                    if (x24_1 != arg3)
                        void* x8_21 = arg3 - 1
                        
                        if (x8_21 u> x24_1)
                            void* x9_9 = &x24_1[1]
                            bool cond:2_1
                            
                            do
                                char x11_1 = *(x9_9 - 1)
                                *(x9_9 - 1) = *x8_21
                                *x8_21 = x11_1
                                x8_21 -= 1
                                cond:2_1 = x9_9 u< x8_21
                                x9_9 += 1
                            while (cond:2_1)
                    
                    result = (*(*x26_1 + 0x20))(x26_1)
                    wchar_t* x8_27
                    
                    if (x24_1 u>= arg3)
                        x8_27 = *arg6
                    else
                        int32_t x26_2 = result.d
                        int32_t x19_1 = 0
                        int32_t x27_1 = 0
                        char* x28_1 = x24_1
                        
                        do
                            uint64_t x8_24 = zx.q(x19_1)
                            uint32_t x9_12
                            
                            if ((zx.d(var_90.b) & 1) != 0)
                                x9_12 = zx.d(*(var_80_1 + x8_24))
                                
                                if (x9_12 != 0)
                                label_10bab10:
                                    
                                    if (x27_1 == x9_12)
                                        int32_t* x9_14 = *arg6
                                        x27_1 = 0
                                        *arg6 = &x9_14[1]
                                        *x9_14 = x26_2
                                        uint64_t x9_15 = zx.q(var_90.b)
                                        int64_t (* const x9_16)()
                                        
                                        if ((x9_15.d & 1) == 0)
                                            x9_16 = x9_15 u>> 1
                                        else
                                            x9_16 = var_88_1
                                        
                                        if (x9_16 - 1 u> x8_24)
                                            x19_1 += 1
                            else
                                x9_12 = zx.d(*(&var_90 + x8_24 + 1))
                                
                                if (x9_12 != 0)
                                    goto label_10bab10
                            result = (*(*x25_1 + 0x58))(x25_1, zx.q(*x28_1))
                            int32_t* x9_18 = *arg6
                            x28_1 = &x28_1[1]
                            x27_1 += 1
                            x8_27 = &x9_18[1]
                            *arg6 = x8_27
                            *x9_18 = result.d
                        while (arg3 != x28_1)
                        
                        x19 = arg4
                    
                    void* x9_19 = x24_1 - arg1
                    void* x10_8 = &x19[x9_19]
                    
                    if (x10_8 != x8_27)
                        void* x8_32 = x8_27 - 4
                        
                        if (x8_32 u> x10_8)
                            void* x9_21 = &x19[x9_19 + 1]
                            bool cond:4_1
                            
                            do
                                int32_t x11_3 = *(x9_21 - 4)
                                *(x9_21 - 4) = *x8_32
                                *x8_32 = x11_3
                                x8_32 -= 4
                                cond:4_1 = x9_21 u< x8_32
                                x9_21 += 4
                            while (cond:4_1)
                
                void* x8_34
                
                if (arg2 == arg3)
                    x8_34 = *arg6
                else
                    x8_34 = &x19[arg2 - arg1]
                
                *arg5 = x8_34
                
                if ((zx.d(var_90.b) & 1) != 0)
                    result = operator delete(var_80_1)
                
                if (*(x27 + 0x28) == x8)
                    return result
                
                __stack_chk_fail()
                noreturn

sub_f43870()
noreturn
