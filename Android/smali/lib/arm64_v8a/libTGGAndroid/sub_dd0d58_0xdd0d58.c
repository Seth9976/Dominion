// 函数: sub_dd0d58
// 地址: 0xdd0d58
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x8 = *arg2

if (arg2[1] == x8 || (zx.d(*x8) & 1) == 0)
    __builtin_memset(arg1, 0, 0x18)
    *(arg1 + 0x18) = -1
    arg1[2].d = 1
    return 

int128_t* var_88
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(&var_88)
uint64_t x22_1 = arg3 u>> 5
int64_t var_70_1 = arg2[3]
int32_t x8_3 = arg2[4].d
int64_t var_80
int64_t var_78

if (arg3 == 0)
    int128_t* x0_2 = var_88
    size_t x9_6 = var_78 - x0_2
    size_t x2_1 = var_80 - x0_2
    int64_t x10_5 = x9_6 s>> 2
    int64_t x11_2 = x2_1 s>> 2
    
    if (x10_5 u> x11_2)
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&var_88)
        x0_2 = var_88
        x2_1 = var_80 - x0_2
    else if (x10_5 u< x11_2)
        x2_1 = x9_6
        var_80 = var_78
    
    if (x2_1 != 0)
        memset(x0_2, 0, x2_1)
    
    var_70_1 = 0
else
    int128_t* x8_4 = var_88
    int64_t x9_3 = (var_80 - x8_4) s>> 2
    
    if (x22_1 u< x9_3)
        if (x9_3 != x22_1 + 1)
            size_t x2 = (x9_3 - (x22_1 + 1)) << 2
            
            if (x2 != 0)
                memset(x8_4 + ((x22_1 + 1) << 2), 0, x2)
                x8_4 = var_88
        
        uint64_t x9_5 = x22_1 << 2
        *(x8_4 + x9_5) &= not.d(0xffffffff << arg3.d)
        var_70_1 = -1

int32_t* var_b0
__builtin_memset(&var_b0, 0, 0x18)
int32_t var_90_1 = 1
int64_t var_98_1 = -1
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&var_b0)
*var_b0 = 1
int32_t* x8_9 = var_b0
int64_t var_98_2 = -1
void* var_a8

if ((var_a8 - x8_9) s>> 2 u>= 2)
    x8_9[1] = 0

int64_t x21_2 = var_70_1
void* var_e0
__builtin_memset(&var_e0, 0, 0x18)
int64_t var_c8_1 = -1
int32_t var_c0_1 = 1
int64_t var_110_1
__builtin_memset(&var_110_1, 0, 0x18)
int64_t var_f8_1 = -1
int32_t var_f0_1 = 1

if (x21_2 == -1)
    int128_t* x8_10 = var_88
    void* x9_10 = var_80 - x8_10
    
    if (var_80 == x8_10)
        x21_2 = 0
    else
        void* x11_3
        
        x11_3 = x9_10 s>= 0 ? x9_10 : -ffffffffffffffff
        
        void* x10_7 = x8_10 - var_80
        void* x11_4
        
        x11_4 = x11_3 s< 1 ? x11_3 : 1
        
        x21_2 = x9_10 s>> 2
        void* x9_11
        
        x9_11 = x10_7 s> x9_10 ? x10_7 : x9_10
        
        int64_t i_2 = x11_4 * (x9_11 u>> 2)
        uint64_t x10_8 = 1
        int64_t i
        
        do
            int32_t x11_5 = *(x8_10 - 4 + (i_2 << 2))
            i = i_2
            i_2 -= 1
            x10_8 = zx.q(x10_8.d) & zx.q(((x11_5 - 1) & not.d(x11_5)) s>> 0x1f)
            x21_2 -= x10_8
        while (i != 1)
    
    var_70_1 = x21_2

int64_t x8_14

if ((arg3 & 0x1f) == 0)
    x8_14 = 0
else
    x8_14 = 0x20 - (arg3 & 0x1f)

int64_t x24_1 = x8_14 + arg3

if (x24_1 u>> 5 != 0)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&var_e0)

int32_t* x8_17 = var_b0
int64_t x9_16 = (var_a8 - x8_17) s>> 2
int64_t var_a0

if (x21_2 u> x9_16)
    if (x21_2 u<= (var_a0 - x8_17) s>> 2)
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&var_b0)
    else if ((x21_2 & 0xfffffffffffffff8) + 8 u> x9_16)
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&var_b0)
    else if ((x21_2 & 0xfffffffffffffff8) + 8 u< x9_16)
        var_a8 = &x8_17[(x21_2 & 0xfffffffffffffff8) + 8]

void* var_d8_1
int64_t var_d0
uint64_t x21_4
int64_t x25_2

if (x24_1 != 0)
    int64_t x28_1 = 0
    void* x21_3 = nullptr
    int64_t x26_1 = 0
    int32_t fp_1 = 1
    int64_t x23_2 = -1
    int128_t v0_2
    
    do
        int32_t* x8_19 = var_b0
        int32_t x9_18
        
        if (var_a8 == x8_19)
            x9_18 = 0
        else
            x9_18 = *x8_19
        
        void* x8_20 = var_e0
        int32_t x22_2 = x9_18 & 1
        uint64_t x25_1 = x26_1 u>> 5
        int32_t x20_2 = x22_2 << x26_1.d
        int64_t x9_20 = (var_d8_1 - x8_20) s>> 2
        
        if (x9_20 u<= x25_1)
            var_c8_1 = -1
            
            if (x20_2 != 0)
                if (x25_1 u< (var_d0 - x8_20) s>> 2)
                    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                        &var_e0)
                else if (((x25_1 + 1) & 0xffffffffffffff8) + 8 u> x9_20)
                    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(
                        &var_e0)
                else if (((x25_1 + 1) & 0xffffffffffffff8) + 8 u< x9_20)
                    var_d8_1 = x8_20 + ((((x25_1 + 1) & 0xffffffffffffff8) + 8) << 2)
                
                *(var_e0 + (x25_1 << 2)) = x20_2
        else
            var_c8_1 = -1
            *(var_e0 + (x25_1 << 2)) = *(x8_20 + (x25_1 << 2)) | x20_2
        
        int64_t x2_2 = var_70_1
        int128_t* x1_7 = var_88
        
        if (x2_2 == -1)
            void* x9_21 = var_80 - x1_7
            
            if (var_80 == x1_7)
                x2_2 = 0
            else
                void* x11_7
                
                x11_7 = x9_21 s>= 0 ? x9_21 : -ffffffffffffffff
                
                void* x10_19 = x1_7 - var_80
                void* x11_8
                
                x11_8 = x11_7 s< 1 ? x11_7 : 1
                
                x2_2 = x9_21 s>> 2
                void* x9_22
                
                x9_22 = x10_19 s> x9_21 ? x10_19 : x9_21
                
                int64_t i_3 = x11_8 * (x9_22 u>> 2)
                uint64_t x10_20 = 1
                int64_t i_1
                
                do
                    int32_t x11_9 = *(x1_7 - 4 + (i_3 << 2))
                    i_1 = i_3
                    i_3 -= 1
                    x10_20 = zx.q(x10_20.d) & zx.q(((x11_9 - 1) & not.d(x11_9)) s>> 0x1f)
                    x2_2 -= x10_20
                while (i_1 != 1)
            
            var_70_1 = x2_2
        
        Botan::BigInt::add2(&var_b0, x1_7, x2_2, zx.q(x8_3 != 1 ? 1 : 0))
        int128_t var_140
        v0_2 = var_140
        int64_t var_130
        x25_2 = var_130
        int64_t var_128
        int64_t x20_3 = var_128
        var_130 = x28_1
        var_128 = x23_2
        int32_t var_120
        int32_t x23_3 = var_120
        var_140.q = x21_3
        var_110_1.o = v0_2
        int64_t var_100_1 = x25_2
        int64_t var_f8_2 = x20_3
        int32_t var_f0_2 = x23_3
        var_120 = fp_1
        
        if (x21_3 != 0)
            var_140:8.q = x21_3
            Botan::deallocate_memory(x21_3, (x28_1 - x21_3) s>> 2, 4)
        
        Botan::BigInt::ct_cond_assign(&var_b0, zx.q(x22_2))
        Botan::BigInt::operator>>=(&var_b0)
        x26_1 += 1
        fp_1 = x23_3
        x21_3 = v0_2.q
        x23_2 = x20_3
        x28_1 = x25_2
    while (x26_1 != x24_1)
    
    x21_4 = v0_2.q
    
    if (arg3 == 0)
        goto label_dd1224
    
    goto label_dd11b8

x25_2 = 0
x21_4 = 0
int64_t x8_29

if (arg3 != 0)
label_dd11b8:
    void* x8_28 = var_e0
    int64_t x9_26 = (var_d8_1 - x8_28) s>> 2
    
    if (x22_1 u>= x9_26)
        x8_29 = var_c8_1
    else
        if (x9_26 != x22_1 + 1)
            int64_t x2_3 = (x9_26 - (x22_1 + 1)) << 2
            
            if (x2_3 != 0)
                memset(x8_28 + ((x22_1 + 1) << 2), 0, x2_3)
                x8_28 = var_e0
        
        uint64_t x9_28 = x22_1 << 2
        *(x8_28 + x9_28) &= not.d(0xffffffff << arg3.d)
        x8_29 = -1
else
label_dd1224:
    void* x0_15 = var_e0
    void* x9_29 = var_d0 - x0_15
    void* x2_4 = var_d8_1 - x0_15
    int64_t x10_25 = x9_29 s>> 2
    int64_t x11_12 = x2_4 s>> 2
    
    if (x10_25 u> x11_12)
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&var_e0)
        x0_15 = var_e0
        x2_4 = var_d8_1 - x0_15
    else if (x10_25 u< x11_12)
        x2_4 = x9_29
        int64_t var_d8_2 = var_d0
    
    if (x2_4 != 0)
        memset(x0_15, 0, x2_4)
    
    x8_29 = 0

int128_t v0_1 = var_e0.o
__builtin_memset(&var_e0, 0, 0x18)
int64_t var_c8_2 = -1
*arg1 = v0_1
arg1[1].q = var_d0
*(arg1 + 0x18) = x8_29
arg1[2].d = var_c0_1
int32_t var_c0_2 = 1

if (x21_4 != 0)
    Botan::deallocate_memory(x21_4, (x25_2 - x21_4) s>> 2, 4)
    void* x0_18 = var_e0
    
    if (x0_18 != 0)
        void* var_d8_3 = x0_18
        int64_t var_d0_1
        Botan::deallocate_memory(x0_18, (var_d0_1 - x0_18) s>> 2, 4)

int32_t* x0_19 = var_b0

if (x0_19 != 0)
    int32_t* var_a8_1 = x0_19
    Botan::deallocate_memory(x0_19, (var_a0 - x0_19) s>> 2, 4)

arg1 = var_88

if (arg1 != 0)
    int128_t* var_80_1 = arg1
    Botan::deallocate_memory(arg1, (var_78 - arg1) s>> 2, 4)
