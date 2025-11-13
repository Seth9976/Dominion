// 函数: _ZN5Botan22find_roots_gf2m_decompERKNS_10polyn_gf2mEm
// 地址: 0xd9ad74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_6c = 0
int128_t var_a0
__builtin_memset(&var_a0, 0, 0x30)
int64_t* x9 = *(arg1 + 0x20)
int64_t* x21 = *(arg1 + 0x28)

if (x21 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(&x21[1]) + 1, &x21[1])
    while (i != 0)

void* x11_2 = *(arg1 + 8)
void* x8_2 = *(arg1 + 0x10) - x11_2
uint32_t x10_3 = (x8_2 u>> 1).d
int64_t x8_3 = (x8_2 & 0x1fffffffe) << 0x1f s>> 0x20
int32_t x10_5 = (x10_3 & x10_3 s>> 0x1f) - 1

while (true)
    int64_t x13_1 = x8_3 - 1
    
    if (x8_3 s< 1)
        break
    
    uint32_t x14_1 = zx.d(*(x11_2 - 2 + (x8_3 << 1)))
    x8_3 = x13_1
    
    if (x14_1 != 0)
        x10_5 = x13_1.d
        break

*arg1 = x10_5
int128_t var_60
char var_48
void* var_38

if (x10_5 s> 3)
    uint64_t x12_1 = zx.q(*(x11_2 + 6))
    int16_t x8_5
    int16_t* x11_4
    
    if (x12_1 != 0)
        int64_t* x8_4 = x9[2]
        int64_t x11_3 = *x8_4
        
        if (x12_1 u>= (x8_4[1] - x11_3) s>> 1)
            goto label_d9b7ec
        
        x11_4 = x11_3 + (x12_1 << 1)
        x8_5 = -1
        goto label_d9ae50
    
    int64_t* x8_6 = x9[2]
    uint64_t x11_5 = zx.q(*(x11_2 + (zx.q(x10_5) << 1)))
    int64_t x12_2 = *x8_6
    
    if (x11_5 u>= (x8_6[1] - x12_2) s>> 1)
        goto label_d9b7f4
    
    x8_5 = 0
    x11_4 = x12_2 + (x11_5 << 1)
label_d9ae50:
    int16_t x12_3 = *x11_4
    uint64_t x8_9 = zx.q(x10_5 u/ 5 + 1)
    int64_t x11_6 = var_a0.q
    int32_t var_70_1 = x8_9.d
    int64_t x10_7 = (var_a0:8.q - x11_6) s>> 1
    int64_t x9_2 = *x9 * x8_9
    
    if (x9_2 u> x10_7)
        std::__ndk1::vector<uint16_t, Botan::secure_allocator<uint16_t> >::__append(&var_a0)
        x8_9 = zx.q(var_70_1)
    else if (x9_2 u< x10_7)
        var_a0:8.q = x11_6 + (x9_2 << 1)
    
    int128_t var_90
    int64_t x9_4 = var_90:8.q
    int128_t var_80
    int64_t x10_10 = (var_80.q - x9_4) s>> 1
    
    if (x8_9 u> x10_10)
        std::__ndk1::vector<uint16_t, Botan::secure_allocator<uint16_t> >::__append(&var_90:8)
    else if (x8_9 u< x10_10)
        var_80.q = x9_4 + (x8_9 << 1)
    
    if (x21 != 0)
        int64_t x9_5
        int32_t i_1
        
        do
            x9_5 = __ldaxr(&x21[1])
            i_1 = __stlxr(x9_5 - 1, &x21[1])
        while (i_1 != 0)
        
        if (x9_5 == 0)
            (*(*x21 + 0x10))(x21)
            std::__ndk1::__shared_weak_count::__release_weak()
    
    int64_t x10_12 = *(arg1 + 8)
    int64_t x8_15 = *(arg1 + 0x10) - x10_12
    uint32_t x11_8 = (x8_15 u>> 1).d
    int64_t x9_6 = (x8_15 & 0x1fffffffe) << 0x1f s>> 0x20
    int32_t x8_17 = (x11_8 & x11_8 s>> 0x1f) - 1
    
    while (true)
        int64_t x11_9 = x9_6 - 1
        
        if (x9_6 s< 1)
            break
        
        uint32_t x12_4 = zx.d(*(x10_12 - 2 + (x9_6 << 1)))
        x9_6 = x11_9
        
        if (x12_4 != 0)
            x8_17 = x11_9.d
            break
    
    *arg1 = x8_17
    int64_t* entry_x8
    
    if (x8_17 s<= 0)
        Botan::assertion_failure("sigma_degree > 0", "Valid sigma", "find_roots", 
            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xb98f)
    label_d9b7ec:
        std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
    label_d9b7f4:
        int64_t* x0_49 = std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
        std::exception::~exception()
        
        if ((zx.d(var_48) & 1) != 0)
            operator delete(var_38)
        
        void* var_50
        
        if ((zx.d(var_60.b) & 1) != 0)
            operator delete(var_50)
        __cxa_free_exception(entry_x8)
        
        if (x21 != 0)
            int64_t x9_32
            int32_t i_2
            
            do
                x9_32 = __ldaxr(&x21[1])
                i_2 = __stlxr(x9_32 - 1, &x21[1])
            while (i_2 != 0)
            
            if (x9_32 == 0)
                (*(*x21 + 0x10))(x21)
                std::__ndk1::__shared_weak_count::__release_weak()
        
        void* x0_56 = var_90:8.q
        
        if (x0_56 != 0)
            int64_t x8_46 = var_80:8.q
            var_80.q = x0_56
            Botan::deallocate_memory(x0_56, (x8_46 - x0_56) s>> 1, 2)
        
        void* x0_57 = var_a0.q
        
        if (x0_57 != 0)
            var_a0:8.q = x0_57
            Botan::deallocate_memory(x0_57, (var_90.q - x0_57) s>> 1, 2)
        
        sub_1101e04(x0_49)
        noreturn
    
    uint64_t x21_1 = zx.q(x8_17)
    __builtin_memset(entry_x8, 0, 0x18)
    int64_t x0_5 = Botan::allocate_memory(x21_1, 2)
    uint64_t x2_1 = x21_1 << 1
    int64_t x21_2 = x0_5 + x2_1
    *entry_x8 = x0_5
    entry_x8[2] = x21_2
    memset(x0_5, 0, x2_1)
    entry_x8[1] = x21_2
    
    if (var_70_1 != 0)
        int64_t x8_19 = 0
        int64_t i_3 = 0
        
        do
            int16_t x10_15 = *(*(arg1 + 8) + (zx.q(x8_19.d) << 1))
            x8_19 += 5
            *(var_90:8.q + (i_3 << 1)) = x10_15
            i_3 += 1
        while (i_3 u< zx.q(var_70_1))
    
    int32_t var_6c_1 = 0
    int64_t* x8_20 = *(arg1 + 0x20)
    int64_t* x21_3 = *(arg1 + 0x28)
    
    if (x21_3 != 0)
        int32_t i_4
        
        do
            i_4 = __stxr(__ldxr(&x21_3[1]) + 1, &x21_3[1])
        while (i_4 != 0)
    
    int64_t x11_12 = *(arg1 + 8)
    int64_t x9_9 = *(arg1 + 0x10) - x11_12
    uint32_t x12_5 = (x9_9 u>> 1).d
    int64_t x10_19 = (x9_9 & 0x1fffffffe) << 0x1f s>> 0x20
    int32_t x9_11 = (x12_5 & x12_5 s>> 0x1f) - 1
    
    while (true)
        int64_t x12_6 = x10_19 - 1
        
        if (x10_19 s< 1)
            break
        
        uint32_t x13_7 = zx.d(*(x11_12 - 2 + (x10_19 << 1)))
        x10_19 = x12_6
        
        if (x13_7 != 0)
            x9_11 = x12_6.d
            break
    
    *arg1 = x9_11
    int64_t x16_1 = *x8_20
    
    if (x16_1 != 0)
        uint64_t x1_1 = zx.q(var_70_1)
        uint64_t x10_20 = 0
        
        do
            int64_t* x0_6 = x8_20[2]
            uint64_t x14_3 = zx.q((1 << x10_20.d).w)
            int64_t x13_8 = *x0_6
            
            if (x14_3 u>= (x0_6[1] - x13_8) s>> 1)
                goto label_d9b700
            
            if (x1_1.d != 0)
                uint64_t x13_9 = zx.q(*(x13_8 + (x14_3 << 1)))
                uint32_t x17_1 = zx.d(x8_20[1].w)
                int64_t x12_9 = 0
                int32_t x2_2 = 8
                int32_t x14_4 = x13_9.d << 1
                int32_t x14_6 = (x17_1 & x14_4) + ((x14_4 & 0xfffe) u>> x16_1.d)
                int32_t x15_3 = x14_6 << 1
                int32_t x15_5 = (x15_3 & x17_1) + ((x15_3 & 0xfffe) u>> x16_1.d)
                int16_t x0_9 = (x15_5 << 1).w
                int32_t x16_2 = x1_1.d * x10_20.d
                
                while (true)
                    uint64_t x1_2 = zx.q(x16_2 + x12_9.d)
                    *(var_a0.q + (zx.q(x1_2.d) << 1)) = 0
                    
                    if (x2_2 - 7 u<= x9_11)
                        uint64_t x3_4 = zx.q(*(*(arg1 + 8) + (zx.q(x2_2 - 7) << 1)))
                        int16_t x0_17
                        
                        if (x3_4 != 0)
                            int64_t* x0_15 = x8_20[2]
                            int64_t x4_2 = *x0_15
                            
                            if (x3_4 u>= (x0_15[1] - x4_2) s>> 1)
                            label_d9b6e0:
                                std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                            label_d9b6e4:
                                std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                            label_d9b6ec:
                                std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                            label_d9b6f0:
                                std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                                break
                            
                            int64_t* x0_16 = x8_20[3]
                            uint64_t x6_1 = zx.q(*(x4_2 + (x3_4 << 1))) + x13_9
                            int64_t x3_6 = *x0_16
                            uint64_t x4_6 = zx.q((x6_1 u>> zx.q(*x8_20)).w + (x6_1.w & x8_20[1].w))
                            
                            if (x4_6 u>= (x0_16[1] - x3_6) s>> 1)
                                goto label_d9b6e4
                            
                            x0_17 = *(x3_6 + (x4_6 << 1))
                            goto label_d9b144
                        
                        x0_17 = 0
                    label_d9b144:
                        int64_t x4_7 = var_a0.q
                        uint64_t x1_3 = x1_2 << 1
                        *(x4_7 + x1_3) ^= x0_17
                        
                        if (x2_2 - 6 u<= x9_11)
                            uint64_t x3_8 = zx.q(*(*(arg1 + 8) + (zx.q(x2_2 - 6) << 1)))
                            int16_t x0_22
                            
                            if (x3_8 != 0)
                                int64_t* x0_20 = x8_20[2]
                                int64_t x4_8 = *x0_20
                                
                                if (x3_8 u>= (x0_20[1] - x4_8) s>> 1)
                                    goto label_d9b6e0
                                
                                int64_t* x0_21 = x8_20[3]
                                uint64_t x6_2 = zx.q(*(x4_8 + (x3_8 << 1))) + zx.q(x14_6.w)
                                int64_t x3_10 = *x0_21
                                uint64_t x4_12 =
                                    zx.q((x6_2 u>> zx.q(*x8_20)).w + (x6_2.w & x8_20[1].w))
                                
                                if (x4_12 u>= (x0_21[1] - x3_10) s>> 1)
                                    goto label_d9b6e4
                                
                                x0_22 = *(x3_10 + (x4_12 << 1))
                                goto label_d9b1c4
                            
                            x0_22 = 0
                        label_d9b1c4:
                            int64_t x4_13 = var_a0.q
                            *(x4_13 + x1_3) ^= x0_22
                            
                            if (x2_2 - 4 u<= x9_11)
                                uint64_t x3_12 = zx.q(*(*(arg1 + 8) + (zx.q(x2_2 - 4) << 1)))
                                int16_t x0_27
                                
                                if (x3_12 != 0)
                                    int64_t* x0_25 = x8_20[2]
                                    int64_t x4_14 = *x0_25
                                    
                                    if (x3_12 u>= (x0_25[1] - x4_14) s>> 1)
                                        goto label_d9b6e0
                                    
                                    int64_t* x0_26 = x8_20[3]
                                    uint64_t x6_3 = zx.q(*(x4_14 + (x3_12 << 1))) + zx.q(x15_5.w)
                                    int64_t x3_14 = *x0_26
                                    uint64_t x4_18 =
                                        zx.q((x6_3 u>> zx.q(*x8_20)).w + (x6_3.w & x8_20[1].w))
                                    
                                    if (x4_18 u>= (x0_26[1] - x3_14) s>> 1)
                                        goto label_d9b6e4
                                    
                                    x0_27 = *(x3_14 + (x4_18 << 1))
                                    goto label_d9b240
                                
                                x0_27 = 0
                            label_d9b240:
                                int64_t x3_15 = var_a0.q
                                *(x3_15 + x1_3) ^= x0_27
                                
                                if (x2_2 u<= x9_11)
                                    uint64_t x3_16 = zx.q(*(*(arg1 + 8) + (zx.q(x2_2) << 1)))
                                    int64_t x3_1
                                    
                                    if (x3_16 == 0)
                                        x3_1 = var_a0.q
                                        *(x3_1 + x1_3) = *(x3_1 + x1_3)
                                    else
                                        int64_t* x0_30 = x8_20[2]
                                        int64_t x4_20 = *x0_30
                                        
                                        if (x3_16 u>= (x0_30[1] - x4_20) s>> 1)
                                            goto label_d9b6e0
                                        
                                        int64_t* x0_31 = x8_20[3]
                                        uint64_t x6_4 = zx.q(*(x4_20 + (x3_16 << 1)))
                                            + zx.q((x0_9 & x17_1.w) + (zx.d(x0_9) u>> x16_1.d).w)
                                        int64_t x3_18 = *x0_31
                                        uint64_t x4_24 =
                                            zx.q((x6_4 u>> zx.q(*x8_20)).w + (x6_4.w & x8_20[1].w))
                                        
                                        if (x4_24 u>= (x0_31[1] - x3_18) s>> 1)
                                            goto label_d9b6e4
                                        
                                        x3_1 = var_a0.q
                                        *(x3_1 + x1_3) ^= *(x3_18 + (x4_24 << 1))
                    
                    x1_1 = zx.q(var_70_1)
                    x12_9 += 1
                    x2_2 += 5
                    
                    if (x12_9 u>= x1_1)
                        x16_1 = *x8_20
                        goto label_d9b024
                
                goto label_d9b6f8
            
        label_d9b024:
            x10_20 = zx.q(x10_20.d + 1)
        while (x16_1 u> x10_20)
    
    if (x21_3 != 0)
        int64_t x9_12
        int32_t i_5
        
        do
            x9_12 = __ldaxr(&x21_3[1])
            i_5 = __stlxr(x9_12 - 1, &x21_3[1])
        while (i_5 != 0)
        
        if (x9_12 == 0)
            (*(*x21_3 + 0x10))(x21_3)
            std::__ndk1::__shared_weak_count::__release_weak()
    
    int32_t x22_1 = 0
    
    while (true)
        uint64_t x8_24 = zx.q(var_6c_1:2.w)
        
        if (x8_24 != 0)
            int32_t* x11_15 = *(arg1 + 0x20)
            int64_t* x21_4 = *(arg1 + 0x28)
            
            if (x21_4 != 0)
                int32_t i_6
                
                do
                    i_6 = __stxr(__ldxr(&x21_4[1]) + 1, &x21_4[1])
                while (i_6 != 0)
            
            int64_t* x0_34 = *(x11_15 + 0x10)
            int64_t x9_14 = *x0_34
            int64_t x10_26 = (x0_34[1] - x9_14) s>> 1
            
            if (x10_26 u<= x8_24)
                goto label_d9b6fc
            
            uint32_t x14_7 = zx.d(*(x9_14 + (x8_24 << 1)))
            uint64_t x12_11 = zx.q(*x11_15)
            int64_t* x8_25 = *(x11_15 + 0x18)
            uint32_t x11_16 = zx.d(x11_15[2].w)
            uint32_t x15_6 = x14_7 << 1
            uint32_t x14_8 = x15_6 + x14_7
            int64_t x13_10 = *x8_25
            uint32_t x1_6 = (x11_16 & x14_8) + ((x14_8 & 0xffff) u>> x12_11.d)
            int16_t x14_10 = x1_6.w + x12_3
            uint64_t x16_6 = zx.q((x14_10 & x11_16.w) + (zx.d(x14_10) u>> x12_11.d).w)
            int64_t x14_13 = (x8_25[1] - x13_10) s>> 1
            
            if (x14_13 u<= x16_6)
                break
            
            int16_t* x17_6 = var_90:8.q
            uint64_t x16_7 = zx.q(var_70_1)
            uint32_t x23_1 = zx.d(*x17_6) ^ (zx.d(x8_5) & zx.d(*(x13_10 + (x16_6 << 1))))
            
            if (x16_7.d u>= 2)
                uint32_t x15_7 = x1_6 + x15_6
                uint64_t x1_7 = zx.q(x17_6[1])
                uint32_t x15_9 = (x15_7 & x11_16) + ((x15_7 & 0xffff) u>> x12_11.d)
                
                if (x1_7 != 0)
                    if (x10_26 u<= x1_7)
                        goto label_d9b704
                    
                    uint64_t x1_9 = zx.q(*(x9_14 + (x1_7 << 1))) + zx.q(x15_9.w)
                    uint64_t x1_12 = zx.q((x1_9 u>> x12_11).w + (x1_9.w & x11_16.w))
                    
                    if (x14_13 u<= x1_12)
                        goto label_d9b70c
                    
                    x23_1 ^= zx.d(*(x13_10 + (x1_12 << 1)))
                    
                    if (x16_7.d u>= 3)
                        goto label_d9b430
                else if (x16_7.d u>= 3)
                label_d9b430:
                    int64_t i_12 = x16_7 - 2
                    void* x17_7 = &x17_6[2]
                    uint32_t x2_9 = x15_9
                    int32_t i_7
                    
                    do
                        uint32_t x2_10 = x2_9 + x15_9
                        uint64_t x1_13 = zx.q(*x17_7)
                        x2_9 = (x2_10 & x11_16) + ((x2_10 & 0xffff) u>> x12_11.d)
                        
                        if (x1_13 != 0)
                            if (x10_26 u<= x1_13)
                                goto label_d9b6f0
                            
                            uint64_t x1_15 = zx.q(*(x9_14 + (x1_13 << 1))) + zx.q(x2_9.w)
                            uint64_t x1_18 = zx.q((x1_15 u>> x12_11).w + (x1_15.w & x11_16.w))
                            
                            if (x14_13 u<= x1_18)
                                goto label_d9b6ec
                            
                            x1_13 = zx.q(*(x13_10 + (x1_18 << 1)))
                        
                        x23_1 ^= x1_13.d
                        i_7 = i_12
                        i_12 -= 1
                        x17_7 += 2
                    while (i_7 != 1)
            
            int64_t x9_16
            
            if (x21_4 != 0)
                int32_t i_8
                
                do
                    x9_16 = __ldaxr(&x21_4[1])
                    i_8 = __stlxr(x9_16 - 1, &x21_4[1])
                while (i_8 != 0)
            
            if (x21_4 != 0 && x9_16 == 0)
                (*(*x21_4 + 0x10))(x21_4)
                std::__ndk1::__shared_weak_count::__release_weak()
                
                if ((x23_1 & 0xffff) == 0)
                    *(*entry_x8 + (zx.q(x22_1) << 1)) = var_6c_1:2.w
                    x22_1 += 1
            else if ((x23_1 & 0xffff) == 0)
                *(*entry_x8 + (zx.q(x22_1) << 1)) = var_6c_1:2.w
                x22_1 += 1
        else if (zx.d(**(arg1 + 8)) == 0)
            *(*entry_x8 + (zx.q(x22_1) << 1)) = var_6c_1:2.w
            x22_1 += 1
        
        uint64_t x8_29 = zx.q(var_6c_1.w)
        
        if (x8_29 + 1 == arg2)
            int16_t* x8_33 = *entry_x8
            int64_t x9_28 = entry_x8[1]
            var_48.w = 1
            void* x10_38 = x9_28 - x8_33
            var_60.w = (zx.q(x22_1) == x10_38 s>> 1 ? 1 : 0).w
            int16_t x11_23
            
            if (zx.d(var_60.w) != 0)
                x11_23 = -1
            else
                x11_23 = 0
            
            var_60.w = x11_23
            var_60.w = (not.d(zx.d(var_60.w))).w
            var_48.w &= var_60.w
            
            if (x10_38 != 0)
                void* x11_28
                
                x11_28 = x10_38 s>= 0 ? x10_38 : -ffffffffffffffff
                
                void* x9_29 = x8_33 - x9_28
                void* x11_29
                
                x11_29 = x11_28 s< 1 ? x11_28 : 1
                
                void* x9_30
                
                x9_30 = x9_29 s> x10_38 ? x9_29 : x10_38
                
                int64_t i_11 = x11_29 * (x9_30 u>> 1)
                int64_t i_9
                
                do
                    int16_t x10_39 = var_48.w
                    i_9 = i_11
                    i_11 -= 1
                    var_48.w = x10_39 + 1
                    *x8_33 ^= var_60.w & x10_39
                    x8_33 = &x8_33[1]
                while (i_9 != 1)
            
            void* x0_37 = var_90:8.q
            
            if (x0_37 != 0)
                int64_t x8_34 = var_80:8.q
                var_80.q = x0_37
                Botan::deallocate_memory(x0_37, (x8_34 - x0_37) s>> 1, 2)
            
            void* result = var_a0.q
            
            if (result == 0)
                return result
            
            var_a0:8.q = result
            return Botan::deallocate_memory(result, (var_90.q - result) s>> 1, 2)
        
        int32_t x9_18 = (x8_29.d + 1) & 0xffff
        int16_t x8_30 = (x8_29.d + 1).w ^ (x9_18 u>> 1).w
        var_6c_1.w = (x8_29.d + 1).w
        int32_t x10_33
        
        if (((x8_29.d + 1) & 1) != 0)
            x10_33 = 0
            var_6c_1:2.w = x8_30
            
            if (var_70_1 == 0)
                continue
        else if ((x9_18 & 2) != 0)
            x10_33 = var_70_1
            var_6c_1:2.w = x8_30
            
            if (var_70_1 == 0)
                continue
        else if ((x9_18 & 4) != 0)
            x10_33 = var_70_1 << 1
            var_6c_1:2.w = x8_30
            
            if (var_70_1 == 0)
                continue
        else if ((x9_18 & 8) != 0)
            x10_33 = var_70_1 * 3
            var_6c_1:2.w = x8_30
            
            if (var_70_1 == 0)
                continue
        else if ((x9_18 & 0x10) != 0)
            x10_33 = var_70_1 << 2
            var_6c_1:2.w = x8_30
            
            if (var_70_1 == 0)
                continue
        else
            int32_t x11_18 = 5
            int16_t x10_31
            uint32_t x12_12
            
            do
                x10_31 = x11_18.w
                x12_12 = (zx.d(var_6c_1:2.w) ^ zx.d(x8_30)) u>> x11_18
                x11_18 += 1
            while ((x12_12 & 1) == 0)
            x10_33 = var_70_1 * zx.d(x10_31)
            var_6c_1:2.w = x8_30
            
            if (var_70_1 == 0)
                continue
        
        int64_t i_10 = 0
        
        do
            int16_t* x11_19 = var_90:8.q
            int16_t x10_35 = *(var_a0.q + (zx.q(x10_33 + i_10.d) << 1))
            i_10 += 1
            x11_19[i_10] ^= x10_35
        while (i_10 u< zx.q(var_70_1))
    
label_d9b6f8:
    std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
label_d9b6fc:
    std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
label_d9b700:
    std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
label_d9b704:
    std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
label_d9b70c:
    std::__ndk1::__vector_base_common<true>::__throw_out_of_range()

void** x0_41 = __cxa_allocate_exception(0x20)
int64_t x0_42
int128_t v0
x0_42, v0 = operator new(0x30)
int64_t var_50_1 = x0_42
var_60 = data_71c860
__builtin_strncpy(x0_42, "Unexpected degree in gf2m_decomp_rootfind_state", 0x30)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Internal error: ", &var_60)
*x0_41 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_41[1])

if ((zx.d(var_48) & 1) != 0)
    operator delete(var_38)

*x0_41 = _vtable_for_Botan::Internal_Error + 0x10
__cxa_throw(x0_41, _typeinfo_for_Botan::Internal_Error, Botan::Exception::~Exception)
noreturn
