// 函数: _ZN5Botan24XMSS_Signature_Operation4signERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEERNS_15XMSS_PrivateKeyE
// 地址: 0xed2e38
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_48
__builtin_memset(&var_48, 0, 0x18)
int64_t* result = Botan::allocate_memory(0x20, 1)
*result = 0
*(result + 7) = 0
void* var_40 = &result[4]
*(result + 0xf) = 0xff
result[2] = 0
result[3] = 0
uint64_t x23 = zx.q(*(arg1 + 0x368))
Botan::XMSS_Address* entry_x2
Botan::XMSS_Signature_Operation::generate_tree_signature(arg1, arg2, entry_x2)
uint64_t* entry_x8
*entry_x8 = x23
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::vector(&entry_x8[1])
std::__ndk1::vector<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, std::__ndk1::allocator<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > > >::vector(
    &entry_x8[4])
std::__ndk1::vector<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, std::__ndk1::allocator<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > > >::vector(
    &entry_x8[7])
Botan::XMSS_WOTS_PublicKey::TreeSignature::~TreeSignature()

if (result == 0)
    return result

int64_t* result_1 = result
return Botan::deallocate_memory(result, &result[4] - result, 1)
