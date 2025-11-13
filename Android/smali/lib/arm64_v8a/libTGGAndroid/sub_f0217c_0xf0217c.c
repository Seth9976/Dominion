// 函数: sub_f0217c
// 地址: 0xf0217c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result_1
__builtin_memset(&result_1, 0, 0x18)
int64_t var_50 = -1
int32_t var_48 = 1
Botan::BigInt::binary_decode(&result_1, arg2)
int128_t var_90

if ((Botan::BigInt::cmp(&result_1, Botan::DL_Group::data()) & 0x80000000) == 0)
    void** x0_22 = __cxa_allocate_exception(0x20)
    int64_t x0_23
    int128_t v0
    x0_23, v0 = operator new(0x30)
    v0 = data_71b5b0
    int64_t var_80_1 = x0_23
    __builtin_strncpy(x0_23, "ElGamal encryption: Input is too large", 0x27)
    var_90 = v0
    *x0_22 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_22[1])
    *x0_22 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_22, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

int64_t x23 = *(Botan::DL_Group::data() + 0x160)
int64_t var_78 = -1
__builtin_memset(&var_90, 0, 0x18)
int32_t var_70 = 1
Botan::BigInt::randomize(&var_90, arg4, x23.b)
Botan::Montgomery_Exponentation_State::exponentiation(*(Botan::DL_Group::data() + 0x138), &var_90)
Botan::Montgomery_Exponentation_State::exponentiation(*(arg1 + 0x20), &var_90)
Botan::Modular_Reducer::multiply(Botan::DL_Group::data() + 0x78, &result_1)
void* var_108

if (var_108 != 0)
    void* var_100_1 = var_108
    int64_t var_f8
    Botan::deallocate_memory(var_108, (var_f8 - var_108) s>> 2, 4)

void* var_e0
void* var_b8
Botan::BigInt::encode_fixed_length_int_pair(&var_b8, &var_e0, 
    (*(Botan::DL_Group::data() + 0x148) + 7) u>> 3)
void* x0_19 = var_e0

if (x0_19 != 0)
    void* var_d8_1 = x0_19
    int64_t var_d0
    Botan::deallocate_memory(x0_19, (var_d0 - x0_19) s>> 2, 4)

void* x0_20 = var_b8

if (x0_20 != 0)
    void* var_b0_1 = x0_20
    int64_t var_a8
    Botan::deallocate_memory(x0_20, (var_a8 - x0_20) s>> 2, 4)

void* x0_21 = var_90.q

if (x0_21 != 0)
    var_90:8.q = x0_21
    int64_t var_80
    Botan::deallocate_memory(x0_21, (var_80 - x0_21) s>> 2, 4)

void* result = result_1

if (result == 0)
    return result

void* result_2 = result
int64_t var_58
return Botan::deallocate_memory(result, (var_58 - result) s>> 2, 4)
