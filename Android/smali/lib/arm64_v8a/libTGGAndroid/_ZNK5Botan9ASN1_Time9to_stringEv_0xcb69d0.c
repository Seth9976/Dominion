// 函数: _ZNK5Botan9ASN1_Time9to_stringEv
// 地址: 0xcb69d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int32_t x9 = *(entry_x0 + 8)
int128_t var_40

if (x9 == 0)
    void** x0_4 = __cxa_allocate_exception(0x20)
    int64_t x0_5
    int128_t v0_2
    x0_5, v0_2 = operator new(0x30)
    v0_2 = data_71c510
    int64_t var_30_1 = x0_5
    __builtin_strncpy(x0_5, "ASN1_Time::to_string: No time set", 0x22)
    var_40 = v0_2
    *x0_4 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_4[1])
    *x0_4 = _vtable_for_Botan::Invalid_State + 0x10
    __cxa_throw(x0_4, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
    noreturn

void* var_30

if (*(entry_x0 + 0x20) == 0x17)
    if (x9 - 0x79e u>= 0x64)
        void** x0_9 = __cxa_allocate_exception(0x20)
        Botan::ASN1_Time::readable_string()
        void var_98
        int128_t* x0_12
        int128_t v0_3
        x0_12, v0_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
            &var_98, nullptr)
        int64_t var_70 = x0_12[1].q
        int128_t var_80 = *x0_12
        __builtin_memset(x0_12, 0, 0x18)
        int128_t* x0_14
        int128_t v0_4
        x0_14, v0_4 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            &var_80)
        int64_t var_50 = x0_14[1].q
        int128_t var_60 = *x0_14
        __builtin_memset(x0_14, 0, 0x18)
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "Encoding error: ", &var_60)
        *x0_9 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_9[1])
        *x0_9 = _vtable_for_Botan::Invalid_Argument + 0x10
        
        if ((zx.d(var_40.b) & 1) != 0)
            operator delete(var_30)
        
        *x0_9 = _vtable_for_Botan::Encoding_Error + 0x10
        __cxa_throw(x0_9, _typeinfo_for_Botan::Encoding_Error, Botan::Exception::~Exception)
        noreturn
    
    int32_t x8_2
    
    x8_2 = x9 u> 0x7cf ? -0x7d0 : -0x76c
    
    x9 += x8_2

int64_t x8_8 = zx.q(x9) * 0x2540be400 + zx.q(*(entry_x0 + 0xc)) * 0x5f5e100
    + zx.q(*(entry_x0 + 0x10)) * 0xf4240 + zx.q(*(entry_x0 + 0x14)) * 0x2710
    + zx.q(*(entry_x0 + 0x18)) * 0x64
std::__ndk1::to_string(x8_8 + zx.q(*(entry_x0 + 0x1c)))
int128_t* result
int128_t v0
result, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_40)
int128_t* entry_x8
entry_x8[1].q = result[1].q
*entry_x8 = *result
__builtin_memset(result, 0, 0x18)

if ((zx.d(var_40.b) & 1) != 0)
    result = operator delete(var_30)

uint64_t x10 = zx.q(*entry_x8)
int64_t x21

if (*(entry_x0 + 0x20) == 0x17)
    x21 = 0xd
else
    x21 = 0xf

uint64_t x8_13

if ((x10.d & 1) == 0)
    x8_13 = x10 u>> 1
else
    x8_13 = *(entry_x8 + 8)

if (x8_13 u< x21)
    uint64_t x8_15
    
    do
        int128_t v0_1
        result, v0_1 = std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "0", entry_x8)
        
        if ((zx.d(*entry_x8) & 1) != 0)
            result, v0_1 = operator delete(entry_x8[1].q)
        
        *entry_x8 = var_40
        uint64_t x8_14 = zx.q(*entry_x8)
        entry_x8[1].q = var_30
        
        if ((x8_14.d & 1) == 0)
            x8_15 = x8_14 u>> 1
        else
            x8_15 = *(entry_x8 + 8)
    while (x8_15 u< x21)

return result
