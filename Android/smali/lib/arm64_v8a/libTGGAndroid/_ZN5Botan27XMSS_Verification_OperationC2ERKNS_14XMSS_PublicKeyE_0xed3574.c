// 函数: _ZN5Botan27XMSS_Verification_OperationC2ERKNS_14XMSS_PublicKeyE
// 地址: 0xed3574
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x1
void* x8 = *entry_x1
*arg1 = x8
*(arg1 + *(x8 - 0x30)) = entry_x1[1]
int64_t entry_x2
*(arg1 + 8) = entry_x2
char var_38
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_38)
int64_t result = Botan::XMSS_Hash::XMSS_Hash(arg1 + 0x10)
void* var_28

if ((zx.d(var_38) & 1) != 0)
    result = operator delete(var_28)
__builtin_memset(arg1 + 0x58, 0, 0x18)
return result
