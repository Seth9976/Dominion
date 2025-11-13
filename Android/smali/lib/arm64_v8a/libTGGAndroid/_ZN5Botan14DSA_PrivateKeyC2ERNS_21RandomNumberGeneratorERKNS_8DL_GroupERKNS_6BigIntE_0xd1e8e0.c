// 函数: _ZN5Botan14DSA_PrivateKeyC2ERNS_21RandomNumberGeneratorERKNS_8DL_GroupERKNS_6BigIntE
// 地址: 0xd1e8e0
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
int64_t* entry_x3
int64_t x9_6 = *entry_x3
int64_t x8_12 = entry_x3[1]

if (x8_12 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(x8_12 + 8) + 1, x8_12 + 8)
    while (i != 0)

int64_t* x23 = *(arg1 + 0x40)
*(arg1 + 0x38) = x9_6
*(arg1 + 0x40) = x8_12
int64_t x9_7

if (x23 != 0)
    int32_t i_1
    
    do
        x9_7 = __ldaxr(&x23[1])
        i_1 = __stlxr(x9_7 - 1, &x23[1])
    while (i_1 != 0)

int64_t* entry_x4

if (x23 != 0 && x9_7 == 0)
    (*(*x23 + 0x10))(x23)
    std::__ndk1::__shared_weak_count::__release_weak()
    
    if (entry_x4[4].d != 0)
        goto label_d1e9b0
    
    goto label_d1eaa4

char var_88
void* var_78
void* result_1
int64_t var_50
int64_t var_48
int32_t var_40

if (entry_x4[4].d == 0)
label_d1eaa4:
    
    if (arg1 + 0x50 != entry_x4)
        entry_x4[1]
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::assign<uint32_t*>(
            arg1 + 0x50, *entry_x4)
    
    *(arg1 + 0x68) = entry_x4[3]
    *(arg1 + 0x70) = entry_x4[4].d
else
label_d1e9b0:
    int64_t i_4 = entry_x4[3]
    
    if (i_4 == -1)
        int64_t x9_8 = *entry_x4
        int64_t x11_4 = entry_x4[1]
        int64_t x10_3 = x11_4 - x9_8
        
        if (x11_4 == x9_8)
            i_4 = 0
            entry_x4[3] = 0
        else
            int64_t x12_2
            
            x12_2 = x10_3 s>= 0 ? x10_3 : -1
            
            int64_t x11_5 = x9_8 - x11_4
            int64_t x12_3
            
            x12_3 = x12_2 s< 1 ? x12_2 : 1
            
            i_4 = x10_3 s>> 2
            int64_t x10_4
            
            x10_4 = x11_5 s> x10_3 ? x11_5 : x10_3
            
            int64_t i_5 = x12_3 * (x10_4 u>> 2)
            uint64_t x11_6 = 1
            int64_t i_2
            
            do
                int32_t x12_4 = *(x9_8 - 4 + (i_5 << 2))
                i_2 = i_5
                i_5 -= 1
                x11_6 = zx.q(x11_6.d) & zx.q(((x12_4 - 1) & not.d(x12_4)) s>> 0x1f)
                i_4 -= x11_6
            while (i_2 != 1)
            entry_x4[3] = i_4
            
            if (i_4 u> 1)
                goto label_d1eaa4
    else if (i_4 u> 1)
        goto label_d1eaa4
    
    if (i_4 != 0)
        int32_t* x9_10 = *entry_x4
        int32_t x10_6 = 0
        int32_t i_3
        
        do
            int32_t x11_7 = *x9_10
            x9_10 = &x9_10[1]
            i_3 = i_4
            i_4 -= 1
            int32_t x11_9 = ((x11_7 - 1) & not.d(x11_7)) s>> 0x1f
            x10_6 = (x10_6 & x11_9) | (not.d(x11_9) & 1)
        while (i_3 != 1)
        
        if (x10_6 != 0)
            goto label_d1eaa4
    
    __builtin_memset(&var_88, 0, 0x18)
    int32_t var_68_1 = 1
    int64_t var_70_1 = -1
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&var_88)
    *var_88.q = 2
    void* x8_27 = var_88.q
    int64_t var_70_2 = -1
    int64_t var_80
    
    if ((var_80 - x8_27) s>> 2 u>= 2)
        *(x8_27 + 4) = 0
    
    int128_t v0_2
    int128_t v1_1
    v0_2, v1_1 = Botan::BigInt::random_integer(arg3, &var_88, Botan::DL_Group::data() + 0x28)
    void* result_4
    void* result_3
    
    if (arg1 + 0x50 == &result_1)
        result_3 = result_1
        
        if (result_3 != 0)
            result_4 = result_3
            Botan::deallocate_memory(result_3, (var_50 - result_3) s>> 2, 4)
    else
        v1_1 = *(arg1 + 0x50)
        *(arg1 + 0x50) = result_1.o
        result_1.o = v1_1
        int64_t x11_13 = *(arg1 + 0x60)
        int64_t x9_16 = *(arg1 + 0x68)
        result_3 = v1_1.q
        *(arg1 + 0x60) = var_50
        *(arg1 + 0x68) = var_48
        var_50 = x11_13
        var_48 = x9_16
        int32_t x9_17 = *(arg1 + 0x70)
        *(arg1 + 0x70) = var_40
        var_40 = x9_17
        
        if (result_3 != 0)
            result_4 = result_3
            Botan::deallocate_memory(result_3, (var_50 - result_3) s>> 2, 4)
    void* x0_15 = var_88.q
    
    if (x0_15 != 0)
        void* var_80_1 = x0_15
        Botan::deallocate_memory(x0_15, (var_78 - x0_15) s>> 2, 4)

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x0_4 = Botan::DL_Group::data()
var_88 = 0xc
int32_t var_87
__builtin_strncpy(&var_87, "q_bits", 7)
Botan::DL_Group_Data::assert_q_is_set(x0_4)

if ((zx.d(var_88) & 1) != 0)
    operator delete(var_78)

*(Botan::DL_Group::data() + 0x150)
Botan::Montgomery_Exponentation_State::exponentiation(*(Botan::DL_Group::data() + 0x138), 
    arg1 + 0x50)
void* result
void* result_2

if (arg1 + 0x10 == &result_1)
    result = result_1
    
    if (result != 0)
        result_2 = result
        return Botan::deallocate_memory(result, (var_50 - result) s>> 2, 4)
else
    result = *(arg1 + 0x10)
    int128_t v0_1 = result_1.o
    result_1 = result
    *(arg1 + 0x10) = v0_1
    int64_t x11_12 = *(arg1 + 0x20)
    int64_t x9_11 = *(arg1 + 0x28)
    *(arg1 + 0x20) = var_50
    *(arg1 + 0x28) = var_48
    int64_t var_48_1 = x9_11
    int32_t x9_12 = *(arg1 + 0x30)
    *(arg1 + 0x30) = var_40
    int32_t var_40_1 = x9_12
    
    if (result != 0)
        result_2 = result
        return Botan::deallocate_memory(result, (x11_12 - result) s>> 2, 4)
return result
