// 函数: _ZN5Botan19McEliece_PrivateKeyC1ERNS_21RandomNumberGeneratorEmm
// 地址: 0xda0c30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0xa0) = 0
*(arg1 + 0x80) = zx.o(0)
*(arg1 + 0x78) = _vtable_for_Botan::McEliece_PrivateKey + 0x208
*arg1 = _vtable_for_Botan::McEliece_PrivateKey + 0xd0
*(arg1 + 0x90) = zx.o(0)
*(arg1 + 8) = zx.o(0)
*(arg1 + 0x38) = zx.o(0)
*(arg1 + 0x18) = zx.o(0)
*(arg1 + 0x28) = zx.o(0)
*(arg1 + 0x48) = zx.o(0)
*(arg1 + 0x58) = zx.o(0)
int32_t x8_2

if ((arg3 & 0xffffffff80000000) != 0)
    x8_2 = 0x40
else if (arg3 u< 2)
    x8_2 = 0
else
    x8_2 = 0
    int64_t x10_1 = 1
    
    do
        x10_1 <<= 1
        x8_2 += 1
    while (x10_1 u< arg3)

uint64_t entry_x3
Botan::generate_mceliece_key(arg2, zx.q(x8_2.b), arg3, entry_x3)
void* __offset(vtable_for_Botan::McEliece_PrivateKey, 0xd0) var_108
Botan::polyn_gf2m* var_100
Botan::polyn_gf2m* var_e8
uint16_t* var_d0
uint32_t* var_b8
uint8_t* result

if (&var_108 != arg1)
    std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::assign<uint8_t*>(arg1 + 0x80, 
        result)
    int128_t var_70
    *(arg1 + 0x98) = var_70
    std::__ndk1::vector<Botan::polyn_gf2m, std::__ndk1::allocator<Botan::polyn_gf2m> >::assign<Botan::polyn_gf2m*>(
        arg1 + 8, var_100)
    std::__ndk1::vector<Botan::polyn_gf2m, std::__ndk1::allocator<Botan::polyn_gf2m> >::assign<Botan::polyn_gf2m*>(
        arg1 + 0x20, var_e8)
    std::__ndk1::vector<uint16_t, std::__ndk1::allocator<uint16_t> >::assign<uint16_t*>(
        arg1 + 0x38, var_d0)
    std::__ndk1::vector<uint32_t, std::__ndk1::allocator<uint32_t> >::assign<uint32_t*>(
        arg1 + 0x50, var_b8)

int128_t var_a0
*(arg1 + 0x68) = var_a0
void* __offset(vtable_for_Botan::McEliece_PrivateKey, 0x208) var_90 =
    _vtable_for_Botan::McEliece_PrivateKey + 0x208
var_108 = _vtable_for_Botan::McEliece_PrivateKey + 0xd0

if (var_b8 != 0)
    uint32_t* var_b0_1 = var_b8
    operator delete(var_b8)

if (var_d0 != 0)
    uint16_t* var_c8_1 = var_d0
    operator delete(var_d0)

if (var_e8 != 0)
    void* var_e0
    void* x21_1 = var_e0
    Botan::polyn_gf2m* x0_8
    
    if (x21_1 != var_e8)
        do
            int64_t* x19_1 = *(x21_1 - 8)
            int64_t x9_2
            
            if (x19_1 != 0)
                int32_t i
                
                do
                    x9_2 = __ldaxr(&x19_1[1])
                    i = __stlxr(x9_2 - 1, &x19_1[1])
                while (i != 0)
            
            void* x0_9
            
            if (x19_1 != 0 && x9_2 == 0)
                (*(*x19_1 + 0x10))(x19_1)
                std::__ndk1::__shared_weak_count::__release_weak()
                x0_9 = *(x21_1 - 0x28)
                
                if (x0_9 != 0)
                    goto label_da0dc4
            else
                x0_9 = *(x21_1 - 0x28)
                
                if (x0_9 != 0)
                label_da0dc4:
                    int64_t x8_5 = *(x21_1 - 0x18)
                    *(x21_1 - 0x20) = x0_9
                    Botan::deallocate_memory(x0_9, (x8_5 - x0_9) s>> 1, 2)
            x21_1 -= 0x30
        while (x21_1 != var_e8)
        
        x0_8 = var_e8
    else
        x0_8 = var_e8
    
    Botan::polyn_gf2m* var_e0_1 = var_e8
    operator delete(x0_8)

if (var_100 != 0)
    void* var_f8
    void* x21_2 = var_f8
    Botan::polyn_gf2m* x0_12
    
    if (x21_2 != var_100)
        do
            int64_t* x19_2 = *(x21_2 - 8)
            int64_t x9_3
            
            if (x19_2 != 0)
                int32_t i_1
                
                do
                    x9_3 = __ldaxr(&x19_2[1])
                    i_1 = __stlxr(x9_3 - 1, &x19_2[1])
                while (i_1 != 0)
            
            void* x0_13
            
            if (x19_2 != 0 && x9_3 == 0)
                (*(*x19_2 + 0x10))(x19_2)
                std::__ndk1::__shared_weak_count::__release_weak()
                x0_13 = *(x21_2 - 0x28)
                
                if (x0_13 != 0)
                    goto label_da0e60
            else
                x0_13 = *(x21_2 - 0x28)
                
                if (x0_13 != 0)
                label_da0e60:
                    int64_t x8_10 = *(x21_2 - 0x18)
                    *(x21_2 - 0x20) = x0_13
                    Botan::deallocate_memory(x0_13, (x8_10 - x0_13) s>> 1, 2)
            x21_2 -= 0x30
        while (x21_2 != var_100)
        
        x0_12 = var_100
    else
        x0_12 = var_100
    
    Botan::polyn_gf2m* var_f8_1 = var_100
    operator delete(x0_12)

int64_t (* var_90_1)() =
    construction_vtable_for_Botan::McEliece_PublicKey-in-Botan::McEliece_PrivateKey + 0x88

if (result == 0)
    return result

uint8_t* result_1 = result
return operator delete(result)
