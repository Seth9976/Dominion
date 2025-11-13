// 函数: _ZN5Botan8PointGFp10add_affineEPKjmS2_mRNSt6__ndk16vectorINS_6BigIntENS3_9allocatorIS5_EEEE
// 地址: 0xd2d870
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t const* x22 = arg1
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
            goto label_d2d910
    else
        i_15 = nullptr
        x9 = 0
    label_d2d910:
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

if (arg5 == 0)
    x11_2 = 0
else
    void* i_16
    
    if (arg5 u>= 8)
        i_16 = arg5 & 0xfffffffffffffff8
        void* x11_3 = arg4 + 0x10
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
        
        if (i_16 != arg5)
            goto label_d2d99c
    else
        i_16 = nullptr
        x11_2 = 0
    label_d2d99c:
        void* i_14 = arg5 - i_16
        int64_t x10_1 = arg4 + (i_16 << 2)
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

int64_t x8_5 = *(x22 + 0x78)

if (x8_5 == -1)
    int64_t x9_12 = *(x22 + 0x60)
    int64_t x11_4 = *(x22 + 0x68)
    int64_t x10_4 = x11_4 - x9_12
    
    if (x11_4 != x9_12)
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
        *(x22 + 0x78) = x8_9
        
        if (x8_9 != 0)
            goto label_d2d9e4
        
        goto label_d2dae8
    
    *(x22 + 0x78) = 0
label_d2dae8:
    *(x22 + 0x28) = -1
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::assign<uint32_t const*>(
        &x22[4], arg2)
    *(x22 + 0x50) = -1
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::assign<uint32_t const*>(
        &x22[0xe], arg4)
    int64_t* x0_6 = (*(**x22 + 0x60))()
    
    if (&x22[0x18] != x0_6)
        x0_6[1]
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::assign<uint32_t*>(
            &x22[0x18], *x0_6)
    
    *(x22 + 0x78) = x0_6[3]
    x22[0x20] = x0_6[4].d
    return 

if (x8_5 == 0)
    goto label_d2dae8

label_d2d9e4:
int64_t x0_1 = (*(**x22 + 0x30))()
int64_t* entry_x5
void* x23_1 = *entry_x5
void* x8_8 = entry_x5[1]

if (((x8_8 - x23_1) s>> 3) * -0x3333333333333333 u< 8)
    return Botan::PointGFp::mult2(Botan::assertion_failure(
        "ws_bn.size() >= PointGFp::WORKSPACE_SIZE", "Expected size for PointGFp workspace", 
        "resize_ws", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x70dc)) __tailcall

if (x8_8 == x23_1)
    x23_1 = x8_8
else
    int64_t x24_1 = 0
    int64_t i_5 = 0
    
    do
        int64_t* x0_2 = x23_1 + x24_1
        
        if (x0_1 u> (x0_2[1] - *x0_2) s>> 2)
            x0_2[3] = -1
            std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(x0_2)
            x23_1 = *entry_x5
            x8_8 = entry_x5[1]
        
        i_5 += 1
        x24_1 += 0x28
    while (i_5 != ((x8_8 - x23_1) s>> 3) * -0x3333333333333333)

*(x23_1 + 0x18) = -1
*(*entry_x5 + 0x40) = -1
void* x24_2 = *entry_x5
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >* x0_8 = (*(**x22 + 0x10))()
int64_t x2_3 = *(x22 + 0x60)
int64_t* x0_9 = *x22
(*(*x0_9 + 0x88))(x0_9, x24_2 + 0xc8, x2_3, (*(x22 + 0x68) - x2_3) s>> 2, x23_1)
int64_t* x0_10 = *x22
(*(*x0_10 + 0x80))(x0_10, x24_2 + 0xf0, arg2, arg3, x24_2 + 0xc8, x23_1)
int64_t* x0_11 = *x22
int64_t x2_5 = *(x22 + 0x60)
(*(*x0_11 + 0x80))(x0_11, x24_2 + 0xa0, x2_5, (*(x22 + 0x68) - x2_5) s>> 2, x24_2 + 0xc8, x23_1)
int64_t* x0_12 = *x22
(*(*x0_12 + 0x80))(x0_12, x24_2 + 0x50, arg4, arg5, x24_2 + 0xa0, x23_1)
Botan::BigInt::mod_sub(x24_2 + 0xf0, &x22[4], x0_8)
Botan::BigInt::mod_sub(x24_2 + 0x50, &x22[0xe], x0_8)
int64_t x8_24 = *(x24_2 + 0x108)

if (x8_24 != -1)
    if (x8_24 == 0)
        goto label_d2deec
    
label_d2dc70:
    int64_t* x0_15 = *x22
    int64_t x2_9 = *(x24_2 + 0xf0)
    (*(*x0_15 + 0x88))(x0_15, x24_2 + 0xa0, x2_9, (*(x24_2 + 0xf8) - x2_9) s>> 2, x23_1)
    int64_t* x0_16 = *x22
    int64_t x2_10 = *(x22 + 0x10)
    (*(*x0_16 + 0x80))(x0_16, x24_2 + 0xc8, x2_10, (*(x22 + 0x18) - x2_10) s>> 2, x24_2 + 0xa0, 
        x23_1)
    int64_t* x0_17 = *x22
    int64_t x2_11 = *(x24_2 + 0xa0)
    (*(*x0_17 + 0x80))(x0_17, x24_2 + 0x78, x2_11, (*(x24_2 + 0xa8) - x2_11) s>> 2, x24_2 + 0xf0, 
        x23_1)
    int64_t* x0_18 = *x22
    int64_t x2_12 = *(x24_2 + 0x50)
    (*(*x0_18 + 0x88))(x0_18, &x22[4], x2_12, (*(x24_2 + 0x58) - x2_12) s>> 2, x23_1)
    Botan::BigInt::mod_sub(
        Botan::BigInt::mod_sub(Botan::BigInt::mod_sub(&x22[4], x24_2 + 0x78, x0_8), x24_2 + 0xc8, 
            x0_8), 
        x24_2 + 0xc8, x0_8)
    Botan::BigInt::mod_sub(x24_2 + 0xc8, &x22[4], x0_8)
    int64_t* x0_23 = *x22
    int64_t x2_17 = *(x24_2 + 0x50)
    (*(*x0_23 + 0x80))(x0_23, x24_2 + 0xa0, x2_17, (*(x24_2 + 0x58) - x2_17) s>> 2, x24_2 + 0xc8, 
        x23_1)
    int64_t* x0_24 = *x22
    int64_t x2_18 = *(x22 + 0x38)
    (*(*x0_24 + 0x80))(x0_24, x24_2 + 0x50, x2_18, (*(x22 + 0x40) - x2_18) s>> 2, x24_2 + 0x78, 
        x23_1)
    Botan::BigInt::mod_sub(x24_2 + 0xa0, x24_2 + 0x50, x0_8)
    int64_t x9_31 = *(x22 + 0x38)
    *(x22 + 0x38) = *(x24_2 + 0xa0)
    *(x24_2 + 0xa0) = x9_31
    int64_t x9_32 = *(x22 + 0x40)
    *(x22 + 0x40) = *(x24_2 + 0xa8)
    *(x24_2 + 0xa8) = x9_32
    int64_t x9_33 = *(x22 + 0x48)
    *(x22 + 0x48) = *(x24_2 + 0xb0)
    *(x24_2 + 0xb0) = x9_33
    int64_t x9_34 = *(x22 + 0x50)
    *(x22 + 0x50) = *(x24_2 + 0xb8)
    *(x24_2 + 0xb8) = x9_34
    int32_t x9_35 = x22[0x16]
    x22[0x16] = *(x24_2 + 0xc0)
    *(x24_2 + 0xc0) = x9_35
    int64_t* x0_26 = *x22
    int64_t x2_20 = *(x22 + 0x60)
    (*(*x0_26 + 0x80))(x0_26, x24_2 + 0x50, x2_20, (*(x22 + 0x68) - x2_20) s>> 2, x24_2 + 0xf0, 
        x23_1)
    int64_t x9_38 = *(x22 + 0x60)
    *(x22 + 0x60) = *(x24_2 + 0x50)
    *(x24_2 + 0x50) = x9_38
    int64_t x9_39 = *(x22 + 0x68)
    *(x22 + 0x68) = *(x24_2 + 0x58)
    *(x24_2 + 0x58) = x9_39
    int64_t x9_40 = *(x22 + 0x70)
    *(x22 + 0x70) = *(x24_2 + 0x60)
    *(x24_2 + 0x60) = x9_40
    int64_t x9_41 = *(x22 + 0x78)
    *(x22 + 0x78) = *(x24_2 + 0x68)
    *(x24_2 + 0x68) = x9_41
    int32_t x9_42 = x22[0x20]
    x22[0x20] = *(x24_2 + 0x70)
    *(x24_2 + 0x70) = x9_42
    return 

int64_t x9_43 = *(x24_2 + 0xf0)
int64_t x11_7 = *(x24_2 + 0xf8)
int64_t x10_7 = x11_7 - x9_43

if (x11_7 != x9_43)
    int64_t x12_5
    
    x12_5 = x10_7 s>= 0 ? x10_7 : -1
    
    int64_t x11_8 = x9_43 - x11_7
    int64_t x12_6
    
    x12_6 = x12_5 s< 1 ? x12_5 : 1
    
    int64_t x8_49 = x10_7 s>> 2
    int64_t x10_8
    
    x10_8 = x11_8 s> x10_7 ? x11_8 : x10_7
    
    int64_t i_11 = x12_6 * (x10_8 u>> 2)
    uint64_t x11_9 = 1
    int64_t i_6
    
    do
        int32_t x12_7 = *(x9_43 - 4 + (i_11 << 2))
        i_6 = i_11
        i_11 -= 1
        x11_9 = zx.q(x11_9.d) & zx.q(((x12_7 - 1) & not.d(x12_7)) s>> 0x1f)
        x8_49 -= x11_9
    while (i_6 != 1)
    *(x24_2 + 0x108) = x8_49
    
    if (x8_49 != 0)
        goto label_d2dc70
    
    goto label_d2deec

*(x24_2 + 0x108) = 0
label_d2deec:
int64_t x8_50 = *(x24_2 + 0x68)

if (x8_50 == -1)
    int64_t x9_46 = *(x24_2 + 0x50)
    int64_t x11_11 = *(x24_2 + 0x58)
    int64_t x10_12 = x11_11 - x9_46
    
    if (x11_11 == x9_46)
        *(x24_2 + 0x68) = 0
        return Botan::PointGFp::mult2(x22) __tailcall
    
    int64_t x12_9
    
    x12_9 = x10_12 s>= 0 ? x10_12 : -1
    
    int64_t x11_12 = x9_46 - x11_11
    int64_t x12_10
    
    x12_10 = x12_9 s< 1 ? x12_9 : 1
    
    int64_t x8_53 = x10_12 s>> 2
    int64_t x10_13
    
    x10_13 = x11_12 s> x10_12 ? x11_12 : x10_12
    
    int64_t i_12 = x12_10 * (x10_13 u>> 2)
    uint64_t x11_13 = 1
    int64_t i_7
    
    do
        int32_t x12_11 = *(x9_46 - 4 + (i_12 << 2))
        i_7 = i_12
        i_12 -= 1
        x11_13 = zx.q(x11_13.d) & zx.q(((x12_11 - 1) & not.d(x12_11)) s>> 0x1f)
        x8_53 -= x11_13
    while (i_7 != 1)
    *(x24_2 + 0x68) = x8_53
    
    if (x8_53 == 0)
        return Botan::PointGFp::mult2(x22) __tailcall
else if (x8_50 == 0)
    return Botan::PointGFp::mult2(x22) __tailcall

int64_t x8_51 = *(x22 + 0x20)
int64_t x0_27 = *(x22 + 0x10)
size_t x9_45 = x8_51 - x0_27
size_t x2_21 = *(x22 + 0x18) - x0_27
int64_t x10_11 = x9_45 s>> 2
int64_t x11_10 = x2_21 s>> 2

if (x10_11 u> x11_10)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&x22[4])
    x0_27 = *(x22 + 0x10)
    x2_21 = *(x22 + 0x18) - x0_27
else if (x10_11 u< x11_10)
    x2_21 = x9_45
    *(x22 + 0x18) = x8_51

if (x2_21 != 0)
    memset(x0_27, 0, x2_21)

int64_t* x0_31 = *x22
*(x22 + 0x28) = 0
x22[0xc] = 1
uint32_t** x0_32 = (*(*x0_31 + 0x60))()

if (&x22[0xe] != x0_32)
    x0_32[1]
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::assign<uint32_t*>(&x22[0xe], 
        *x0_32)

int64_t x10_16 = *(x22 + 0x68)
int64_t x8_57 = *(x22 + 0x70)
arg1 = *(x22 + 0x60)
*(x22 + 0x50) = x0_32[3]
void* x9_50 = x8_57 - arg1
void* x2_24 = x10_16 - arg1
int64_t x12_14 = x9_50 s>> 2
int64_t x10_17 = x2_24 s>> 2
x22[0x16] = x0_32[4].d

if (x12_14 u> x10_17)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&x22[0x18])
    arg1 = *(x22 + 0x60)
    x2_24 = *(x22 + 0x68) - arg1
else if (x12_14 u< x10_17)
    x2_24 = x9_50
    *(x22 + 0x68) = x8_57

if (x2_24 != 0)
    memset(arg1, 0, x2_24)

*(x22 + 0x78) = 0
x22[0x20] = 1
