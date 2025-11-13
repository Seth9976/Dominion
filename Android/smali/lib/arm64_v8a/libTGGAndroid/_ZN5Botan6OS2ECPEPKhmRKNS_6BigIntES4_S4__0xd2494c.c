// 函数: _ZN5Botan6OS2ECPEPKhmRKNS_6BigIntES4_S4_
// 地址: 0xd2494c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_70

if (arg2 u<= 1)
    void** x0_24 = __cxa_allocate_exception(0x20)
    __builtin_strncpy(&var_70, "(OS2ECP invalid point", 0x16)
    *x0_24 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_24[1])
    *x0_24 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_24, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

uint32_t x23 = zx.d(*arg1)
__builtin_memset(&var_70, 0, 0x18)
int64_t var_58 = -1
int32_t var_50 = 1
void* var_a0
__builtin_memset(&var_a0, 0, 0x18)
int64_t var_88 = -1
int32_t var_80 = 1
int64_t var_90_1
int64_t var_88_1
int32_t var_80_1
int128_t var_6f
int64_t var_58_1
int32_t var_50_1
void* var_d0
int64_t var_90

if (x23 - 2 u< 2)
    __builtin_memset(&var_d0, 0, 0x18)
    int64_t var_b8_4 = -1
    int32_t var_b0_4 = 1
    Botan::BigInt::binary_decode(&var_d0, &arg1[1])
    void* x0_14 = var_70.q
    int64_t x8_9 = var_6f:0xf.q
    int64_t var_c0_5
    var_6f:0xf.q = var_c0_5
    var_58_1 = var_b8_4
    var_70.o = var_d0.o
    var_d0 = x0_14
    var_50_1 = var_b0_4
    
    if (x0_14 != 0)
        void* var_c8_4 = x0_14
        Botan::deallocate_memory(x0_14, (x8_9 - x0_14) s>> 2, 4)
    
    sub_d31990(&var_d0, x23 & 1, &var_70, arg3, arg4, arg5)
    void* x0_16 = var_a0
    var_90_1 = x8_9
    var_88_1 = var_58
    int64_t var_c0_7 = var_90
    int64_t var_b8_6 = var_88
    var_a0.o = var_d0.o
    var_d0 = x0_16
    var_80_1 = var_50
    int32_t var_b0_6 = var_80
    
    if (x0_16 != 0)
        void* var_c8_5 = x0_16
        Botan::deallocate_memory(x0_16, (var_90 - x0_16) s>> 2, 4)
else if (x23 - 6 u>= 2)
    if (x23 != 4)
        void** x0_27 = __cxa_allocate_exception(0x20)
        std::__ndk1::to_string(x23)
        void var_e8
        int128_t* x0_30
        int128_t v0_7
        x0_30, v0_7 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
            &var_e8, nullptr)
        int64_t var_c0_12 = x0_30[1].q
        var_d0.o = *x0_30
        __builtin_memset(x0_30, 0, 0x18)
        *x0_27 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_27[1])
        *x0_27 = _vtable_for_Botan::Invalid_Argument + 0x10
        __cxa_throw(x0_27, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
        noreturn
    
    __builtin_memset(&var_d0, 0, 0x18)
    int64_t var_b8_7 = -1
    int32_t var_b0_7 = 1
    Botan::BigInt::binary_decode(&var_d0, &arg1[1])
    void* x0_18 = var_70.q
    int64_t x8_13 = var_6f:0xf.q
    int64_t var_c0_8
    var_6f:0xf.q = var_c0_8
    var_58_1 = var_b8_7
    int64_t var_c0_9 = x8_13
    int64_t var_b8_8 = var_58
    var_70.o = var_d0.o
    var_d0 = x0_18
    var_50_1 = var_b0_7
    int32_t var_b0_8 = var_50
    
    if (x0_18 != 0)
        void* var_c8_6 = x0_18
        Botan::deallocate_memory(x0_18, (x8_13 - x0_18) s>> 2, 4)
    
    __builtin_memset(&var_d0, 0, 0x18)
    int64_t var_b8_9 = -1
    int32_t var_b0_9 = 1
    Botan::BigInt::binary_decode(&var_d0, &arg1[((arg2 - 1) u>> 1) + 1])
    void* x0_20 = var_a0
    int64_t var_c0_10
    var_90_1 = var_c0_10
    var_88_1 = var_b8_9
    int64_t var_c0_11 = var_90
    int64_t var_b8_10 = var_88
    var_a0.o = var_d0.o
    var_d0 = x0_20
    var_80_1 = var_b0_9
    int32_t var_b0_10 = var_80
    
    if (x0_20 != 0)
        void* var_c8_7 = x0_20
        Botan::deallocate_memory(x0_20, (var_90 - x0_20) s>> 2, 4)
else
    __builtin_memset(&var_d0, 0, 0x18)
    int64_t var_b8 = -1
    int32_t var_b0 = 1
    Botan::BigInt::binary_decode(&var_d0, &arg1[1])
    void* x0_1 = var_70.q
    int64_t x8_1 = var_6f:0xf.q
    int64_t var_c0
    var_6f:0xf.q = var_c0
    var_58_1 = var_b8
    int64_t var_c0_1 = x8_1
    int64_t var_b8_1 = var_58
    var_70.o = var_d0.o
    var_d0 = x0_1
    var_50_1 = var_b0
    int32_t var_b0_1 = var_50
    
    if (x0_1 != 0)
        void* var_c8_1 = x0_1
        Botan::deallocate_memory(x0_1, (x8_1 - x0_1) s>> 2, 4)
    
    __builtin_memset(&var_d0, 0, 0x18)
    int64_t var_b8_2 = -1
    int32_t var_b0_2 = 1
    Botan::BigInt::binary_decode(&var_d0, &arg1[((arg2 - 1) u>> 1) + 1])
    void* x0_3 = var_a0
    int64_t var_c0_2
    var_90_1 = var_c0_2
    var_88_1 = var_b8_2
    int64_t var_b8_3 = var_88
    var_a0.o = var_d0.o
    var_d0 = x0_3
    var_80_1 = var_b0_2
    int32_t var_b0_3 = var_80
    
    if (x0_3 != 0)
        void* var_c8_2 = x0_3
        Botan::deallocate_memory(x0_3, (var_90 - x0_3) s>> 2, 4)
    
    sub_d31990(&var_d0, x23 & 1, &var_70, arg3, arg4, arg5)
    int32_t x0_6 = Botan::BigInt::is_equal(&var_d0)
    void* x8_6 = var_d0
    
    if (x8_6 != 0)
        void* var_c8_3 = x8_6
        Botan::deallocate_memory(x8_6, (var_90 - x8_6) s>> 2, 4)
    
    if ((x0_6 & 1) == 0)
        void** x0_8 = __cxa_allocate_exception(0x20)
        int64_t x0_9
        int128_t v0_2
        x0_9, v0_2 = operator new(0x30)
        v0_2 = data_71c500
        int64_t var_c0_4 = x0_9
        __builtin_strncpy(x0_9, "OS2ECP: Decoding error in hybrid format", 0x28)
        var_d0.o = v0_2
        *x0_8 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_8[1])
        *x0_8 = _vtable_for_Botan::Illegal_Point + 0x10
        __cxa_throw(x0_8, _typeinfo_for_Botan::Illegal_Point, Botan::Exception::~Exception)
        noreturn
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >* entry_x8
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(entry_x8)
*(entry_x8 + 0x18) = var_58_1
*(entry_x8 + 0x20) = var_50_1
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(entry_x8 + 0x28)
void* x0_23 = var_a0
*(entry_x8 + 0x48) = var_80_1
*(entry_x8 + 0x40) = var_88_1

if (x0_23 != 0)
    void* var_98_1 = x0_23
    Botan::deallocate_memory(x0_23, (var_90_1 - x0_23) s>> 2, 4)

void* result = var_70.q

if (result == 0)
    return result

int64_t x8_22 = var_6f:0xf.q
var_6f:7.q = result
return Botan::deallocate_memory(result, (x8_22 - result) s>> 2, 4)
