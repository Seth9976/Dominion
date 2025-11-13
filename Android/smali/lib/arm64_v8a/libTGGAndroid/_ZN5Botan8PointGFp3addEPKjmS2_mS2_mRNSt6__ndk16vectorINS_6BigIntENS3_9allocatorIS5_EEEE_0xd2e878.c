// 函数: _ZN5Botan8PointGFp3addEPKjmS2_mS2_mRNSt6__ndk16vectorINS_6BigIntENS3_9allocatorIS5_EEEE
// 地址: 0xd2e878
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t const* x19 = arg1
int32_t x9
uint128_t v0
uint128_t v1
uint128_t v2
uint128_t v3

if (arg3 == 0)
    x9 = 0
else
    void* i_15
    
    if (arg3 u>= 8)
        i_15 = arg3 & 0xfffffffffffffff8
        int128_t* x9_1 = arg2 + 0x10
        v0.q = 0
        v0:8.q = 0
        void* i_8 = i_15
        v1.q = 0
        v1:8.q = 0
        void* i
        
        do
            v2 = x9_1[-1]
            v3 = *x9_1
            i = i_8
            i_8 -= 8
            x9_1 = &x9_1[2]
            v0 = vorrq_s8(v2, v0)
            v1 = vorrq_s8(v3, v1)
        while (i != 8)
        uint128_t v0_1 = vorrq_s8(v1, v0)
        uint128_t v0_2 = vorrq_s8(v0_1, vdupq_laneq_s64(v0_1, 1))
        x9 = vorrq_s8(v0_2, vdupq_laneq_s32(v0_2, 1)).d
        
        if (i_15 != arg3)
            goto label_d2e920
    else
        i_15 = nullptr
        x9 = 0
    label_d2e920:
        void* i_9 = arg3 - i_15
        int64_t x8_1 = arg2 + (i_15 << 2)
        void* i_1
        
        do
            int32_t x11_1 = *x8_1
            x8_1 += 4
            i_1 = i_9
            i_9 -= 1
            x9 |= x11_1
        while (i_1 != 1)

int32_t x11_2

if (arg7 == 0)
    x11_2 = 0
else
    void* i_16
    
    if (arg7 u>= 8)
        i_16 = arg7 & 0xfffffffffffffff8
        void* x11_3 = arg6 + 0x10
        v0.q = 0
        v0:8.q = 0
        void* i_13 = i_16
        v1.q = 0
        v1:8.q = 0
        void* i_2
        
        do
            v2 = *(x11_3 - 0x10)
            v3 = *x11_3
            i_2 = i_13
            i_13 -= 8
            x11_3 += 0x20
            v0 = vorrq_s8(v2, v0)
            v1 = vorrq_s8(v3, v1)
        while (i_2 != 8)
        uint128_t v0_3 = vorrq_s8(v1, v0)
        uint128_t v0_4 = vorrq_s8(v0_3, vdupq_laneq_s64(v0_3, 1))
        x11_2 = vorrq_s8(v0_4, vdupq_laneq_s32(v0_4, 1))
        
        if (i_16 != arg7)
            goto label_d2e9ac
    else
        i_16 = nullptr
        x11_2 = 0
    label_d2e9ac:
        void* i_14 = arg7 - i_16
        int64_t x10_1 = arg6 + (i_16 << 2)
        void* i_3
        
        do
            int32_t x13_1 = *x10_1
            x10_1 += 4
            i_3 = i_14
            i_14 -= 1
            x11_2 |= x13_1
        while (i_3 != 1)

if (((x9 - 1) & not.d(x9) & not.d(x11_2) & (x11_2 - 1)) s< 0)
    return 

int64_t x8_5 = *(x19 + 0x78)

if (x8_5 == -1)
    int64_t x9_12 = *(x19 + 0x60)
    int64_t x11_4 = *(x19 + 0x68)
    int64_t x10_4 = x11_4 - x9_12
    
    if (x11_4 == x9_12)
        *(x19 + 0x78) = 0
    label_d2eb00:
        *(x19 + 0x28) = -1
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::assign<uint32_t const*>(
            &x19[4], arg2)
        *(x19 + 0x50) = -1
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::assign<uint32_t const*>(
            &x19[0xe], arg4)
        *(x19 + 0x78) = -1
        return std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::assign<uint32_t const*>(
            &x19[0x18], arg6) __tailcall
    
    int64_t x12_1
    
    x12_1 = x10_4 s>= 0 ? x10_4 : -1
    
    int64_t x11_5 = x9_12 - x11_4
    int64_t x12_2
    
    x12_2 = x12_1 s< 1 ? x12_1 : 1
    
    int64_t x8_9 = x10_4 s>> 2
    int64_t x10_5
    
    x10_5 = x11_5 s> x10_4 ? x11_5 : x10_4
    
    int64_t i_10 = x12_2 * (x10_5 u>> 2)
    uint64_t x11_6 = 1
    int64_t i_4
    
    do
        int32_t x12_3 = *(x9_12 - 4 + (i_10 << 2))
        i_4 = i_10
        i_10 -= 1
        x11_6 = zx.q(x11_6.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
        x8_9 -= x11_6
    while (i_4 != 1)
    *(x19 + 0x78) = x8_9
    
    if (x8_9 == 0)
        goto label_d2eb00
else if (x8_5 == 0)
    goto label_d2eb00

int64_t x0_1 = (*(**x19 + 0x30))()
int64_t* entry_x7
void* x28_1 = *entry_x7
void* x8_8 = entry_x7[1]

if (((x8_8 - x28_1) s>> 3) * -0x3333333333333333 u< 8)
    uint64_t x0_40
    std::__ndk1::vector<Botan::BigInt, std::__ndk1::allocator<Botan::BigInt> >* x1_31
    x0_40, x1_31 = Botan::assertion_failure("ws_bn.size() >= PointGFp::WORKSPACE_SIZE", 
        "Expected size for PointGFp workspace", "resize_ws", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x70dc)
    return Botan::PointGFp::mult2i(x0_40, x1_31) __tailcall

if (x8_8 == x28_1)
    x28_1 = x8_8
else
    int64_t x23_1 = 0
    int64_t i_5 = 0
    
    do
        int64_t* x0_2 = x28_1 + x23_1
        
        if (x0_1 u> (x0_2[1] - *x0_2) s>> 2)
            x0_2[3] = -1
            std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(x0_2)
            x28_1 = *entry_x7
            x8_8 = entry_x7[1]
        
        i_5 += 1
        x23_1 += 0x28
    while (i_5 != ((x8_8 - x28_1) s>> 3) * -0x3333333333333333)

*(x28_1 + 0x18) = -1
*(*entry_x7 + 0x40) = -1
void* x25_1 = *entry_x7
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >* x0_8 = (*(**x19 + 0x10))()
int64_t* x8_13 = *x19
(*(*x8_13 + 0x88))(x8_13, x25_1 + 0x50, arg6, arg7, x28_1)
int64_t x2_5 = *(x19 + 0x10)
int64_t* x0_10 = *x19
(*(*x0_10 + 0x80))(x0_10, x25_1 + 0x78, x2_5, (*(x19 + 0x18) - x2_5) s>> 2, x25_1 + 0x50, x28_1)
int64_t* x0_11 = *x19
(*(*x0_11 + 0x80))(x0_11, x25_1 + 0xc8, arg6, arg7, x25_1 + 0x50, x28_1)
int64_t x2_7 = *(x19 + 0x38)
int64_t* x0_12 = *x19
(*(*x0_12 + 0x80))(x0_12, x25_1 + 0xa0, x2_7, (*(x19 + 0x40) - x2_7) s>> 2, x25_1 + 0xc8, x28_1)
int64_t x2_8 = *(x19 + 0x60)
int64_t* x0_13 = *x19
(*(*x0_13 + 0x88))(x0_13, x25_1 + 0xc8, x2_8, (*(x19 + 0x68) - x2_8) s>> 2, x28_1)
int64_t* x0_14 = *x19
(*(*x0_14 + 0x80))(x0_14, x25_1 + 0xf0, arg2, arg3, x25_1 + 0xc8, x28_1)
int64_t* x0_15 = *x19
int64_t x2_10 = *(x19 + 0x60)
(*(*x0_15 + 0x80))(x0_15, x25_1 + 0x118, x2_10, (*(x19 + 0x68) - x2_10) s>> 2, x25_1 + 0xc8, x28_1)
int64_t* x0_16 = *x19
(*(*x0_16 + 0x80))(x0_16, x25_1 + 0x50, arg4, arg5, x25_1 + 0x118, x28_1)
Botan::BigInt::mod_sub(x25_1 + 0xf0, x25_1 + 0x78, x0_8)
Botan::BigInt::mod_sub(x25_1 + 0x50, x25_1 + 0xa0, x0_8)
int64_t x8_32 = *(x25_1 + 0x108)

if (x8_32 == -1)
    int64_t x9_40 = *(x25_1 + 0xf0)
    int64_t x11_8 = *(x25_1 + 0xf8)
    int64_t x10_9 = x11_8 - x9_40
    
    if (x11_8 == x9_40)
        *(x25_1 + 0x108) = 0
    else
        int64_t x12_6
        
        x12_6 = x10_9 s>= 0 ? x10_9 : -1
        
        int64_t x11_9 = x9_40 - x11_8
        int64_t x12_7
        
        x12_7 = x12_6 s< 1 ? x12_6 : 1
        
        int64_t x8_49 = x10_9 s>> 2
        int64_t x10_10
        
        x10_10 = x11_9 s> x10_9 ? x11_9 : x10_9
        
        int64_t i_11 = x12_7 * (x10_10 u>> 2)
        uint64_t x11_10 = 1
        int64_t i_6
        
        do
            int32_t x12_8 = *(x9_40 - 4 + (i_11 << 2))
            i_6 = i_11
            i_11 -= 1
            x11_10 = zx.q(x11_10.d) & zx.q(((x12_8 - 1) & not.d(x12_8)) s>> 0x1f)
            x8_49 -= x11_10
        while (i_6 != 1)
        *(x25_1 + 0x108) = x8_49
        
        if (x8_49 != 0)
            goto label_d2ed30
else if (x8_32 != 0)
label_d2ed30:
    int64_t* x0_19 = *x19
    int64_t x2_14 = *(x25_1 + 0xf0)
    (*(*x0_19 + 0x88))(x0_19, x25_1 + 0x118, x2_14, (*(x25_1 + 0xf8) - x2_14) s>> 2, x28_1)
    int64_t* x0_20 = *x19
    int64_t x2_15 = *(x25_1 + 0x78)
    (*(*x0_20 + 0x80))(x0_20, x25_1 + 0xc8, x2_15, (*(x25_1 + 0x80) - x2_15) s>> 2, x25_1 + 0x118, 
        x28_1)
    int64_t* x0_21 = *x19
    int64_t x2_16 = *(x25_1 + 0x118)
    (*(*x0_21 + 0x80))(x0_21, x25_1 + 0x78, x2_16, (*(x25_1 + 0x120) - x2_16) s>> 2, x25_1 + 0xf0, 
        x28_1)
    int64_t* x0_22 = *x19
    int64_t x2_17 = *(x25_1 + 0x50)
    (*(*x0_22 + 0x88))(x0_22, &x19[4], x2_17, (*(x25_1 + 0x58) - x2_17) s>> 2, x28_1)
    Botan::BigInt::mod_sub(
        Botan::BigInt::mod_sub(Botan::BigInt::mod_sub(&x19[4], x25_1 + 0x78, x0_8), x25_1 + 0xc8, 
            x0_8), 
        x25_1 + 0xc8, x0_8)
    Botan::BigInt::mod_sub(x25_1 + 0xc8, &x19[4], x0_8)
    int64_t* x0_27 = *x19
    int64_t x2_22 = *(x25_1 + 0x50)
    (*(*x0_27 + 0x80))(x0_27, &x19[0xe], x2_22, (*(x25_1 + 0x58) - x2_22) s>> 2, x25_1 + 0xc8, 
        x28_1)
    int64_t* x0_28 = *x19
    int64_t x2_23 = *(x25_1 + 0xa0)
    (*(*x0_28 + 0x80))(x0_28, x25_1 + 0xc8, x2_23, (*(x25_1 + 0xa8) - x2_23) s>> 2, x25_1 + 0x78, 
        x28_1)
    Botan::BigInt::mod_sub(&x19[0xe], x25_1 + 0xc8, x0_8)
    int64_t* x0_30 = *x19
    (*(*x0_30 + 0x80))(x0_30, x25_1 + 0xc8, arg6, arg7, &x19[0x18], x28_1)
    *(x25_1 + 0xd0) - *(x25_1 + 0xc8)
    jump(*(**x19 + 0x80))

int64_t x8_50 = *(x25_1 + 0x68)

if (x8_50 == -1)
    int64_t x9_43 = *(x25_1 + 0x50)
    int64_t x11_12 = *(x25_1 + 0x58)
    int64_t x10_14 = x11_12 - x9_43
    
    if (x11_12 == x9_43)
        *(x25_1 + 0x68) = 0
        return Botan::PointGFp::mult2(x19) __tailcall
    
    int64_t x12_10
    
    x12_10 = x10_14 s>= 0 ? x10_14 : -1
    
    int64_t x11_13 = x9_43 - x11_12
    int64_t x12_11
    
    x12_11 = x12_10 s< 1 ? x12_10 : 1
    
    int64_t x8_53 = x10_14 s>> 2
    int64_t x10_15
    
    x10_15 = x11_13 s> x10_14 ? x11_13 : x10_14
    
    int64_t i_12 = x12_11 * (x10_15 u>> 2)
    uint64_t x11_14 = 1
    int64_t i_7
    
    do
        int32_t x12_12 = *(x9_43 - 4 + (i_12 << 2))
        i_7 = i_12
        i_12 -= 1
        x11_14 = zx.q(x11_14.d) & zx.q(((x12_12 - 1) & not.d(x12_12)) s>> 0x1f)
        x8_53 -= x11_14
    while (i_7 != 1)
    *(x25_1 + 0x68) = x8_53
    
    if (x8_53 == 0)
        return Botan::PointGFp::mult2(x19) __tailcall
else if (x8_50 == 0)
    return Botan::PointGFp::mult2(x19) __tailcall

int64_t x8_51 = *(x19 + 0x20)
int64_t x0_32 = *(x19 + 0x10)
size_t x9_42 = x8_51 - x0_32
size_t x2_27 = *(x19 + 0x18) - x0_32
int64_t x10_13 = x9_42 s>> 2
int64_t x11_11 = x2_27 s>> 2

if (x10_13 u> x11_11)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&x19[4])
    x0_32 = *(x19 + 0x10)
    x2_27 = *(x19 + 0x18) - x0_32
else if (x10_13 u< x11_11)
    x2_27 = x9_42
    *(x19 + 0x18) = x8_51

if (x2_27 != 0)
    memset(x0_32, 0, x2_27)

int64_t* x0_36 = *x19
*(x19 + 0x28) = 0
x19[0xc] = 1
uint32_t** x0_37 = (*(*x0_36 + 0x60))()

if (&x19[0xe] != x0_37)
    x0_37[1]
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::assign<uint32_t*>(&x19[0xe], 
        *x0_37)

int64_t x10_18 = *(x19 + 0x68)
int64_t x8_57 = *(x19 + 0x70)
arg1 = *(x19 + 0x60)
*(x19 + 0x50) = x0_37[3]
void* x9_47 = x8_57 - arg1
void* x2_30 = x10_18 - arg1
int64_t x12_15 = x9_47 s>> 2
int64_t x10_19 = x2_30 s>> 2
x19[0x16] = x0_37[4].d

if (x12_15 u> x10_19)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&x19[0x18])
    arg1 = *(x19 + 0x60)
    x2_30 = *(x19 + 0x68) - arg1
else if (x12_15 u< x10_19)
    x2_30 = x9_47
    *(x19 + 0x68) = x8_57

if (x2_30 != 0)
    memset(arg1, 0, x2_30)

*(x19 + 0x78) = 0
x19[0x20] = 1
