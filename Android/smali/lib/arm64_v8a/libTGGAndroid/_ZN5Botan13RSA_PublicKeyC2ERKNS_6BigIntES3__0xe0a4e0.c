// 函数: _ZN5Botan13RSA_PublicKeyC2ERKNS_6BigIntES3_
// 地址: 0xe0a4e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *arg2
*arg1 = x8
*(arg1 + *(x8 - 0x88)) = *(arg2 + 8)
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
void* result_1
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(&result_1)
void* entry_x2
int64_t var_30 = *(entry_x2 + 0x18)
int32_t var_28 = *(entry_x2 + 0x20)
void* var_70
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(&var_70)
void* entry_x3
int64_t var_58 = *(entry_x3 + 0x18)
int32_t var_50 = *(entry_x3 + 0x20)
Botan::RSA_PublicKey::init(arg1, &result_1)
void* x0_3 = var_70

if (x0_3 != 0)
    void* var_68_1 = x0_3
    int64_t var_60
    Botan::deallocate_memory(x0_3, (var_60 - x0_3) s>> 2, 4)

void* result = result_1

if (result == 0)
    return result

void* result_2 = result
int64_t var_38
return Botan::deallocate_memory(result, (var_38 - result) s>> 2, 4)
