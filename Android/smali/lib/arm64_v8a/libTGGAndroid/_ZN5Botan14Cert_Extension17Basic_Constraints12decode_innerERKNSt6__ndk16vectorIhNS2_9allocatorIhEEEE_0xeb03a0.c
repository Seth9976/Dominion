// 函数: _ZN5Botan14Cert_Extension17Basic_Constraints12decode_innerERKNSt6__ndk16vectorIhNS2_9allocatorIhEEEE
// 地址: 0xeb03a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void var_90
Botan::BER_Decoder::BER_Decoder(&var_90)
Botan::BER_Decoder::start_cons(&var_90, 0x10)
char var_14 = 0
bool var_58[0x10]
Botan::BER_Decoder::decode_optional<uint64_t>(
    Botan::BER_Decoder::decode_optional<bool>(&var_58, arg1 + 8, 1, nullptr), arg1 + 0x10, 2, 
    nullptr)
Botan::BER_Decoder::end_cons()
int64_t var_28_1 = 0
int64_t* var_28

if (var_28 != 0)
    (*(*var_28 + 0x38))()

void* var_48

if (var_48 != 0)
    void* var_40_1 = var_48
    int64_t var_38
    Botan::deallocate_memory(var_48, var_38 - var_48, 1)

int64_t var_60_1 = 0
int64_t* var_60

if (var_60 != 0)
    (*(*var_60 + 0x38))()

void* result_1
void* result = result_1

if (result != 0)
    void* result_2 = result
    int64_t var_70
    result = Botan::deallocate_memory(result, var_70 - result, 1)

if (zx.d(*(arg1 + 8)) != 0)
    return result

*(arg1 + 0x10) = 0
return result
