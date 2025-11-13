// 函数: _ZN5Botan18ElGamal_PrivateKeyC1ERNS_21RandomNumberGeneratorERKNS_8DL_GroupERKNS_6BigIntE
// 地址: 0xd5d588
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x18) = 0
*(arg1 + 0x20) = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x28) = -1
*(arg1 + 0x30) = 1
*(arg1 + 0x38) = 0
*(arg1 + 0x50) = 0
*(arg1 + 0x68) = -1
*(arg1 + 0x70) = 1
*(arg1 + 0x58) = 0
*(arg1 + 0x60) = 0
*arg1 = _vtable_for_Botan::ElGamal_PrivateKey + 0xa0
*(arg1 + 8) = _vtable_for_Botan::ElGamal_PrivateKey + 0x1b8
*(arg1 + 0x40) = 0
*(arg1 + 0x48) = _vtable_for_Botan::ElGamal_PrivateKey + 0x308
int64_t* entry_x3

if (arg1 + 0x50 != entry_x3)
    entry_x3[1]
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::assign<uint32_t*>(
        arg1 + 0x50, *entry_x3)

*(arg1 + 0x68) = entry_x3[3]
*(arg1 + 0x70) = entry_x3[4].d
int64_t x9_1 = *arg3
int64_t x8_3 = *(arg3 + 8)

if (x8_3 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(x8_3 + 8) + 1, x8_3 + 8)
    while (i != 0)

int64_t* x23_1 = *(arg1 + 0x40)
*(arg1 + 0x38) = x9_1
*(arg1 + 0x40) = x8_3
int64_t x9_2

if (x23_1 != 0)
    int32_t i_1
    
    do
        x9_2 = __ldaxr(&x23_1[1])
        i_1 = __stlxr(x9_2 - 1, &x23_1[1])
    while (i_1 != 0)

int64_t x8_5

if (x23_1 != 0 && x9_2 == 0)
    (*(*x23_1 + 0x10))(x23_1)
    std::__ndk1::__shared_weak_count::__release_weak()
    x8_5 = *(arg1 + 0x68)
    
    if (x8_5 != -1)
        goto label_d5d670
    
    goto label_d5d704

x8_5 = *(arg1 + 0x68)
void* result
void* result_1
int64_t var_60
int64_t var_58
int32_t var_50

if (x8_5 == -1)
label_d5d704:
    int64_t x9_5 = *(arg1 + 0x50)
    int64_t x11_5 = *(arg1 + 0x58)
    int64_t x10_4 = x11_5 - x9_5
    
    if (x11_5 != x9_5)
        int64_t x12_2
        
        x12_2 = x10_4 s>= 0 ? x10_4 : -1
        
        int64_t x11_6 = x9_5 - x11_5
        int64_t x12_3
        
        x12_3 = x12_2 s< 1 ? x12_2 : 1
        
        int64_t x8_10 = x10_4 s>> 2
        int64_t x10_5
        
        x10_5 = x11_6 s> x10_4 ? x11_6 : x10_4
        
        int64_t i_3 = x12_3 * (x10_5 u>> 2)
        uint64_t x11_7 = 1
        int32_t i_2
        
        do
            int32_t x12_4 = *(x9_5 - 4 + (i_3 << 2))
            i_2 = i_3
            i_3 -= 1
            x11_7 = zx.q(x11_7.d) & zx.q(((x12_4 - 1) & not.d(x12_4)) s>> 0x1f)
            x8_10 -= x11_7
        while (i_2 != 1)
        *(arg1 + 0x68) = x8_10
        
        if (x8_10 != 0)
            goto label_d5d67c
        
        goto label_d5d780
    
    *(arg1 + 0x68) = 0
label_d5d780:
    Botan::BigInt::randomize(arg1 + 0x50, arg2, (*(Botan::DL_Group::data() + 0x160)).b)
    Botan::Montgomery_Exponentation_State::exponentiation(*(Botan::DL_Group::data() + 0x138), 
        arg1 + 0x50)
    void* result_3
    
    if (arg1 + 0x10 == &result_1)
        result = result_1
        
        if (result != 0)
            result_3 = result
            return Botan::deallocate_memory(result, (var_60 - result) s>> 2, 4)
    else
        result = *(arg1 + 0x10)
        int128_t v0_1 = result_1.o
        result_1 = result
        *(arg1 + 0x10) = v0_1
        int64_t x11_8 = *(arg1 + 0x20)
        int64_t x9_7 = *(arg1 + 0x28)
        *(arg1 + 0x20) = var_60
        *(arg1 + 0x28) = var_58
        int64_t var_58_2 = x9_7
        int32_t x9_8 = *(arg1 + 0x30)
        *(arg1 + 0x30) = var_50
        int32_t var_50_2 = x9_8
        
        if (result != 0)
            result_3 = result
            return Botan::deallocate_memory(result, (x11_8 - result) s>> 2, 4)
else
label_d5d670:
    
    if (x8_5 == 0)
        goto label_d5d780
    
label_d5d67c:
    *(Botan::DL_Group::data() + 0x148)
    Botan::Montgomery_Exponentation_State::exponentiation(*(Botan::DL_Group::data() + 0x138), 
        arg1 + 0x50)
    void* result_2
    
    if (arg1 + 0x10 == &result_1)
        result = result_1
        
        if (result != 0)
            result_2 = result
            return Botan::deallocate_memory(result, (var_60 - result) s>> 2, 4)
    else
        result = *(arg1 + 0x10)
        int128_t v0 = result_1.o
        result_1 = result
        *(arg1 + 0x10) = v0
        int64_t x11_4 = *(arg1 + 0x20)
        int64_t x9_3 = *(arg1 + 0x28)
        *(arg1 + 0x20) = var_60
        *(arg1 + 0x28) = var_58
        int64_t var_58_1 = x9_3
        int32_t x9_4 = *(arg1 + 0x30)
        *(arg1 + 0x30) = var_50
        int32_t var_50_1 = x9_4
        
        if (result != 0)
            result_2 = result
            return Botan::deallocate_memory(result, (x11_4 - result) s>> 2, 4)
return result
