// 函数: sub_f02724
// 地址: 0xf02724
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = (*(Botan::DL_Group::data() + 0x148) + 7) u>> 3
int128_t var_80

if (arg3 != x20 << 1)
    void** x0_33 = __cxa_allocate_exception(0x20)
    int64_t x0_34
    int128_t v2_1
    x0_34, v2_1 = operator new(0x30)
    v2_1 = data_71b820
    int64_t var_70_2 = x0_34
    __builtin_strncpy(x0_34, "ElGamal decryption: Invalid message", 0x24)
    var_80 = v2_1
    *x0_33 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_33[1])
    *x0_33 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_33, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

__builtin_memset(&var_80, 0, 0x18)
int64_t var_68 = -1
int32_t var_60 = 1
Botan::BigInt::binary_decode(&var_80, arg2)
void* var_a8
__builtin_memset(&var_a8, 0, 0x18)
int64_t var_90 = -1
int32_t var_88 = 1
Botan::BigInt::binary_decode(&var_a8, arg2 + x20)

if ((Botan::BigInt::cmp(&var_80, Botan::DL_Group::data()) & 0x80000000) != 0
        && (Botan::BigInt::cmp(&var_a8, Botan::DL_Group::data()) & 0x80000000) != 0)
    Botan::Blinder::blind(arg1 + 0x40)
    void* x0_13 = var_80.q
    int64_t var_b8
    int64_t var_68_1 = var_b8
    int64_t var_b8_1 = var_68
    int128_t var_d0
    var_80 = var_d0
    var_d0.q = x0_13
    int32_t var_b0
    int32_t var_60_1 = var_b0
    int32_t var_b0_1 = var_60
    int64_t var_70
    
    if (x0_13 != 0)
        var_d0:8.q = x0_13
        Botan::deallocate_memory(x0_13, (var_70 - x0_13) s>> 2, 4)
    
    void* var_120
    sub_f02ddc(&var_120, arg1, &var_80)
    Botan::inverse_mod(&var_120, Botan::DL_Group::data())
    void* var_f8
    Botan::Modular_Reducer::multiply(Botan::DL_Group::data() + 0x78, &var_f8)
    void* x0_21 = var_f8
    int64_t var_e8
    
    if (x0_21 != 0)
        void* var_f0_1 = x0_21
        Botan::deallocate_memory(x0_21, (var_e8 - x0_21) s>> 2, 4)
    
    void* x0_22 = var_120
    
    if (x0_22 != 0)
        void* var_118_1 = x0_22
        int64_t var_110
        Botan::deallocate_memory(x0_22, (var_110 - x0_22) s>> 2, 4)
    
    Botan::Blinder::unblind(arg1 + 0x40)
    Botan::BigInt::encode_1363(&var_f8, x20)
    void* x0_25 = var_f8
    
    if (x0_25 != 0)
        void* var_f0_2 = x0_25
        Botan::deallocate_memory(x0_25, (var_e8 - x0_25) s>> 2, 4)
    
    void* x0_26 = var_d0.q
    
    if (x0_26 != 0)
        var_d0:8.q = x0_26
        Botan::deallocate_memory(x0_26, (var_70 - x0_26) s>> 2, 4)
    
    void* x0_27 = var_a8
    
    if (x0_27 != 0)
        void* var_a0_1 = x0_27
        int64_t var_98
        Botan::deallocate_memory(x0_27, (var_98 - x0_27) s>> 2, 4)
    
    void* result = var_80.q
    
    if (result == 0)
        return result
    
    var_80:8.q = result
    int64_t var_c0
    return Botan::deallocate_memory(result, (var_c0 - result) s>> 2, 4)

void** x0_28 = __cxa_allocate_exception(0x20)
int64_t x0_29
int128_t v2
x0_29, v2 = operator new(0x30)
v2 = data_71b820
int64_t var_c0_2 = x0_29
__builtin_strncpy(x0_29, "ElGamal decryption: Invalid message", 0x24)
int128_t var_d0_1 = v2
*x0_28 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_28[1])
*x0_28 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_28, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
