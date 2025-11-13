// 函数: _ZN5Botan6PK_Ops23KEM_Decryption_with_KDFC2ERKNSt6__ndk112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE
// 地址: 0xdfa4d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::PK_Ops::KEM_Decryption_with_KDF + 0x10
*(arg1 + 8) = 0
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x1
int64_t x0_1 = Botan::get_kdf(entry_x1)
int64_t* result = *(arg1 + 8)
*(arg1 + 8) = x0_1

if (result == 0)
    return result

jump(*(*result + 8))
