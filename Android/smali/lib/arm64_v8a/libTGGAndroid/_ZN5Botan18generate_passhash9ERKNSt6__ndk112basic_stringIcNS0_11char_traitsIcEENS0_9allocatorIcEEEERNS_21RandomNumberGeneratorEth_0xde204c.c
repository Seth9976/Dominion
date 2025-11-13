// 函数: _ZN5Botan18generate_passhash9ERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEERNS_21RandomNumberGeneratorEth
// 地址: 0xde204c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t entry_x22
uint64_t var_20 = entry_x22
void* var_a8
int128_t var_90
int128_t var_70

if (zx.d(arg3 - 1) u>= 0x1ff)
    Botan::throw_invalid_argument("Invalid Passhash9 work factor", "generate_passhash9", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
else
    entry_x22 = zx.q(arg4.d)
    int32_t x21_1 = arg3.d
    int64_t* result_1
    sub_de2784(&result_1, arg4)
    int64_t* result_2 = result_1
    
    if (result_2 != 0)
        __builtin_memset(&var_70, 0, 0x20)
        void* __offset(vtable_for_Botan::PKCS5_PBKDF2, 0x10) var_b8 =
            _vtable_for_Botan::PKCS5_PBKDF2 + 0x10
        int64_t* x0_1 = Botan::allocate_memory(0xc, 1)
        x0_1[1].d = 0
        *x0_1 = 0
        var_70:8.q = x0_1 + 0xc
        var_70.q = x0_1
        (*(*arg2 + 0x10))(arg2, x0_1, 0xc)
        __builtin_memset(&var_90, 0, 0x18)
        char* x0_3 = Botan::allocate_memory(1, 1)
        int64_t x23_2 = var_90.q
        int64_t x8_3 = var_90:8.q
        *x0_3 = (entry_x22.d).b
        size_t x2 = x8_3 - x23_2
        void* x22 = x0_3 - x2
        
        if (x2 s>= 1)
            memcpy(x22, x23_2, x2)
        
        var_90.q = x22
        var_90:8.q = &x0_3[1]
        void* var_80_1 = &x0_3[1]
        void* x25_3
        void* x8_5
        int64_t x9_3
        void* x22_1
        void* x25_4
        char x26_1
        
        if (x23_2 == 0)
            x26_1 = (x21_1 u>> 8).b & 0xff
            x8_5 = &x0_3[1]
            x22_1 = var_90.q
            x25_4 = &x0_3[1] - x22_1
            x9_3 = x25_4 + 1
            void* const x0_7
            void* x2_1
            
            if (x25_4 + 1 s>= 0)
            label_de2180:
                void* x8_7 = x8_5 - x22_1
                int64_t x11_1 = x8_7 << 1
                int64_t x9_4
                
                x9_4 = x11_1 u< x9_3 ? x9_3 : x11_1
                
                x23_2 = x8_7 u< 0x3fffffffffffffff ? x9_4 : 0x7fffffffffffffff
                
                if (x23_2 == 0)
                    goto label_de21d8
                
                x0_7 = Botan::allocate_memory(x23_2, 1)
                x22_1 = var_90.q
                x2_1 = var_90:8.q - x22_1
                goto label_de21e0
            
        label_de21d4:
            std::__ndk1::__vector_base_common<true>::__throw_length_error()
        label_de21d8:
            x0_7 = nullptr
            x2_1 = x25_4
        label_de21e0:
            void* x25_5 = x0_7 + x25_4
            int64_t x23_3 = x25_5 - x2_1
            *x25_5 = x26_1
            x25_3 = x25_5 + 1
            
            if (x2_1 s>= 1)
                memcpy(x23_3, x22_1, x2_1)
            
            void* x8_9 = var_80_1
            var_90.q = x23_3
            var_90:8.q = x25_3
            var_80_1 = x0_7 + x23_2
            
            if (x22_1 != 0)
                Botan::deallocate_memory(x22_1, x8_9 - x22_1, 1)
                x25_3 = var_90:8.q
        else
            int64_t var_80
            Botan::deallocate_memory(x23_2, var_80 - x23_2, 1)
            uint8_t* x25_2 = var_90:8.q
            x8_5 = var_80_1
            
            if (x25_2 u>= x8_5)
                x26_1 = (x21_1 u>> 8).b & 0xff
                x22_1 = var_90.q
                x25_4 = x25_2 - x22_1
                x9_3 = x25_4 + 1
                
                if (x25_4 + 1 s>= 0)
                    goto label_de2180
                
                goto label_de21d4
            
            *x25_2 = (x21_1 u>> 8).b
            x25_3 = &x25_2[1]
            var_90:8.q = x25_3
        void* var_98
        
        if (x25_3 u>= var_80_1)
            void* x22_2 = var_90.q
            size_t x25_7 = x25_3 - x22_2
            
            if (x25_7 + 1 s>= 0)
                int64_t x8_11 = var_80_1 - x22_2
                int64_t x11_2 = x8_11 << 1
                int64_t x9_6
                
                if (x11_2 u< x25_7 + 1)
                    x9_6 = x25_7 + 1
                else
                    x9_6 = x11_2
                
                int64_t x23_4
                
                x23_4 = x8_11 u< 0x3fffffffffffffff ? x9_6 : 0x7fffffffffffffff
                
                void* const x0_11
                size_t x2_2
                
                if (x23_4 == 0)
                    x0_11 = nullptr
                    x2_2 = x25_7
                else
                    x0_11 = Botan::allocate_memory(x23_4, 1)
                    x22_2 = var_90.q
                    x2_2 = var_90:8.q - x22_2
                
                void* x25_8 = x0_11 + x25_7
                void* x23_5 = x25_8 - x2_2
                *x25_8 = x21_1.b
                
                if (x2_2 s>= 1)
                    memcpy(x23_5, x22_2, x2_2)
                
                void* x8_13 = var_80_1
                var_90.q = x23_5
                var_90:8.q = x25_8 + 1
                var_80_1 = x0_11 + x23_4
                
                if (x22_2 != 0)
                    Botan::deallocate_memory(x22_2, x8_13 - x22_2, 1)
                
                goto label_de22e0
        else
            *x25_3 = x21_1.b
            var_90:8.q = x25_3 + 1
        label_de22e0:
            Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, Botan::secure_allocator<uint8_t> >(
                &var_90, &var_70)
            uint64_t x3 = var_70.q
            Botan::PBKDF::derive_key(&var_b8, 0x18, arg1, x3, var_70:8.q - x3)
            __builtin_memset(&var_a8, 0, 0x18)
            void* var_d0
            int64_t var_c8
            uint64_t x21_2 = var_c8 - var_d0
            
            if (var_c8 == var_d0)
            label_de236c:
                Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, Botan::secure_allocator<uint8_t> >(
                    &var_90, &var_a8)
                void* x0_20 = var_a8
                
                if (x0_20 != 0)
                    void* var_a0_3 = x0_20
                    Botan::deallocate_memory(x0_20, var_98 - x0_20, 1)
                
                if (var_d0 != 0)
                    void* var_c8_1 = var_d0
                    int64_t var_c0
                    Botan::deallocate_memory(var_d0, var_c0 - var_d0, 1)
                
                uint8_t* x0_22 = var_90.q
                Botan::base64_encode(x0_22, var_90:8.q - x0_22)
                data_23ecc08
                uint64_t x2_5
                
                if ((zx.d(data_23ecc00) & 1) != 0)
                    x2_5 = data_23ecc10
                else
                    x2_5 = &data_23ecc01
                
                int128_t* x0_24
                int128_t v0
                x0_24, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
                    &var_a8, nullptr, x2_5)
                int128_t* entry_x8
                entry_x8[1].q = x0_24[1].q
                *entry_x8 = *x0_24
                __builtin_memset(x0_24, 0, 0x18)
                
                if ((zx.d(var_a8.b) & 1) != 0)
                    operator delete(var_98)
                
                void* x0_26 = var_90.q
                
                if (x0_26 != 0)
                    var_90:8.q = x0_26
                    Botan::deallocate_memory(x0_26, var_80_1 - x0_26, 1)
                
                void* x0_27 = var_70.q
                
                if (x0_27 != 0)
                    var_70:8.q = x0_27
                    Botan::deallocate_memory(x0_27, x0_1 + 0xc - x0_27, 1)
                
                var_b8 = _vtable_for_Botan::PKCS5_PBKDF2 + 0x10
                int64_t var_b0_1 = 0
                
                if (result_2 != 0)
                    (*(*result_2 + 0x10))()
                
                int64_t* result = result_1
                
                if (result == 0)
                    return result
                
                return (*(*result + 0x10))()
            
            if ((x21_2 & 0xffffffff80000000) == 0)
                void* x0_17 = Botan::allocate_memory(x21_2, 1)
                void* x20_2 = x0_17
                var_a8 = x0_17
                void* var_a0_1 = x0_17
                size_t x21_3 = var_c8 - var_d0
                var_98 = x0_17 + x21_2
                
                if (x21_3 s>= 1)
                    memcpy(x20_2, var_d0, x21_3)
                    x20_2 += x21_3
                
                void* var_a0_2 = x20_2
                goto label_de236c
            
            std::__ndk1::__vector_base_common<true>::__throw_length_error()
        
        int64_t* x0_37 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        
        if ((zx.d(var_70.b) & 1) == 0)
            if ((zx.d(var_90.b) & 1) != 0)
                goto label_de25d4
            
            goto label_de25a0
        
        operator delete(x0_1 + 0xc)
        
        if ((zx.d(var_90.b) & 1) == 0)
        label_de25a0:
            
            if ((zx.d(var_a8.b) & 1) != 0)
                operator delete(var_98)
        else
        label_de25d4:
            operator delete(var_80_1)
            
            if ((zx.d(var_a8.b) & 1) != 0)
                operator delete(var_98)
        
        sub_1101e04(x0_37)
        noreturn

void** x0_29 = __cxa_allocate_exception(0x20)
std::__ndk1::to_string(entry_x22.d & 0xff)
int128_t* x0_32
int128_t v0_1
x0_32, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    &var_a8, nullptr)
int64_t var_80_2 = x0_32[1].q
var_90 = *x0_32
__builtin_memset(x0_32, 0, 0x18)
int128_t* x0_34
int128_t v0_2
x0_34, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_90)
int64_t var_60_1 = x0_34[1].q
var_70 = *x0_34
__builtin_memset(x0_34, 0, 0x18)
*x0_29 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_29[1])
*x0_29 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_29, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
