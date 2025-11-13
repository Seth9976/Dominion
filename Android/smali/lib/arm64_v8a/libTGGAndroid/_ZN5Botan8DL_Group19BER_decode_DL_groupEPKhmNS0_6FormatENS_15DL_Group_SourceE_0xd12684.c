// 函数: _ZN5Botan8DL_Group19BER_decode_DL_groupEPKhmNS0_6FormatENS_15DL_Group_SourceE
// 地址: 0xd12684
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg3
void* result_1
__builtin_memset(&result_1, 0, 0x18)
void* var_80
__builtin_memset(&var_80, 0, 0x18)
void* var_a8
__builtin_memset(&var_a8, 0, 0x18)
int64_t var_40 = -1
int32_t var_38 = 1
int64_t var_68 = -1
int32_t var_60 = 1
int64_t var_90 = -1
int32_t var_88 = 1
uint8_t var_e0[0x10]
Botan::BER_Decoder::BER_Decoder(&var_e0, arg1)
Botan::BER_Decoder::start_cons(&var_e0, 0x10)
int128_t var_130
Botan::BigInt var_118
int64_t* var_f0

if (x21 == 0)
    Botan::BER_Decoder::decode(&var_118, &result_1, 2)
    Botan::BER_Decoder::decode(&var_118, &var_a8, 2)
    Botan::BER_Decoder::decode(&var_118, &var_80, 2)
    int64_t i
    
    do
        i = (**var_f0)(var_f0, &var_130, 1)
    while (i != 0)
else if (x21 == 2)
    Botan::BER_Decoder::decode(&var_118, &result_1, 2)
    Botan::BER_Decoder::decode(&var_118, &var_a8, 2)
    int64_t i_1
    
    do
        i_1 = (**var_f0)(var_f0, &var_130, 1)
    while (i_1 != 0)
else
    if (x21 != 1)
        void** x0_20 = __cxa_allocate_exception(0x20)
        std::__ndk1::to_string(x21)
        void var_148
        int128_t* x0_23
        int128_t v0
        x0_23, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
            &var_148, nullptr)
        int64_t var_120 = x0_23[1].q
        var_130 = *x0_23
        __builtin_memset(x0_23, 0, 0x18)
        *x0_20 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_20[1])
        *x0_20 = _vtable_for_Botan::Invalid_Argument + 0x10
        __cxa_throw(x0_20, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
        noreturn
    
    Botan::BER_Decoder::decode(&var_118, &result_1, 2)
    Botan::BER_Decoder::decode(&var_118, &var_80, 2)
    Botan::BER_Decoder::decode(&var_118, &var_a8, 2)
    Botan::BER_Decoder::verify_end()
void** x0_12 = operator new(0x188)
x0_12[2] = 0
*x0_12 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::DL_Group_Data, std::__ndk1::allocator<Botan::DL_Group_Data> >
    + 0x10
x0_12[1] = 0
Botan::DL_Group_Data::DL_Group_Data(&x0_12[3], &result_1, &var_80, &var_a8)
void** entry_x8
*entry_x8 = &x0_12[3]
entry_x8[1] = x0_12
int64_t var_e8_1 = 0
int64_t* var_e8

if (var_e8 != 0)
    (*(*var_e8 + 0x38))()

void* var_108

if (var_108 != 0)
    void* var_100_1 = var_108
    int64_t var_f8
    Botan::deallocate_memory(var_108, var_f8 - var_108, 1)

int64_t var_b0_1 = 0
int64_t* var_b0

if (var_b0 != 0)
    (*(*var_b0 + 0x38))()

void* var_d0

if (var_d0 != 0)
    void* var_c8_1 = var_d0
    int64_t var_c0
    Botan::deallocate_memory(var_d0, var_c0 - var_d0, 1)

void* x0_18 = var_a8

if (x0_18 != 0)
    void* var_a0_1 = x0_18
    int64_t var_98
    Botan::deallocate_memory(x0_18, (var_98 - x0_18) s>> 2, 4)

void* x0_19 = var_80

if (x0_19 != 0)
    void* var_78_1 = x0_19
    int64_t var_70
    Botan::deallocate_memory(x0_19, (var_70 - x0_19) s>> 2, 4)

void* result = result_1

if (result == 0)
    return result

void* result_2 = result
int64_t var_48
return Botan::deallocate_memory(result, (var_48 - result) s>> 2, 4)
