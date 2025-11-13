// 函数: _ZNK5Botan3TLS6Policy25check_peer_key_acceptableERKNS_10Public_KeyE
// 地址: 0xe73f48
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x1
(*(*entry_x1 + 0x10))(entry_x1)
uint64_t result = (*(*entry_x1 + 0x20))(entry_x1)
char var_48
uint64_t x10 = zx.q(var_48)
uint64_t var_40
uint64_t x8_3 = var_40
uint64_t result_1 = result
int32_t x9_1 = x10.d & 1
uint64_t x10_1 = x10 u>> 1
uint64_t x11

x11 = x9_1 == 0 ? x10_1 : x8_3

if (x11 != 3)
    goto label_e73fd8

result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
    &var_48, 0, -ffffffffffffffff, &data_76da56)
void* var_38

if (result.d == 0)
    result = (*(*arg1 + 0xd0))(arg1)
label_e74168:
    
    if (result_1 u< result)
        void** x0_14 = __cxa_allocate_exception(0x28)
        std::__ndk1::to_string(result_1)
        void var_f8
        int128_t* x0_17
        int128_t v0
        x0_17, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
            &var_f8, nullptr)
        int64_t var_d0 = x0_17[1].q
        int128_t var_e0 = *x0_17
        __builtin_memset(x0_17, 0, 0x18)
        int128_t* x0_19
        int128_t v0_1
        x0_19, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            &var_e0)
        int64_t var_b0 = x0_19[1].q
        int128_t var_c0 = *x0_19
        __builtin_memset(x0_19, 0, 0x18)
        void* x1_1
        
        if ((zx.d(var_48) & 1) == 0)
            x1_1 = &var_48 | 1
        else
            x1_1 = var_38
        
        int128_t* x0_21
        int128_t v0_2
        x0_21, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            &var_c0, x1_1)
        int64_t var_90 = x0_21[1].q
        int128_t var_a0 = *x0_21
        __builtin_memset(x0_21, 0, 0x18)
        int128_t* x0_23
        int128_t v0_3
        x0_23, v0_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            &var_a0)
        int64_t var_70 = x0_23[1].q
        int128_t var_80 = *x0_23
        __builtin_memset(x0_23, 0, 0x18)
        std::__ndk1::to_string(result)
        char var_110
        uint64_t x1_3
        uint64_t var_100
        
        if ((zx.d(var_110) & 1) == 0)
            x1_3 = &var_110 | 1
        else
            x1_3 = var_100
        int128_t* x0_26
        int128_t v0_4
        x0_26, v0_4 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            &var_80, x1_3)
        int64_t var_50 = x0_26[1].q
        int128_t var_60 = *x0_26
        __builtin_memset(x0_26, 0, 0x18)
        *x0_14 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_14[1])
        x0_14[4].d = 0x47
        *x0_14 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
        __cxa_throw(x0_14, _typeinfo_for_Botan::TLS::TLS_Exception, Botan::Exception::~Exception)
        noreturn
else
    uint64_t x10_2 = zx.q(var_48)
    x8_3 = var_40
    x9_1 = x10_2.d & 1
    x10_1 = x10_2 u>> 1
label_e73fd8:
    uint64_t x11_1
    
    if ((x9_1 & 0xff) == 0)
        x11_1 = x10_1
    else
        x11_1 = x8_3
    
    if (x11_1 == 2)
        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            &var_48, 0, -ffffffffffffffff, &data_72d952)
        
        if (result.d == 0)
            result = (*(*arg1 + 0xb8))(arg1)
            goto label_e74168
        
        uint64_t x10_3 = zx.q(var_48)
        x8_3 = var_40
        x9_1 = x10_3.d & 1
        x10_1 = x10_3 u>> 1
    
    uint64_t x11_2
    
    if ((x9_1 & 0xff) == 0)
        x11_2 = x10_1
    else
        x11_2 = x8_3
    
    if (x11_2 != 3)
        goto label_e74058
    
    result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        &var_48, 0, -ffffffffffffffff, &data_72065f)
    
    if (result.d == 0)
        result = (*(*arg1 + 0xd8))(arg1)
        goto label_e74168
    
    uint64_t x10_4 = zx.q(var_48)
    x8_3 = var_40
    x9_1 = x10_4.d & 1
    x10_1 = x10_4 u>> 1
label_e74058:
    uint64_t x11_3
    
    if ((x9_1 & 0xff) == 0)
        x11_3 = x10_1
    else
        x11_3 = x8_3
    
    if (x11_3 != 4)
        goto label_e74098
    
    result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        &var_48, 0, -ffffffffffffffff, "ECDH")
    
    if (result.d == 0)
    label_e74138:
        result = (*(*arg1 + 0xc8))(arg1)
        goto label_e74168
    
    uint64_t x10_5 = zx.q(var_48)
    x8_3 = var_40
    x9_1 = x10_5.d & 1
    x10_1 = x10_5 u>> 1
label_e74098:
    uint64_t x11_4
    
    if ((x9_1 & 0xff) == 0)
        x11_4 = x10_1
    else
        x11_4 = x8_3
    
    if (x11_4 == 0xa)
        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            &var_48, 0, -ffffffffffffffff, "Curve25519")
        
        if (result.d == 0)
            goto label_e74138
        
        uint64_t x10_6 = zx.q(var_48)
        x8_3 = var_40
        x9_1 = x10_6.d & 1
        x10_1 = x10_6 u>> 1
    
    uint64_t x8_4
    
    if ((x9_1 & 0xff) == 0)
        x8_4 = x10_1
    else
        x8_4 = x8_3
    
    if (x8_4 == 5)
        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            &var_48, 0, -ffffffffffffffff, "ECDSA")
        
        if (result.d == 0)
            result = (*(*arg1 + 0xc0))(arg1)
            goto label_e74168

if ((zx.d(var_48) & 1) == 0)
    return result

return operator delete(var_38)
