// 函数: _ZN5Botan18McEliece_PublicKeyC2ERKNSt6__ndk16vectorIhNS1_9allocatorIhEEEE
// 地址: 0xda1774
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x1
void* x8 = *entry_x1
*arg1 = x8
*(arg1 + *(x8 - 0x88)) = entry_x1[1]
__builtin_memset(arg1 + 8, 0, 0x18)
void var_58
Botan::BER_Decoder::BER_Decoder(&var_58)
Botan::BER_Decoder::start_cons(&var_58, 0x10)
void var_d8
Botan::BER_Decoder::start_cons(&var_d8, 0x10)
uint64_t var_a0[0x2]
int64_t var_60
Botan::BER_Decoder::decode(&var_a0, &var_60, 2)
int64_t var_68
Botan::BER_Decoder::decode(&var_a0, &var_68, 2)
Botan::BER_Decoder::decode(Botan::BER_Decoder::end_cons(), arg1 + 8, 4, 4)
Botan::BER_Decoder::end_cons()
int64_t var_70_1 = 0
int64_t* var_70

if (var_70 != 0)
    (*(*var_70 + 0x38))()

void* var_90

if (var_90 != 0)
    void* var_88_1 = var_90
    int64_t var_80
    Botan::deallocate_memory(var_90, var_80 - var_90, 1)

int64_t var_a8_1 = 0
int64_t* var_a8

if (var_a8 != 0)
    (*(*var_a8 + 0x38))()

void* var_c8

if (var_c8 != 0)
    void* var_c0_1 = var_c8
    int64_t var_b8
    Botan::deallocate_memory(var_c8, var_b8 - var_c8, 1)

int64_t x8_8 = var_60
*(arg1 + 0x20) = var_68
*(arg1 + 0x28) = x8_8
int64_t var_28_1 = 0
int64_t* var_28

if (var_28 != 0)
    (*(*var_28 + 0x38))()

void* result

if (result == 0)
    return result

void* result_1 = result
int64_t var_38
return Botan::deallocate_memory(result, var_38 - result, 1)
