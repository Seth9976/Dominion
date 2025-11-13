// 函数: _ZN5Botan9Roughtime5Chain6appendERKNS0_4LinkEm
// 地址: 0xe082b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
int128_t var_d0
int64_t entry_x2

if (entry_x2 == 0)
    void** x0_11 = __cxa_allocate_exception(0x20)
    int64_t x0_12
    int128_t v0_3
    x0_12, v0_3 = operator new(0x20)
    int64_t var_c0_1 = x0_12
    var_d0 = data_71b7d0
    __builtin_strncpy(x0_12, "Max chain size must be positive", 0x20)
    *x0_11 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_11[1])
    *x0_11 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_11, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

void* x1 = *arg1
Botan::Roughtime::Link* x22 = *(arg1 + 8)
void* x8_1 = x22 - x1
int64_t x9_1 = (x8_1 s>> 3) * -0x1111111111111111
void* result

if (x9_1 u>= entry_x2)
    do
        int128_t var_b0
        
        if (x8_1 == 0x78)
            Botan::Roughtime::Link::Link(&var_d0)
            int128_t v0_2
            int128_t v1_2
            int128_t v2_2
            int128_t v3_2
            v0_2, v1_2, v2_2, v3_2 = Botan::Roughtime::nonce_from_blind(*arg1, arg2 + 0x38)
            int128_t var_110
            int128_t var_98_1 = var_110
            int128_t var_100
            int128_t var_88_1 = var_100
            int128_t var_f0
            int128_t var_78_1 = var_f0
            int128_t var_e0
            int128_t var_68_1 = var_e0
            Botan::Roughtime::Link* x21_1 = *arg1
            void* x22_1 = *(arg1 + 8)
            
            if (x22_1 != x21_1)
                bool cond:0_1
                
                do
                    void* x0_6 = *(x22_1 - 0x58)
                    *(x22_1 - 0x60) = _vtable_for_Botan::Ed25519_PublicKey + 0x88
                    
                    if (x0_6 != 0)
                        *(x22_1 - 0x50) = x0_6
                        operator delete(x0_6)
                    
                    void* x0_7 = *(x22_1 - 0x78)
                    
                    if (x0_7 != 0)
                        *(x22_1 - 0x70) = x0_7
                        operator delete(x0_7)
                    
                    cond:0_1 = x21_1 == x22_1 - 0x78
                    x22_1 -= 0x78
                while (not(cond:0_1))
            
            int64_t x8_5 = *(arg1 + 0x10)
            *(arg1 + 8) = x21_1
            
            if (x21_1 == x8_5)
                std::__ndk1::vector<Botan::Roughtime::Link, std::__ndk1::allocator<Botan::Roughtime::Link> >::__push_back_slow_path<Botan::Roughtime::Link const&>(
                    arg1)
            else
                Botan::Roughtime::Link::Link(x21_1)
                *(arg1 + 8) = x21_1 + 0x78
            
            void* x0_10 = var_b0.q
            void* __offset(vtable_for_Botan::Ed25519_PublicKey, 0x88) var_b8_1 =
                _vtable_for_Botan::Ed25519_PublicKey + 0x88
            
            if (x0_10 != 0)
                var_b0:8.q = x0_10
                operator delete(x0_10)
            
            result = var_d0.q
            
            if (result != 0)
                var_d0:8.q = result
                result = operator delete(result)
            
            goto label_e08494
        
        if (x9_1 u>= 2)
            int128_t v0_1
            int128_t v1_1
            int128_t v2_1
            int128_t v3_1
            v0_1, v1_1, v2_1, v3_1 = Botan::Roughtime::nonce_from_blind(x1, x1 + 0xb0)
            void* x8_4 = *arg1
            v3_1 = var_d0
            *(x8_4 + 0xd0) = var_b0
            int128_t var_a0
            *(x8_4 + 0xe0) = var_a0
            *(x8_4 + 0xb0) = v3_1
            int64_t var_c0
            *(x8_4 + 0xc0) = var_c0.o
            x1 = *arg1
        
        sub_e08748(arg1, x1)
        x1 = *arg1
        x22 = *(arg1 + 8)
        x8_1 = x22 - x1
        x9_1 = (x8_1 s>> 3) * -0x1111111111111111
    while (x9_1 u>= entry_x2)

if (x22 == *(arg1 + 0x10))
    result = std::__ndk1::vector<Botan::Roughtime::Link, std::__ndk1::allocator<Botan::Roughtime::Link> >::__push_back_slow_path<Botan::Roughtime::Link const&>(
        arg1)
else
    result = Botan::Roughtime::Link::Link(x22)
    *(arg1 + 8) = x22 + 0x78

label_e08494:

if (*(x23 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
