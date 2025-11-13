// 函数: _ZN5Botan6BigInt7rev_subEPKjmRNSt6__ndk16vectorIjNS_16secure_allocatorIjEEEE
// 地址: 0xcd9de0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1[8] != 1)
    void** x0_3 = __cxa_allocate_exception(0x20)
    int64_t x0_4
    int128_t v0_7
    x0_4, v0_7 = operator new(0x30)
    (*"this is positive")[0].o
    int64_t var_40 = x0_4
    v0_7 = data_71cbb0
    __builtin_strncpy(x0_4, "BigInt::sub_rev requires this is positive", 0x2a)
    int128_t var_50 = v0_7
    *x0_3 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_3[1])
    *x0_3 = _vtable_for_Botan::Invalid_State + 0x10
    __cxa_throw(x0_3, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
    noreturn

int64_t i_16 = *(arg1 + 0x18)

if (i_16 == -1)
    int64_t x8_1 = *arg1
    int64_t x10_1 = *(arg1 + 8)
    int64_t x9_1 = x10_1 - x8_1
    
    if (x10_1 == x8_1)
        i_16 = 0
    else
        int64_t x11_1
        
        x11_1 = x9_1 s>= 0 ? x9_1 : -1
        
        int64_t x10_2 = x8_1 - x10_1
        int64_t x11_2
        
        x11_2 = x11_1 s< 1 ? x11_1 : 1
        
        i_16 = x9_1 s>> 2
        int64_t x9_2
        
        x9_2 = x10_2 s> x9_1 ? x10_2 : x9_1
        
        int64_t i_7 = x11_2 * (x9_2 u>> 2)
        uint64_t x10_3 = 1
        int64_t i
        
        do
            int32_t x11_3 = *(x8_1 - 4 + (i_7 << 2))
            i = i_7
            i_7 -= 1
            x10_3 = zx.q(x10_3.d) & zx.q(((x11_3 - 1) & not.d(x11_3)) s>> 0x1f)
            i_16 -= x10_3
        while (i != 1)
    
    *(arg1 + 0x18) = i_16

int64_t* entry_x3
uint32_t* x0 = *entry_x3
void* x8_3 = entry_x3[1]
int64_t i_17

i_17 = i_16 u< arg3 ? arg3 : i_16

int64_t x10_5 = (x8_3 - x0) s>> 2
uint128_t v0
uint128_t v1
uint128_t v2
uint128_t v3

if (i_17 u> x10_5)
    v0, v1, v2, v3 =
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(entry_x3)
    x0 = *entry_x3
    x8_3 = entry_x3[1]
else if (i_17 u< x10_5)
    x8_3 = &x0[i_17]
    entry_x3[1] = x8_3

if (x8_3 != x0)
    v0, v1, v2, v3 = memset(x0, 0, x8_3 - x0)
    x0 = *entry_x3

int32_t* x8_4 = *arg1
int32_t x9_4 = 0
int64_t i_8

i_8 = i_16 u> arg3 ? arg3 : i_16

if (i_8 != 0)
    int32_t* x11_5 = x8_4
    uint64_t x12_2 = arg2
    int64_t i_1
    
    do
        int32_t x13_1 = *x11_5
        x11_5 = &x11_5[1]
        int32_t x14_1 = *x12_2
        x12_2 += 4
        i_1 = i_8
        i_8 -= 1
        int32_t x15_1 = x14_1 ^ x13_1
        int32_t x15_2 = ((x15_1 - 1) & not.d(x15_1)) s>> 0x1f
        x9_4 = (x9_4 & x15_2)
            | ((((((x13_1 - x14_1) ^ x13_1) | x15_1) ^ x13_1) s>> 0x1f | 1) & not.d(x15_2))
    while (i_1 != 1)

void* x10_6 = i_16 - arg3

if (i_16 u< arg3)
    void* x11_6 = arg3 - i_16
    int32_t x11_7
    int64_t i_18
    
    if (x11_6 u>= 8)
        void* i_14 = x11_6 & 0xfffffffffffffff8
        v0.q = 0
        v0:8.q = 0
        i_18 = i_16 + i_14
        int128_t* x13_7 = arg2 + (i_16 << 2) + 0x10
        void* i_12 = i_14
        v1.q = 0
        v1:8.q = 0
        void* i_2
        
        do
            v2 = x13_7[-1]
            v3 = *x13_7
            i_2 = i_12
            i_12 -= 8
            x13_7 = &x13_7[2]
            v0 = vorrq_s8(v2, v0)
            v1 = vorrq_s8(v3, v1)
        while (i_2 != 8)
        uint128_t v0_1 = vorrq_s8(v1, v0)
        uint128_t v0_2 = vorrq_s8(v0_1, vdupq_laneq_s64(v0_1, 1))
        x11_7 = vorrq_s8(v0_2, vdupq_laneq_s32(v0_2, 1))
        
        if (x11_6 != i_14)
            goto label_cd9fb4
    else
        x11_7 = 0
        i_18 = i_16
    label_cd9fb4:
        void* i_10 = arg3 - i_18
        int64_t x10_8 = arg2 + (i_18 << 2)
        void* i_3
        
        do
            int32_t x13_8 = *x10_8
            x10_8 += 4
            i_3 = i_10
            i_10 -= 1
            x11_7 |= x13_8
        while (i_3 != 1)
    x9_4 |= not.d(((x11_7 - 1) & not.d(x11_7)) s>> 0x1f)
else if (i_16 u> arg3)
    int32_t x10_7
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >& x11_8
    
    if (x10_6 u>= 8)
        void* i_15 = x10_6 & 0xfffffffffffffff8
        v0.q = 0
        v0:8.q = 0
        x11_8 = i_15 + arg3
        void* x13_10 = &x8_4[arg3 + 4]
        void* i_13 = i_15
        v1.q = 0
        v1:8.q = 0
        void* i_4
        
        do
            v2 = *(x13_10 - 0x10)
            v3 = *x13_10
            i_4 = i_13
            i_13 -= 8
            x13_10 += 0x20
            v0 = vorrq_s8(v2, v0)
            v1 = vorrq_s8(v3, v1)
        while (i_4 != 8)
        uint128_t v0_4 = vorrq_s8(v1, v0)
        uint128_t v0_5 = vorrq_s8(v0_4, vdupq_laneq_s64(v0_4, 1))
        x10_7 = vorrq_s8(v0_5, vdupq_laneq_s32(v0_5, 1))
        
        if (x10_6 != i_15)
            goto label_cda030
    else
        x10_7 = 0
        x11_8 = arg3
    label_cda030:
        void* i_11 = i_16 - x11_8
        void* x11_9 = &x8_4[x11_8]
        void* i_5
        
        do
            int32_t x13_11 = *x11_9
            x11_9 += 4
            i_5 = i_11
            i_11 -= 1
            x10_7 |= x13_11
        while (i_5 != 1)
    int32_t x10_12 = ((x10_7 - 1) & not.d(x10_7)) s>> 0x1f
    x9_4 = (x9_4 & x10_12) | (not.d(x10_12) & 1)

int64_t x10_16

if (x9_4 s< 0)
    x10_16 = x8_4 ^ arg2
else
    x10_16 = 0

int64_t x9_8

if (x9_4 s< 0)
    x9_8 = i_16 ^ arg3
else
    x9_8 = 0

uint64_t x2_1 = x9_8 ^ i_16
uint64_t x8_5 = x9_8 ^ arg3
uint64_t x4

x4 = x8_5 u< x2_1 ? x8_5 : x2_1

Botan::bigint_sub3(x0, x10_16 ^ x8_4, x2_1, x10_16 ^ arg2, x4)
int32_t x8_7 = zx.d(arg1[8].b) ^ (x9_4 s> 0 ? 1 : 0)

if (x8_7 == 0)
    int64_t x8_8 = *(arg1 + 0x18)
    
    if (x8_8 == -1)
        int64_t x9_9 = *arg1
        int64_t x11_11 = *(arg1 + 8)
        int64_t x10_17 = x11_11 - x9_9
        
        if (x11_11 == x9_9)
            x8_8 = 0
        else
            int64_t x12_3
            
            x12_3 = x10_17 s>= 0 ? x10_17 : -1
            
            int64_t x11_12 = x9_9 - x11_11
            int64_t x12_4
            
            x12_4 = x12_3 s< 1 ? x12_3 : 1
            
            x8_8 = x10_17 s>> 2
            int64_t x10_18
            
            x10_18 = x11_12 s> x10_17 ? x11_12 : x10_17
            
            int64_t i_9 = x12_4 * (x10_18 u>> 2)
            uint64_t x11_13 = 1
            int64_t i_6
            
            do
                int32_t x12_5 = *(x9_9 - 4 + (i_9 << 2))
                i_6 = i_9
                i_9 -= 1
                x11_13 = zx.q(x11_13.d) & zx.q(((x12_5 - 1) & not.d(x12_5)) s>> 0x1f)
                x8_8 -= x11_13
            while (i_6 != 1)
        
        *(arg1 + 0x18) = x8_8
    
    x8_7 = x8_8 == 0 ? 1 : 0

arg1[8] = x8_7
int64_t x9_11 = *arg1
*arg1 = *entry_x3
int64_t x8_10 = entry_x3[1]
*entry_x3 = x9_11
int64_t x9_12 = *(arg1 + 8)
*(arg1 + 8) = x8_10
int64_t x8_11 = entry_x3[2]
entry_x3[1] = x9_12
int64_t x9_13 = *(arg1 + 0x10)
*(arg1 + 0x10) = x8_11
entry_x3[2] = x9_13
*(arg1 + 0x18) = -1
return arg1
