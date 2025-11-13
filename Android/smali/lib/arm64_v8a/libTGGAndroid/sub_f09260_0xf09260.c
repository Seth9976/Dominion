// 函数: sub_f09260
// 地址: 0xf09260
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

__builtin_memset(arg1, 0, 0x18)
int64_t var_90 = 0
int64_t result_1
__builtin_memset(&result_1, 0, 0x1c)
int32_t var_88 = 0xff00
int64_t var_68 = arg2
int64_t* var_60 = nullptr
Botan::BER_Decoder::start_cons(&var_90, 0x10)
void var_58
(*(*arg3 + 8))(arg3, &var_58)
Botan::BER_Decoder::decode(&var_58, arg1, 4, 4)
Botan::BER_Decoder::verify_end()
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

if (var_60 != 0)
    (*(*var_60 + 0x38))()

void* result = result_1

if (result == 0)
    return result

int64_t result_2 = result
int64_t var_74
return Botan::deallocate_memory(result, var_74 - result, 1)
