// 函数: _ZN5Botan3TLS24SRTP_Protection_ProfilesC1ERNS0_15TLS_Data_ReaderEt
// 地址: 0xe6d634
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = arg2
*arg1 = _vtable_for_Botan::TLS::SRTP_Protection_Profiles + 0x10
Botan::TLS::TLS_Data_Reader::get_num_elems(x22, 2, 2, 0)
Botan::TLS::TLS_Data_Reader::get_elem<uint16_t, std::__ndk1::vector<uint16_t, std::__ndk1::allocator<uint16_t> > >(
    x22)
Botan::TLS::TLS_Data_Reader::get_range<uint8_t>(x22, 1, 0)
int64_t var_48
void* result
int16_t entry_x2

if (*(arg1 + 0x10) + result - (*(arg1 + 8) + var_48) + 3 != zx.q(entry_x2))
    void** x0_5 = __cxa_allocate_exception(0x20)
    int64_t x0_6
    int128_t v0
    x0_6, v0 = operator new(0x30)
    (*"ection extension")[0].o
    int64_t var_50 = x0_6
    v0 = data_71c1e0
    __builtin_strncpy(x0_6, "Bad encoding for SRTP protection extension", 0x2b)
    int128_t var_60 = v0
    *x0_5 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_5[1])
    *x0_5 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_5, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

if (var_48 == result)
    if (result == 0)
        return result
    
    return operator delete(result)

void** x0_10 = __cxa_allocate_exception(0x20)
int64_t x0_11
int128_t v2
x0_11, v2 = operator new(0x40)
(*" protection extension")[0].o
int64_t var_50_1 = x0_11
v2 = data_71c880
__builtin_strncpy(x0_11, "Unhandled non-empty MKI for SRTP protection extension", 0x36)
int128_t var_60_1 = v2
*x0_10 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_10[1])
*x0_10 = _vtable_for_Botan::Decoding_Error + 0x10
__cxa_throw(x0_10, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
noreturn
