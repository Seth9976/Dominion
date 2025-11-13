// 函数: _ZN5Botan24XMSS_Signature_OperationC2ERKNS_15XMSS_PrivateKeyE
// 地址: 0xed268c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x1
void* x8 = *entry_x1
*arg1 = x8
*(arg1 + *(x8 - 0x38)) = entry_x1[1]
Botan::XMSS_PrivateKey::XMSS_PrivateKey(arg1 + 8)
void* entry_x2
*(entry_x2 + 0x1a0)
Botan::XMSS_Parameters::XMSS_Parameters(arg1 + 0x2a8)
char var_48
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_48)
int64_t result = Botan::XMSS_Hash::XMSS_Hash(arg1 + 0x308)
void* var_38

if ((zx.d(var_48) & 1) != 0)
    result = operator delete(var_38)
__builtin_memset(arg1 + 0x350, 0, 0x1d)
return result
