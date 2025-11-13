// 函数: _ZN5Botan17is_perfect_squareERKNS_6BigIntE
// 地址: 0xdd78a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x20) != 0)
    int64_t i_6 = *(arg1 + 0x18)
    
    if (i_6 == -1)
        int64_t x9_1 = *arg1
        int64_t x11_1 = *(arg1 + 8)
        int64_t x10_1 = x11_1 - x9_1
        
        if (x11_1 == x9_1)
            i_6 = 0
            *(arg1 + 0x18) = 0
        else
            int64_t x12_1
            
            x12_1 = x10_1 s>= 0 ? x10_1 : -1
            
            int64_t x11_2 = x9_1 - x11_1
            int64_t x12_2
            
            x12_2 = x12_1 s< 1 ? x12_1 : 1
            
            i_6 = x10_1 s>> 2
            int64_t x10_2
            
            x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
            
            int64_t i_9 = x12_2 * (x10_2 u>> 2)
            uint64_t x11_3 = 1
            int64_t i
            
            do
                int32_t x12_3 = *(x9_1 - 4 + (i_9 << 2))
                i = i_9
                i_9 -= 1
                x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
                i_6 -= x11_3
            while (i != 1)
            *(arg1 + 0x18) = i_6
            
            if (i_6 u> 1)
                goto label_dd79ac
    else if (i_6 u> 1)
    label_dd79ac:
        
        if (i_6 == -1)
            int64_t x9_4 = *arg1
            int64_t x11_4 = *(arg1 + 8)
            int64_t x10_6 = x11_4 - x9_4
            
            if (x11_4 == x9_4)
                i_6 = 0
                *(arg1 + 0x18) = 0
                
                if (i_6 == 0)
                    goto label_dd7a84
                
                goto label_dd7a38
            
            int64_t x12_8
            
            x12_8 = x10_6 s>= 0 ? x10_6 : -1
            
            int64_t x11_5 = x9_4 - x11_4
            int64_t x12_9
            
            x12_9 = x12_8 s< 1 ? x12_8 : 1
            
            i_6 = x10_6 s>> 2
            int64_t x10_7
            
            x10_7 = x11_5 s> x10_6 ? x11_5 : x10_6
            
            int64_t i_10 = x12_9 * (x10_7 u>> 2)
            uint64_t x11_6 = 1
            int64_t i_1
            
            do
                int32_t x12_10 = *(x9_4 - 4 + (i_10 << 2))
                i_1 = i_10
                i_10 -= 1
                x11_6 = zx.q(x11_6.d) & zx.q(((x12_10 - 1) & not.d(x12_10)) s>> 0x1f)
                i_6 -= x11_6
            while (i_1 != 1)
            *(arg1 + 0x18) = i_6
            
            if (i_6 u<= 1 && i_6 != 0)
                goto label_dd7a38
            
            goto label_dd7a84
        
        void* result
        int128_t* entry_x8
        
        if (i_6 u<= 1 && i_6 != 0)
        label_dd7a38:
            int32_t* x9_6 = *arg1
            int32_t x10_9 = 0
            int64_t i_2
            
            do
                int32_t x11_7 = *x9_6
                x9_6 = &x9_6[1]
                i_2 = i_6
                i_6 -= 1
                int32_t x11_9 = (((x11_7 ^ 1) - 1) & not.d(x11_7)) s>> 0x1f
                x10_9 =
                    (x10_9 & x11_9) | ((((x11_7 - 1) & not.d(x11_7)) s>> 0x1f | 1) & not.d(x11_9))
            while (i_2 != 1)
            
            if (x10_9 != 0)
                goto label_dd7a84
            
            __builtin_memset(entry_x8, 0, 0x18)
            entry_x8[2].d = 1
            *(entry_x8 + 0x18) = -1
            result = std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                entry_x8)
            **entry_x8 = 1
            void* x8_28 = *entry_x8
            int64_t x9_19 = *(entry_x8 + 8)
            *(entry_x8 + 0x18) = -1
            
            if ((x9_19 - x8_28) s>> 2 u>= 2)
                *(x8_28 + 4) = 0
        else
        label_dd7a84:
            int64_t x23_1 = Botan::BigInt::bits() + 1
            uint64_t x22_1 = x23_1 u>> 6
            int64_t var_88_1 = -1
            void* var_a0
            __builtin_memset(&var_a0, 0, 0x18)
            int32_t var_80_1 = 1
            std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&var_a0)
            int32_t x23_2 = 1 << ((x23_1 u>> 1).d & 0x7fffffff)
            *(var_a0 + (x22_1 << 2)) = x23_2
            int64_t x2_1 = var_88_1
            uint32_t* x1_1 = var_a0
            
            if (x2_1 == -1)
                int64_t var_98
                void* x9_8 = var_98 - x1_1
                
                if (var_98 == x1_1)
                    x2_1 = 0
                else
                    void* x11_10
                    
                    x11_10 = x9_8 s>= 0 ? x9_8 : -ffffffffffffffff
                    
                    void* x10_11 = x1_1 - var_98
                    void* x11_11
                    
                    x11_11 = x11_10 s< 1 ? x11_10 : 1
                    
                    x2_1 = x9_8 s>> 2
                    void* x9_9
                    
                    x9_9 = x10_11 s> x9_8 ? x10_11 : x9_8
                    
                    int64_t i_7 = x11_11 * (x9_9 u>> 2)
                    uint64_t x10_12 = 1
                    int64_t i_3
                    
                    do
                        int32_t x11_12 = *(x1_1 - 4 + (i_7 << 2))
                        i_3 = i_7
                        i_7 -= 1
                        x10_12 = zx.q(x10_12.d) & zx.q(((x11_12 - 1) & not.d(x11_12)) s>> 0x1f)
                        x2_1 -= x10_12
                    while (i_3 != 1)
                
                var_88_1 = x2_1
            
            Botan::BigInt::add2(arg1, x1_1, x2_1, zx.q(var_80_1))
            void* x0_4 = var_a0
            int64_t var_90
            
            if (x0_4 != 0)
                void* var_98_1 = x0_4
                Botan::deallocate_memory(x0_4, (var_90 - x0_4) s>> 2, 4)
            
            void* var_d0
            __builtin_memset(&var_d0, 0, 0x18)
            int32_t var_b0_1 = 1
            int64_t var_b8_1 = -1
            std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&var_d0)
            *(var_d0 + (x22_1 << 2)) = x23_2
            uint32_t var_100 = 1
            Botan::BigInt::add2(&var_d0, &var_100, 1, 0)
            void* x0_7 = var_d0
            int64_t var_c0
            
            if (x0_7 != 0)
                void* var_c8_1 = x0_7
                Botan::deallocate_memory(x0_7, (var_c0 - x0_7) s>> 2, 4)
            
            Botan::operator*(&var_a0, &var_a0)
            int32_t x0_10
            
            do
                uint64_t x2_2 = *(arg1 + 0x18)
                uint32_t* x1_7 = *arg1
                
                if (x2_2 == -1)
                    int64_t x8_10 = *(arg1 + 8)
                    void* x9_11 = x8_10 - x1_7
                    
                    if (x8_10 == x1_7)
                        x2_2 = 0
                    else
                        void* x11_14
                        
                        x11_14 = x9_11 s>= 0 ? x9_11 : -ffffffffffffffff
                        
                        void* x10_13 = x1_7 - x8_10
                        void* x11_15
                        
                        x11_15 = x11_14 s< 1 ? x11_14 : 1
                        
                        x2_2 = x9_11 s>> 2
                        void* x9_12
                        
                        x9_12 = x10_13 s> x9_11 ? x10_13 : x9_11
                        
                        int64_t i_8 = x11_15 * (x9_12 u>> 2)
                        uint64_t x10_14 = 1
                        int64_t i_4
                        
                        do
                            int32_t x11_16 = *(x1_7 - 4 + (i_8 << 2))
                            i_4 = i_8
                            i_8 -= 1
                            x10_14 = zx.q(x10_14.d) & zx.q(((x11_16 - 1) & not.d(x11_16)) s>> 0x1f)
                            x2_2 -= x10_14
                        while (i_4 != 1)
                    
                    *(arg1 + 0x18) = x2_2
                
                Botan::BigInt::add2(&var_d0, x1_7, x2_2, zx.q(*(arg1 + 0x20)))
                Botan::operator*(&var_a0, 2)
                void* var_150
                void* var_128
                int128_t v0_1
                int128_t v1_1
                v0_1, v1_1 = Botan::operator/(&var_128, &var_150)
                v1_1 = var_a0.o
                int64_t x8_12 = var_90
                int64_t x11_18 = var_88_1
                int64_t var_f0
                var_90 = var_f0
                int64_t var_e8
                var_88_1 = var_e8
                int32_t x10_16 = var_80_1
                uint64_t x0_14 = v1_1.q
                var_a0.o = var_100.o
                var_100.o = v1_1
                int32_t var_e0
                var_80_1 = var_e0
                
                if (x0_14 != 0)
                    uint64_t var_f8_1 = x0_14
                    Botan::deallocate_memory(x0_14, (x8_12 - x0_14) s>> 2, 4)
                
                void* x0_15 = var_150
                
                if (x0_15 != 0)
                    void* var_148_1 = x0_15
                    int64_t var_140
                    Botan::deallocate_memory(x0_15, (var_140 - x0_15) s>> 2, 4)
                
                void* x0_16 = var_128
                
                if (x0_16 != 0)
                    void* var_120_1 = x0_16
                    int64_t var_118
                    Botan::deallocate_memory(x0_16, (var_118 - x0_16) s>> 2, 4)
                
                Botan::operator*(&var_a0, &var_a0)
                void* x0_18 = var_d0
                int64_t x8_18 = var_c0
                int64_t x11_19 = var_b8_1
                var_c0 = x8_12
                var_b8_1 = x11_18
                int32_t x9_17 = var_b0_1
                var_f0 = x8_18
                var_e8 = x11_19
                var_d0.o = var_100.o
                var_100.q = x0_18
                var_b0_1 = x10_16
                var_e0 = x9_17
                
                if (x0_18 != 0)
                    void* var_f8_2 = x0_18
                    Botan::deallocate_memory(x0_18, (x8_18 - x0_18) s>> 2, 4)
                
                x0_10 = Botan::BigInt::is_less_than(&var_d0)
            while ((x0_10 & 1) == 0)
            int32_t x0_20
            int128_t v0_3
            x0_20, v0_3 = Botan::BigInt::is_equal(&var_d0)
            void* var_c8_2
            void* x0_21
            
            if ((x0_20 & 1) == 0)
                __builtin_memset(entry_x8, 0, 0x18)
                *(entry_x8 + 0x18) = -1
                x0_21 = var_d0
                entry_x8[2].d = 1
                
                if (x0_21 != 0)
                    var_c8_2 = x0_21
                    Botan::deallocate_memory(x0_21, (var_c0 - x0_21) s>> 2, 4)
            else
                v0_3 = var_a0.o
                __builtin_memset(&var_a0, 0, 0x18)
                int64_t var_88_2 = -1
                *entry_x8 = v0_3
                entry_x8[1].q = var_90
                *(entry_x8 + 0x18) = var_88_1
                entry_x8[2].d = var_80_1
                x0_21 = var_d0
                int32_t var_80_2 = 1
                
                if (x0_21 != 0)
                    var_c8_2 = x0_21
                    Botan::deallocate_memory(x0_21, (var_c0 - x0_21) s>> 2, 4)
            void* x0_22 = var_a0
            
            if (x0_22 != 0)
                void* var_98_2 = x0_22
                Botan::deallocate_memory(x0_22, (var_90 - x0_22) s>> 2, 4)
            
            void* result_1
            result = result_1
            
            if (result != 0)
                result_1 = result
                int64_t var_60
                return Botan::deallocate_memory(result, (var_60 - result) s>> 2, 4)
        return result
    
    if (i_6 != 0)
        int32_t* x9_3 = *arg1
        int32_t x10_4 = 0
        int64_t i_11 = i_6
        int64_t i_5
        
        do
            int32_t x12_5 = *x9_3
            x9_3 = &x9_3[1]
            i_5 = i_11
            i_11 -= 1
            int32_t x12_7 = (((x12_5 ^ 1) - 1) & not.d(x12_5)) s>> 0x1f
            x10_4 = (x10_4 & x12_7) | ((((x12_5 - 1) & not.d(x12_5)) s>> 0x1f | 1) & not.d(x12_7))
        while (i_5 != 1)
        
        if ((x10_4 & 0x80000000) == 0)
            goto label_dd79ac

void** x0_24 = __cxa_allocate_exception(0x20)
int64_t x0_25
int128_t v0_4
x0_25, v0_4 = operator new(0x30)
v0_4 = data_71c510
int64_t var_60_1 = x0_25
__builtin_strncpy(x0_25, "is_perfect_square requires C >= 1", 0x22)
int128_t var_70 = v0_4
*x0_24 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_24[1])
*x0_24 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_24, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
