// 函数: _ZN5Botan8CBC_Mode9start_msgEPKhm
// 地址: 0xceee5c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x2
int64_t result = (*(*arg1 + 0x68))(arg1, entry_x2)

if ((result.d & 1) == 0)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x0_5 = __cxa_allocate_exception(0x20)
    (*(*arg1 + 0x20))(arg1)
    void var_48
    Botan::Invalid_IV_Length::Invalid_IV_Length(x0_5, &var_48)
    __cxa_throw(x0_5, _typeinfo_for_Botan::Invalid_IV_Length, Botan::Exception::~Exception)
    noreturn

if (entry_x2 != 0)
    return std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t const*>(
        &arg1[0x18], arg2) __tailcall

if (*(arg1 + 0x18) == *(arg1 + 0x20))
    result = (*(**(arg1 + 8) + 0x30))()
    int64_t x8_6 = *(arg1 + 0x18)
    int64_t x9_3 = *(arg1 + 0x20) - x8_6
    
    if (result u> x9_3)
        return std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(
            &arg1[0x18]) __tailcall
    
    if (result u< x9_3)
        *(arg1 + 0x20) = x8_6 + result

return result
