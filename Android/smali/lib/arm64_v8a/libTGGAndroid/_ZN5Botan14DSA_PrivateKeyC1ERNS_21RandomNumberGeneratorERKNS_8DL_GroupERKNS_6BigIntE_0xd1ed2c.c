// 函数: _ZN5Botan14DSA_PrivateKeyC1ERNS_21RandomNumberGeneratorERKNS_8DL_GroupERKNS_6BigIntE
// 地址: 0xd1ed2c
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
*arg1 = _vtable_for_Botan::DSA_PrivateKey + 0xa0
*(arg1 + 8) = _vtable_for_Botan::DSA_PrivateKey + 0x1b8
*(arg1 + 0x40) = 0
*(arg1 + 0x48) = _vtable_for_Botan::DSA_PrivateKey + 0x308
int64_t x9_1 = *arg3
int64_t x8_1 = *(arg3 + 8)
uint32_t** entry_x3

if (x8_1 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(x8_1 + 8) + 1, x8_1 + 8)
    while (i != 0)
    int64_t* x24_1 = *(arg1 + 0x40)
    *(arg1 + 0x38) = x9_1
    *(arg1 + 0x40) = x8_1
    
    if (x24_1 != 0)
        int64_t x9_2
        int32_t i_1
        
        do
            x9_2 = __ldaxr(&x24_1[1])
            i_1 = __stlxr(x9_2 - 1, &x24_1[1])
        while (i_1 != 0)
        
        if (x9_2 == 0)
            (*(*x24_1 + 0x10))(x24_1)
            std::__ndk1::__shared_weak_count::__release_weak()
    
    if (entry_x3[4].d != 0)
        goto label_d1ee10
    
    goto label_d1eedc

*(arg1 + 0x38) = x9_1
*(arg1 + 0x40) = x8_1
char var_98
void* var_88
void* result_1
int64_t var_60
int64_t var_58
int32_t var_50

if (entry_x3[4].d == 0)
label_d1eedc:
    
    if (arg1 + 0x50 != entry_x3)
        entry_x3[1]
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::assign<uint32_t*>(
            arg1 + 0x50, *entry_x3)
    
    *(arg1 + 0x68) = entry_x3[3]
    *(arg1 + 0x70) = entry_x3[4].d
else
label_d1ee10:
    int64_t i_4 = entry_x3[3]
    
    if (i_4 == -1)
        uint32_t* x9_3 = *entry_x3
        int64_t x11_4 = entry_x3[1]
        void* x10_3 = x11_4 - x9_3
        
        if (x11_4 == x9_3)
            i_4 = 0
            entry_x3[3] = 0
        else
            void* x12_2
            
            x12_2 = x10_3 s>= 0 ? x10_3 : -ffffffffffffffff
            
            void* x11_5 = x9_3 - x11_4
            void* x12_3
            
            x12_3 = x12_2 s< 1 ? x12_2 : 1
            
            i_4 = x10_3 s>> 2
            void* x10_4
            
            x10_4 = x11_5 s> x10_3 ? x11_5 : x10_3
            
            int64_t i_5 = x12_3 * (x10_4 u>> 2)
            uint64_t x11_6 = 1
            int64_t i_2
            
            do
                int32_t x12_4 = *(x9_3 - 4 + (i_5 << 2))
                i_2 = i_5
                i_5 -= 1
                x11_6 = zx.q(x11_6.d) & zx.q(((x12_4 - 1) & not.d(x12_4)) s>> 0x1f)
                i_4 -= x11_6
            while (i_2 != 1)
            entry_x3[3] = i_4
            
            if (i_4 u> 1)
                goto label_d1eedc
    else if (i_4 u> 1)
        goto label_d1eedc
    
    if (i_4 != 0)
        uint32_t* x9_5 = *entry_x3
        int32_t x10_6 = 0
        int32_t i_3
        
        do
            uint32_t x11_7 = *x9_5
            x9_5 = &x9_5[1]
            i_3 = i_4
            i_4 -= 1
            int32_t x11_9 = ((x11_7 - 1) & not.d(x11_7)) s>> 0x1f
            x10_6 = (x10_6 & x11_9) | (not.d(x11_9) & 1)
        while (i_3 != 1)
        
        if (x10_6 != 0)
            goto label_d1eedc
    
    __builtin_memset(&var_98, 0, 0x18)
    int32_t var_78_1 = 1
    int64_t var_80_1 = -1
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&var_98)
    *var_98.q = 2
    void* x8_15 = var_98.q
    int64_t var_80_2 = -1
    int64_t var_90
    
    if ((var_90 - x8_15) s>> 2 u>= 2)
        *(x8_15 + 4) = 0
    
    int128_t v0_2
    int128_t v1_1
    v0_2, v1_1 = Botan::BigInt::random_integer(arg2, &var_98, Botan::DL_Group::data() + 0x28)
    void* result_4
    void* result_3
    
    if (arg1 + 0x50 == &result_1)
        result_3 = result_1
        
        if (result_3 != 0)
            result_4 = result_3
            Botan::deallocate_memory(result_3, (var_60 - result_3) s>> 2, 4)
    else
        v1_1 = *(arg1 + 0x50)
        *(arg1 + 0x50) = result_1.o
        result_1.o = v1_1
        int64_t x11_13 = *(arg1 + 0x60)
        int64_t x9_11 = *(arg1 + 0x68)
        result_3 = v1_1.q
        *(arg1 + 0x60) = var_60
        *(arg1 + 0x68) = var_58
        var_60 = x11_13
        var_58 = x9_11
        int32_t x9_12 = *(arg1 + 0x70)
        *(arg1 + 0x70) = var_50
        var_50 = x9_12
        
        if (result_3 != 0)
            result_4 = result_3
            Botan::deallocate_memory(result_3, (var_60 - result_3) s>> 2, 4)
    void* x0_15 = var_98.q
    
    if (x0_15 != 0)
        void* var_90_1 = x0_15
        Botan::deallocate_memory(x0_15, (var_88 - x0_15) s>> 2, 4)

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x0_4 = Botan::DL_Group::data()
var_98 = 0xc
int32_t var_97
__builtin_strncpy(&var_97, "q_bits", 7)
Botan::DL_Group_Data::assert_q_is_set(x0_4)

if ((zx.d(var_98) & 1) != 0)
    operator delete(var_88)

*(Botan::DL_Group::data() + 0x150)
Botan::Montgomery_Exponentation_State::exponentiation(*(Botan::DL_Group::data() + 0x138), 
    arg1 + 0x50)
void* result
void* result_2

if (arg1 + 0x10 == &result_1)
    result = result_1
    
    if (result != 0)
        result_2 = result
        return Botan::deallocate_memory(result, (var_60 - result) s>> 2, 4)
else
    result = *(arg1 + 0x10)
    int128_t v0_1 = result_1.o
    result_1 = result
    *(arg1 + 0x10) = v0_1
    int64_t x11_12 = *(arg1 + 0x20)
    int64_t x9_6 = *(arg1 + 0x28)
    *(arg1 + 0x20) = var_60
    *(arg1 + 0x28) = var_58
    int64_t var_58_1 = x9_6
    int32_t x9_7 = *(arg1 + 0x30)
    *(arg1 + 0x30) = var_50
    int32_t var_50_1 = x9_7
    
    if (result != 0)
        result_2 = result
        return Botan::deallocate_memory(result, (x11_12 - result) s>> 2, 4)
return result
