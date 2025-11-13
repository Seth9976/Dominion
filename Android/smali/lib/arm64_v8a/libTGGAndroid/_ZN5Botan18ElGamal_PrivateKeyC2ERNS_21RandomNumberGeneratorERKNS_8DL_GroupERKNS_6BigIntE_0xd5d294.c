// 函数: _ZN5Botan18ElGamal_PrivateKeyC2ERNS_21RandomNumberGeneratorERKNS_8DL_GroupERKNS_6BigIntE
// 地址: 0xd5d294
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(arg2 + 8)
*arg1 = x8
*(arg1 + *(x8 - 0x88)) = *(arg2 + 0x10)
*(arg1 + *(*arg1 - 0x90)) = *(arg2 + 0x18)
void* x8_4 = *arg2
*arg1 = x8_4
*(arg1 + *(x8_4 - 0x88)) = *(arg2 + 0x20)
*(arg1 + *(*arg1 - 0x90)) = *(arg2 + 0x28)
*(arg1 + *(*arg1 - 0x98)) = *(arg2 + 0x30)
*(arg1 + *(*arg1 - 0xa0)) = *(arg2 + 0x38)
int64_t* entry_x4

if (arg1 + 0x50 != entry_x4)
    entry_x4[1]
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::assign<uint32_t*>(
        arg1 + 0x50, *entry_x4)

*(arg1 + 0x68) = entry_x4[3]
*(arg1 + 0x70) = entry_x4[4].d
int64_t* entry_x3
int64_t x9_6 = *entry_x3
int64_t x8_14 = entry_x3[1]

if (x8_14 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(x8_14 + 8) + 1, x8_14 + 8)
    while (i != 0)

int64_t* x22_1 = *(arg1 + 0x40)
*(arg1 + 0x38) = x9_6
*(arg1 + 0x40) = x8_14
int64_t x9_7

if (x22_1 != 0)
    int32_t i_1
    
    do
        x9_7 = __ldaxr(&x22_1[1])
        i_1 = __stlxr(x9_7 - 1, &x22_1[1])
    while (i_1 != 0)

int64_t x8_16

if (x22_1 != 0 && x9_7 == 0)
    (*(*x22_1 + 0x10))(x22_1)
    std::__ndk1::__shared_weak_count::__release_weak()
    x8_16 = *(arg1 + 0x68)
    
    if (x8_16 != -1)
        goto label_d5d398
    
    goto label_d5d430

x8_16 = *(arg1 + 0x68)
void* result
void* result_1
int64_t var_50
int64_t var_48
int32_t var_40

if (x8_16 == -1)
label_d5d430:
    int64_t x9_10 = *(arg1 + 0x50)
    int64_t x11_5 = *(arg1 + 0x58)
    int64_t x10_4 = x11_5 - x9_10
    
    if (x11_5 != x9_10)
        int64_t x12_2
        
        x12_2 = x10_4 s>= 0 ? x10_4 : -1
        
        int64_t x11_6 = x9_10 - x11_5
        int64_t x12_3
        
        x12_3 = x12_2 s< 1 ? x12_2 : 1
        
        int64_t x8_22 = x10_4 s>> 2
        int64_t x10_5
        
        x10_5 = x11_6 s> x10_4 ? x11_6 : x10_4
        
        int64_t i_3 = x12_3 * (x10_5 u>> 2)
        uint64_t x11_7 = 1
        int32_t i_2
        
        do
            int32_t x12_4 = *(x9_10 - 4 + (i_3 << 2))
            i_2 = i_3
            i_3 -= 1
            x11_7 = zx.q(x11_7.d) & zx.q(((x12_4 - 1) & not.d(x12_4)) s>> 0x1f)
            x8_22 -= x11_7
        while (i_2 != 1)
        *(arg1 + 0x68) = x8_22
        
        if (x8_22 != 0)
            goto label_d5d3a0
        
        goto label_d5d4ac
    
    *(arg1 + 0x68) = 0
label_d5d4ac:
    Botan::BigInt::randomize(arg1 + 0x50, arg3, (*(Botan::DL_Group::data() + 0x160)).b)
    Botan::Montgomery_Exponentation_State::exponentiation(*(Botan::DL_Group::data() + 0x138), 
        arg1 + 0x50)
    void* result_3
    
    if (arg1 + 0x10 == &result_1)
        result = result_1
        
        if (result != 0)
            result_3 = result
            return Botan::deallocate_memory(result, (var_50 - result) s>> 2, 4)
    else
        result = *(arg1 + 0x10)
        int128_t v0_1 = result_1.o
        result_1 = result
        *(arg1 + 0x10) = v0_1
        int64_t x11_8 = *(arg1 + 0x20)
        int64_t x9_12 = *(arg1 + 0x28)
        *(arg1 + 0x20) = var_50
        *(arg1 + 0x28) = var_48
        int64_t var_48_2 = x9_12
        int32_t x9_13 = *(arg1 + 0x30)
        *(arg1 + 0x30) = var_40
        int32_t var_40_2 = x9_13
        
        if (result != 0)
            result_3 = result
            return Botan::deallocate_memory(result, (x11_8 - result) s>> 2, 4)
else
label_d5d398:
    
    if (x8_16 == 0)
        goto label_d5d4ac
    
label_d5d3a0:
    *(Botan::DL_Group::data() + 0x148)
    Botan::Montgomery_Exponentation_State::exponentiation(*(Botan::DL_Group::data() + 0x138), 
        arg1 + 0x50)
    void* result_2
    
    if (arg1 + 0x10 == &result_1)
        result = result_1
        
        if (result != 0)
            result_2 = result
            return Botan::deallocate_memory(result, (var_50 - result) s>> 2, 4)
    else
        result = *(arg1 + 0x10)
        int128_t v0 = result_1.o
        result_1 = result
        *(arg1 + 0x10) = v0
        int64_t x11_4 = *(arg1 + 0x20)
        int64_t x9_8 = *(arg1 + 0x28)
        *(arg1 + 0x20) = var_50
        *(arg1 + 0x28) = var_48
        int64_t var_48_1 = x9_8
        int32_t x9_9 = *(arg1 + 0x30)
        *(arg1 + 0x30) = var_40
        int32_t var_40_1 = x9_9
        
        if (result != 0)
            result_2 = result
            return Botan::deallocate_memory(result, (x11_4 - result) s>> 2, 4)
return result
