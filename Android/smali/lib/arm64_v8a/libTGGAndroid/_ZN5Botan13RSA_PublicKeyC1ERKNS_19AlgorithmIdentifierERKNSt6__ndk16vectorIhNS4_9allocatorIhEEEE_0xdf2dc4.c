// 函数: _ZN5Botan13RSA_PublicKeyC1ERKNS_19AlgorithmIdentifierERKNSt6__ndk16vectorIhNS4_9allocatorIhEEEE
// 地址: 0xdf2dc4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
*arg1 = _vtable_for_Botan::RSA_PublicKey + 0x88
void* result_1
__builtin_memset(&result_1, 0, 0x18)
int64_t var_30 = -1
int32_t var_28 = 1
void* var_70
__builtin_memset(&var_70, 0, 0x18)
int64_t var_58 = -1
int32_t var_50 = 1
void var_e0
Botan::BER_Decoder::BER_Decoder(&var_e0)
Botan::BER_Decoder::start_cons(&var_e0, 0x10)
void var_a8
Botan::BER_Decoder::decode(&var_a8, &result_1, 2)
Botan::BER_Decoder::decode(&var_a8, &var_70, 2)
Botan::BER_Decoder::end_cons()
int64_t var_78_1 = 0
int64_t* var_78

if (var_78 != 0)
    (*(*var_78 + 0x38))()

void* var_98

if (var_98 != 0)
    void* var_90_1 = var_98
    int64_t var_88
    Botan::deallocate_memory(var_98, var_88 - var_98, 1)

int64_t var_b0_1 = 0
int64_t* var_b0

if (var_b0 != 0)
    (*(*var_b0 + 0x38))()

void* var_d0

if (var_d0 != 0)
    void* var_c8_1 = var_d0
    int64_t var_c0
    Botan::deallocate_memory(var_d0, var_c0 - var_d0, 1)

Botan::RSA_PublicKey::init(arg1, &result_1)
void* x0_9 = var_70

if (x0_9 != 0)
    void* var_68_1 = x0_9
    int64_t var_60
    Botan::deallocate_memory(x0_9, (var_60 - x0_9) s>> 2, 4)

void* result = result_1

if (result == 0)
    return result

void* result_2 = result
int64_t var_38
return Botan::deallocate_memory(result, (var_38 - result) s>> 2, 4)
