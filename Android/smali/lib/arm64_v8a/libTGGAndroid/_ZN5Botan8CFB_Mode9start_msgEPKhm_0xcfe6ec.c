// 函数: _ZN5Botan8CFB_Mode9start_msgEPKhm
// 地址: 0xcfe6ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_50
int64_t entry_x2

if (entry_x2 == 0)
    if (*(arg1 + 0x20) != *(arg1 + 0x28))
        if (*(arg1 + 8) != *(arg1 + 0x10))
            return 
        
        void** x0_9 = __cxa_allocate_exception(0x20)
        int64_t x0_10
        int128_t v0
        x0_10, v0 = operator new(0x30)
        v0 = data_71b5b0
        int64_t var_40 = x0_10
        __builtin_strncpy(x0_10, "CFB requires a non-empty initial nonce", 0x27)
        var_50 = v0
        *x0_9 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_9[1])
        *x0_9 = _vtable_for_Botan::Invalid_State + 0x10
        __cxa_throw(x0_9, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
        noreturn
    
    Botan::SymmetricAlgorithm::throw_key_not_set_error()
else if (*(arg1 + 0x48) == entry_x2)
    if (*(arg1 + 0x20) != *(arg1 + 0x28))
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t const*>(
            &arg1[8], arg2)
        int64_t* x19_1 = *(arg1 + 0x40)
        int64_t x22_1 = *(arg1 + 8)
        (*(*x19_1 + 0x48))(x19_1, x22_1, *(arg1 + 0x20), 
            (*(arg1 + 0x10) - x22_1) u/ (*(*x19_1 + 0x30))(x19_1))
        *(arg1 + 0x38) = 0
        return 
    
    Botan::SymmetricAlgorithm::throw_key_not_set_error()

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x0_5 = __cxa_allocate_exception(0x20)
Botan::CFB_Mode::name()
Botan::Invalid_IV_Length::Invalid_IV_Length(x0_5, &var_50)
__cxa_throw(x0_5, _typeinfo_for_Botan::Invalid_IV_Length, Botan::Exception::~Exception)
noreturn
