// 函数: _ZN5Botan6BigInt7mod_addERKS0_S2_RNSt6__ndk16vectorIjNS_16secure_allocatorIjEEEE
// 地址: 0xcd8b30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x20) == 0 || *(arg2 + 0x20) == 0 || *(arg3 + 0x20) == 0)
    void** x0_8 = __cxa_allocate_exception(0x20)
    int64_t x0_9
    int128_t v0_1
    x0_9, v0_1 = operator new(0x40)
    v0_1 = data_71ac10
    int64_t var_40_1 = x0_9
    __builtin_strncpy(x0_9, "BigInt::mod_add expects all arguments are positive", 0x33)
    int128_t var_50_1 = v0_1
    *x0_8 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_8[1])
    *x0_8 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_8, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

int64_t x21 = *(arg3 + 0x18)

if (x21 == -1)
    int64_t x8_3 = *arg3
    int64_t x10_1 = *(arg3 + 8)
    int64_t x9_1 = x10_1 - x8_3
    
    if (x10_1 == x8_3)
        x21 = 0
    else
        int64_t x11_1
        
        x11_1 = x9_1 s>= 0 ? x9_1 : -1
        
        int64_t x10_2 = x8_3 - x10_1
        int64_t x11_2
        
        x11_2 = x11_1 s< 1 ? x11_1 : 1
        
        x21 = x9_1 s>> 2
        int64_t x9_2
        
        x9_2 = x10_2 s> x9_1 ? x10_2 : x9_1
        
        int64_t i_7 = x11_2 * (x9_2 u>> 2)
        uint64_t x10_3 = 1
        int64_t i
        
        do
            int32_t x11_3 = *(x8_3 - 4 + (i_7 << 2))
            i = i_7
            i_7 -= 1
            x10_3 = zx.q(x10_3.d) & zx.q(((x11_3 - 1) & not.d(x11_3)) s>> 0x1f)
            x21 -= x10_3
        while (i != 1)
    
    *(arg3 + 0x18) = x21

if (x21 == 0)
    int64_t* x0_13 = Botan::throw_invalid_argument("BigInt::mod_add modulus must be positive", 
        "mod_add", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
    char var_50
    void* var_40
    
    if ((zx.d(var_50) & 1) != 0)
        operator delete(var_40)
    sub_1101e04(x0_13)
    noreturn

int64_t x8_5 = *arg1
int64_t x9_6 = (*(arg1 + 8) - x8_5) s>> 2

if (x21 u> x9_6)
    if (x21 u<= (*(arg1 + 0x10) - x8_5) s>> 2 || (x21 & 0xfffffffffffffff8) + 8 u> x9_6)
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(arg1)
    else if ((x21 & 0xfffffffffffffff8) + 8 u< x9_6)
        *(arg1 + 8) = x8_5 + (((x21 & 0xfffffffffffffff8) + 8) << 2)

int64_t x8_6 = *arg2
int64_t x9_9 = (*(arg2 + 8) - x8_6) s>> 2

if (x21 u> x9_9)
    if (x21 u<= (*(arg2 + 0x10) - x8_6) s>> 2 || (x21 & 0xfffffffffffffff8) + 8 u> x9_9)
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(arg2)
    else if ((x21 & 0xfffffffffffffff8) + 8 u< x9_9)
        *(arg2 + 8) = x8_6 + (((x21 & 0xfffffffffffffff8) + 8) << 2)

uint32_t** entry_x3
uint32_t* x0_3 = *entry_x3

if (x21 * 3 u> (entry_x3[1] - x0_3) s>> 2)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(entry_x3)
    x0_3 = *entry_x3

Botan::bigint_sub3(x0_3, *arg3, x21, *arg2, x21)
uint32_t* x3_1 = *entry_x3
int32_t x0_5
uint128_t v0
uint128_t v1
uint128_t v2
uint128_t v3
uint128_t v4
x0_5, v0, v1, v2, v3, v4 = Botan::bigint_sub3(&x3_1[x21], *arg1, x21, x3_1, x21)
uint32_t* x11_5 = *entry_x3
void* x8_10 = *arg1
void* x10_12 = *arg2
int64_t x15 = x21
int64_t x13 = x21
int64_t i_8
int64_t x12_2
void* x14_1
bool cond:3_1

do
    x12_2 = x13
    x14_1 = x10_12
    x13 = x15
    i_8 = x15 - x12_2
    cond:3_1 = x15 u< x12_2
    x10_12 = x8_10
    x8_10 = x14_1
    x15 = x12_2
while (cond:3_1)
int64_t i_13 = x12_2 & 0xfffffffffffffff8
int64_t x8_11 = x21 << 1
int32_t x15_1 = 0

if (i_13 != 0)
    void* x17_1 = x10_12 + 0x10
    void* x1_8 = &x11_5[x8_11 + 4]
    void* x2_2 = x14_1 + 0x10
    int64_t i_6 = i_13
    int64_t i_1
    
    do
        int32_t x4_2 = *(x17_1 - 0x10)
        int32_t x5_1 = *(x2_2 - 0x10)
        int32_t x4_3 = x5_1 + x4_2
        *(x1_8 - 0x10) = x4_3 + x15_1
        int32_t x15_3 = *(x17_1 - 0xc)
        int32_t x4_4 = *(x2_2 - 0xc)
        int32_t x5_3 = (x5_1 + x4_2 u< x5_1 ? 1 : 0) | (x4_3 + x15_1 u< x4_3 ? 1 : 0)
        int32_t x15_4 = x4_4 + x15_3
        *(x1_8 - 0xc) = x15_4 + x5_3
        int32_t x15_6 = *(x17_1 - 8)
        int32_t x5_4 = *(x2_2 - 8)
        int32_t x4_6 = (x4_4 + x15_3 u< x4_4 ? 1 : 0) | (x15_4 + x5_3 u< x15_4 ? 1 : 0)
        int32_t x15_7 = x5_4 + x15_6
        *(x1_8 - 8) = x15_7 + x4_6
        int32_t x15_9 = *(x17_1 - 4)
        int32_t x4_7 = *(x2_2 - 4)
        int32_t x5_6 = (x5_4 + x15_6 u< x5_4 ? 1 : 0) | (x15_7 + x4_6 u< x15_7 ? 1 : 0)
        int32_t x15_10 = x4_7 + x15_9
        *(x1_8 - 4) = x15_10 + x5_6
        int32_t x15_12 = *x17_1
        int32_t x5_7 = *x2_2
        int32_t x4_9 = (x4_7 + x15_9 u< x4_7 ? 1 : 0) | (x15_10 + x5_6 u< x15_10 ? 1 : 0)
        int32_t x15_13 = x5_7 + x15_12
        *x1_8 = x15_13 + x4_9
        int32_t x15_15 = *(x17_1 + 4)
        int32_t x4_10 = *(x2_2 + 4)
        int32_t x5_9 = (x5_7 + x15_12 u< x5_7 ? 1 : 0) | (x15_13 + x4_9 u< x15_13 ? 1 : 0)
        int32_t x15_16 = x4_10 + x15_15
        *(x1_8 + 4) = x15_16 + x5_9
        int32_t x15_18 = *(x17_1 + 8)
        int32_t x5_10 = *(x2_2 + 8)
        int32_t x4_12 = (x4_10 + x15_15 u< x4_10 ? 1 : 0) | (x15_16 + x5_9 u< x15_16 ? 1 : 0)
        int32_t x15_19 = x5_10 + x15_18
        *(x1_8 + 8) = x15_19 + x4_12
        int32_t x15_21 = *(x17_1 + 0xc)
        int32_t x4_13 = *(x2_2 + 0xc)
        int32_t x5_12 = (x5_10 + x15_18 u< x5_10 ? 1 : 0) | (x15_19 + x4_12 u< x15_19 ? 1 : 0)
        x17_1 += 0x20
        int32_t x15_22 = x4_13 + x15_21
        *(x1_8 + 0xc) = x15_22 + x5_12
        i_1 = i_6
        i_6 -= 8
        x1_8 += 0x20
        x15_1 = (x4_13 + x15_21 u< x4_13 ? 1 : 0) | (x15_22 + x5_12 u< x15_22 ? 1 : 0)
        x2_2 += 0x20
    while (i_1 != 8)

if (i_13 != x12_2)
    int64_t x2_3 = i_13 << 2
    int64_t i_11 = x12_2 - i_13
    void* x16 = &x11_5[x8_11 + i_13]
    void* x14_2 = x14_1 + x2_3
    void* x1_10 = x10_12 + x2_3
    int64_t i_2
    
    do
        int32_t x2_4 = *x1_10
        x1_10 += 4
        int32_t x3_2 = *x14_2
        x14_2 += 4
        int32_t x2_5 = x3_2 + x2_4
        int32_t x2_6 = x2_5 + x15_1
        i_2 = i_11
        i_11 -= 1
        x15_1 = (x3_2 + x2_4 u< x3_2 ? 1 : 0) | (x2_5 + x15_1 u< x2_5 ? 1 : 0)
        *x16 = x2_6
        x16 += 4
    while (i_2 != 1)

if (x12_2 != x13)
    void* x11_7 = &x11_5[x8_11 + x12_2]
    void* x10_13 = x10_12 + (x12_2 << 2)
    int64_t i_3
    
    do
        int32_t x12_4 = *x10_13
        x10_13 += 4
        int32_t x12_5 = x12_4 + x15_1
        x15_1 = x12_4 + x15_1 u< x12_4 ? 1 : 0
        i_3 = i_8
        i_8 -= 1
        *x11_7 = x12_5
        x11_7 += 4
    while (i_3 != 1)

uint32_t* x11_8 = *entry_x3
int32_t x9_13 = ((x0_5 - 1) & not.d(x0_5)) s>> 0x1f
int64_t i_12

if (x21 u< 8 || (x11_8 u< x11_8 + x21 * 0xc && x8_11 s< x21))
    i_12 = 0
label_cd8ec0:
    int64_t i_9 = x21 - i_12
    int32_t* x8_12 = &x11_8[i_12]
    int64_t i_4
    
    do
        i_4 = i_9
        i_9 -= 1
        *x8_12 = (x8_12[x21] & x9_13) | (x8_12[x21 * 2] & not.d(x9_13))
        x8_12 = &x8_12[1]
    while (i_4 != 1)
else
    i_12 = x21 & 0xfffffffffffffff8
    v0.d = x9_13
    v0:4.d = x9_13
    v0:8.d = x9_13
    v0:0xc.d = x9_13
    void* x12_7 = &x11_8[4]
    int64_t i_10 = i_12
    int64_t i_5
    
    do
        void* x15_25 = x12_7 + (x21 << 3)
        void* x16_1 = x12_7 + (x21 << 2)
        v2 = *x15_25
        v4 = *x16_1
        i_5 = i_10
        i_10 -= 8
        v1 = vbslq_s8(v0, *(x16_1 - 0x10), *(x15_25 - 0x10))
        v2 = vbslq_s8(v0, v4, v2)
        *(x12_7 - 0x10) = v1
        *x12_7 = v2
        x12_7 += 0x20
    while (i_5 != 8)
    
    if (x21 != i_12)
        goto label_cd8ec0
uint32_t* x1_11 = *entry_x3
*(arg1 + 0x18) = -1
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::assign<uint32_t const*>(arg1, 
    x1_11)
return arg1
