// 函数: _ZN5Botan42verify_cert_constraints_valid_for_key_typeERKNS_10Public_KeyENS_15Key_ConstraintsE
// 地址: 0xe9a324
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2
int64_t result = (*(*arg1 + 0x10))()
char var_38
uint64_t x10 = zx.q(var_38)
uint64_t var_30
uint64_t x8_1 = var_30
int32_t x9_1 = x10.d & 1
uint64_t x10_1 = x10 u>> 1
uint64_t x11

x11 = x9_1 == 0 ? x10_1 : x8_1

if (x11 != 2)
    goto label_e9a394

result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
    &var_38, 0, -ffffffffffffffff, &data_72d952)
int64_t x20

if (result.d == 0)
    x20 = 0x980
else
    uint64_t x10_2 = zx.q(var_38)
    x8_1 = var_30
    x9_1 = x10_2.d & 1
    x10_1 = x10_2 u>> 1
label_e9a394:
    uint64_t x8_2
    
    if ((x9_1 & 0xff) == 0)
        x8_2 = x10_1
    else
        x8_2 = x8_1
    
    if (x8_2 != 4)
        x20 = 0
    else
        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            &var_38, 0, -ffffffffffffffff, "ECDH")
        
        x20 = result.d == 0 ? 0x980 : 0

uint64_t x10_3 = zx.q(var_38)
uint64_t x8_3 = var_30
int32_t x9_2 = x10_3.d & 1
uint64_t x10_4 = x10_3 u>> 1
uint64_t x11_1

x11_1 = x9_2 == 0 ? x10_4 : x8_3

if (x11_1 != 3)
    goto label_e9a428

result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
    &var_38, 0, -ffffffffffffffff, &data_76da56)
int32_t x21

if (result.d == 0)
    x21 = 1
else
    uint64_t x10_5 = zx.q(var_38)
    x8_3 = var_30
    x9_2 = x10_5.d & 1
    x10_4 = x10_5 u>> 1
label_e9a428:
    uint64_t x8_4
    
    if ((x9_2 & 0xff) == 0)
        x8_4 = x10_4
    else
        x8_4 = x8_3
    
    if (x8_4 != 7)
        x21 = 0
    else
        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            &var_38, 0, -ffffffffffffffff, "ElGamal")
        x21 = result.d == 0 ? 1 : 0

uint64_t x10_6 = zx.q(var_38)
uint64_t x8_5 = var_30
int32_t x9_3 = x10_6.d & 1
uint64_t x10_7 = x10_6 u>> 1
uint64_t x11_2

x11_2 = x9_3 == 0 ? x10_7 : x8_5

if (x11_2 != 3)
    goto label_e9a4b8

result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
    &var_38, 0, -ffffffffffffffff, &data_76da56)
int64_t x8_8

if (result.d == 0)
label_e9a6b8:
    
    if (x21 == 0)
        x8_8 = x20
        goto label_e9a6c4
    
    x8_8 = x20 | 0x3000
label_e9a6c4:
    x8_8 |= 0xc600
label_e9a6c8:
    
    if ((x19 & not.d(x8_8.d)) != 0)
    label_e9a708:
        void** x0_14 = __cxa_allocate_exception(0x20)
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "Invalid ", &var_38)
        char var_88[0x18]
        int128_t* x0_16
        int128_t v0
        x0_16, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            &var_88)
        int64_t var_60 = x0_16[1].q
        int128_t var_70 = *x0_16
        __builtin_memset(x0_16, 0, 0x18)
        Botan::key_constraints_to_string(zx.q(x19))
        char var_a0
        uint64_t x1_2
        uint64_t var_90
        
        if ((zx.d(var_a0) & 1) == 0)
            x1_2 = &var_a0 | 1
        else
            x1_2 = var_90
        int128_t* x0_19
        int128_t v0_1
        x0_19, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            &var_70, x1_2)
        int64_t var_40 = x0_19[1].q
        int128_t var_50 = *x0_19
        __builtin_memset(x0_19, 0, 0x18)
        *x0_14 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_14[1])
        *x0_14 = _vtable_for_Botan::Invalid_Argument + 0x10
        __cxa_throw(x0_14, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
        noreturn
else
    uint64_t x10_8 = zx.q(var_38)
    x8_5 = var_30
    x9_3 = x10_8.d & 1
    x10_7 = x10_8 u>> 1
label_e9a4b8:
    uint64_t x11_3
    
    if ((x9_3 & 0xff) == 0)
        x11_3 = x10_7
    else
        x11_3 = x8_5
    
    if (x11_3 == 3)
        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            &var_38, 0, -ffffffffffffffff, &data_72065f)
        
        if (result.d == 0)
            goto label_e9a6b8
        
        uint64_t x10_9 = zx.q(var_38)
        x8_5 = var_30
        x9_3 = x10_9.d & 1
        x10_7 = x10_9 u>> 1
    
    uint64_t x11_4
    
    if ((x9_3 & 0xff) == 0)
        x11_4 = x10_7
    else
        x11_4 = x8_5
    
    if (x11_4 != 5)
        goto label_e9a538
    
    result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        &var_38, 0, -ffffffffffffffff, "ECDSA")
    
    if (result.d == 0)
        goto label_e9a6b8
    
    uint64_t x10_10 = zx.q(var_38)
    x8_5 = var_30
    x9_3 = x10_10.d & 1
    x10_7 = x10_10 u>> 1
label_e9a538:
    uint64_t x11_5
    
    if ((x9_3 & 0xff) == 0)
        x11_5 = x10_7
    else
        x11_5 = x8_5
    
    if (x11_5 != 6)
        goto label_e9a578
    
    result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        &var_38, 0, -ffffffffffffffff, "ECGDSA")
    
    if (result.d == 0)
        goto label_e9a6b8
    
    uint64_t x10_11 = zx.q(var_38)
    x8_5 = var_30
    x9_3 = x10_11.d & 1
    x10_7 = x10_11 u>> 1
label_e9a578:
    uint64_t x11_6
    
    if ((x9_3 & 0xff) == 0)
        x11_6 = x10_7
    else
        x11_6 = x8_5
    
    if (x11_6 != 7)
        goto label_e9a5b8
    
    result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        &var_38, 0, -ffffffffffffffff, "ECKCDSA")
    
    if (result.d == 0)
        goto label_e9a6b8
    
    uint64_t x10_12 = zx.q(var_38)
    x8_5 = var_30
    x9_3 = x10_12.d & 1
    x10_7 = x10_12 u>> 1
label_e9a5b8:
    uint64_t x11_7
    
    if ((x9_3 & 0xff) == 0)
        x11_7 = x10_7
    else
        x11_7 = x8_5
    
    if (x11_7 != 7)
        goto label_e9a5f8
    
    result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        &var_38, 0, -ffffffffffffffff, "Ed25519")
    
    if (result.d == 0)
        goto label_e9a6b8
    
    uint64_t x10_13 = zx.q(var_38)
    x8_5 = var_30
    x9_3 = x10_13.d & 1
    x10_7 = x10_13 u>> 1
label_e9a5f8:
    uint64_t x11_8
    
    if ((x9_3 & 0xff) == 0)
        x11_8 = x10_7
    else
        x11_8 = x8_5
    
    if (x11_8 != 0xa)
        goto label_e9a638
    
    result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        &var_38, 0, -ffffffffffffffff, "GOST-34.10")
    
    if (result.d == 0)
        goto label_e9a6b8
    
    uint64_t x10_14 = zx.q(var_38)
    x8_5 = var_30
    x9_3 = x10_14.d & 1
    x10_7 = x10_14 u>> 1
label_e9a638:
    uint64_t x11_9
    
    if ((x9_3 & 0xff) == 0)
        x11_9 = x10_7
    else
        x11_9 = x8_5
    
    if (x11_9 != 0x13)
        goto label_e9a678
    
    result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        &var_38, 0, -ffffffffffffffff, "GOST-34.10-2012-256")
    
    if (result.d == 0)
        goto label_e9a6b8
    
    uint64_t x10_15 = zx.q(var_38)
    x8_5 = var_30
    x9_3 = x10_15.d & 1
    x10_7 = x10_15 u>> 1
label_e9a678:
    uint64_t x8_6
    
    if ((x9_3 & 0xff) == 0)
        x8_6 = x10_7
    else
        x8_6 = x8_5
    
    if (x8_6 == 0x13)
        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            &var_38, 0, -ffffffffffffffff, "GOST-34.10-2012-512")
        
        if (x21 != 0)
            x8_8 = x20 | 0x3000
        else
            x8_8 = x20
        
        if (result.d != 0)
            goto label_e9a6c8
        
        goto label_e9a6c4
    
    int32_t x8_12
    
    if (x21 != 0)
        x8_12 = x20.d | 0x3000
    else
        x8_12 = x20.d
    
    if ((x19 & not.d(x8_12)) != 0)
        goto label_e9a708

if ((zx.d(var_38) & 1) == 0)
    return result

void* var_28
return operator delete(var_28)
