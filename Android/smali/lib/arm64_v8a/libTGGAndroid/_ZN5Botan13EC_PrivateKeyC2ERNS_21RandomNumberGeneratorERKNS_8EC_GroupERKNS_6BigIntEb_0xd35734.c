// 函数: _ZN5Botan13EC_PrivateKeyC2ERNS_21RandomNumberGeneratorERKNS_8EC_GroupERKNS_6BigIntEb
// 地址: 0xd35734
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *arg2
*arg1 = x8
*(arg1 + *(x8 - 0xc8)) = *(arg2 + 8)
*(arg1 + *(*arg1 - 0x88)) = *(arg2 + 0x10)
*(arg1 + *(*arg1 - 0xd0)) = *(arg2 + 0x18)
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
*(arg1 + 0x20) = -1
*(arg1 + 0x28) = 1
int64_t x10 = *arg4
int64_t x8_6 = *(arg4 + 8)
void* x9_5 = arg1 + *(*arg1 - 0xc8)

if (x8_6 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(x8_6 + 8) + 1, x8_6 + 8)
    while (i != 0)

int64_t* x25 = *(x9_5 + 0x10)
*(x9_5 + 8) = x10
*(x9_5 + 0x10) = x8_6

if (x25 != 0)
    int64_t x9_6
    int32_t i_1
    
    do
        x9_6 = __ldaxr(&x25[1])
        i_1 = __stlxr(x9_6 - 1, &x25[1])
    while (i_1 != 0)
    
    if (x9_6 == 0)
        (*(*x25 + 0x10))(x25)
        std::__ndk1::__shared_weak_count::__release_weak()

void* x0_3 = Botan::EC_Group::data()
*(arg1 + *(*arg1 - 0xc8) + 0xa0) = (*(x0_3 + 0x1c8) != *(x0_3 + 0x1d0) ? 1 : 0) << 1
void* var_f0
void* var_e8
int128_t var_e0
int64_t var_d0
int64_t* entry_x4

if (entry_x4[4].d == 0)
label_d35910:
    
    if (arg1 + 8 != entry_x4)
        entry_x4[1]
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::assign<uint32_t*>(
            arg1 + 8, *entry_x4)
    
    *(arg1 + 0x20) = entry_x4[3]
    *(arg1 + 0x28) = entry_x4[4].d
else
    int64_t i_4 = entry_x4[3]
    
    if (i_4 == -1)
        int64_t x9_10 = *entry_x4
        int64_t x11_3 = entry_x4[1]
        int64_t x10_3 = x11_3 - x9_10
        
        if (x11_3 == x9_10)
            i_4 = 0
            entry_x4[3] = 0
        else
            int64_t x12_3
            
            x12_3 = x10_3 s>= 0 ? x10_3 : -1
            
            int64_t x11_4 = x9_10 - x11_3
            int64_t x12_4
            
            x12_4 = x12_3 s< 1 ? x12_3 : 1
            
            i_4 = x10_3 s>> 2
            int64_t x10_4
            
            x10_4 = x11_4 s> x10_3 ? x11_4 : x10_3
            
            int64_t i_5 = x12_4 * (x10_4 u>> 2)
            uint64_t x11_5 = 1
            int64_t i_2
            
            do
                int32_t x12_5 = *(x9_10 - 4 + (i_5 << 2))
                i_2 = i_5
                i_5 -= 1
                x11_5 = zx.q(x11_5.d) & zx.q(((x12_5 - 1) & not.d(x12_5)) s>> 0x1f)
                i_4 -= x11_5
            while (i_2 != 1)
            entry_x4[3] = i_4
            
            if (i_4 u> 1)
                goto label_d35910
    else if (i_4 u> 1)
        goto label_d35910
    
    if (i_4 != 0)
        int32_t* x9_12 = *entry_x4
        int32_t x10_6 = 0
        int32_t i_3
        
        do
            int32_t x11_6 = *x9_12
            x9_12 = &x9_12[1]
            i_3 = i_4
            i_4 -= 1
            int32_t x11_8 = ((x11_6 - 1) & not.d(x11_6)) s>> 0x1f
            x10_6 = (x10_6 & x11_8) | (not.d(x11_8) & 1)
        while (i_3 != 1)
        
        if (x10_6 != 0)
            goto label_d35910
    
    Botan::EC_Group::random_scalar(arg4)
    void* x0_19
    
    if (arg1 + 8 == &var_f0)
        x0_19 = var_f0
        
        if (x0_19 != 0)
            var_e8 = x0_19
            Botan::deallocate_memory(x0_19, (var_e0.q - x0_19) s>> 2, 4)
    else
        x0_19 = *(arg1 + 8)
        int128_t v0_3 = var_f0.o
        var_f0 = x0_19
        *(arg1 + 8) = v0_3
        int64_t x11_19 = *(arg1 + 0x18)
        int64_t x9_30 = *(arg1 + 0x20)
        *(arg1 + 0x18) = var_e0.q
        *(arg1 + 0x20) = var_e0:8.q
        var_e0.q = x11_19
        var_e0:8.q = x9_30
        int32_t x9_31 = *(arg1 + 0x28)
        *(arg1 + 0x28) = var_d0.d
        var_d0.d = x9_31
        
        if (x0_19 != 0)
            var_e8 = x0_19
            Botan::deallocate_memory(x0_19, (var_e0.q - x0_19) s>> 2, 4)

void* var_68
__builtin_memset(&var_68, 0, 0x18)
int32_t entry_x5
int64_t var_c8
int32_t var_c0
int128_t var_b8
int64_t var_a8
int64_t var_a0
int32_t var_98
int128_t var_90
int64_t var_80
int64_t var_78
int32_t var_70

if ((entry_x5 & 1) == 0)
    *(*arg1 - 0xc8)
    void* x0_13 = Botan::EC_Group::data()
    int128_t v0_2
    int128_t v1_1
    v0_2, v1_1 =
        Botan::PointGFp_Base_Point_Precompute::mul(x0_13 + 0x190, arg1 + 8, arg3, x0_13 + 0xe8)
    void* x8_31 = arg1 + *(*arg1 - 0xc8) + 0x18
    
    if (&var_f0 != x8_31)
        void* x12_12 = *x8_31
        int64_t x10_15 = *(x8_31 + 8)
        *x8_31 = var_f0
        *(x8_31 + 8) = var_e8
        var_f0 = x12_12
        int64_t var_e8_2 = x10_15
        v1_1 = *(x8_31 + 0x10)
        *(x8_31 + 0x10) = var_e0
        int128_t var_e0_2 = v1_1
        int64_t x12_13 = *(x8_31 + 0x20)
        int64_t x10_16 = *(x8_31 + 0x28)
        *(x8_31 + 0x20) = var_d0
        *(x8_31 + 0x28) = var_c8
        int64_t var_d0_2 = x12_13
        int64_t var_c8_2 = x10_16
        int32_t x10_17 = *(x8_31 + 0x30)
        *(x8_31 + 0x30) = var_c0
        int32_t var_c0_2 = x10_17
        v1_1 = *(x8_31 + 0x38)
        *(x8_31 + 0x38) = var_b8
        int128_t var_b8_2 = v1_1
        int64_t x12_14 = *(x8_31 + 0x48)
        int64_t x10_18 = *(x8_31 + 0x50)
        *(x8_31 + 0x48) = var_a8
        *(x8_31 + 0x50) = var_a0
        int64_t var_a8_2 = x12_14
        int64_t var_a0_2 = x10_18
        int32_t x10_19 = *(x8_31 + 0x58)
        *(x8_31 + 0x58) = var_98
        int32_t var_98_2 = x10_19
        v1_1 = *(x8_31 + 0x60)
        *(x8_31 + 0x60) = var_90
        int128_t var_90_2 = v1_1
        int64_t x12_15 = *(x8_31 + 0x70)
        int64_t x10_20 = *(x8_31 + 0x78)
        *(x8_31 + 0x70) = var_80
        *(x8_31 + 0x78) = var_78
        int64_t var_80_2 = x12_15
        int64_t var_78_2 = x10_20
        int32_t x10_21 = *(x8_31 + 0x80)
        *(x8_31 + 0x80) = var_70
        int32_t var_70_2 = x10_21
    
    Botan::PointGFp::~PointGFp()
else
    *(*arg1 - 0xc8)
    Botan::inverse_mod(arg1 + 8, Botan::EC_Group::data() + 0xe8)
    void* x0_9 = Botan::EC_Group::data()
    void* var_118
    int128_t v0_1
    int128_t v1
    v0_1, v1 = Botan::PointGFp_Base_Point_Precompute::mul(x0_9 + 0x190, &var_118, arg3, x0_9 + 0xe8)
    void* x8_22 = arg1 + *(*arg1 - 0xc8) + 0x18
    
    if (&var_f0 != x8_22)
        void* x12_8 = *x8_22
        int64_t x10_8 = *(x8_22 + 8)
        *x8_22 = var_f0
        *(x8_22 + 8) = var_e8
        var_f0 = x12_8
        int64_t var_e8_1 = x10_8
        v1 = *(x8_22 + 0x10)
        *(x8_22 + 0x10) = var_e0
        int128_t var_e0_1 = v1
        int64_t x12_9 = *(x8_22 + 0x20)
        int64_t x10_9 = *(x8_22 + 0x28)
        *(x8_22 + 0x20) = var_d0
        *(x8_22 + 0x28) = var_c8
        int64_t var_d0_1 = x12_9
        int64_t var_c8_1 = x10_9
        int32_t x10_10 = *(x8_22 + 0x30)
        *(x8_22 + 0x30) = var_c0
        int32_t var_c0_1 = x10_10
        v1 = *(x8_22 + 0x38)
        *(x8_22 + 0x38) = var_b8
        int128_t var_b8_1 = v1
        int64_t x12_10 = *(x8_22 + 0x48)
        int64_t x10_11 = *(x8_22 + 0x50)
        *(x8_22 + 0x48) = var_a8
        *(x8_22 + 0x50) = var_a0
        int64_t var_a8_1 = x12_10
        int64_t var_a0_1 = x10_11
        int32_t x10_12 = *(x8_22 + 0x58)
        *(x8_22 + 0x58) = var_98
        int32_t var_98_1 = x10_12
        v1 = *(x8_22 + 0x60)
        *(x8_22 + 0x60) = var_90
        int128_t var_90_1 = v1
        int64_t x12_11 = *(x8_22 + 0x70)
        int64_t x10_13 = *(x8_22 + 0x78)
        *(x8_22 + 0x70) = var_80
        *(x8_22 + 0x78) = var_78
        int64_t var_80_1 = x12_11
        int64_t var_78_1 = x10_13
        int32_t x10_14 = *(x8_22 + 0x80)
        *(x8_22 + 0x80) = var_70
        int32_t var_70_1 = x10_14
    
    Botan::PointGFp::~PointGFp()
    void* x0_11 = var_118
    
    if (x0_11 != 0)
        void* var_110_1 = x0_11
        int64_t var_108
        Botan::deallocate_memory(x0_11, (var_108 - x0_11) s>> 2, 4)
*(*arg1 - 0xc8)
int32_t result = Botan::PointGFp::on_the_curve()

if ((result & 1) == 0)
    sub_c776cc(Botan::assertion_failure("m_public_key.on_the_curve()", 
        "Generated public key point was on the curve", "EC_PrivateKey", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x75a1))
    noreturn

void* x19_1 = var_68

if (x19_1 == 0)
    return result

int64_t* var_60
int64_t* x8_35 = var_60
void* x0_17

if (x8_35 == x19_1)
    x0_17 = x19_1
else
    int64_t* x20_2 = x8_35
    
    do
        x20_2 = &x20_2[-5]
        void* x0_16 = *x20_2
        
        if (x0_16 != 0)
            int64_t x9_29 = x8_35[-3]
            x8_35[-4] = x0_16
            Botan::deallocate_memory(x0_16, (x9_29 - x0_16) s>> 2, 4)
        
        x8_35 = x20_2
    while (x19_1 != x20_2)
    
    x0_17 = var_68

void* var_60_1 = x19_1
return operator delete(x0_17)
