// 函数: sub_e4e140
// 地址: 0xe4e140
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t fp = _ReadMSR(tpidr_el0)
int64_t x9 = *(fp + 0x28)
int64_t var_78
__builtin_strncpy(&var_78, "client finished", 0xf)
int64_t var_88
__builtin_strncpy(&var_88, "server finished", 0xf)
uint64_t x0_1 = Botan::TLS::Handshake_State::protocol_specific_prf()
uint8_t* var_b8
__builtin_memset(&var_b8, 0, 0x30)
uint8_t* var_b0

if (arg3 != 1)
    uint8_t* x0_4 = operator new(0xf)
    var_b8 = x0_4
    var_b0 = x0_4
    void* var_a8_1 = &x0_4[0xf]
    std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::insert<uint8_t const*>(&var_b8, 
        x0_4, &var_88)
else
    uint8_t* x0_2 = operator new(0xf)
    var_b8 = x0_2
    var_b0 = x0_2
    void* var_a8 = &x0_2[0xf]
    std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::insert<uint8_t const*>(&var_b8, 
        x0_2, &var_78)
uint64_t x22_1 = zx.q(*(arg2 + 0x20))
Botan::TLS::kdf_algo_to_string(zx.q(*(arg2 + 0x40)))
Botan::TLS::Handshake_Hash::final(arg2 + 0xe8, x22_1)
uint64_t var_a0
uint64_t x25 = var_a0
int64_t var_98
int64_t x24 = var_98
void* var_d0
void* x23 = var_d0
size_t x26 = x24 - x25
void* var_c8
uint64_t x28 = var_c8 - x23 + x26
int64_t var_90

if (var_90 - x25 u< x28)
    uint64_t x0_9 = operator new(x28)
    x24 = x0_9 + x26
    
    if (x26 s>= 1)
        memcpy(x0_9, x25, x26)
    
    var_a0 = x0_9
    var_98 = x24
    uint64_t var_90_1 = x0_9 + x28
    
    if (x25 != 0)
        operator delete(x25)
        x24 = var_98
        x23 = var_d0

std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::insert<std::__ndk1::__wrap_iter<uint8_t const*> >(
    &var_a0, x24, x23)
void* x0_13 = var_d0
int64_t var_c0

if (x0_13 != 0)
    var_c8 = x0_13
    Botan::deallocate_memory(x0_13, var_c0 - x0_13, 1)

char var_e8
void* var_d8

if ((zx.d(var_e8) & 1) != 0)
    operator delete(var_d8)
uint64_t x2_4 = *(arg2 + 0x70)
uint64_t x4 = var_a0
Botan::KDF::derive_key(x0_1, 0xc, x2_4, *(arg2 + 0x78) - x2_4, x4, var_98 - x4, var_b8)
__builtin_memset(arg1, 0, 0x18)
void* x22_3 = var_c8 - var_d0

if (var_c8 == var_d0)
label_e4e3d8:
    
    if (var_d0 != 0)
        void* var_c8_1 = var_d0
        Botan::deallocate_memory(var_d0, var_c0 - var_d0, 1)
    
    uint8_t* x0_19 = var_b8
    
    if (x0_19 != 0)
        uint8_t* var_b0_1 = x0_19
        operator delete(x0_19)
    
    uint64_t x0_20 = var_a0
    
    if (x0_20 != 0)
        uint64_t var_98_1 = x0_20
        operator delete(x0_20)
    
    int64_t result = (*(*x0_1 + 8))(x0_1)
    
    if (*(fp + 0x28) == x9)
        return result
else
    if ((x22_3 & 0xffffffff80000000) == 0)
        void* x0_17
        int128_t v0_1
        int128_t v1_1
        x0_17, v0_1, v1_1 = operator new(x22_3)
        *arg1 = x0_17
        arg1[1] = x0_17
        arg1[2] = x0_17 + x22_3
        void* x9_3
        
        if (var_d0 == var_c8)
            x9_3 = x0_17
        else
            void* x8_8
            
            if (x22_3 u>= 0x20)
                if (x0_17 u< var_c8)
                    x8_8 = var_d0
                
                if (x0_17 u< var_c8 && var_d0 u< var_c8 + x0_17 - var_d0)
                    goto label_e4e3c0
                
                void* i_2 = x22_3 & 0xffffffffffffffe0
                void* x11_1 = var_d0 + 0x10
                x9_3 = x0_17 + i_2
                x8_8 = var_d0 + i_2
                void* x12_1 = x0_17 + 0x10
                void* i_1 = i_2
                void* i
                
                do
                    v0_1 = *(x11_1 - 0x10)
                    v1_1 = *x11_1
                    x11_1 += 0x20
                    i = i_1
                    i_1 -= 0x20
                    *(x12_1 - 0x10) = v0_1
                    *x12_1 = v1_1
                    x12_1 += 0x20
                while (i != 0x20)
                x0_17 = x9_3
                
                if (x22_3 != i_2)
                    goto label_e4e3c0
            else
                x8_8 = var_d0
            label_e4e3c0:
                x9_3 = x0_17
                
                do
                    char x10_1 = *x8_8
                    x8_8 += 1
                    *x9_3 = x10_1
                    x9_3 += 1
                while (var_c8 != x8_8)
        
        arg1[1] = x9_3
        goto label_e4e3d8
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()

__stack_chk_fail()
noreturn
