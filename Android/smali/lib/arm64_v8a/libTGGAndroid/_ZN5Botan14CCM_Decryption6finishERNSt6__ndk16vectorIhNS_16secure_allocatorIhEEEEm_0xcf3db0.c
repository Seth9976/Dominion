// 函数: _ZN5Botan14CCM_Decryption6finishERNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEEm
// 地址: 0xcf3db0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *arg2
char var_78
void* var_68
int64_t entry_x2

if (*(arg2 + 8) - x8 u< entry_x2)
    Botan::throw_invalid_argument("Offset is sane", "finish", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
else
    *(arg1 + 0x40)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::insert<std::__ndk1::__wrap_iter<uint8_t*> >(
        arg2, x8 + entry_x2, *(arg1 + 0x38))
    void* x26_1 = *arg2
    int64_t x20_1 = *(arg2 + 8)
    void* x28_1 = x20_1 - x26_1 - entry_x2
    
    if (x28_1 u< *(arg1 + 8))
        Botan::assertion_failure("sz >= tag_size()", "We have the tag", "finish", 
            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x4fcf)
        Botan::throw_invalid_argument("AD is block size multiple", "finish", 
            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
    else if ((zx.q(*(arg1 + 0x58) - *(arg1 + 0x50)) & 0xf) != 0)
        Botan::throw_invalid_argument("AD is block size multiple", "finish", 
            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
    else
        int64_t* x23_1 = *(arg1 + 0x18)
        int64_t* result_1
        __builtin_memset(&result_1, 0, 0x18)
        int64_t* result_3 = Botan::allocate_memory(0x10, 1)
        *result_3 = 0
        result_3[1] = 0
        result_1 = result_3
        *(arg1 + 8)
        Botan::CCM_Mode::format_b0(arg1)
        void* x21_1 = var_78.q
        int64_t var_70
        (*(*x23_1 + 0x48))(x23_1, x21_1, result_1, (var_70 - x21_1) u/ (*(*x23_1 + 0x30))(x23_1))
        
        if (x21_1 != 0)
            Botan::deallocate_memory(x21_1, var_68 - x21_1, 1)
        
        void* x9_5 = *(arg1 + 0x50)
        
        if (*(arg1 + 0x58) != x9_5)
            int64_t i = 0
            
            do
                int64_t* result_4 = result_1
                char* x9_6 = x9_5 + i
                *result_4 ^= *x9_6
                *(result_4 + 1) ^= x9_6[1]
                *(result_4 + 2) ^= x9_6[2]
                *(result_4 + 3) ^= x9_6[3]
                *(result_4 + 4) ^= x9_6[4]
                *(result_4 + 5) ^= x9_6[5]
                *(result_4 + 6) ^= x9_6[6]
                *(result_4 + 7) ^= x9_6[7]
                result_4[1].b ^= x9_6[8]
                *(result_4 + 9) ^= x9_6[9]
                *(result_4 + 0xa) ^= x9_6[0xa]
                *(result_4 + 0xb) ^= x9_6[0xb]
                *(result_4 + 0xc) ^= x9_6[0xc]
                *(result_4 + 0xd) ^= x9_6[0xd]
                *(result_4 + 0xe) ^= x9_6[0xe]
                *(result_4 + 0xf) ^= x9_6[0xf]
                int64_t* result_7 = result_1
                (*(*x23_1 + 0x48))(x23_1, result_7, result_7, 
                    (&result_3[2] - result_7) u/ (*(*x23_1 + 0x30))(x23_1))
                x9_5 = *(arg1 + 0x50)
                i += 0x10
            while (i != *(arg1 + 0x58) - x9_5)
        
        Botan::CCM_Mode::format_c0()
        int64_t* x0_10 = Botan::allocate_memory(0x10, 1)
        *x0_10 = 0
        x0_10[1] = 0
        char* var_a8
        int64_t var_a0
        void* fp_1 = var_a0 - var_a8
        (*(*x23_1 + 0x48))(x23_1, var_a8, x0_10, fp_1 u/ (*(*x23_1 + 0x30))(x23_1))
        
        if (fp_1 != 0)
            int64_t x8_23 = not.q(var_a8) + var_a0
            char x9_11
            
            do
                x9_11 = var_a8[x8_23] + 1
                var_a8[x8_23] = x9_11
                
                if (x8_23 == 0)
                    break
                
                x8_23 -= 1
            while (zx.d(x9_11) == 0)
        
        int64_t* x0_14 = Botan::allocate_memory(0x10, 1)
        *x0_14 = 0
        x0_14[1] = 0
        int64_t x8_24 = *(arg1 + 8)
        void* x27_2 = x26_1 + entry_x2
        char* x26_2 = x27_2 + x28_1 - x8_24
        
        if (x28_1 != x8_24)
            int64_t x8_25 = x20_1 - x8_24
            
            if (fp_1 == 0)
                do
                    int64_t x28_3 = x26_2 - x27_2
                    int64_t x21_4
                    
                    x21_4 = x28_3 u< 0x10 ? x28_3 : 0x10
                    
                    (*(*x23_1 + 0x30))(x23_1)
                    int128_t v0_2
                    int128_t v1_2
                    v0_2, v1_2 = (*(*x23_1 + 0x48))(x23_1, var_a8, x0_14, 0)
                    int64_t* result_9
                    
                    if (x21_4 == 0)
                        result_9 = result_1
                    else
                        void* i_29
                        
                        if (x21_4 u< 8 || (x27_2 u< x0_14 + x21_4 && x0_14 u< x27_2 + x21_4))
                            i_29 = nullptr
                        label_cf4394:
                            void* i_18 = x21_4 - i_29
                            char* x10_37 = x27_2 + i_29
                            void* x8_52 = x0_14 + i_29
                            void* i_1
                            
                            do
                                char x11_24 = *x8_52
                                x8_52 += 1
                                i_1 = i_18
                                i_18 -= 1
                                *x10_37 ^= x11_24
                                x10_37 = &x10_37[1]
                            while (i_1 != 1)
                        else if (x28_3 u>= 0x10)
                            i_29 = x21_4 & 0x10
                            void* i_20 = i_29
                            void* x10_41 = x27_2
                            int64_t* x11_30 = x0_14
                            void* i_2
                            
                            do
                                v0_2 = *x11_30
                                x11_30 = &x11_30[2]
                                i_2 = i_20
                                i_20 -= 0x10
                                *x10_41 ^= v0_2
                                x10_41 += 0x10
                            while (i_2 != 0x10)
                            
                            if (x21_4 != i_29)
                                if ((x21_4.d & 8) != 0)
                                    goto label_cf445c
                                
                                goto label_cf4394
                        else
                            i_29 = nullptr
                        label_cf445c:
                            void* i_34 = i_29
                            void* x10_39 = x0_14 + i_34
                            int64_t* x11_28 = x27_2 + i_34
                            void* x8_61 = x8_25 - x27_2
                            void* x9_19
                            
                            x9_19 = x8_61 u< 0x10 ? x8_61 : 0x10
                            
                            i_29 = x9_19 & 0x18
                            void* i_25 = i_34 - i_29
                            void* i_3
                            
                            do
                                v0_2.q = *x10_39
                                x10_39 += 8
                                v1_2.q = *x11_28
                                i_3 = i_25
                                i_25 += 8
                                *x11_28 = (v1_2 ^ v0_2).q
                                x11_28 = &x11_28[1]
                            while (i_3 != -8)
                            
                            if (x9_19 != i_29)
                                goto label_cf4394
                        result_9 = result_1
                        
                        if (x21_4 != 0)
                            void* i_30
                            
                            if (x21_4 u< 8
                                    || (result_9 u< x27_2 + x21_4 && x27_2 u< result_9 + x21_4))
                                i_30 = nullptr
                            label_cf43e4:
                                void* i_19 = x21_4 - i_30
                                char* x10_38 = result_9 + i_30
                                char* x8_55 = x27_2 + i_30
                                void* i_4
                                
                                do
                                    char x11_26 = *x8_55
                                    x8_55 = &x8_55[1]
                                    i_4 = i_19
                                    i_19 -= 1
                                    *x10_38 ^= x11_26
                                    x10_38 = &x10_38[1]
                                while (i_4 != 1)
                            else if (x28_3 u>= 0x10)
                                i_30 = x21_4 & 0x10
                                void* i_21 = i_30
                                int64_t* result_11 = result_9
                                void* x11_31 = x27_2
                                void* i_5
                                
                                do
                                    v0_2 = *x11_31
                                    x11_31 += 0x10
                                    i_5 = i_21
                                    i_21 -= 0x10
                                    *result_11 ^= v0_2
                                    result_11 = &result_11[2]
                                while (i_5 != 0x10)
                                
                                if (x21_4 != i_30)
                                    if ((x21_4.d & 8) != 0)
                                        goto label_cf44b0
                                    
                                    goto label_cf43e4
                            else
                                i_30 = nullptr
                            label_cf44b0:
                                void* i_35 = i_30
                                int64_t* x10_40 = x27_2 + i_35
                                void* x11_29 = result_9 + i_35
                                void* x8_63 = x8_25 - x27_2
                                void* x9_20
                                
                                x9_20 = x8_63 u< 0x10 ? x8_63 : 0x10
                                
                                i_30 = x9_20 & 0x18
                                void* i_26 = i_35 - i_30
                                void* i_6
                                
                                do
                                    v0_2.q = *x10_40
                                    x10_40 = &x10_40[1]
                                    v1_2.q = *x11_29
                                    i_6 = i_26
                                    i_26 += 8
                                    *x11_29 = (v1_2 ^ v0_2).q
                                    x11_29 += 8
                                while (i_6 != -8)
                                
                                if (x9_20 != i_30)
                                    goto label_cf43e4
                            result_9 = result_1
                    
                    (*(*x23_1 + 0x48))(x23_1, result_9, result_9, 
                        (&result_3[2] - result_9) u/ (*(*x23_1 + 0x30))(x23_1))
                    x27_2 += x21_4
                while (x27_2 != x26_2)
            else
                do
                    int64_t x20_2 = x26_2 - x27_2
                    int64_t x21_3
                    
                    x21_3 = x20_2 u< 0x10 ? x20_2 : 0x10
                    
                    int128_t v0_1
                    int128_t v1_1
                    v0_1, v1_1 =
                        (*(*x23_1 + 0x48))(x23_1, var_a8, x0_14, fp_1 u/ (*(*x23_1 + 0x30))(x23_1))
                    
                    if (x21_3 != 0)
                        void* i_27
                        
                        if (x21_3 u< 8 || (x27_2 u< x0_14 + x21_3 && x0_14 u< x27_2 + x21_3))
                            i_27 = nullptr
                        label_cf4134:
                            void* i_14 = x21_3 - i_27
                            char* x10_32 = x27_2 + i_27
                            void* x8_33 = x0_14 + i_27
                            void* i_7
                            
                            do
                                char x11_16 = *x8_33
                                x8_33 += 1
                                i_7 = i_14
                                i_14 -= 1
                                *x10_32 ^= x11_16
                                x10_32 = &x10_32[1]
                            while (i_7 != 1)
                        else if (x20_2 u>= 0x10)
                            i_27 = x21_3 & 0x10
                            void* i_16 = i_27
                            void* x10_36 = x27_2
                            int64_t* x11_22 = x0_14
                            void* i_8
                            
                            do
                                v0_1 = *x11_22
                                x11_22 = &x11_22[2]
                                i_8 = i_16
                                i_16 -= 0x10
                                *x10_36 ^= v0_1
                                x10_36 += 0x10
                            while (i_8 != 0x10)
                            
                            if (x21_3 != i_27)
                                if ((x21_3.d & 8) != 0)
                                    goto label_cf421c
                                
                                goto label_cf4134
                        else
                            i_27 = nullptr
                        label_cf421c:
                            void* i_32 = i_27
                            void* x10_34 = x0_14 + i_32
                            int64_t* x11_20 = x27_2 + i_32
                            void* x8_43 = x8_25 - x27_2
                            void* x9_16
                            
                            x9_16 = x8_43 u< 0x10 ? x8_43 : 0x10
                            
                            i_27 = x9_16 & 0x18
                            void* i_23 = i_32 - i_27
                            void* i_9
                            
                            do
                                v0_1.q = *x10_34
                                x10_34 += 8
                                v1_1.q = *x11_20
                                i_9 = i_23
                                i_23 += 8
                                *x11_20 = (v1_1 ^ v0_1).q
                                x11_20 = &x11_20[1]
                            while (i_9 != -8)
                            
                            if (x9_16 != i_27)
                                goto label_cf4134
                    
                    int64_t x8_34 = not.q(var_a8) + var_a0
                    char x9_14
                    
                    do
                        x9_14 = var_a8[x8_34] + 1
                        var_a8[x8_34] = x9_14
                        
                        if (x8_34 == 0)
                            break
                        
                        x8_34 -= 1
                    while (zx.d(x9_14) == 0)
                    int64_t* result_8 = result_1
                    
                    if (x21_3 != 0)
                        void* i_28
                        
                        if (x21_3 u< 8 || (result_8 u< x27_2 + x21_3 && x27_2 u< result_8 + x21_3))
                            i_28 = nullptr
                        label_cf41a4:
                            void* i_15 = x21_3 - i_28
                            void* x10_33 = result_8 + i_28
                            void* x8_37 = x27_2 + i_28
                            void* i_10
                            
                            do
                                char x11_18 = *x8_37
                                x8_37 += 1
                                i_10 = i_15
                                i_15 -= 1
                                *x10_33 ^= x11_18
                                x10_33 += 1
                            while (i_10 != 1)
                        else if (x20_2 u>= 0x10)
                            i_28 = x21_3 & 0x10
                            void* i_17 = i_28
                            int64_t* result_10 = result_8
                            void* x11_23 = x27_2
                            void* i_11
                            
                            do
                                v0_1 = *x11_23
                                x11_23 += 0x10
                                i_11 = i_17
                                i_17 -= 0x10
                                *result_10 ^= v0_1
                                result_10 = &result_10[2]
                            while (i_11 != 0x10)
                            
                            if (x21_3 != i_28)
                                if ((x21_3.d & 8) != 0)
                                    goto label_cf4274
                                
                                goto label_cf41a4
                        else
                            i_28 = nullptr
                        label_cf4274:
                            void* i_33 = i_28
                            int64_t* x10_35 = x27_2 + i_33
                            void* x11_21 = result_8 + i_33
                            void* x8_45 = x8_25 - x27_2
                            void* x9_17
                            
                            x9_17 = x8_45 u< 0x10 ? x8_45 : 0x10
                            
                            i_28 = x9_17 & 0x18
                            void* i_24 = i_33 - i_28
                            void* i_12
                            
                            do
                                v0_1.q = *x10_35
                                x10_35 = &x10_35[1]
                                v1_1.q = *x11_21
                                i_12 = i_24
                                i_24 += 8
                                *x11_21 = (v1_1 ^ v0_1).q
                                x11_21 += 8
                            while (i_12 != -8)
                            
                            if (x9_17 != i_28)
                                goto label_cf41a4
                        result_8 = result_1
                    
                    (*(*x23_1 + 0x48))(x23_1, result_8, result_8, 
                        (&result_3[2] - result_8) u/ (*(*x23_1 + 0x30))(x23_1))
                    x27_2 += x21_3
                while (x27_2 != x26_2)
        
        int64_t* result_5 = result_1
        
        if (&result_3[2] - result_5 u<= 0xf)
            std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&result_1)
            result_5 = result_1
        
        *result_5 ^= *x0_10
        *(result_5 + 1) ^= *(x0_10 + 1)
        *(result_5 + 2) ^= *(x0_10 + 2)
        *(result_5 + 3) ^= *(x0_10 + 3)
        *(result_5 + 4) ^= *(x0_10 + 4)
        *(result_5 + 5) ^= *(x0_10 + 5)
        *(result_5 + 6) ^= *(x0_10 + 6)
        *(result_5 + 7) ^= *(x0_10 + 7)
        result_5[1].b ^= x0_10[1].b
        *(result_5 + 9) ^= *(x0_10 + 9)
        *(result_5 + 0xa) ^= *(x0_10 + 0xa)
        *(result_5 + 0xb) ^= *(x0_10 + 0xb)
        *(result_5 + 0xc) ^= *(x0_10 + 0xc)
        *(result_5 + 0xd) ^= *(x0_10 + 0xd)
        *(result_5 + 0xe) ^= *(x0_10 + 0xe)
        *(result_5 + 0xf) ^= *(x0_10 + 0xf)
        int64_t i_31 = *(arg1 + 8)
        int64_t* result_6 = result_1
        var_78 = 0
        
        if (i_31 != 0)
            int64_t i_22 = i_31
            int64_t i_13
            
            do
                char x11_32 = *result_6
                result_6 += 1
                char x12_5 = *x26_2
                x26_2 = &x26_2[1]
                i_13 = i_22
                i_22 -= 1
                var_78 |= x12_5 ^ x11_32
            while (i_13 != 1)
        
        uint32_t x9_55 = zx.d(var_78)
        
        if (((x9_55 - 1) & not.d(x9_55) & 0x80) != 0)
            int64_t x9_57 = *arg2
            int64_t x11_35 = *(arg2 + 8) - x9_57
            int64_t x10_60 = x11_35 - i_31
            
            if (x11_35 u< i_31)
                std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg2)
            else if (x10_60 u< x11_35)
                *(arg2 + 8) = x9_57 + x10_60
            
            int64_t x9_58 = *(arg1 + 0x38)
            int64_t x10_61 = *(arg1 + 0x50)
            *(arg1 + 0x28) = *(arg1 + 0x20)
            *(arg1 + 0x40) = x9_58
            *(arg1 + 0x58) = x10_61
            
            if (x0_14 != 0)
                Botan::deallocate_memory(x0_14, 0x10, 1)
            
            Botan::deallocate_memory(x0_10, 0x10, 1)
            int64_t var_98
            
            if (var_a8 != 0)
                Botan::deallocate_memory(var_a8, var_98 - var_a8, 1)
            int64_t* result = result_1
            
            if (result == 0)
                return result
            
            int64_t* result_2 = result
            return Botan::deallocate_memory(result, &result_3[2] - result, 1)

void** x0_32 = __cxa_allocate_exception(0x20)
char var_c0
__builtin_strncpy(&var_c0, "(CCM tag check failed", 0x16)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Invalid authentication tag: ", &var_c0)
*x0_32 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_32[1])

if ((zx.d(var_78) & 1) != 0)
    operator delete(var_68)

*x0_32 = _vtable_for_Botan::Invalid_Authentication_Tag + 0x10
__cxa_throw(x0_32, _typeinfo_for_Botan::Invalid_Authentication_Tag, Botan::Exception::~Exception)
noreturn
