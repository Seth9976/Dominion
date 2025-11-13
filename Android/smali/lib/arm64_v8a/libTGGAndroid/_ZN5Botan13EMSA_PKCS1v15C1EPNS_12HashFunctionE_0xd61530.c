// 函数: _ZN5Botan13EMSA_PKCS1v15C1EPNS_12HashFunctionE
// 地址: 0xd61530
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x18) = 0
*(arg1 + 0x20) = 0
*arg1 = _vtable_for_Botan::EMSA_PKCS1v15 + 0x10
int64_t* entry_x1
*(arg1 + 8) = entry_x1
*(arg1 + 0x10) = 0
(*(*entry_x1 + 0x40))(entry_x1)
char var_58
Botan::pkcs_hash_id(&var_58)
void* result = *(arg1 + 0x10)

if (result != 0)
    *(arg1 + 0x18) = result
    int128_t v0
    result, v0 = operator delete(result)
    __builtin_memset(arg1 + 0x10, 0, 0x18)

int128_t var_40
*(arg1 + 0x10) = var_40
int64_t var_30
*(arg1 + 0x20) = var_30
uint32_t x8_3 = zx.d(var_58)
__builtin_memset(&var_40, 0, 0x18)

if ((x8_3 & 1) == 0)
    return result

void* var_48
return operator delete(var_48)
