// 函数: _ZN5Botan3TLS22TLS_CBC_HMAC_AEAD_Mode9start_msgEPKhm
// 地址: 0xe85890
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_1

if (*(arg1 + 0x78) == *(arg1 + 0x80))
    x8_1 = 0x58
else
    x8_1 = 0x48

int64_t entry_x2

if (*(arg1 + x8_1) != entry_x2)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x0_2 = __cxa_allocate_exception(0x20)
    Botan::TLS::TLS_CBC_HMAC_AEAD_Mode::name()
    void var_48
    Botan::Invalid_IV_Length::Invalid_IV_Length(x0_2, &var_48)
    __cxa_throw(x0_2, _typeinfo_for_Botan::Invalid_IV_Length, Botan::Exception::~Exception)
    noreturn

*(arg1 + 0xb0) = *(arg1 + 0xa8)

if (entry_x2 == 0)
    return 

return std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t const*>(
    &arg1[0x78], arg2) __tailcall
