// 函数: _ZN5Botan6jacobiERKNS_6BigIntES2_
// 地址: 0xd152f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x8 = *arg2
int64_t x10 = *(arg2 + 8)
int128_t var_60

if (x10 != x8 && (zx.d(*x8) & 1) != 0 && *(arg2 + 0x20) != 0)
    int64_t i_5 = *(arg2 + 0x18)
    
    if (i_5 != -1)
        if (i_5 u<= 1)
            goto label_d153b0
        
    label_d153fc:
        Botan::operator%(arg1, arg2)
        void* var_c0
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(&var_c0)
        uint64_t j_5 = *(arg2 + 0x18)
        uint64_t j_9 = j_5
        int32_t i_9 = *(arg2 + 0x20)
        int32_t x19_2 = 1
        int32_t i_3 = i_9
        int64_t var_b0
        void* var_90
        int64_t var_80
        
        if (i_9 != 0)
            int32_t i
            
            do
                int64_t var_b8
                
                if (j_5 == -1)
                    void* x9_4 = var_c0
                    void* x10_5 = var_b8 - x9_4
                    
                    if (var_b8 == x9_4)
                        j_5 = 0
                        j_9 = 0
                    label_d154ec:
                        
                        if (j_5 == 0)
                            break
                        
                        void* x9_6 = var_c0
                        int32_t x10_8 = 0
                        uint64_t j
                        
                        do
                            int32_t x11_11 = *x9_6
                            x9_6 += 4
                            j = j_5
                            j_5 -= 1
                            int32_t x11_13 = (((x11_11 ^ 1) - 1) & not.d(x11_11)) s>> 0x1f
                            x10_8 = (x10_8 & x11_13)
                                | ((((x11_11 - 1) & not.d(x11_11)) s>> 0x1f | 1) & not.d(x11_13))
                        while (j != 1)
                        
                        if (x10_8 s< 1)
                            break
                    else
                        void* x12_9
                        
                        x12_9 = x10_5 s>= 0 ? x10_5 : -ffffffffffffffff
                        
                        void* x11_9 = x9_4 - var_b8
                        void* x12_10
                        
                        x12_10 = x12_9 s< 1 ? x12_9 : 1
                        
                        j_5 = x10_5 s>> 2
                        void* x10_6
                        
                        x10_6 = x11_9 s> x10_5 ? x11_9 : x10_5
                        
                        int64_t j_7 = x12_10 * (x10_6 u>> 2)
                        uint64_t x11_10 = 1
                        int64_t j_1
                        
                        do
                            int32_t x12_11 = *(x9_4 - 4 + (j_7 << 2))
                            j_1 = j_7
                            j_7 -= 1
                            x11_10 = zx.q(x11_10.d) & zx.q(((x12_11 - 1) & not.d(x12_11)) s>> 0x1f)
                            j_5 -= x11_10
                        while (j_1 != 1)
                        j_9 = j_5
                        
                        if (j_5 u<= 1)
                            goto label_d154ec
                else if (j_5 u<= 1)
                    goto label_d154ec
                
                Botan::operator%(&var_90, &var_c0)
                void* x0_2 = var_90
                int64_t x8_1 = var_80
                int64_t var_50
                var_80 = var_50
                uint64_t j_12
                uint64_t j_10 = j_12
                var_50 = x8_1
                uint64_t j_11
                j_12 = j_11
                var_90.o = var_60
                var_60.q = x0_2
                int32_t i_4
                i = i_4
                int32_t i_8
                i_4 = i_8
                
                if (x0_2 != 0)
                    var_60:8.q = x0_2
                    Botan::deallocate_memory(x0_2, (x8_1 - x0_2) s>> 2, 4)
                
                Botan::operator>>(&var_c0, 1)
                int32_t x0_5 = Botan::BigInt::is_less_than(&var_60)
                void* x8_3 = var_60.q
                
                if (x8_3 != 0)
                    var_60:8.q = x8_3
                    Botan::deallocate_memory(x8_3, (var_50 - x8_3) s>> 2, 4)
                
                int64_t var_88
                
                if ((x0_5 & 1) != 0)
                    uint64_t j_13 = j_10
                    uint32_t* x1_5 = var_90
                    
                    if (j_13 == -1)
                        void* x9_11 = var_88 - x1_5
                        
                        if (var_88 == x1_5)
                            j_13 = 0
                        else
                            void* x11_15
                            
                            x11_15 = x9_11 s>= 0 ? x9_11 : -ffffffffffffffff
                            
                            void* x10_12 = x1_5 - var_88
                            void* x11_16
                            
                            x11_16 = x11_15 s< 1 ? x11_15 : 1
                            
                            j_13 = x9_11 s>> 2
                            void* x9_12
                            
                            x9_12 = x10_12 s> x9_11 ? x10_12 : x9_11
                            
                            int64_t j_6 = x11_16 * (x9_12 u>> 2)
                            uint64_t x10_13 = 1
                            int64_t j_2
                            
                            do
                                int32_t x11_17 = *(x1_5 - 4 + (j_6 << 2))
                                j_2 = j_6
                                j_6 -= 1
                                x10_13 =
                                    zx.q(x10_13.d) & zx.q(((x11_17 - 1) & not.d(x11_17)) s>> 0x1f)
                                j_13 -= x10_13
                            while (j_2 != 1)
                        
                        j_10 = j_13
                    
                    int128_t v0_3
                    int128_t v1_1
                    v0_3, v1_1 = Botan::BigInt::add2(&var_c0, x1_5, j_13, zx.q(i != 1 ? 1 : 0))
                    v1_1 = var_90.o
                    int64_t x8_7 = var_80
                    uint64_t j_15 = j_10
                    var_80 = var_50
                    j_10 = j_12
                    int32_t i_6 = i
                    uint64_t x0_8 = v1_1.q
                    var_50 = x8_7
                    j_12 = j_15
                    var_90.o = var_60
                    var_60 = v1_1
                    i = i_4
                    i_4 = i_6
                    
                    if (x0_8 != 0)
                        var_60:8.q = x0_8
                        Botan::deallocate_memory(x0_8, (x8_7 - x0_8) s>> 2, 4)
                    
                    void* x8_9 = var_c0
                    
                    if (var_b8 != x8_9)
                        int32_t x8_11 = *x8_9 & 3
                        
                        if (x8_11 != 0)
                            int32_t x8_12
                            
                            if (i_3 == 0)
                                x8_12 = 4 - x8_11
                            else
                                x8_12 = x8_11
                            
                            if (x8_12 == 3)
                                x19_2 = neg.d(x19_2)
                
                uint64_t j_14 = j_10
                
                if (j_14 == -1)
                    void* x9_18 = var_90
                    void* x10_16 = var_88 - x9_18
                    
                    if (var_88 == x9_18)
                        j_14 = 0
                    else
                        void* x12_19
                        
                        x12_19 = x10_16 s>= 0 ? x10_16 : -ffffffffffffffff
                        
                        void* x11_20 = x9_18 - var_88
                        void* x12_20
                        
                        x12_20 = x12_19 s< 1 ? x12_19 : 1
                        
                        j_14 = x10_16 s>> 2
                        void* x10_17
                        
                        x10_17 = x11_20 s> x10_16 ? x11_20 : x10_16
                        
                        int64_t j_8 = x12_20 * (x10_17 u>> 2)
                        uint64_t x11_21 = 1
                        int64_t j_3
                        
                        do
                            int32_t x12_21 = *(x9_18 - 4 + (j_8 << 2))
                            j_3 = j_8
                            j_8 -= 1
                            x11_21 = zx.q(x11_21.d) & zx.q(((x12_21 - 1) & not.d(x12_21)) s>> 0x1f)
                            j_14 -= x11_21
                        while (j_3 != 1)
                    
                    j_10 = j_14
                
                if (j_14 == 0)
                    x19_2 = 0
                    break
                
                void* x10_19 = var_90
                void* x13_11 = var_88 - x10_19
                int32_t x8_13
                int64_t x9_20
                
                if (var_88 == x10_19)
                    x8_13 = 0
                    x9_20 = 0
                else
                    void* x15_1
                    
                    x15_1 = x13_11 s>= 0 ? x13_11 : -ffffffffffffffff
                    
                    void* x14_3 = x10_19 - var_88
                    void* x15_2
                    
                    x15_2 = x15_1 s< 1 ? x15_1 : 1
                    
                    void* x13_12
                    
                    x13_12 = x14_3 s> x13_11 ? x14_3 : x13_11
                    
                    x9_20 = 0
                    int64_t j_4 = 0
                    x8_13 = 0
                    
                    do
                        int32_t x14_4
                        
                        if (x13_11 s>> 2 u> j_4)
                            x14_4 = *(x10_19 + (j_4 << 2))
                        else
                            x14_4 = 0
                        
                        int32_t x16_4 = ((x14_4 & 0xffff) - 1) u>> 0x1b & 0x10
                        int32_t x15_4 = (x14_4 - 1) & not.d(x14_4)
                        uint32_t x14_5 = x14_4 u>> x16_4
                        int32_t x17_4 = ((x14_5 & 0xff) - 1) u>> 0x1c & 8
                        uint32_t x14_6 = x14_5 u>> x17_4
                        int32_t x17_8 = ((x14_6 & 0xf) - 1) u>> 0x1d & 4
                        uint32_t x14_7 = x14_6 u>> x17_8
                        int32_t x17_12 = ((x14_7 & 3) - 1) u>> 0x1e & 2
                        j_4 += 1
                        x9_20 += zx.q(((x16_4 & 0xfffffffe) | (x15_4 & 0x80000000) u>> 0x1f | x17_4
                            | x17_8 | x17_12) + (((x14_7 u>> x17_12 & 1) - 1) u>> 0x1f))
                            & zx.q(not.d(x8_13))
                        x8_13 |= not.d(x15_4 s>> 0x1f)
                    while (x15_2 * (x13_12 u>> 2) != j_4)
                
                Botan::BigInt::operator>>=(&var_90)
                
                if ((x9_20.d & x8_13 & 1) != 0)
                    void* x8_14 = var_c0
                    
                    if (var_b8 != x8_14)
                        int32_t x8_16 = *x8_14 & 7
                        
                        if (x8_16 != 0)
                            int32_t x8_17
                            
                            if (i_3 == 0)
                                x8_17 = 8 - x8_16
                            else
                                x8_17 = x8_16
                            
                            if (x8_17 == 5 || x8_17 == 3)
                                x19_2 = neg.d(x19_2)
                
                void* x9_23 = var_90
                
                if (var_88 != x9_23)
                    int32_t x10_22 = *x9_23 & 3
                    
                    if (x10_22 != 0)
                        int32_t x10_23
                        
                        if (i == 0)
                            x10_23 = 4 - x10_22
                        else
                            x10_23 = x10_22
                        
                        if (x10_23 == 3)
                            void* x10_24 = var_c0
                            
                            if (var_b8 != x10_24)
                                int32_t x10_26 = *x10_24 & 3
                                
                                if (x10_26 != 0)
                                    int32_t x10_27
                                    
                                    if (i_3 == 0)
                                        x10_27 = 4 - x10_26
                                    else
                                        x10_27 = x10_26
                                    
                                    if (x10_27 == 3)
                                        x19_2 = neg.d(x19_2)
                
                int128_t v0_1 = var_c0.o
                var_c0 = x9_23
                var_b8 = var_88
                int64_t x11_7 = var_80
                j_5 = j_10
                var_90.o = v0_1
                var_80 = var_b0
                j_11 = j_9
                int32_t i_10 = i_3
                var_b0 = x11_7
                j_9 = j_5
                i_3 = i
                i_8 = i_10
            while (i != 0)
        
        void* x0_10 = var_c0
        
        if (x0_10 != 0)
            void* var_b8_1 = x0_10
            Botan::deallocate_memory(x0_10, (var_b0 - x0_10) s>> 2, 4)
        
        void* x0_11 = var_90
        
        if (x0_11 != 0)
            void* var_88_1 = x0_11
            Botan::deallocate_memory(x0_11, (var_80 - x0_11) s>> 2, 4)
        
        return zx.q(x19_2)
    
    void* x11_1 = x10 - x8
    
    if (x10 == x8)
        i_5 = 0
        *(arg2 + 0x18) = 0
    else
        void* x13_1
        
        x13_1 = x11_1 s>= 0 ? x11_1 : -ffffffffffffffff
        
        void* x12_1 = x8 - x10
        void* x13_2
        
        x13_2 = x13_1 s< 1 ? x13_1 : 1
        
        i_5 = x11_1 s>> 2
        void* x11_2
        
        x11_2 = x12_1 s> x11_1 ? x12_1 : x11_1
        
        int64_t i_7 = x13_2 * (x11_2 u>> 2)
        uint64_t x12_2 = 1
        int64_t i_1
        
        do
            int32_t x13_3 = *(x8 - 4 + (i_7 << 2))
            i_1 = i_7
            i_7 -= 1
            x12_2 = zx.q(x12_2.d) & zx.q(((x13_3 - 1) & not.d(x13_3)) s>> 0x1f)
            i_5 -= x12_2
        while (i_1 != 1)
        *(arg2 + 0x18) = i_5
        
        if (i_5 u> 1)
            goto label_d153fc
    
label_d153b0:
    
    if (i_5 != 0)
        int32_t x10_2 = 0
        int64_t i_2
        
        do
            int32_t x11_4 = *x8
            x8 = &x8[4]
            i_2 = i_5
            i_5 -= 1
            int32_t x11_6 = (((x11_4 ^ 2) - 1) & not.d(x11_4)) s>> 0x1f
            x10_2 = (x10_2 & x11_6) | ((((x11_4 - 2) & not.d(x11_4)) s>> 0x1f | 1) & not.d(x11_6))
        while (i_2 != 1)
        
        if ((x10_2 & 0x80000000) == 0)
            goto label_d153fc

void** x0_13 = __cxa_allocate_exception(0x20)
int64_t x0_14
int128_t v0_4
x0_14, v0_4 = operator new(0x30)
(*"t be odd and > 1")[0].o
int64_t var_50_1 = x0_14
v0_4 = data_71cfc0
__builtin_strncpy(x0_14, "jacobi: second argument must be odd and > 1", 0x2c)
var_60 = v0_4
*x0_13 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_13[1])
*x0_13 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_13, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
