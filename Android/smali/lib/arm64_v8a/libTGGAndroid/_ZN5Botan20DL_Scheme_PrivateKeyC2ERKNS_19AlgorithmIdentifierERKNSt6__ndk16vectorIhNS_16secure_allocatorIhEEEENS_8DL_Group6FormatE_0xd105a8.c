// 函数: _ZN5Botan20DL_Scheme_PrivateKeyC2ERKNS_19AlgorithmIdentifierERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEENS_8DL_Group6FormatE
// 地址: 0xd105a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *arg2
*arg1 = x8
*(arg1 + *(x8 - 0xc8)) = *(arg2 + 8)
*(arg1 + *(*arg1 - 0x88)) = *(arg2 + 0x10)
*(arg1 + *(*arg1 - 0xd0)) = *(arg2 + 0x18)
*(arg1 + 8) = 0
void* x9_3 = *arg1
*(arg1 + 0x20) = -1
*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
*(arg1 + 0x28) = 1
uint8_t* x0 = *(arg3 + 0x28)
int64_t x22 = *(x9_3 - 0xc8)
int32_t entry_x4
Botan::DL_Group::BER_decode_DL_group(x0, *(arg3 + 0x30) - x0, zx.q(entry_x4), 2)
void* x8_7 = arg1 + x22
int64_t var_68
int64_t x9_4 = var_68
var_68 = 0
int64_t* var_60_1 = nullptr
int64_t* x22_1 = *(x8_7 + 0x38)
*(x8_7 + 0x30) = x9_4
int64_t var_60
*(x8_7 + 0x38) = var_60

if (x22_1 != 0)
    int64_t x9_5
    int32_t i
    
    do
        x9_5 = __ldaxr(&x22_1[1])
        i = __stlxr(x9_5 - 1, &x22_1[1])
    while (i != 0)
    
    if (x9_5 == 0)
        (*(*x22_1 + 0x10))(x22_1)
        std::__ndk1::__shared_weak_count::__release_weak()

if (var_60_1 != 0)
    int64_t x9_6
    int32_t i_1
    
    do
        x9_6 = __ldaxr(&var_60_1[1])
        i_1 = __stlxr(x9_6 - 1, &var_60_1[1])
    while (i_1 != 0)
    
    if (x9_6 == 0)
        (*(*var_60_1 + 0x10))(var_60_1)
        std::__ndk1::__shared_weak_count::__release_weak()

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
