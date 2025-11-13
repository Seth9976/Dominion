// 函数: _ZN5Botan14EAX_Decryption6finishERNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEEm
// 地址: 0xd20d30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *arg2
void* x9_1 = *(arg2 + 8) - x8
int64_t entry_x2
void* x9_2 = x9_1 - entry_x2
char var_98
char var_68

if (x9_1 u< entry_x2)
    Botan::assertion_failure("buffer.size() >= offset", "Offset is sane", "finish", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x6a05)
    Botan::assertion_failure("sz >= tag_size()", "Have the tag as part of final input", "finish", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x6a09)
else
    int64_t x10_1 = *(arg1 + 8)
    void* x22_1 = x9_2 - x10_1
    
    if (x9_2 u< x10_1)
        Botan::assertion_failure("sz >= tag_size()", "Have the tag as part of final input", 
            "finish", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x6a09)
    else
        void* x23_1 = x8 + entry_x2
        
        if (x9_2 != x10_1)
            int64_t* x0 = *(arg1 + 0x20)
            (*(*x0 + 0x18))(x0, x23_1, x22_1)
            int64_t* x0_1 = *(arg1 + 0x18)
            (*(*x0_1 + 0x30))(x0_1, x23_1, x23_1, x22_1)
        
        *(arg1 + 0x20)
        int128_t v0_1
        int128_t v1_1
        int128_t v2_1
        int128_t v3_1
        int128_t v4_1
        int128_t v5_1
        int128_t v6_1
        int128_t v7_1
        v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 = Botan::Buffered_Computation::final()
        void* result_1
        void* result_4 = result_1
        void* x8_5 = *(arg1 + 0x40)
        void* x10_3 = *(arg1 + 0x48) - x8_5
        int64_t var_78
        
        if (x10_3 u> var_78 - result_4)
            v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 =
                std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&result_1)
            x8_5 = *(arg1 + 0x40)
            result_4 = result_1
            x10_3 = *(arg1 + 0x48) - x8_5
        
        void* x11_2 = x10_3 & 0xffffffffffffffe0
        
        if (x11_2 != 0)
            int64_t x12_2 = 0
            
            if (x11_2 == 0x20 || result_4 + 0x18 + x11_2 - 0x20 u< result_4 + 0x18
                    || result_4 + 0x10 + x11_2 - 0x20 u< result_4 + 0x10
                    || result_4 + 8 + x11_2 - 0x20 u< result_4 + 8
                    || result_4 + x11_2 - 0x20 u< result_4)
                goto label_d20ea0
            
            if (result_4 u>= x8_5 + x11_2 || x8_5 u>= result_4 + x11_2)
                int64_t i_20 = (((x11_2 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                x12_2 = i_20 << 5
                int64_t i_15 = i_20
                void* x16_2 = x8_5
                void* result_6 = result_4
                int64_t i
                
                do
                    v0_1.q = *result_6
                    v1_1.q = *(result_6 + 8)
                    v2_1.q = *(result_6 + 0x10)
                    v3_1.q = *(result_6 + 0x18)
                    v0_1:8.q = *(result_6 + 0x20)
                    v1_1:8.q = *(result_6 + 0x28)
                    v2_1:8.q = *(result_6 + 0x30)
                    v3_1:8.q = *(result_6 + 0x38)
                    v4_1.q = *x16_2
                    v5_1.q = *(x16_2 + 8)
                    v6_1.q = *(x16_2 + 0x10)
                    v7_1.q = *(x16_2 + 0x18)
                    v4_1:8.q = *(x16_2 + 0x20)
                    v5_1:8.q = *(x16_2 + 0x28)
                    v6_1:8.q = *(x16_2 + 0x30)
                    v7_1:8.q = *(x16_2 + 0x38)
                    x16_2 += 0x40
                    i = i_15
                    i_15 -= 2
                    int128_t v16_1 = v4_1 ^ v0_1
                    int128_t v17_1 = v5_1 ^ v1_1
                    int128_t v18_1 = v6_1 ^ v2_1
                    int128_t v19_1 = v7_1 ^ v3_1
                    *result_6 = v16_1.q
                    *(result_6 + 8) = v17_1.q
                    *(result_6 + 0x10) = v18_1.q
                    *(result_6 + 0x18) = v19_1.q
                    *(result_6 + 0x20) = v16_1:8.q
                    *(result_6 + 0x28) = v17_1:8.q
                    *(result_6 + 0x30) = v18_1:8.q
                    *(result_6 + 0x38) = v19_1:8.q
                    result_6 += 0x40
                while (i != 2)
                
                if (((x11_2 - 0x20) u>> 5) + 1 != i_20)
                    goto label_d20ea0
            else
                x12_2 = 0
            label_d20ea0:
                void* i_13 = x12_2 - x11_2
                void* x12_6 = x8_5 + x12_2 + 0x10
                void* x14_4 = result_4 + x12_2 + 0x10
                void* i_1
                
                do
                    v2_1 = *(x12_6 - 0x10)
                    v3_1 = *x12_6
                    i_1 = i_13
                    i_13 += 0x20
                    x12_6 += 0x20
                    v1_1 = v3_1 ^ *x14_4
                    *(x14_4 - 0x10) ^= v2_1
                    *x14_4 = v1_1
                    x14_4 += 0x20
                while (i_1 != -0x20)
        
        if (x10_3 != x11_2)
            if ((x10_3 & 0x18) == 0)
            label_d20f2c:
                int64_t i_11 = x10_3 - x11_2
                void* x9_3 = result_4 + x11_2
                void* x8_6 = x8_5 + x11_2
                int64_t i_2
                
                do
                    char x11_3 = *x8_6
                    x8_6 += 1
                    i_2 = i_11
                    i_11 -= 1
                    *x9_3 ^= x11_3
                    x9_3 += 1
                while (i_2 != 1)
            else
                int64_t* x12_7 = result_4 + x11_2
                void* x13_4 = x8_5 + x11_2
                
                if (x12_7 u< x8_5 + x10_3 && x13_4 u< result_4 + x10_3)
                    goto label_d20f2c
                
                void* x14_6 = x10_3 & 7
                void* i_16 = (x10_3 & 0x1f) - x14_6
                x11_2 += i_16
                void* i_3
                
                do
                    v0_1.q = *x13_4
                    x13_4 += 8
                    v1_1.q = *x12_7
                    i_3 = i_16
                    i_16 -= 8
                    *x12_7 = (v1_1 ^ v0_1).q
                    x12_7 = &x12_7[1]
                while (i_3 != 8)
                
                if (x14_6 != 0)
                    goto label_d20f2c
        
        void* x8_7 = *(arg1 + 0x28)
        uint64_t x10_5 = *(arg1 + 0x30)
        
        if (x8_7 == x10_5)
            int64_t x0_6 = (*(**(arg1 + 0x10) + 0x30))()
            int64_t* x24_1 = *(arg1 + 0x20)
            int64_t i_19 = x0_6 - 1
            
            if (x0_6 != 1)
                int64_t i_4
                
                do
                    var_98 = 0
                    (*(*x24_1 + 0x18))(x24_1, &var_98, 1)
                    i_4 = i_19
                    i_19 -= 1
                while (i_4 != 1)
            
            var_98 = 1
            (*(*x24_1 + 0x18))(x24_1, &var_98, 1)
            (*(*x24_1 + 0x18))(x24_1, 0, 0)
            v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 = Botan::Buffered_Computation::final()
            void* x0_11 = *(arg1 + 0x28)
            
            if (x0_11 != 0)
                int64_t x8_16 = *(arg1 + 0x38)
                *(arg1 + 0x30) = x0_11
                v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 =
                    Botan::deallocate_memory(x0_11, x8_16 - x0_11, 1)
                __builtin_memset(arg1 + 0x28, 0, 0x18)
            
            x8_7 = var_68.q
            *(arg1 + 0x28) = x8_7
            int128_t var_60
            x10_5 = var_60.q
            *(arg1 + 0x30) = var_60
        
        void* result_5 = result_1
        void* x10_6 = x10_5 - x8_7
        
        if (x10_6 u> var_78 - result_5)
            v0_1, v1_1, v2_1, v3_1, v4_1, v5_1, v6_1, v7_1 =
                std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&result_1)
            x8_7 = *(arg1 + 0x28)
            result_5 = result_1
            x10_6 = *(arg1 + 0x30) - x8_7
        
        void* x11_7 = x10_6 & 0xffffffffffffffe0
        
        if (x11_7 != 0)
            int64_t x12_9 = 0
            
            if (x11_7 == 0x20 || result_5 + 0x18 + x11_7 - 0x20 u< result_5 + 0x18
                    || result_5 + 0x10 + x11_7 - 0x20 u< result_5 + 0x10
                    || result_5 + 8 + x11_7 - 0x20 u< result_5 + 8
                    || result_5 + x11_7 - 0x20 u< result_5)
                goto label_d21104
            
            if (result_5 u>= x8_7 + x11_7 || x8_7 u>= result_5 + x11_7)
                int64_t i_21 = (((x11_7 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
                x12_9 = i_21 << 5
                int64_t i_17 = i_21
                void* x16_4 = x8_7
                void* result_7 = result_5
                int64_t i_5
                
                do
                    v0_1.q = *result_7
                    v1_1.q = *(result_7 + 8)
                    v2_1.q = *(result_7 + 0x10)
                    v3_1.q = *(result_7 + 0x18)
                    v0_1:8.q = *(result_7 + 0x20)
                    v1_1:8.q = *(result_7 + 0x28)
                    v2_1:8.q = *(result_7 + 0x30)
                    v3_1:8.q = *(result_7 + 0x38)
                    v4_1.q = *x16_4
                    v5_1.q = *(x16_4 + 8)
                    v6_1.q = *(x16_4 + 0x10)
                    v7_1.q = *(x16_4 + 0x18)
                    v4_1:8.q = *(x16_4 + 0x20)
                    v5_1:8.q = *(x16_4 + 0x28)
                    v6_1:8.q = *(x16_4 + 0x30)
                    v7_1:8.q = *(x16_4 + 0x38)
                    x16_4 += 0x40
                    i_5 = i_17
                    i_17 -= 2
                    int128_t v16_2 = v4_1 ^ v0_1
                    int128_t v17_2 = v5_1 ^ v1_1
                    int128_t v18_2 = v6_1 ^ v2_1
                    int128_t v19_2 = v7_1 ^ v3_1
                    *result_7 = v16_2.q
                    *(result_7 + 8) = v17_2.q
                    *(result_7 + 0x10) = v18_2.q
                    *(result_7 + 0x18) = v19_2.q
                    *(result_7 + 0x20) = v16_2:8.q
                    *(result_7 + 0x28) = v17_2:8.q
                    *(result_7 + 0x30) = v18_2:8.q
                    *(result_7 + 0x38) = v19_2:8.q
                    result_7 += 0x40
                while (i_5 != 2)
                
                if (((x11_7 - 0x20) u>> 5) + 1 != i_21)
                    goto label_d21104
            else
                x12_9 = 0
            label_d21104:
                void* i_14 = x12_9 - x11_7
                void* x12_13 = x8_7 + x12_9 + 0x10
                void* x14_10 = result_5 + x12_9 + 0x10
                void* i_6
                
                do
                    v2_1 = *(x12_13 - 0x10)
                    v3_1 = *x12_13
                    i_6 = i_14
                    i_14 += 0x20
                    x12_13 += 0x20
                    v1_1 = v3_1 ^ *x14_10
                    *(x14_10 - 0x10) ^= v2_1
                    *x14_10 = v1_1
                    x14_10 += 0x20
                while (i_6 != -0x20)
        
        if (x10_6 != x11_7)
            if ((x10_6 & 0x18) == 0)
            label_d21190:
                void* i_12 = x10_6 - x11_7
                void* x9_4 = result_5 + x11_7
                void* x8_17 = x8_7 + x11_7
                void* i_7
                
                do
                    char x11_8 = *x8_17
                    x8_17 += 1
                    i_7 = i_12
                    i_12 -= 1
                    *x9_4 ^= x11_8
                    x9_4 += 1
                while (i_7 != 1)
            else
                void* x12_14 = result_5 + x11_7
                void* x13_8 = x8_7 + x11_7
                
                if (x12_14 u< x8_7 + x10_6 && x13_8 u< result_5 + x10_6)
                    goto label_d21190
                
                void* x14_12 = x10_6 & 7
                void* i_18 = (x10_6 & 0x1f) - x14_12
                x11_7 += i_18
                void* i_8
                
                do
                    v0_1.q = *x13_8
                    x13_8 += 8
                    v1_1.q = *x12_14
                    i_8 = i_18
                    i_18 -= 8
                    *x12_14 = (v1_1 ^ v0_1).q
                    x12_14 += 8
                while (i_8 != 8)
                
                if (x14_12 != 0)
                    goto label_d21190
        
        int64_t i_10 = *(arg1 + 8)
        void* result = result_1
        var_68 = 0
        
        if (i_10 != 0)
            char* x9_5 = x23_1 + x22_1
            void* result_3 = result
            int64_t i_9
            
            do
                char x11_10 = *result_3
                result_3 += 1
                char x12_16 = *x9_5
                x9_5 = &x9_5[1]
                i_9 = i_10
                i_10 -= 1
                var_68 |= x12_16 ^ x11_10
            while (i_9 != 1)
        
        uint32_t x8_18 = zx.d(var_68)
        
        if (((x8_18 - 1) & not.d(x8_18) & 0x80) != 0)
            void* x8_20 = *arg2
            void* x9_7 = x22_1 + entry_x2
            void* x10_9 = *(arg2 + 8) - x8_20
            
            if (x9_7 u> x10_9)
                std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg2)
                result = result_1
            else if (x9_7 u< x10_9)
                *(arg2 + 8) = x8_20 + x9_7
            
            *(arg1 + 0x48) = *(arg1 + 0x40)
            
            if (result == 0)
                return result
            
            void* result_2 = result
            int64_t var_70
            return Botan::deallocate_memory(result, var_70 - result, 1)

void** x0_15 = __cxa_allocate_exception(0x20)
__builtin_strncpy(&var_98, "(EAX tag check failed", 0x16)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Invalid authentication tag: ", &var_98)
*x0_15 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_15[1])
void* var_58

if ((zx.d(var_68) & 1) != 0)
    operator delete(var_58)
*x0_15 = _vtable_for_Botan::Invalid_Authentication_Tag + 0x10
__cxa_throw(x0_15, _typeinfo_for_Botan::Invalid_Authentication_Tag, Botan::Exception::~Exception)
noreturn
