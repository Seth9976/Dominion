// 函数: _ZN5Botan11BER_Decoder15get_next_objectEv
// 地址: 0xcb1f48
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* entry_x8
__builtin_memset(&entry_x8[1], 0, 0x1c)
*entry_x8 = 0xff00
void* entry_x0

if (*(entry_x0 + 8) != 0xff00)
    int64_t x9_3 = *entry_x8
    *entry_x8 = *(entry_x0 + 8)
    *(entry_x8 + 8) = *(entry_x0 + 0x10)
    *(entry_x8 + 0x18) = *(entry_x0 + 0x20)
    *(entry_x0 + 8) = x9_3
    __builtin_memset(entry_x0 + 0x10, 0, 0x18)
    return 

do
    int32_t var_50
    int32_t var_4c
    sub_cb76f0(*(entry_x0 + 0x28), &var_4c, &var_50)
    int32_t x9_1 = var_50
    int32_t x8_1 = var_4c
    *entry_x8 = x8_1
    entry_x8[1] = x9_1
    
    if (x8_1 == 0xff00)
        break
    
    void var_58
    uint64_t x0_2 = sub_cb79bc(*(entry_x0 + 0x28), &var_58, 0x10)
    int64_t* x0_3 = *(entry_x0 + 0x28)
    char var_70
    char var_48
    void* var_38
    
    if (((*(*x0_3 + 8))(x0_3, x0_2) & 1) == 0)
        void** x0_12 = __cxa_allocate_exception(0x20)
        var_70 = 0x1e
        int64_t var_6f_1
        __builtin_strncpy(&var_6f_1, "Value truncated", 0x10)
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "BER: ", &var_70)
        *x0_12 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_12[1])
        *x0_12 = _vtable_for_Botan::Decoding_Error + 0x10
        
        if ((zx.d(var_48) & 1) != 0)
            operator delete(var_38)
        
        *x0_12 = _vtable_for_Botan::BER_Decoding_Error + 0x10
        __cxa_throw(x0_12, _typeinfo_for_Botan::BER_Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
    int64_t x1_4 = *(entry_x8 + 8)
    int64_t x8_5 = *(entry_x8 + 0x10) - x1_4
    
    if (x0_2 u> x8_5)
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&entry_x8[2])
        x1_4 = *(entry_x8 + 8)
    else if (x0_2 u< x8_5)
        *(entry_x8 + 0x10) = x1_4 + x0_2
    
    int64_t* x0_6 = *(entry_x0 + 0x28)
    
    if ((**x0_6)(x0_6, x1_4, x0_2) != x0_2)
        void** x0_7 = __cxa_allocate_exception(0x20)
        var_70 = 0x1e
        int64_t var_6f
        __builtin_strncpy(&var_6f, "Value truncated", 0x10)
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "BER: ", &var_70)
        *x0_7 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_7[1])
        *x0_7 = _vtable_for_Botan::Decoding_Error + 0x10
        
        if ((zx.d(var_48) & 1) != 0)
            operator delete(var_38)
        
        *x0_7 = _vtable_for_Botan::BER_Decoding_Error + 0x10
        __cxa_throw(x0_7, _typeinfo_for_Botan::BER_Decoding_Error, Botan::Exception::~Exception)
        noreturn
while ((entry_x8[1] | *entry_x8) == 0)
