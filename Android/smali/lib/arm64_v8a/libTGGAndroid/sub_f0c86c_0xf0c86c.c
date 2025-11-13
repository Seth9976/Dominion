// 函数: sub_f0c86c
// 地址: 0xf0c86c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* var_160
int64_t var_150_1
uint64_t var_88
void* x19
int64_t x20
int32_t x21
int64_t x26
int64_t x27

if (*(arg1 + 0x68) == 0)
    uint64_t x1_3 = *(arg1 + 0x38)
    *(arg1 + 0x40)
    __builtin_memset(&var_160, 0, 0x18)
    int64_t var_148_2 = -1
    int32_t var_140_2 = 1
    Botan::BigInt::binary_decode(&var_160, x1_3)
    x19 = var_160
    int64_t var_158_1
    x27 = var_158_1
    x26 = var_150_1
    x20 = var_148_2
    x21 = var_140_2
    *(arg1 + 0x40) = *(arg1 + 0x38)
else
    Botan::Buffered_Computation::final()
    uint64_t x1 = var_88
    __builtin_memset(&var_160, 0, 0x18)
    int64_t var_148 = -1
    int32_t var_140 = 1
    Botan::BigInt::binary_decode(&var_160, x1)
    x19 = var_160
    int64_t var_158
    x27 = var_158
    int64_t var_150
    x26 = var_150
    x20 = var_148
    uint64_t x0_2 = var_88
    x21 = var_140
    __builtin_memset(&var_160, 0, 0x18)
    int64_t var_148_1 = -1
    int32_t var_140_1 = 1
    
    if (x0_2 != 0)
        uint64_t var_80_1 = x0_2
        int64_t var_78
        Botan::deallocate_memory(x0_2, var_78 - x0_2, 1)
    
    int64_t* x0_3 = *(arg1 + 0x68)
    int64_t x1_2 = *(arg1 + 0x50)
    (*(*x0_3 + 0x18))(x0_3, x1_2, *(arg1 + 0x58) - x1_2)

Botan::EC_Group::data()
int64_t x0_8 = Botan::BigInt::bits()
int64_t x8_8

if ((x0_8 & 7) == 0)
    x8_8 = 0
else
    x8_8 = 8 - (x0_8 & 7)

int32_t x24_1

if (((x8_8 + x0_8) u>> 2 & 0x3ffffffffffffffe) != arg3)
    x24_1 = 0
else
    __builtin_memset(&var_88, 0, 0x18)
    int64_t i_17 = -1
    int32_t var_68_1 = 1
    Botan::BigInt::binary_decode(&var_88, arg2)
    uint32_t* var_b0
    __builtin_memset(&var_b0, 0, 0x18)
    uint64_t i_16 = -1
    int32_t var_90_1 = 1
    Botan::BigInt::binary_decode(&var_b0, arg2 + (arg3 u>> 1))
    
    if (var_68_1 == 0)
        x24_1 = 0
    else
        int64_t i_8 = i_17
        
        if (i_8 == -1)
            uint64_t x9_2 = var_88
            int64_t var_80_2
            int64_t x10_1 = var_80_2 - x9_2
            
            if (var_80_2 == x9_2)
                i_8 = 0
                int64_t var_70_1 = 0
            else
                int64_t x12_1
                
                x12_1 = x10_1 s>= 0 ? x10_1 : -1
                
                int64_t x11_2 = x9_2 - var_80_2
                int64_t x12_2
                
                x12_2 = x12_1 s< 1 ? x12_1 : 1
                
                i_8 = x10_1 s>> 2
                int64_t x10_2
                
                x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
                
                int64_t i_12 = x12_2 * (x10_2 u>> 2)
                uint64_t x11_3 = 1
                int64_t i
                
                do
                    int32_t x12_3 = *(x9_2 - 4 + (i_12 << 2))
                    i = i_12
                    i_12 -= 1
                    x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
                    i_8 -= x11_3
                while (i != 1)
                int64_t i_18 = i_8
                
                if (i_8 u> 1)
                    goto label_f0cac0
            
        label_f0ca70:
            
            if (i_8 == 0)
                x24_1 = 0
            else
                uint64_t x9_4 = var_88
                int32_t x10_4 = 0
                int64_t i_1
                
                do
                    int32_t x11_4 = *x9_4
                    x9_4 += 4
                    i_1 = i_8
                    i_8 -= 1
                    int32_t x11_6 = ((x11_4 - 1) & not.d(x11_4)) s>> 0x1f
                    x10_4 = (x10_4 & x11_6) | (not.d(x11_6) & 1)
                while (i_1 != 1)
                
                if (x10_4 s>= 1)
                    goto label_f0cac0
                
                x24_1 = 0
        else
            if (i_8 u<= 1)
                goto label_f0ca70
            
        label_f0cac0:
            x24_1 = 0
            
            if ((Botan::BigInt::cmp(&var_88, Botan::EC_Group::data() - 0x18) & 0x80000000) != 0
                    && var_90_1 != 0)
                uint64_t i_9 = i_16
                int64_t var_a8
                
                if (i_9 == -1)
                    uint32_t* x9_5 = var_b0
                    void* x10_6 = var_a8 - x9_5
                    
                    if (var_a8 == x9_5)
                        i_9 = 0
                        i_16 = 0
                    else
                        void* x12_6
                        
                        x12_6 = x10_6 s>= 0 ? x10_6 : -ffffffffffffffff
                        
                        void* x11_10 = x9_5 - var_a8
                        void* x12_7
                        
                        x12_7 = x12_6 s< 1 ? x12_6 : 1
                        
                        i_9 = x10_6 s>> 2
                        void* x10_7
                        
                        x10_7 = x11_10 s> x10_6 ? x11_10 : x10_6
                        
                        int64_t i_13 = x12_7 * (x10_7 u>> 2)
                        uint64_t x11_11 = 1
                        int64_t i_2
                        
                        do
                            int32_t x12_8 = *(x9_5 - 4 + (i_13 << 2))
                            i_2 = i_13
                            i_13 -= 1
                            x11_11 = zx.q(x11_11.d) & zx.q(((x12_8 - 1) & not.d(x12_8)) s>> 0x1f)
                            i_9 -= x11_11
                        while (i_2 != 1)
                        i_16 = i_9
                        
                        if (i_9 u> 1)
                            goto label_f0cbb4
                    
                label_f0cb64:
                    
                    if (i_9 == 0)
                        x24_1 = 0
                    else
                        uint32_t* x9_7 = var_b0
                        int32_t x10_9 = 0
                        uint64_t i_3
                        
                        do
                            uint32_t x11_12 = *x9_7
                            x9_7 = &x9_7[1]
                            i_3 = i_9
                            i_9 -= 1
                            int32_t x11_14 = ((x11_12 - 1) & not.d(x11_12)) s>> 0x1f
                            x10_9 = (x10_9 & x11_14) | (not.d(x11_14) & 1)
                        while (i_3 != 1)
                        
                        if (x10_9 s>= 1)
                            goto label_f0cbb4
                        
                        x24_1 = 0
                else
                    if (i_9 u<= 1)
                        goto label_f0cb64
                    
                label_f0cbb4:
                    
                    if ((Botan::BigInt::cmp(&var_b0, Botan::EC_Group::data() - 0x18) & 0x80000000)
                            != 0)
                        uint64_t i_19 = i_16
                        uint32_t* x1_11 = var_b0
                        
                        if (i_19 == -1)
                            void* x9_8 = var_a8 - x1_11
                            
                            if (var_a8 == x1_11)
                                i_19 = 0
                            else
                                void* x11_17
                                
                                x11_17 = x9_8 s>= 0 ? x9_8 : -ffffffffffffffff
                                
                                void* x10_11 = x1_11 - var_a8
                                void* x11_18
                                
                                x11_18 = x11_17 s< 1 ? x11_17 : 1
                                
                                i_19 = x9_8 s>> 2
                                void* x9_9
                                
                                x9_9 = x10_11 s> x9_8 ? x10_11 : x9_8
                                
                                int64_t i_10 = x11_18 * (x9_9 u>> 2)
                                uint64_t x10_12 = 1
                                int64_t i_4
                                
                                do
                                    int32_t x11_19 = *(x1_11 - 4 + (i_10 << 2))
                                    i_4 = i_10
                                    i_10 -= 1
                                    x10_12 = zx.q(x10_12.d)
                                        & zx.q(((x11_19 - 1) & not.d(x11_19)) s>> 0x1f)
                                    i_19 -= x10_12
                                while (i_4 != 1)
                            
                            uint64_t i_20 = i_19
                        
                        Botan::BigInt::add2(&var_88, x1_11, i_19, zx.q(var_90_1))
                        Botan::Modular_Reducer::reduce(Botan::EC_Group::data() + 0x138)
                        void* x0_27 = var_160
                        
                        if (x0_27 != 0)
                            void* var_158_2 = x0_27
                            Botan::deallocate_memory(x0_27, (var_150_1 - x0_27) s>> 2, 4)
                        
                        void* var_d8
                        int32_t var_b8
                        void* x0_28
                        
                        if (var_b8 == 0)
                        label_f0cdc8:
                            Botan::PointGFp_Multi_Point_Precompute::multi_exp(arg1 + 0x18, &var_b0)
                            int64_t var_e8
                            int64_t x8_25 = var_e8
                            
                            if (x8_25 == -1)
                                int64_t var_100
                                int64_t var_f8
                                int64_t x10_18 = var_f8 - var_100
                                
                                if (var_f8 == var_100)
                                    x8_25 = 0
                                else
                                    int64_t x12_17
                                    
                                    x12_17 = x10_18 s>= 0 ? x10_18 : -1
                                    
                                    int64_t x11_30 = var_100 - var_f8
                                    int64_t x12_18
                                    
                                    x12_18 = x12_17 s< 1 ? x12_17 : 1
                                    
                                    x8_25 = x10_18 s>> 2
                                    int64_t x10_19
                                    
                                    x10_19 = x11_30 s> x10_18 ? x11_30 : x10_18
                                    
                                    int64_t i_15 = x12_18 * (x10_19 u>> 2)
                                    uint64_t x11_31 = 1
                                    int64_t i_5
                                    
                                    do
                                        int32_t x12_19 = *(var_100 - 4 + (i_15 << 2))
                                        i_5 = i_15
                                        i_15 -= 1
                                        x11_31 = zx.q(x11_31.d)
                                            & zx.q(((x12_19 - 1) & not.d(x12_19)) s>> 0x1f)
                                        x8_25 -= x11_31
                                    while (i_5 != 1)
                                
                                int64_t var_e8_1 = x8_25
                            
                            if (x8_25 == 0)
                                x24_1 = 0
                            else
                                Botan::PointGFp::get_affine_x()
                                
                                if (x20 == -1)
                                    void* x9_16 = x27 - x19
                                    
                                    if (x27 == x19)
                                        x20 = 0
                                    else
                                        void* x11_32
                                        
                                        x11_32 = x9_16 s>= 0 ? x9_16 : -ffffffffffffffff
                                        
                                        void* x10_21 = x19 - x27
                                        void* x11_33
                                        
                                        x11_33 = x11_32 s< 1 ? x11_32 : 1
                                        
                                        x20 = x9_16 s>> 2
                                        void* x9_17
                                        
                                        x9_17 = x10_21 s> x9_16 ? x10_21 : x9_16
                                        
                                        int64_t i_11 = x11_33 * (x9_17 u>> 2)
                                        uint64_t x10_22 = 1
                                        int64_t i_6
                                        
                                        do
                                            int32_t x11_34 = *(x19 - 4 + (i_11 << 2))
                                            i_6 = i_11
                                            i_11 -= 1
                                            x10_22 = zx.q(x10_22.d)
                                                & zx.q(((x11_34 - 1) & not.d(x11_34)) s>> 0x1f)
                                            x20 -= x10_22
                                        while (i_6 != 1)
                                
                                void* var_1d8
                                Botan::BigInt::add2(&var_1d8, x19, x20, zx.q(x21))
                                Botan::Modular_Reducer::reduce(Botan::EC_Group::data() + 0x138)
                                void* var_188
                                int32_t x0_35 = Botan::BigInt::is_equal(&var_188)
                                void* x8_27 = var_188
                                x24_1 = x0_35
                                
                                if (x8_27 != 0)
                                    void* var_180_1 = x8_27
                                    int64_t var_178
                                    Botan::deallocate_memory(x8_27, (var_178 - x8_27) s>> 2, 4)
                                
                                void* var_1b0
                                
                                if (var_1b0 != 0)
                                    void* var_1a8_1 = var_1b0
                                    int64_t var_1a0
                                    Botan::deallocate_memory(var_1b0, (var_1a0 - var_1b0) s>> 2, 4)
                                
                                void* x0_38 = var_1d8
                                
                                if (x0_38 != 0)
                                    void* var_1d0_1 = x0_38
                                    int64_t var_1c8
                                    Botan::deallocate_memory(x0_38, (var_1c8 - x0_38) s>> 2, 4)
                            
                            Botan::PointGFp::~PointGFp()
                            x0_28 = var_d8
                            goto label_f0cf78
                        
                        int64_t var_c0
                        int64_t x8_24 = var_c0
                        
                        if (x8_24 == -1)
                            int64_t var_d0
                            void* x10_13 = var_d0 - var_d8
                            
                            if (var_d0 == var_d8)
                                x8_24 = 0
                            else
                                void* x12_12
                                
                                x12_12 = x10_13 s>= 0 ? x10_13 : -ffffffffffffffff
                                
                                void* x11_22 = var_d8 - var_d0
                                void* x12_13
                                
                                x12_13 = x12_12 s< 1 ? x12_12 : 1
                                
                                x8_24 = x10_13 s>> 2
                                void* x10_14
                                
                                x10_14 = x11_22 s> x10_13 ? x11_22 : x10_13
                                
                                int64_t i_14 = x12_13 * (x10_14 u>> 2)
                                uint64_t x11_23 = 1
                                int64_t i_7
                                
                                do
                                    int32_t x12_14 = *(var_d8 - 4 + (i_14 << 2))
                                    i_7 = i_14
                                    i_14 -= 1
                                    x11_23 = zx.q(x11_23.d)
                                        & zx.q(((x12_14 - 1) & not.d(x12_14)) s>> 0x1f)
                                    x8_24 -= x11_23
                                while (i_7 != 1)
                            
                            int64_t var_c0_1 = x8_24
                        
                        if (x8_24 u> 1)
                            goto label_f0cdc8
                        
                        x0_28 = var_d8
                        void* var_d0_1
                        int64_t var_c8
                        
                        if (x8_24 == 0)
                            x24_1 = 0
                        label_f0cf78:
                            
                            if (x0_28 != 0)
                                var_d0_1 = x0_28
                                Botan::deallocate_memory(x0_28, (var_c8 - x0_28) s>> 2, 4)
                        else
                            int64_t x9_13 = 0
                            int32_t x10_16 = 0
                            
                            do
                                int32_t x11_24 = *(x0_28 + (x9_13 << 2))
                                x9_13 += 1
                                int32_t x11_26 = ((x11_24 - 1) & not.d(x11_24)) s>> 0x1f
                                x10_16 = (x10_16 & x11_26) | (not.d(x11_26) & 1)
                            while (x8_24 != x9_13)
                            
                            if (x10_16 != 0)
                                goto label_f0cdc8
                            
                            x24_1 = 0
                            var_d0_1 = x0_28
                            Botan::deallocate_memory(x0_28, (var_c8 - x0_28) s>> 2, 4)
                    else
                        x24_1 = 0
    
    uint32_t* x0_19 = var_b0
    
    if (x0_19 != 0)
        uint32_t* var_a8_1 = x0_19
        int64_t var_a0
        Botan::deallocate_memory(x0_19, (var_a0 - x0_19) s>> 2, 4)
    
    uint64_t x0_20 = var_88
    
    if (x0_20 != 0)
        uint64_t var_80_3 = x0_20
        int64_t var_78_1
        Botan::deallocate_memory(x0_20, (var_78_1 - x0_20) s>> 2, 4)

if (x19 != 0)
    Botan::deallocate_memory(x19, (x26 - x19) s>> 2, 4)

return zx.q(x24_1) & 1
