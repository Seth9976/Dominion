// 函数: _ZN5Botan25almost_montgomery_inverseERNS_6BigIntERKS0_S3_
// 地址: 0xdcfd30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* var_58
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(&var_58)
int64_t var_40 = *(arg3 + 0x18)
*(arg3 + 0x20)
uint64_t var_80
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(&var_80)
int64_t j_12 = *(arg2 + 0x18)
int32_t i = *(arg2 + 0x20)
uint64_t var_a8
__builtin_memset(&var_a8, 0, 0x18)
uint64_t var_90 = -1
int32_t var_88 = 1
int32_t* var_d0
__builtin_memset(&var_d0, 0, 0x18)
int32_t var_b0 = 1
int64_t var_b8 = -1
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&var_d0)
*var_d0 = 1
int32_t* x8_4 = var_d0
int64_t var_b8_1 = -1
int64_t var_c8

if ((var_c8 - x8_4) s>> 2 u>= 2)
    x8_4[1] = 0

int64_t var_a0
int64_t result

if (i == 0)
    result = 0
else
    result = 0
    
    do
        int64_t j_6 = j_12
        int64_t var_78
        
        if (j_6 == -1)
            uint64_t x9_3 = var_80
            int64_t x10_1 = var_78 - x9_3
            
            if (var_78 == x9_3)
                j_6 = 0
                j_12 = 0
            label_dcfe80:
                
                if (j_6 == 0)
                    break
                
                uint64_t x9_5 = var_80
                int32_t x10_4 = 0
                int64_t j
                
                do
                    int32_t x11_4 = *x9_5
                    x9_5 += 4
                    j = j_6
                    j_6 -= 1
                    int32_t x11_6 = ((x11_4 - 1) & not.d(x11_4)) s>> 0x1f
                    x10_4 = (x10_4 & x11_6) | (not.d(x11_6) & 1)
                while (j != 1)
                
                if (x10_4 s< 1)
                    break
            else
                int64_t x12_1
                
                x12_1 = x10_1 s>= 0 ? x10_1 : -1
                
                int64_t x11_2 = x9_3 - var_78
                int64_t x12_2
                
                x12_2 = x12_1 s< 1 ? x12_1 : 1
                
                j_6 = x10_1 s>> 2
                int64_t x10_2
                
                x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
                
                int64_t j_11 = x12_2 * (x10_2 u>> 2)
                uint64_t x11_3 = 1
                int64_t j_1
                
                do
                    int32_t x12_3 = *(x9_3 - 4 + (j_11 << 2))
                    j_1 = j_11
                    j_11 -= 1
                    x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
                    j_6 -= x11_3
                while (j_1 != 1)
                j_12 = j_6
                
                if (j_6 u<= 1)
                    goto label_dcfe80
        else if (j_6 u<= 1)
            goto label_dcfe80
        
        char* x8_7 = var_58
        int64_t var_50
        
        if (var_50 == x8_7 || (zx.d(*x8_7) & 1) == 0)
            Botan::BigInt::operator>>=(&var_58)
            Botan::BigInt::operator<<=(&var_d0)
        else
            uint64_t x8_9 = var_80
            
            if (var_78 == x8_9 || (zx.d(*x8_9) & 1) == 0)
                Botan::BigInt::operator>>=(&var_80)
                Botan::BigInt::operator<<=(&var_a8)
            else if ((Botan::BigInt::is_less_than(&var_80) & 1) == 0)
                int64_t x2 = var_40
                uint64_t x1_8 = var_58
                
                if (x2 == -1)
                    int64_t x9_11 = var_50 - x1_8
                    
                    if (var_50 == x1_8)
                        x2 = 0
                    else
                        int64_t x11_13
                        
                        x11_13 = x9_11 s>= 0 ? x9_11 : -1
                        
                        int64_t x10_8 = x1_8 - var_50
                        int64_t x11_14
                        
                        x11_14 = x11_13 s< 1 ? x11_13 : 1
                        
                        x2 = x9_11 s>> 2
                        int64_t x9_12
                        
                        x9_12 = x10_8 s> x9_11 ? x10_8 : x9_11
                        
                        int64_t j_8 = x11_14 * (x9_12 u>> 2)
                        uint64_t x10_9 = 1
                        int64_t j_2
                        
                        do
                            int32_t x11_15 = *(x1_8 - 4 + (j_8 << 2))
                            j_2 = j_8
                            j_8 -= 1
                            x10_9 = zx.q(x10_9.d) & zx.q(((x11_15 - 1) & not.d(x11_15)) s>> 0x1f)
                            x2 -= x10_9
                        while (j_2 != 1)
                    
                    var_40 = x2
                
                Botan::BigInt::add(&var_80, x1_8, x2)
                Botan::BigInt::operator>>=(&var_80)
                uint64_t x2_2 = var_90
                uint64_t x1_12 = var_a8
                
                if (x2_2 == -1)
                    int64_t x9_17 = var_a0 - x1_12
                    
                    if (var_a0 == x1_12)
                        x2_2 = 0
                    else
                        int64_t x11_21
                        
                        x11_21 = x9_17 s>= 0 ? x9_17 : -1
                        
                        int64_t x10_12 = x1_12 - var_a0
                        int64_t x11_22
                        
                        x11_22 = x11_21 s< 1 ? x11_21 : 1
                        
                        x2_2 = x9_17 s>> 2
                        int64_t x9_18
                        
                        x9_18 = x10_12 s> x9_17 ? x10_12 : x9_17
                        
                        int64_t j_10 = x11_22 * (x9_18 u>> 2)
                        uint64_t x10_13 = 1
                        int64_t j_3
                        
                        do
                            int32_t x11_23 = *(x1_12 - 4 + (j_10 << 2))
                            j_3 = j_10
                            j_10 -= 1
                            x10_13 = zx.q(x10_13.d) & zx.q(((x11_23 - 1) & not.d(x11_23)) s>> 0x1f)
                            x2_2 -= x10_13
                        while (j_3 != 1)
                    
                    var_90 = x2_2
                
                Botan::BigInt::add(&var_d0, x1_12, x2_2)
                Botan::BigInt::operator<<=(&var_a8)
            else
                int64_t j_13 = j_12
                uint64_t x1_7 = var_80
                
                if (j_13 == -1)
                    int64_t x9_8 = var_78 - x1_7
                    
                    if (var_78 == x1_7)
                        j_13 = 0
                    else
                        int64_t x11_9
                        
                        x11_9 = x9_8 s>= 0 ? x9_8 : -1
                        
                        int64_t x10_6 = x1_7 - var_78
                        int64_t x11_10
                        
                        x11_10 = x11_9 s< 1 ? x11_9 : 1
                        
                        j_13 = x9_8 s>> 2
                        int64_t x9_9
                        
                        x9_9 = x10_6 s> x9_8 ? x10_6 : x9_8
                        
                        int64_t j_7 = x11_10 * (x9_9 u>> 2)
                        uint64_t x10_7 = 1
                        int64_t j_4
                        
                        do
                            int32_t x11_11 = *(x1_7 - 4 + (j_7 << 2))
                            j_4 = j_7
                            j_7 -= 1
                            x10_7 = zx.q(x10_7.d) & zx.q(((x11_11 - 1) & not.d(x11_11)) s>> 0x1f)
                            j_13 -= x10_7
                        while (j_4 != 1)
                    
                    j_12 = j_13
                
                Botan::BigInt::add(&var_58, x1_7, j_13)
                Botan::BigInt::operator>>=(&var_58)
                int64_t x2_1 = var_b8_1
                uint64_t x1_10 = var_d0
                
                if (x2_1 == -1)
                    int64_t x9_14 = var_c8 - x1_10
                    
                    if (var_c8 == x1_10)
                        x2_1 = 0
                    else
                        int64_t x11_17
                        
                        x11_17 = x9_14 s>= 0 ? x9_14 : -1
                        
                        int64_t x10_10 = x1_10 - var_c8
                        int64_t x11_18
                        
                        x11_18 = x11_17 s< 1 ? x11_17 : 1
                        
                        x2_1 = x9_14 s>> 2
                        int64_t x9_15
                        
                        x9_15 = x10_10 s> x9_14 ? x10_10 : x9_14
                        
                        int64_t j_9 = x11_18 * (x9_15 u>> 2)
                        uint64_t x10_11 = 1
                        int64_t j_5
                        
                        do
                            int32_t x11_19 = *(x1_10 - 4 + (j_9 << 2))
                            j_5 = j_9
                            j_9 -= 1
                            x10_11 = zx.q(x10_11.d) & zx.q(((x11_19 - 1) & not.d(x11_19)) s>> 0x1f)
                            x2_1 -= x10_11
                        while (j_5 != 1)
                    
                    var_b8_1 = x2_1
                
                Botan::BigInt::add(&var_a8, x1_10, x2_1)
                Botan::BigInt::operator<<=(&var_d0)
        
        result += 1
    while (i != 0)

if ((Botan::BigInt::cmp(&var_a8, arg3.b) & 0x80000000) == 0)
    int64_t x2_4 = *(arg3 + 0x18)
    uint64_t x1_16 = *arg3
    
    if (x2_4 == -1)
        int64_t x8_21 = *(arg3 + 8)
        int64_t x9_20 = x8_21 - x1_16
        
        if (x8_21 == x1_16)
            x2_4 = 0
        else
            int64_t x11_25
            
            x11_25 = x9_20 s>= 0 ? x9_20 : -1
            
            int64_t x10_14 = x1_16 - x8_21
            int64_t x11_26
            
            x11_26 = x11_25 s< 1 ? x11_25 : 1
            
            x2_4 = x9_20 s>> 2
            int64_t x9_21
            
            x9_21 = x10_14 s> x9_20 ? x10_14 : x9_20
            
            int64_t i_3 = x11_26 * (x9_21 u>> 2)
            uint64_t x10_15 = 1
            int64_t i_1
            
            do
                int32_t x11_27 = *(x1_16 - 4 + (i_3 << 2))
                i_1 = i_3
                i_3 -= 1
                x10_15 = zx.q(x10_15.d) & zx.q(((x11_27 - 1) & not.d(x11_27)) s>> 0x1f)
                x2_4 -= x10_15
            while (i_1 != 1)
        
        *(arg3 + 0x18) = x2_4
    
    *(arg3 + 0x20)
    Botan::BigInt::add(&var_a8, x1_16, x2_4)

uint64_t x2_5 = var_90
uint32_t* x1_17 = var_a8

if (x2_5 == -1)
    void* x9_23 = var_a0 - x1_17
    
    if (var_a0 == x1_17)
        x2_5 = 0
    else
        void* x11_29
        
        x11_29 = x9_23 s>= 0 ? x9_23 : -ffffffffffffffff
        
        void* x10_16 = x1_17 - var_a0
        void* x11_30
        
        x11_30 = x11_29 s< 1 ? x11_29 : 1
        
        x2_5 = x9_23 s>> 2
        void* x9_24
        
        x9_24 = x10_16 s> x9_23 ? x10_16 : x9_23
        
        int64_t i_4 = x11_30 * (x9_24 u>> 2)
        uint64_t x10_17 = 1
        int64_t i_2
        
        do
            int32_t x11_31 = *(x1_17 - 4 + (i_4 << 2))
            i_2 = i_4
            i_4 -= 1
            x10_17 = zx.q(x10_17.d) & zx.q(((x11_31 - 1) & not.d(x11_31)) s>> 0x1f)
            x2_5 -= x10_17
        while (i_2 != 1)
    
    uint64_t var_90_1 = x2_5

Botan::BigInt::add2(arg3, x1_17, x2_5, zx.q(var_88 != 1 ? 1 : 0))
int128_t var_100
int64_t var_f0
void* x0_21

if (&var_100 == arg1)
    x0_21 = *arg1
    
    if (x0_21 != 0)
        var_100:8.q = x0_21
        Botan::deallocate_memory(x0_21, (var_f0 - x0_21) s>> 2, 4)
else
    x0_21 = *arg1
    var_100.q = x0_21
    *arg1 = var_100
    int64_t x11_33 = *(arg1 + 0x10)
    int64_t x9_26 = *(arg1 + 0x18)
    *(arg1 + 0x10) = var_f0
    int64_t var_e8
    *(arg1 + 0x18) = var_e8
    int64_t var_e8_1 = x9_26
    int32_t x9_27 = *(arg1 + 0x20)
    int32_t var_e0
    *(arg1 + 0x20) = var_e0
    int32_t var_e0_1 = x9_27
    
    if (x0_21 != 0)
        var_100:8.q = x0_21
        Botan::deallocate_memory(x0_21, (x11_33 - x0_21) s>> 2, 4)
int32_t* x0_22 = var_d0

if (x0_22 != 0)
    int32_t* var_c8_1 = x0_22
    int64_t var_c0
    Botan::deallocate_memory(x0_22, (var_c0 - x0_22) s>> 2, 4)

uint64_t x0_23 = var_a8

if (x0_23 != 0)
    uint64_t var_a0_1 = x0_23
    int64_t var_98
    Botan::deallocate_memory(x0_23, (var_98 - x0_23) s>> 2, 4)

uint64_t x0_24 = var_80

if (x0_24 != 0)
    uint64_t var_78_1 = x0_24
    int64_t var_70
    Botan::deallocate_memory(x0_24, (var_70 - x0_24) s>> 2, 4)

char* x0_25 = var_58

if (x0_25 != 0)
    char* var_50_1 = x0_25
    int64_t var_48
    Botan::deallocate_memory(x0_25, (var_48 - x0_25) s>> 2, 4)

return result
