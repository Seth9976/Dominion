// 函数: _ZNK5Botan12PKCS5_PBKDF25pbkdfEPhmRKNSt6__ndk112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEPKhmmNS2_6chrono8durationIxNS2_5ratioILl1ELl1000EEEEE
// 地址: 0xde8d94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = arg7
void* __offset(vtable_for_Botan::PBKDF2, 0x10) var_58

if (arg7 == 0)
    Botan::PBKDF2::PBKDF2(&var_58, *(arg1 + 8), arg3)
    int64_t result_1
    result = result_1
    int64_t* var_50
    
    if (var_50 != 0)
        (*(*var_50 + 0x10))()

int64_t* x0_2 = *(arg1 + 8)
var_58 = _vtable_for_Botan::PBKDF2 + 0x10
int64_t* x0_3 = (*(*x0_2 + 0x48))()
int64_t* var_50_1 = x0_3
int64_t result_2 = result
uint64_t x8_6 = zx.q(*arg4)
int32_t temp0 = x8_6.d & 1
void* x3_1

if (temp0 != 0)
    x3_1 = *(arg4 + 0x10)
else
    x3_1 = &arg4[1]

uint8_t* x4

if (temp0 == 0)
    x4 = x8_6 u>> 1
else
    x4 = *(arg4 + 8)

Botan::PBKDF2::derive_key(&var_58, arg2, arg3, x3_1, x4, arg5)

if (x0_3 != 0)
    (*(*x0_3 + 0x10))(x0_3)

return result
