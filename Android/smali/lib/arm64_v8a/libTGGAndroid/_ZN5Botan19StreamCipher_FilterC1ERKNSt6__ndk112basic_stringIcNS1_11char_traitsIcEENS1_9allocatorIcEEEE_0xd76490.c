// 函数: _ZN5Botan19StreamCipher_FilterC1ERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xd76490
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::Filter + 0x10
*(arg1 + 8) = zx.o(0)
*(arg1 + 0x18) = zx.o(0)
*(arg1 + 0x28) = zx.o(0)
std::__ndk1::vector<Botan::Filter*, std::__ndk1::allocator<Botan::Filter*> >::__append(arg1 + 0x20)
__builtin_memset(arg1 + 0x38, 0, 0x11)
*(arg1 + 0x58) = 0
*(arg1 + 0x60) = 0
*arg1 = _vtable_for_Botan::StreamCipher_Filter + 0x10
*(arg1 + 0x50) = 0
int64_t x0_1 = Botan::allocate_memory(0x400, 1)
*(arg1 + 0x50) = x0_1
*(arg1 + 0x60) = x0_1 + 0x400
memset(x0_1, 0, 0x400)
*(arg1 + 0x58) = x0_1 + 0x400
int16_t var_48 = 0
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x1
int64_t result = Botan::StreamCipher::create_or_throw(entry_x1, &var_48)

if ((zx.d(var_48.b) & 1) == 0)
    return result

void* var_38
return operator delete(var_38)
