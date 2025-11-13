// 函数: _ZN5Botan11Hash_FilterC1ERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEm
// 地址: 0xd767ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::Filter + 0x10
*(arg1 + 8) = zx.o(0)
*(arg1 + 0x18) = zx.o(0)
*(arg1 + 0x28) = zx.o(0)
std::__ndk1::vector<Botan::Filter*, std::__ndk1::allocator<Botan::Filter*> >::__append(arg1 + 0x20)
__builtin_memset(arg1 + 0x38, 0, 0x11)
*arg1 = _vtable_for_Botan::Hash_Filter + 0x10
int16_t var_58 = 0
int64_t result = Botan::HashFunction::create_or_throw(arg2, &var_58)
void* var_48

if ((zx.d(var_58.b) & 1) != 0)
    result = operator delete(var_48)
int64_t entry_x2
*(arg1 + 0x58) = entry_x2
return result
