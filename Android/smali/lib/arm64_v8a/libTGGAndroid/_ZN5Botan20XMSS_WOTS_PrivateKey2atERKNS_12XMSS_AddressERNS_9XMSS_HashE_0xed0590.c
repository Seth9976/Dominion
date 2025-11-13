// 函数: _ZN5Botan20XMSS_WOTS_PrivateKey2atERKNS_12XMSS_AddressERNS_9XMSS_HashE
// 地址: 0xed0590
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result_1
__builtin_memset(&result_1, 0, 0x18)
int64_t* entry_x2
int64_t* x0 = *entry_x2
int64_t x1 = entry_x2[2]
(*(*x0 + 0x18))(x0, x1, entry_x2[3] - x1)
int64_t* x0_1 = *entry_x2
char var_24 = 3
(*(*x0_1 + 0x18))(x0_1, &var_24, 1)
int64_t* x0_2 = *entry_x2
int64_t x1_2 = *(arg1 + 8)
(*(*x0_2 + 0x18))(x0_2, x1_2, *(arg1 + 0x10) - x1_2)
int64_t* x0_3 = *entry_x2
int64_t x1_3 = *arg2
(*(*x0_3 + 0x18))(x0_3, x1_3, *(arg2 + 8) - x1_3)
int64_t* x22_1 = *entry_x2
void* result_3 = (**x22_1)(x22_1)

if (result_3 != 0)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&result_1)
    result_3 = result_1

(*(*x22_1 + 0x20))(x22_1, result_3)
Botan::XMSS_WOTS_PrivateKey::generate(arg1, &result_1)
void* result = result_1

if (result == 0)
    return result

void* result_2 = result
int64_t var_38
return Botan::deallocate_memory(result, var_38 - result, 1)
