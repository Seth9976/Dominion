// 函数: _ZN5Botan14DSA_PrivateKeyC1ERKNS_19AlgorithmIdentifierERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEE
// 地址: 0xd1f39c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x18) = 0
*(arg1 + 0x20) = 0
*(arg1 + 8) = construction_vtable_for_Botan::DL_Scheme_PublicKey-in-Botan::DSA_PrivateKey + 0x90
*(arg1 + 0x10) = 0
*(arg1 + 0x28) = -1
*(arg1 + 0x30) = 1
*(arg1 + 0x38) = 0
*(arg1 + 0x40) = 0
*(arg1 + 0x48) = construction_vtable_for_Botan::Private_Key-in-Botan::DSA_PrivateKey + 0xc0
*arg1 = construction_vtable_for_Botan::Private_Key-in-Botan::DSA_PrivateKey + 0x1f0
Botan::DL_Scheme_PrivateKey::DL_Scheme_PrivateKey(arg1 + 0x48, 
    _VTT_for_Botan::DSA_PrivateKey + 0x50, arg2)
*arg1 = _vtable_for_Botan::DSA_PrivateKey + 0xa0
*(arg1 + 8) = _vtable_for_Botan::DSA_PrivateKey + 0x1b8
*(arg1 + 0x48) = _vtable_for_Botan::DSA_PrivateKey + 0x308
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x0_2 = Botan::DL_Group::data()
char var_48 = 0xc
int32_t var_47
__builtin_strncpy(&var_47, "q_bits", 7)
Botan::DL_Group_Data::assert_q_is_set(x0_2)
void* var_38

if ((zx.d(var_48) & 1) != 0)
    operator delete(var_38)
*(Botan::DL_Group::data() + 0x150)
Botan::Montgomery_Exponentation_State::exponentiation(*(Botan::DL_Group::data() + 0x138), 
    arg1 + 0x50)
void* result_1
void* result
void* result_2
int64_t var_60

if (arg1 + 0x10 == &result_1)
    result = result_1
    
    if (result != 0)
        result_2 = result
        return Botan::deallocate_memory(result, (var_60 - result) s>> 2, 4)
else
    result = *(arg1 + 0x10)
    int128_t v0 = result_1.o
    result_1 = result
    *(arg1 + 0x10) = v0
    int64_t x11_1 = *(arg1 + 0x20)
    int64_t x9_2 = *(arg1 + 0x28)
    *(arg1 + 0x20) = var_60
    int64_t var_58
    *(arg1 + 0x28) = var_58
    int64_t var_58_1 = x9_2
    int32_t x9_3 = *(arg1 + 0x30)
    int32_t var_50
    *(arg1 + 0x30) = var_50
    int32_t var_50_1 = x9_3
    
    if (result != 0)
        result_2 = result
        return Botan::deallocate_memory(result, (x11_1 - result) s>> 2, 4)
return result
