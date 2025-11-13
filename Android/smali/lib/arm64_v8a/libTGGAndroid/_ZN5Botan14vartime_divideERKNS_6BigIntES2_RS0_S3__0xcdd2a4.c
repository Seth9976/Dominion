// 函数: _ZN5Botan14vartime_divideERKNS_6BigIntES2_RS0_S3_
// 地址: 0xcdd2a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t entry_x20
uint64_t var_10 = entry_x20
int64_t x28 = *(arg2 + 0x18)
Botan::BigInt const& x24 = arg2

if (x28 == -1)
    int64_t x8_1 = *x24
    int64_t x10_1 = *(x24 + 8)
    int64_t x9_1 = x10_1 - x8_1
    
    if (x10_1 == x8_1)
        x28 = 0
        *(x24 + 0x18) = 0
    else
        int64_t x11_1
        
        x11_1 = x9_1 s>= 0 ? x9_1 : -1
        
        int64_t x10_2 = x8_1 - x10_1
        int64_t x11_2
        
        x11_2 = x11_1 s< 1 ? x11_1 : 1
        
        x28 = x9_1 s>> 2
        int64_t x9_2
        
        x9_2 = x10_2 s> x9_1 ? x10_2 : x9_1
        
        int64_t i_7 = x11_2 * (x9_2 u>> 2)
        uint64_t x10_3 = 1
        int64_t i
        
        do
            int32_t x11_3 = *(x8_1 - 4 + (i_7 << 2))
            i = i_7
            i_7 -= 1
            x10_3 = zx.q(x10_3.d) & zx.q(((x11_3 - 1) & not.d(x11_3)) s>> 0x1f)
            x28 -= x10_3
        while (i != 1)
        *(x24 + 0x18) = x28
        
        if (x28 == -1)
            goto label_cdd374
    
label_cdd2e4:
    
    if (x28 == 0)
        void* x0 = __cxa_allocate_exception(0x20)
        Botan::BigInt::DivideByZero::DivideByZero()
        __cxa_throw(x0, _typeinfo_for_Botan::BigInt::DivideByZero, Botan::Exception::~Exception)
        noreturn
    
label_cdd3dc:
    void* result_1
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(&result_1)
    int64_t x8_5 = *(x24 + 0x18)
    int32_t var_68_1 = *(x24 + 0x20)
    uint32_t* var_b0
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(&var_b0)
    int64_t var_c0_1 = -1
    void* result_3 = result_1
    int32_t var_b8_1 = 1
    int32_t var_90_1 = 1
    int32_t var_68_2 = 1
    int64_t var_80
    void* x12_3 = var_80 - result_3
    int64_t var_98_1 = *(arg1 + 0x18)
    int64_t x9_8 = x12_3 s>> 2
    void* var_f0
    __builtin_memset(&var_f0, 0, 0x30)
    uint64_t x8_9
    int32_t x9_9
    int64_t x10_8
    
    if (x8_5 == -1)
        int64_t x10_12
        
        if (x12_3 == 0)
            x10_12 = 0
        else
            void* x13_1
            
            x13_1 = x12_3 s>= 0 ? x12_3 : -ffffffffffffffff
            
            void* x10_9 = result_3 - var_80
            void* x13_2
            
            x13_2 = x13_1 s< 1 ? x13_1 : 1
            
            void* x10_10
            
            x10_10 = x10_9 s> x12_3 ? x10_9 : x12_3
            
            int64_t i_13 = x13_2 * (x10_10 u>> 2)
            uint64_t x13_3 = 1
            x10_12 = x9_8
            int64_t i_1
            
            do
                int32_t x14_1 = *(result_3 - 4 + (i_13 << 2))
                i_1 = i_13
                i_13 -= 1
                x13_3 = zx.q(x13_3.d) & zx.q(((x14_1 - 1) & not.d(x14_1)) s>> 0x1f)
                x10_12 -= x13_3
            while (i_1 != 1)
        
        int64_t var_70_2 = x10_12
        x10_8 = x10_12 - 1
        
        if (x9_8 u> x10_8)
            x9_9 = *(result_3 + (x10_8 << 2))
            x8_9 = zx.q(x9_9 u>> 0x10 != 0 ? 1 : 0) << 4
        else
            x9_9 = 0
            x8_9 = 0
    else
        x10_8 = x8_5 - 1
        
        if (x9_8 u<= x10_8)
            x9_9 = 0
            x8_9 = 0
        else
            x9_9 = *(result_3 + (x10_8 << 2))
            x8_9 = zx.q(x9_9 u>> 0x10 != 0 ? 1 : 0) << 4
    uint32_t x9_10 = x9_9 u>> x8_9.d
    uint64_t x11_12 = zx.q(x9_10 u> 0xff ? 1 : 0) << 3
    uint32_t x9_11 = x9_10 u>> x11_12.d
    uint64_t x11_14 = zx.q(x9_11 u> 0xf ? 1 : 0) << 2
    uint32_t x9_12 = x9_11 u>> x11_14.d
    uint64_t x11_16 = zx.q(x9_12 u> 3 ? 1 : 0) << 1
    uint32_t x9_13 = x9_12 u>> x11_16.d
    int64_t x10_13
    
    x10_13 = x9_13 u<= 1 ? 0x20 : 0x1f
    
    Botan::BigInt::operator<<=(&result_1)
    Botan::BigInt::operator<<=(&var_b0)
    int64_t var_150_1 =
        x10_13 - (x11_16 | x8_9 | x11_12 | x11_14) - zx.q(x9_13 u>> (x9_13 u> 1 ? 1 : 0))
    int64_t x19_2 = var_98_1
    entry_x20 = x28 - 1
    int64_t var_a8
    
    if (x19_2 == -1)
        uint32_t* x8_14 = var_b0
        void* x9_15 = var_a8 - x8_14
        
        if (var_a8 == x8_14)
            x19_2 = 0
        else
            void* x11_18
            
            x11_18 = x9_15 s>= 0 ? x9_15 : -ffffffffffffffff
            
            void* x10_15 = x8_14 - var_a8
            void* x11_19
            
            x11_19 = x11_18 s< 1 ? x11_18 : 1
            
            x19_2 = x9_15 s>> 2
            void* x9_16
            
            x9_16 = x10_15 s> x9_15 ? x10_15 : x9_15
            
            int64_t i_9 = x11_19 * (x9_16 u>> 2)
            uint64_t x10_16 = 1
            int64_t i_2
            
            do
                int32_t x11_20 = *(x8_14 - 4 + (i_9 << 2))
                i_2 = i_9
                i_9 -= 1
                x10_16 = zx.q(x10_16.d) & zx.q(((x11_20 - 1) & not.d(x11_20)) s>> 0x1f)
                x19_2 -= x10_16
            while (i_2 != 1)
        
        var_98_1 = x19_2
    
    int64_t x8_16
    
    x8_16 = x28 u< x19_2 ? x19_2 : x28
    
    int64_t fp_1 = x8_16 - 1
    int64_t x21_1 = fp_1 - entry_x20
    
    if (fp_1 u>= entry_x20)
        uint32_t* var_d8
        uint32_t* x8_17 = var_d8
        void* var_d0
        int64_t x9_20 = (var_d0 - x8_17) s>> 2
        int64_t var_c8
        
        if (x21_1 + 1 u> x9_20)
            if (x21_1 + 1 u<= (var_c8 - x8_17) s>> 2)
                std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&var_d8)
            else if (((x21_1 + 1) & 0xfffffffffffffff8) + 8 u> x9_20)
                std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&var_d8)
            else if (((x21_1 + 1) & 0xfffffffffffffff8) + 8 u< x9_20)
                var_d0 = &x8_17[((x21_1 + 1) & 0xfffffffffffffff8) + 8]
        
        uint32_t* x8_19 = var_d8
        int64_t var_c0_2 = -1
        Botan::operator<<(&result_1, x21_1 << 5)
        Botan::BigInt const& var_168_1 = x24
        void* var_118
        x8_19[x21_1] = Botan::BigInt::reduce_below(&var_b0, &var_118)
        void* result_4 = result_1
        int64_t x9_23 = (var_80 - result_4) s>> 2
        Botan::BigInt const& var_170_1
        int64_t x10_20
        
        if (x9_23 u> entry_x20)
            x24 = zx.q(*(result_4 + (entry_x20 << 2)))
            x10_20 = x28 - 2
            var_170_1 = arg1
            
            if (x9_23 u> x10_20)
                goto label_cdd6d0
            
            goto label_cdd6ac
        
        x24 = nullptr
        x10_20 = x28 - 2
        var_170_1 = arg1
        int32_t x8_21
        
        if (x9_23 u<= x10_20)
        label_cdd6ac:
            x8_21 = 0
            
            if (x28 u>= x19_2)
            label_cddafc:
                Botan::BigInt::operator>>=(&var_b0)
                sub_ce1930(var_170_1, var_168_1, &var_d8, &var_b0)
                
                if (&var_b0 != arg4)
                    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::assign<uint32_t*>(
                        arg4, var_b0)
                
                *(arg4 + 0x18) = var_98_1
                *(arg4 + 0x20) = var_90_1
                
                if (&var_d8 != arg3)
                    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::assign<uint32_t*>(
                        arg3, var_d8)
                
                *(arg3 + 0x18) = var_c0_2
                *(arg3 + 0x20) = var_b8_1
                void* x0_24 = var_118
                
                if (x0_24 != 0)
                    void* var_110_1 = x0_24
                    int64_t var_108
                    Botan::deallocate_memory(x0_24, (var_108 - x0_24) s>> 2, 4)
                
                void* x0_25 = var_f0
                
                if (x0_25 != 0)
                    void* var_e8_1 = x0_25
                    int64_t var_e0
                    Botan::deallocate_memory(x0_25, (var_e0 - x0_25) s>> 2, 4)
                
                uint32_t* x0_26 = var_d8
                
                if (x0_26 != 0)
                    uint32_t* var_d0_1 = x0_26
                    Botan::deallocate_memory(x0_26, (var_c8 - x0_26) s>> 2, 4)
                
                uint32_t* x0_27 = var_b0
                
                if (x0_27 != 0)
                    uint32_t* var_a8_1 = x0_27
                    int64_t var_a0
                    Botan::deallocate_memory(x0_27, (var_a0 - x0_27) s>> 2, 4)
                
                void* result = result_1
                
                if (result == 0)
                    return result
                
                void* result_2 = result
                int64_t var_78
                return Botan::deallocate_memory(result, (var_78 - result) s>> 2, 4)
        else
        label_cdd6d0:
            x8_21 = *(result_4 + (x10_20 << 2))
            
            if (x28 u>= x19_2)
                goto label_cddafc
        
        uint64_t x19_3 = zx.q(x8_21)
        entry_x20 = zx.q(x24.d)
        
        while (true)
            uint32_t* x8_23 = var_b0
            int64_t x9_27 = (var_a8 - x8_23) s>> 2
            int64_t x21_2
            uint32_t x25_1
            
            if (x9_27 u> fp_1)
                x25_1 = x8_23[fp_1]
                x21_2 = fp_1 - 1
                
                if (x9_27 u> x21_2)
                    goto label_cdd74c
                
                goto label_cdd724
            
            x25_1 = 0
            x21_2 = fp_1 - 1
            int32_t x23_1
            uint32_t x26_1
            int64_t x10_22
            
            if (x9_27 u<= x21_2)
            label_cdd724:
                x26_1 = 0
                x10_22 = fp_1 - 2
                
                if (x9_27 u> x10_22)
                    x23_1 = x8_23[x10_22]
                else
                    x23_1 = 0
            else
            label_cdd74c:
                x26_1 = x8_23[x21_2]
                x10_22 = fp_1 - 2
                
                if (x9_27 u<= x10_22)
                    x23_1 = 0
                else
                    x23_1 = x8_23[x10_22]
            int32_t x8_24 = x25_1 ^ x24.d
            uint64_t x8_26 = zx.q(Botan::bigint_divop(x25_1, x26_1, x24.d))
                | zx.q(((x8_24 - 1) & not.d(x8_24)) s>> 0x1f)
            int64_t x9_29 = x8_26 * x19_3
            int64_t x10_24 = x8_26 * entry_x20 + (x9_29 u>> 0x20)
            int32_t x11_24 = x23_1 ^ x9_29.d
            uint32_t x12_5 = (x10_24 u>> 0x20).d
            int32_t x14_3 = x26_1 ^ x10_24.d
            uint32_t x15_2 = x25_1 ^ x12_5
            int32_t x10_29 = ((((x26_1 - x10_24.d) ^ x26_1) | x14_3) ^ x26_1) s>> 0x1f
            int32_t x12_10 = ((((x25_1 - x12_5) ^ x25_1) | x15_2) ^ x25_1) s>> 0x1f
            int32_t x9_37 = (x10_29 ^ (((((x23_1 - x9_29.d) ^ x23_1) | x11_24) ^ x23_1) s>> 0x1f
                & not.d(((x11_24 - 1) & not.d(x11_24)) s>> 0x1f)))
                & ((x14_3 - 1) & not.d(x14_3)) s>> 0x1f
            uint64_t x22_1 = zx.q(x8_26.d - (
                ((x12_10 ^ x10_29 ^ x9_37) & ((x15_2 - 1) & not.d(x15_2)) s>> 0x1f) != x12_10 ? 1
                : 0))
            int64_t x8_27 = x22_1 * x19_3
            int64_t x9_42 = x22_1 * entry_x20 + (x8_27 u>> 0x20)
            int32_t x10_31 = x23_1 ^ x8_27.d
            uint32_t x11_27 = (x9_42 u>> 0x20).d
            int32_t x10_32 = x26_1 ^ x9_42.d
            uint32_t x10_33 = x25_1 ^ x11_27
            void* x27_1 = var_118
            int32_t x9_47 = ((((x26_1 - x9_42.d) ^ x26_1) | x10_32) ^ x26_1) s>> 0x1f
            int32_t x10_36 = ((((x25_1 - x11_27) ^ x25_1) | x10_33) ^ x25_1) s>> 0x1f
            int32_t x8_35 = (x9_47 ^ (((((x23_1 - x8_27.d) ^ x23_1) | x10_31) ^ x23_1) s>> 0x1f
                & not.d(((x10_31 - 1) & not.d(x10_31)) s>> 0x1f)))
                & ((x10_32 - 1) & not.d(x10_32)) s>> 0x1f
            int64_t var_110
            void* x23_2 = var_110 - x27_1
            int64_t x11_30 = x23_2 s>> 2
            int64_t x26_2
            
            if (x11_30 u< 1)
                x26_2 = 0
            else
                x26_2 = x11_30 - 1
            
            int64_t var_100_1 = -1
            
            if (x11_30 u>= 2)
                if (x27_1 == 0)
                    Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
                        "If n > 0 then args are not null", "copy_mem", 
                        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
                    break
                
                memmove(x27_1, x27_1 + 4, x26_2 << 2)
            
            if (x23_2 != 0)
                *(x27_1 + (x26_2 << 2)) = 0
            
            uint32_t x25_3 = x22_1.d - (
                ((x10_36 ^ x9_47 ^ x8_35) & ((x10_33 - 1) & not.d(x10_33)) s>> 0x1f) != x10_36 ? 1
                : 0)
            int32_t var_f8
            
            if (var_f8 == 0)
                if (var_100_1 == -1)
                    void* x9_52 = var_118
                    void* x10_39 = var_110 - x9_52
                    
                    if (var_110 == x9_52)
                        int64_t var_100_3 = 0
                        var_f8 = 1
                    else
                        void* x12_14
                        
                        x12_14 = x10_39 s>= 0 ? x10_39 : -ffffffffffffffff
                        
                        void* x11_36 = x9_52 - var_110
                        void* x12_15
                        
                        x12_15 = x12_14 s< 1 ? x12_14 : 1
                        
                        int64_t x8_43 = x10_39 s>> 2
                        void* x10_40
                        
                        x10_40 = x11_36 s> x10_39 ? x11_36 : x10_39
                        
                        int64_t i_12 = x12_15 * (x10_40 u>> 2)
                        uint64_t x11_37 = 1
                        int64_t i_3
                        
                        do
                            int32_t x12_16 = *(x9_52 - 4 + (i_12 << 2))
                            i_3 = i_12
                            i_12 -= 1
                            x11_37 = zx.q(x11_37.d) & zx.q(((x12_16 - 1) & not.d(x12_16)) s>> 0x1f)
                            x8_43 -= x11_37
                        while (i_3 != 1)
                        int64_t var_100_2 = x8_43
                        
                        if (x8_43 == 0)
                            var_f8 = 1
                else if (var_100_1 == 0)
                    var_f8 = 1
            
            Botan::operator*(&var_118, x25_3)
            int64_t var_128
            int64_t x2_3 = var_128
            uint64_t var_140
            uint64_t var_138
            
            if (x2_3 == -1)
                uint64_t x9_49 = var_138 - var_140
                
                if (var_138 == var_140)
                    x2_3 = 0
                else
                    uint64_t x11_31
                    
                    x11_31 = x9_49 s>= 0 ? x9_49 : -1
                    
                    uint64_t x10_37 = var_140 - var_138
                    uint64_t x11_32
                    
                    x11_32 = x11_31 s< 1 ? x11_31 : 1
                    
                    x2_3 = x9_49 s>> 2
                    uint64_t x9_50
                    
                    x9_50 = x10_37 s> x9_49 ? x10_37 : x9_49
                    
                    int64_t i_10 = x11_32 * (x9_50 u>> 2)
                    uint64_t x10_38 = 1
                    int64_t i_4
                    
                    do
                        int32_t x11_33 = *(var_140 - 4 + (i_10 << 2))
                        i_4 = i_10
                        i_10 -= 1
                        x10_38 = zx.q(x10_38.d) & zx.q(((x11_33 - 1) & not.d(x11_33)) s>> 0x1f)
                        x2_3 -= x10_38
                    while (i_4 != 1)
                
                var_128 = x2_3
            
            Botan::BigInt::add(&var_b0, var_140, x2_3)
            int64_t var_130
            
            if (var_140 != 0)
                var_138 = var_140
                Botan::deallocate_memory(var_140, (var_130 - var_140) s>> 2, 4)
            
            uint32_t x26_3 = var_90_1 == 0 ? 1 : 0
            Botan::operator*(&var_118, x26_3)
            int64_t x2_4 = var_128
            
            if (x2_4 == -1)
                uint64_t x9_54 = var_138 - var_140
                
                if (var_138 == var_140)
                    x2_4 = 0
                else
                    uint64_t x11_38
                    
                    x11_38 = x9_54 s>= 0 ? x9_54 : -1
                    
                    uint64_t x10_42 = var_140 - var_138
                    uint64_t x11_39
                    
                    x11_39 = x11_38 s< 1 ? x11_38 : 1
                    
                    x2_4 = x9_54 s>> 2
                    uint64_t x9_55
                    
                    x9_55 = x10_42 s> x9_54 ? x10_42 : x9_54
                    
                    int64_t i_11 = x11_39 * (x9_55 u>> 2)
                    uint64_t x10_43 = 1
                    int64_t i_5
                    
                    do
                        int32_t x11_40 = *(var_140 - 4 + (i_11 << 2))
                        i_5 = i_11
                        i_11 -= 1
                        x10_43 = zx.q(x10_43.d) & zx.q(((x11_40 - 1) & not.d(x11_40)) s>> 0x1f)
                        x2_4 -= x10_43
                    while (i_5 != 1)
                
                var_128 = x2_4
            
            Botan::BigInt::add(&var_b0, var_140, x2_4)
            
            if (var_140 != 0)
                var_138 = var_140
                Botan::deallocate_memory(var_140, (var_130 - var_140) s>> 2, 4)
            
            int64_t x9_24 = fp_1 - x28
            bool cond:22_1 = fp_1 == x28
            fp_1 = x21_2
            x8_19[x9_24] = x25_3 - x26_3
            
            if (cond:22_1)
                goto label_cddafc
    
    Botan::assertion_failure("n >= t", &data_793a18, "vartime_divide", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x428e)
    *(x24 + 0x18) = 0
else
    if (x28 != -1)
        goto label_cdd2e4
    
label_cdd374:
    int64_t x8_3 = *x24
    int64_t x10_4 = *(x24 + 8)
    int64_t x9_4 = x10_4 - x8_3
    
    if (x10_4 == x8_3)
        *(x24 + 0x18) = 0
    else
        int64_t x11_5
        
        x11_5 = x9_4 s>= 0 ? x9_4 : -1
        
        int64_t x10_5 = x8_3 - x10_4
        int64_t x11_6
        
        x11_6 = x11_5 s< 1 ? x11_5 : 1
        
        x28 = x9_4 s>> 2
        int64_t x9_5
        
        x9_5 = x10_5 s> x9_4 ? x10_5 : x9_4
        
        int64_t i_8 = x11_6 * (x9_5 u>> 2)
        uint64_t x10_6 = 1
        int64_t i_6
        
        do
            int32_t x11_7 = *(x8_3 - 4 + (i_8 << 2))
            i_6 = i_8
            i_8 -= 1
            x10_6 = zx.q(x10_6.d) & zx.q(((x11_7 - 1) & not.d(x11_7)) s>> 0x1f)
            x28 -= x10_6
        while (i_6 != 1)
        *(x24 + 0x18) = x28
        
        if (x28 != 0)
            goto label_cdd3dc

int64_t* x0_28 = Botan::assertion_failure("y_words > 0", &data_793a18, "vartime_divide", 
    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x4279)
__cxa_free_exception(entry_x20)
sub_1101e04(x0_28)
noreturn
