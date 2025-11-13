// 函数: _ZN5Botan17random_safe_primeERNS_21RandomNumberGeneratorEm
// 地址: 0xd14eec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* var_c8
int128_t var_a0
int128_t var_70

if (arg2 u<= 0x40)
    void** x0_9 = __cxa_allocate_exception(0x20)
    std::__ndk1::to_string(arg2)
    int128_t* x0_12
    int128_t v0_3
    x0_12, v0_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
        &var_c8, nullptr)
    int64_t var_90_1 = x0_12[1].q
    var_a0 = *x0_12
    __builtin_memset(x0_12, 0, 0x18)
    int128_t* x0_14
    int128_t v0_4
    x0_14, v0_4 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_a0)
    int64_t var_60_2 = x0_14[1].q
    var_70 = *x0_14
    __builtin_memset(x0_14, 0, 0x18)
    *x0_9 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_9[1])
    *x0_9 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_9, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

__builtin_memset(&var_70, 0, 0x18)
Botan::BigInt* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
int64_t var_58 = -1
int32_t var_50 = 1
*(entry_x8 + 0x18) = -1
*(entry_x8 + 0x20) = 1
int64_t var_60_1
int32_t x0_8

do
    __builtin_memset(&var_c8, 0, 0x18)
    int64_t var_b0_1 = -1
    int32_t var_a8_1 = 1
    int128_t v0_1
    int128_t v1_1
    v0_1, v1_1 = Botan::random_prime(arg1, arg2 - 1, &var_c8, 2, 3, 0x80)
    v1_1 = var_70
    int64_t x8 = var_60_1
    int64_t x11_1 = var_58
    int64_t var_90
    var_60_1 = var_90
    int64_t var_88
    var_58 = var_88
    int32_t x10_2 = var_50
    uint64_t x0_1 = v1_1.q
    var_90 = x8
    var_88 = x11_1
    var_70 = var_a0
    var_a0 = v1_1
    int32_t var_80
    var_50 = var_80
    var_80 = x10_2
    
    if (x0_1 != 0)
        var_a0:8.q = x0_1
        Botan::deallocate_memory(x0_1, (x8 - x0_1) s>> 2, 4)
    
    void* x0_2 = var_c8
    int64_t var_b8
    
    if (x0_2 != 0)
        void* var_c0_1 = x0_2
        Botan::deallocate_memory(x0_2, (var_b8 - x0_2) s>> 2, 4)
    
    Botan::operator<<(&var_70, 1)
    uint32_t var_34 = 1
    int128_t v0_2
    int128_t v1_2
    v0_2, v1_2 = Botan::BigInt::add2(&var_c8, &var_34, 1, 1)
    uint64_t x0_5
    
    if (&var_a0 == entry_x8)
        x0_5 = var_a0.q
        
        if (x0_5 != 0)
            var_a0:8.q = x0_5
            Botan::deallocate_memory(x0_5, (var_90 - x0_5) s>> 2, 4)
    else
        v1_2 = *entry_x8
        v0_2 = var_a0
        int64_t x10_3 = *(entry_x8 + 0x10)
        int64_t x11_2 = *(entry_x8 + 0x18)
        *(entry_x8 + 0x10) = var_90
        *(entry_x8 + 0x18) = var_88
        int32_t x9_4 = *(entry_x8 + 0x20)
        x0_5 = v1_2.q
        var_90 = x10_3
        var_88 = x11_2
        *entry_x8 = v0_2
        var_a0 = v1_2
        *(entry_x8 + 0x20) = var_80
        var_80 = x9_4
        
        if (x0_5 != 0)
            var_a0:8.q = x0_5
            Botan::deallocate_memory(x0_5, (var_90 - x0_5) s>> 2, 4)
    void* x0_6 = var_c8
    
    if (x0_6 != 0)
        void* var_c0_2 = x0_6
        Botan::deallocate_memory(x0_6, (var_b8 - x0_6) s>> 2, 4)
    
    x0_8 = Botan::is_prime(entry_x8, arg1, 0x80, true)
while ((x0_8 & 1) == 0)
void* result = var_70.q

if (result == 0)
    return result

return Botan::deallocate_memory(result, (var_60_1 - result) s>> 2, 4)
