// 函数: _ZN5Botan6PBKDF2C1ERKNS_25MessageAuthenticationCodeEmNSt6__ndk16chrono8durationIxNS4_5ratioILl1ELl1000EEEEE
// 地址: 0xde8ff8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x24 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x24 + 0x28)
*arg1 = _vtable_for_Botan::PBKDF2 + 0x10
int64_t x21 = arg3
int64_t* x0_1 = (*(*arg2 + 0x48))(arg2)
*(arg1 + 8) = x0_1
uint64_t x0_2 = (**x0_1)()

if (x0_2 == 0)
    Botan::assertion_failure("prf_sz > 0", &data_793a18, "tune_pbkdf2", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xf685)
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    int64_t var_b0_1
    __builtin_memset(&var_b0_1, 0, 0x18)
    
    if ((x0_2 & 0xffffffff80000000) != 0)
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
    else
        void* result_2 = Botan::allocate_memory(x0_2, 1)
        void* x25_1 = result_2 + x0_2
        memset(result_2, 0, x0_2)
        void* var_a8_1 = x25_1
        struct timespec tp
        tp.tv_sec.b = 0xc
        tp.tv_sec:1.d = 0x444b4250
        tp.tv_sec:5.w = 0x3246
        tp.tv_sec:7.b = 0
        char var_150
        Botan::Timer::Timer(&var_150)
        void* var_158
        
        if ((zx.d(tp.tv_sec.b) & 1) != 0)
            operator delete(var_158)
        Botan::SymmetricAlgorithm::set_key(&x0_1[1], 0)
        int64_t var_e8
        int64_t x8_6 = var_e8
        int64_t var_d8
        
        while (not(float.d(x8_6) / float.d(0x412e848000000000) >= fconvert.d(10.0)))
            double var_110
            int64_t var_e0
            int64_t var_d0
            int64_t var_c8
            int64_t var_c0
            int64_t var_b8
            struct timespec tp_1
            
            if (var_e0 != 0)
                if (var_c0 != 0)
                    var_b8 += vcvtd_u64_f64(var_110 * float.d(neg.q(var_c0)))
                
                int64_t x8_14
                int64_t x9_3
                
                if (clock_gettime(0, &tp_1) == 0)
                    int64_t x8_16 = tp_1.tv_nsec + tp_1.tv_sec * 0x3b9aca00
                    x9_3 = x8_16 - var_e0
                    
                    if (x8_16 u> var_e0)
                    label_de91a4:
                        x8_14 = var_d8
                        var_e8 += x9_3
                        
                        if (x8_14 == 0)
                            var_d0 = x9_3
                        else
                            int64_t x10_4
                            
                            x10_4 = var_d0 u< x9_3 ? x9_3 : var_d0
                            
                            if (x9_3 u>= var_c8)
                                x9_3 = var_c8
                            
                            var_d0 = x10_4
                        
                        var_c8 = x9_3
                    else
                        x8_14 = var_d8
                else
                    int64_t x8_13 = std::__ndk1::chrono::system_clock::now() * 0x3e8
                    x9_3 = x8_13 - var_e0
                    
                    if (x8_13 u> var_e0)
                        goto label_de91a4
                    
                    x8_14 = var_d8
                int64_t var_e0_1 = 0
                var_d8 = x8_14 + 1
            
            int64_t x8_18
            
            if (clock_gettime(0, &tp_1) == 0)
                x8_18 = tp_1.tv_nsec + tp_1.tv_sec * 0x3b9aca00
            else
                x8_18 = std::__ndk1::chrono::system_clock::now() * 0x3e8
            
            var_e0 = x8_18
            var_c0 = 0
            int32_t var_70_1 = 0
            int64_t var_78 = 0
            int32_t var_80_1 = 0
            int64_t var_88 = 0
            Botan::pbkdf2(x0_1, &var_78, 0xc, &var_88, 0xc, 0x7d0)
            
            if (var_e0 != 0)
                if (var_c0 != 0)
                    var_b8 += vcvtd_u64_f64(var_110 * float.d(neg.q(var_c0)))
                
                int64_t x8_28
                int64_t x9_9
                
                if (clock_gettime(0, &tp) == 0)
                    int64_t x8_27 = tp.tv_nsec + tp.tv_sec * 0x3b9aca00
                    x9_9 = x8_27 - var_e0
                    
                    if (x8_27 u<= var_e0)
                        x8_28 = var_d8
                    else
                    label_de92d0:
                        x8_28 = var_d8
                        var_e8 += x9_9
                        
                        if (x8_28 == 0)
                            var_d0 = x9_9
                        else
                            int64_t x10_8
                            
                            x10_8 = var_d0 u< x9_9 ? x9_9 : var_d0
                            
                            if (x9_9 u>= var_c8)
                                x9_9 = var_c8
                            
                            var_d0 = x10_8
                        
                        var_c8 = x9_9
                else
                    int64_t x8_25 = std::__ndk1::chrono::system_clock::now() * 0x3e8
                    x9_9 = x8_25 - var_e0
                    
                    if (x8_25 u> var_e0)
                        goto label_de92d0
                    
                    x8_28 = var_d8
                var_e0 = 0
                var_d8 = x8_28 + 1
            
            x8_6 = var_e8
        
        int64_t var_118
        int64_t x9_13 = var_118 * var_d8
        int64_t x20_1
        char var_100
        void* var_f0
        
        if (x9_13 == 0)
        label_de9360:
            x20_1 = 0x7d0
            
            if ((zx.d(var_100) & 1) != 0)
                operator delete(var_f0)
        else
            uint64_t x8_29 = x8_6 u/ x9_13
            int32_t entry_x3
            int64_t x9_15 = zx.q(entry_x3) * 0xf4240
            
            if (x8_29 u> x9_15)
                goto label_de9360
            
            int64_t x10_11
            
            if (x21 == 0)
                x10_11 = 0
            else
                x10_11 = x21 - 1
            
            uint64_t x10_13 = (x0_2 + x10_11) u/ x0_2
            uint64_t x8_30 = x9_15 u/ x8_29
            
            if (x10_13 u> x8_30)
                goto label_de9360
            
            x20_1 = x8_30 u/ x10_13 * 0x7d0
            
            if ((zx.d(var_100) & 1) != 0)
                operator delete(var_f0)
        char var_138
        
        if ((zx.d(var_138) & 1) == 0)
            if ((zx.d(var_150) & 1) != 0)
                goto label_de93a4
            
            goto label_de9384
        
        void* var_128
        operator delete(var_128)
        void* result
        void* result_1
        
        if ((zx.d(var_150) & 1) == 0)
        label_de9384:
            result = result_2
            
            if (result != 0)
                result_1 = result
                result = Botan::deallocate_memory(result, x25_1 - result, 1)
        else
        label_de93a4:
            void* var_140
            operator delete(var_140)
            result = result_2
            
            if (result != 0)
                result_1 = result
                result = Botan::deallocate_memory(result, x25_1 - result, 1)
        *(arg1 + 0x10) = x20_1
        
        if (*(x24 + 0x28) == x8)
            return result

__stack_chk_fail()
noreturn
