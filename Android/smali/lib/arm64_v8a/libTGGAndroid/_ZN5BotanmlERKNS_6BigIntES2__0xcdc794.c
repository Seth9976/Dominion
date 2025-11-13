// 函数: _ZN5BotanmlERKNS_6BigIntES2_
// 地址: 0xcdc794
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x22 = *(arg1 + 0x18)
Botan::BigInt const& x21 = arg1

if (x22 == -1)
    int64_t x8 = *x21
    int64_t x10_1 = *(x21 + 8)
    int64_t x9_1 = x10_1 - x8
    
    if (x10_1 == x8)
        x22 = 0
    else
        int64_t x11_1
        
        x11_1 = x9_1 s>= 0 ? x9_1 : -1
        
        int64_t x10_2 = x8 - x10_1
        int64_t x11_2
        
        x11_2 = x11_1 s< 1 ? x11_1 : 1
        
        x22 = x9_1 s>> 2
        int64_t x9_2
        
        x9_2 = x10_2 s> x9_1 ? x10_2 : x9_1
        
        int64_t i_7 = x11_2 * (x9_2 u>> 2)
        uint64_t x10_3 = 1
        int64_t i
        
        do
            int32_t x11_3 = *(x8 - 4 + (i_7 << 2))
            i = i_7
            i_7 -= 1
            x10_3 = zx.q(x10_3.d) & zx.q(((x11_3 - 1) & not.d(x11_3)) s>> 0x1f)
            x22 -= x10_3
        while (i != 1)
    
    *(x21 + 0x18) = x22

int64_t x9_4 = *arg2
int64_t x11_5 = *(arg2 + 8)
uint64_t x23 = *(arg2 + 0x18)
int64_t x10_4 = x11_5 - x9_4
uint64_t x8_2 = x10_4 s>> 2

if (x23 == -1)
    if (x10_4 == 0)
        x23 = 0
    else
        int64_t x12_2
        
        x12_2 = x10_4 s>= 0 ? x10_4 : -1
        
        int64_t x11_6 = x9_4 - x11_5
        int64_t x12_3
        
        x12_3 = x12_2 s< 1 ? x12_2 : 1
        
        int64_t x10_5
        
        x10_5 = x11_6 s> x10_4 ? x11_6 : x10_4
        
        int64_t i_8 = x12_3 * (x10_5 u>> 2)
        uint64_t x11_7 = 1
        x23 = x8_2
        int64_t i_1
        
        do
            int32_t x12_4 = *(x9_4 - 4 + (i_8 << 2))
            i_1 = i_8
            i_8 -= 1
            x11_7 = zx.q(x11_7.d) & zx.q(((x12_4 - 1) & not.d(x12_4)) s>> 0x1f)
            x23 -= x11_7
        while (i_1 != 1)
    
    *(arg2 + 0x18) = x23

int64_t x10_7 = *x21
int64_t x9_6 = *(x21 + 8)
uint32_t** entry_x8
__builtin_memset(entry_x8, 0, 0x18)
entry_x8[4].d = 1
entry_x8[3] = -1

if (((x8_2 + ((x9_6 - x10_7) s>> 2)) & 0xfffffffffffffff8) != -8)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(entry_x8)

entry_x8[4].d = 1

if (x22 == 1 && x23 != 0)
    entry_x8[3] = -1
    int32_t* x8_5 = *x21
    uint32_t* x8_6
    uint64_t x9_9
    void* x10_8
    int64_t i_14
    
    if (*(x21 + 8) != x8_5)
        x9_9 = zx.q(*x8_5)
        x8_6 = *entry_x8
        x10_8 = *arg2
        i_14 = x23 & 0xfffffffffffffff8
        
        if (i_14 == 0)
            goto label_cdcb14
        
        goto label_cdc908
    
    x9_9 = 0
    x8_6 = *entry_x8
    x10_8 = *arg2
    i_14 = x23 & 0xfffffffffffffff8
    uint32_t x12_7
    
    if (i_14 != 0)
    label_cdc908:
        uint64_t x15_1 = 0
        void* x12_6 = &x8_6[4]
        void* x13_2 = x10_8 + 0x10
        int64_t i_12 = i_14
        int64_t i_2
        
        do
            i_2 = i_12
            i_12 -= 8
            int64_t x15_2 = x15_1 + x9_9 * zx.q(*(x13_2 - 0x10))
            *(x12_6 - 0x10) = x15_2.d
            int64_t x15_3 = x9_9 * zx.q(*(x13_2 - 0xc)) + (x15_2 u>> 0x20)
            *(x12_6 - 0xc) = x15_3.d
            int64_t x15_4 = x9_9 * zx.q(*(x13_2 - 8)) + (x15_3 u>> 0x20)
            *(x12_6 - 8) = x15_4.d
            int64_t x15_5 = x9_9 * zx.q(*(x13_2 - 4)) + (x15_4 u>> 0x20)
            *(x12_6 - 4) = x15_5.d
            int64_t x15_6 = x9_9 * zx.q(*x13_2) + (x15_5 u>> 0x20)
            *x12_6 = x15_6.d
            int64_t x15_7 = x9_9 * zx.q(*(x13_2 + 4)) + (x15_6 u>> 0x20)
            *(x12_6 + 4) = x15_7.d
            int64_t x15_8 = x9_9 * zx.q(*(x13_2 + 8)) + (x15_7 u>> 0x20)
            *(x12_6 + 8) = x15_8.d
            uint64_t x16_14 = zx.q(*(x13_2 + 0xc))
            x13_2 += 0x20
            int64_t x16_16 = x9_9 * x16_14 + (x15_8 u>> 0x20)
            x15_1 = x16_16 u>> 0x20
            *(x12_6 + 0xc) = x16_16.d
            x12_6 += 0x20
        while (i_2 != 8)
        x12_7 = x15_1.d
        
        if (i_14 != x23)
            goto label_cdcb20
    else
    label_cdcb14:
        x12_7 = 0
        
        if (i_14 != x23)
        label_cdcb20:
            int64_t i_10 = x23 - i_14
            void* x11_8 = &x8_6[i_14]
            void* x10_10 = x10_8 + (i_14 << 2)
            int64_t i_3
            
            do
                uint64_t x14_2 = zx.q(*x10_10)
                x10_10 += 4
                i_3 = i_10
                i_10 -= 1
                int64_t x14_4 = x9_9 * x14_2 + zx.q(x12_7)
                x12_7 = (x14_4 u>> 0x20).d
                *x11_8 = x14_4.d
                x11_8 += 4
            while (i_3 != 1)
    
    x8_6[x23] = x12_7
else if (x22 != 0 && x23 == 1)
    entry_x8[3] = -1
    int32_t* x8_7 = *arg2
    uint32_t* x8_8
    uint64_t x9_11
    void* x10_9
    int64_t i_15
    
    if (*(arg2 + 8) != x8_7)
        x9_11 = zx.q(*x8_7)
        x8_8 = *entry_x8
        x10_9 = *x21
        i_15 = x22 & 0xfffffffffffffff8
        
        if (i_15 == 0)
            goto label_cdcb68
        
        goto label_cdc9ec
    
    x9_11 = 0
    x8_8 = *entry_x8
    x10_9 = *x21
    i_15 = x22 & 0xfffffffffffffff8
    uint32_t x12_9
    
    if (i_15 != 0)
    label_cdc9ec:
        uint64_t x15_9 = 0
        void* x12_8 = &x8_8[4]
        void* x13_3 = x10_9 + 0x10
        int64_t i_13 = i_15
        int64_t i_4
        
        do
            i_4 = i_13
            i_13 -= 8
            int64_t x15_10 = x15_9 + x9_11 * zx.q(*(x13_3 - 0x10))
            *(x12_8 - 0x10) = x15_10.d
            int64_t x15_11 = x9_11 * zx.q(*(x13_3 - 0xc)) + (x15_10 u>> 0x20)
            *(x12_8 - 0xc) = x15_11.d
            int64_t x15_12 = x9_11 * zx.q(*(x13_3 - 8)) + (x15_11 u>> 0x20)
            *(x12_8 - 8) = x15_12.d
            int64_t x15_13 = x9_11 * zx.q(*(x13_3 - 4)) + (x15_12 u>> 0x20)
            *(x12_8 - 4) = x15_13.d
            int64_t x15_14 = x9_11 * zx.q(*x13_3) + (x15_13 u>> 0x20)
            *x12_8 = x15_14.d
            int64_t x15_15 = x9_11 * zx.q(*(x13_3 + 4)) + (x15_14 u>> 0x20)
            *(x12_8 + 4) = x15_15.d
            int64_t x15_16 = x9_11 * zx.q(*(x13_3 + 8)) + (x15_15 u>> 0x20)
            *(x12_8 + 8) = x15_16.d
            uint64_t x16_30 = zx.q(*(x13_3 + 0xc))
            x13_3 += 0x20
            int64_t x16_32 = x9_11 * x16_30 + (x15_16 u>> 0x20)
            x15_9 = x16_32 u>> 0x20
            *(x12_8 + 0xc) = x16_32.d
            x12_8 += 0x20
        while (i_4 != 8)
        x12_9 = x15_9.d
        
        if (i_15 != x22)
            goto label_cdcb74
    else
    label_cdcb68:
        x12_9 = 0
        
        if (i_15 != x22)
        label_cdcb74:
            int64_t i_11 = x22 - i_15
            void* x11_9 = &x8_8[i_15]
            void* x10_11 = x10_9 + (i_15 << 2)
            int64_t i_5
            
            do
                uint64_t x14_6 = zx.q(*x10_11)
                x10_11 += 4
                i_5 = i_11
                i_11 -= 1
                int64_t x14_8 = x9_11 * x14_6 + zx.q(x12_9)
                x12_9 = (x14_8 u>> 0x20).d
                *x11_9 = x14_8.d
                x11_9 += 4
            while (i_5 != 1)
    
    x8_8[x22] = x12_9
else if (x22 != 0 && x23 != 0)
    uint32_t* x0_1 = *entry_x8
    int64_t x8_9 = entry_x8[1]
    Botan::BigInt* var_68_1
    __builtin_memset(&var_68_1, 0, 0x18)
    void* x25_1 = x8_9 - x0_1
    void* var_58_1
    uint64_t x1_1
    Botan::BigInt* x24_1
    void* x26_2
    
    if (x8_9 == x0_1)
        x1_1 = 0
        x26_2 = nullptr
        x24_1 = nullptr
    else
        if ((x25_1 & 0xffffffff80000000) != 0)
            sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
            noreturn
        
        int64_t x26_1 = x25_1 s>> 2
        Botan::BigInt* x0_3 = Botan::allocate_memory(x26_1, 4)
        x24_1 = x0_3
        var_68_1 = x0_3
        var_58_1 = x0_3 + (x26_1 << 2)
        x26_2 = x25_1 + x0_3
        memset(x0_3, 0, x25_1)
        x0_1 = *entry_x8
        void* var_60_1 = x26_2
        x1_1 = (entry_x8[1] - x0_1) s>> 2
    
    entry_x8[3] = -1
    uint32_t* x2_2 = *x21
    uint32_t* x5_1 = *arg2
    Botan::BigInt* var_80_1 = x24_1
    int64_t var_78_1 = (x26_2 - x24_1) s>> 2
    Botan::bigint_mul(x0_1, x1_1, x2_2, (*(x21 + 8) - x2_2) s>> 2, x22, x5_1, 
        (*(arg2 + 8) - x5_1) s>> 2, x23)
    arg1 = var_68_1
    
    if (arg1 != 0)
        Botan::BigInt const& var_60_2 = arg1
        Botan::deallocate_memory(arg1, (var_58_1 - arg1) s>> 2, 4)

int32_t x8_21 = zx.d(entry_x8[4].b)
    ^ ((x22 != 0 ? 1 : 0) & (x23 != 0 ? 1 : 0) & (*(x21 + 0x20) != *(arg2 + 0x20) ? 1 : 0))

if (x8_21 == 0)
    int64_t x8_22 = entry_x8[3]
    
    if (x8_22 == -1)
        uint32_t* x9_15 = *entry_x8
        int64_t x11_12 = entry_x8[1]
        void* x10_15 = x11_12 - x9_15
        
        if (x11_12 == x9_15)
            x8_22 = 0
        else
            void* x12_10
            
            x12_10 = x10_15 s>= 0 ? x10_15 : -ffffffffffffffff
            
            void* x11_13 = x9_15 - x11_12
            void* x12_11
            
            x12_11 = x12_10 s< 1 ? x12_10 : 1
            
            x8_22 = x10_15 s>> 2
            void* x10_16
            
            x10_16 = x11_13 s> x10_15 ? x11_13 : x10_15
            
            int64_t i_9 = x12_11 * (x10_16 u>> 2)
            uint64_t x11_14 = 1
            int64_t i_6
            
            do
                int32_t x12_12 = *(x9_15 - 4 + (i_9 << 2))
                i_6 = i_9
                i_9 -= 1
                x11_14 = zx.q(x11_14.d) & zx.q(((x12_12 - 1) & not.d(x12_12)) s>> 0x1f)
                x8_22 -= x11_14
            while (i_6 != 1)
        
        entry_x8[3] = x8_22
    
    x8_21 = x8_22 == 0 ? 1 : 0

entry_x8[4].d = x8_21
