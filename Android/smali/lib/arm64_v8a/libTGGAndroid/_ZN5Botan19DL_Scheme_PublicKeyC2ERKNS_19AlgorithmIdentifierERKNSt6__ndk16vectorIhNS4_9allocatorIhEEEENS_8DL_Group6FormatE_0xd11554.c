// 函数: _ZN5Botan19DL_Scheme_PublicKeyC2ERKNS_19AlgorithmIdentifierERKNSt6__ndk16vectorIhNS4_9allocatorIhEEEENS_8DL_Group6FormatE
// 地址: 0xd11554
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *arg2
*arg1 = x8
*(arg1 + *(x8 - 0x88)) = *(arg2 + 8)
__builtin_memset(arg1 + 8, 0, 0x18)
*(arg1 + 0x20) = -1
*(arg1 + 0x28) = 1
uint64_t x1 = *(arg3 + 0x28)
Botan::DL_Group::DL_Group(arg1 + 0x30, x1, *(arg3 + 0x30) - x1)
Botan::BigInt var_68
Botan::BER_Decoder::BER_Decoder(&var_68)
Botan::BER_Decoder::decode(&var_68, arg1 + 8, 2)
int64_t var_38_1 = 0
int64_t* var_38

if (var_38 != 0)
    (*(*var_38 + 0x38))()

void* result

if (result == 0)
    return result

void* result_1 = result
int64_t var_48
return Botan::deallocate_memory(result, var_48 - result, 1)
