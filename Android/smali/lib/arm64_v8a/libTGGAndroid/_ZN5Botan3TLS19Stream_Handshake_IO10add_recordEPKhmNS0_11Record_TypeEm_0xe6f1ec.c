// 函数: _ZN5Botan3TLS19Stream_Handshake_IO10add_recordEPKhmNS0_11Record_TypeEm
// 地址: 0xe6f1ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg4.d
int128_t var_40

if (x20 == 0x14)
    if (arg3 == 1 && zx.d(*arg2) == 1)
        var_40.d = 0xfe
        void* x11_1 = *(arg1 + 0x10)
        int64_t x9_5 = *(arg1 + 0x28) + *(arg1 + 0x30)
        uint8_t* x1_1 = x11_1 + (x9_5 u>> 9 & 0x7ffffffffffff8)
        uint8_t* x2
        
        if (*(arg1 + 0x18) == x11_1)
            x2 = nullptr
        else
            x2 = *x1_1 + (x9_5 & 0xfff)
        
        return
            std::__ndk1::deque<uint8_t, std::__ndk1::allocator<uint8_t> >::insert<uint8_t const*>(
            &arg1[8], x1_1, x2, &var_40)
    
    void** x0_4 = __cxa_allocate_exception(0x20)
    int64_t x0_5
    int128_t v0_1
    x0_5, v0_1 = operator new(0x20)
    int64_t var_30 = x0_5
    var_40 = data_71af80
    __builtin_strncpy(x0_5, "Invalid ChangeCipherSpec", 0x19)
    *x0_4 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_4[1])
    *x0_4 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_4, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

if (x20 == 0x16)
    void* x11 = *(arg1 + 0x10)
    int64_t x9_1 = *(arg1 + 0x28) + *(arg1 + 0x30)
    uint8_t* x1 = x11 + (x9_1 u>> 9 & 0x7ffffffffffff8)
    uint8_t* x9_3
    
    if (*(arg1 + 0x18) == x11)
        x9_3 = nullptr
    else
        x9_3 = *x1 + (x9_1 & 0xfff)
    
    return std::__ndk1::deque<uint8_t, std::__ndk1::allocator<uint8_t> >::insert<uint8_t const*>(
        &arg1[8], x1, x9_3, arg2) __tailcall

void** x0_8 = __cxa_allocate_exception(0x20)
std::__ndk1::to_string(x20)
void var_78
int128_t* x0_11
int128_t v0_2
x0_11, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    &var_78, nullptr)
int64_t var_50 = x0_11[1].q
int128_t var_60 = *x0_11
__builtin_memset(x0_11, 0, 0x18)
int128_t* x0_13
int128_t v0_3
x0_13, v0_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_60)
int64_t var_30_1 = x0_13[1].q
var_40 = *x0_13
__builtin_memset(x0_13, 0, 0x18)
*x0_8 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_8[1])
*x0_8 = _vtable_for_Botan::Decoding_Error + 0x10
__cxa_throw(x0_8, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
noreturn
