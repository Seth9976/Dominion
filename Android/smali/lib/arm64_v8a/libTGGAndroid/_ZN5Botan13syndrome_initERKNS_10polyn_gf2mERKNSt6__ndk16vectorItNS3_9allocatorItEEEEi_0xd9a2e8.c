// 函数: _ZN5Botan13syndrome_initERKNS_10polyn_gf2mERKNSt6__ndk16vectorItNS3_9allocatorItEEEEi
// 地址: 0xd9a2e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x26 = *(arg1 + 0x20)
int64_t* x24 = *(arg1 + 0x28)
Botan::polyn_gf2m const& x22 = arg1

if (x24 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(&x24[1]) + 1, &x24[1])
    while (i != 0)

int64_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
int64_t x9_3 = *(x22 + 8)
int64_t x8_2 = *(x22 + 0x10) - x9_3
uint32_t x10_2 = (x8_2 u>> 1).d
int64_t x8_3 = (x8_2 & 0x1fffffffe) << 0x1f s>> 0x20
int32_t x27 = (x10_2 & x10_2 s>> 0x1f) - 1

while (true)
    int64_t x10_4 = x8_3 - 1
    
    if (x8_3 s< 1)
        break
    
    uint32_t x11_1 = zx.d(*(x9_3 - 2 + (x8_3 << 1)))
    x8_3 = x10_4
    
    if (x11_1 != 0)
        x27 = x10_4.d
        break

*x22 = x27

if (arg3 s>= 1)
    int64_t x28_1 = 0
    void* x25_1 = &x24[1]
    int64_t x23_1 = sx.q(x27 - 1)
    uint64_t x19_1 = zx.q(x27) << 1
    int64_t* var_a8_1 = x24
    
    while (true)
        int32_t* var_a0_1 = x26
        int64_t* var_98_1 = x24
        
        if (x24 != 0)
            int32_t i_1
            
            do
                i_1 = __stxr(__ldxr(x25_1) + 1, x25_1)
            while (i_1 != 0)
        
        int32_t var_90
        Botan::polyn_gf2m::polyn_gf2m(&var_90, zx.q(x23_1.d))
        int32_t* x8_8 = entry_x8[1]
        Botan::polyn_gf2m* var_88
        Botan::polyn_gf2m const& var_80
        int64_t var_78
        int64_t* var_68
        
        if (x8_8 u>= entry_x8[2])
            std::__ndk1::vector<Botan::polyn_gf2m, std::__ndk1::allocator<Botan::polyn_gf2m> >::__push_back_slow_path<Botan::polyn_gf2m>(
                entry_x8)
        else
            int128_t v0_1
            v0_1.q = 0
            v0_1:8.q = 0
            __builtin_memset(&x8_8[2], 0, 0x28)
            int32_t x10_6 = *x8_8
            *x8_8 = var_90
            var_90 = x10_6
            int64_t var_70
            *(x8_8 + 0x20) = var_70
            *(x8_8 + 0x28) = var_68
            var_70 = 0
            var_68 = nullptr
            v0_1 = *(x8_8 + 8)
            *(x8_8 + 8) = var_88
            *(x8_8 + 0x10) = var_80
            var_88.o = v0_1
            int64_t x10_7 = *(x8_8 + 0x18)
            *(x8_8 + 0x18) = var_78
            var_78 = x10_7
            entry_x8[1] = &x8_8[0xc]
        
        if (var_68 == 0)
        label_d9a47c:
            
            if (var_88 != 0)
                var_80 = var_88
                Botan::deallocate_memory(var_88, (var_78 - var_88) s>> 1, 2)
        else
            int64_t x9_15
            int32_t i_2
            
            do
                x9_15 = __ldaxr(&var_68[1])
                i_2 = __stlxr(x9_15 - 1, &var_68[1])
            while (i_2 != 0)
            
            if (x9_15 != 0)
                goto label_d9a47c
            
            (*(*var_68 + 0x10))(var_68)
            std::__ndk1::__shared_weak_count::__release_weak()
            
            if (var_88 != 0)
                var_80 = var_88
                Botan::deallocate_memory(var_88, (var_78 - var_88) s>> 1, 2)
        
        if (var_98_1 != 0)
            int64_t x9_16
            int32_t i_3
            
            do
                x9_16 = __ldaxr(&var_98_1[1])
                i_3 = __stlxr(x9_16 - 1, &var_98_1[1])
            while (i_3 != 0)
            
            if (x9_16 == 0)
                (*(*var_98_1 + 0x10))(var_98_1)
                std::__ndk1::__shared_weak_count::__release_weak()
        
        x24 = var_a8_1
        *(*(*entry_x8 + x28_1 * 0x30 + 8) + (x23_1 << 1)) = 1
        
        if (x27 s>= 2)
            uint64_t x8_19 = zx.q(x27 - 2)
            
            while (true)
                uint64_t x11_5 = x8_19 << 1
                uint32_t x13_1 = zx.d(*(*arg2 + (x28_1 << 1)))
                int64_t x9_20 = *(*entry_x8 + x28_1 * 0x30 + 8)
                uint32_t x13_2 = x13_1 ^ x13_1 u>> 1
                int16_t x12_1 = 0
                
                if (x13_2 != 0)
                    uint64_t x11_7 = zx.q(*(x9_20 + x11_5 + 2))
                    
                    if (x11_7.d != 0)
                        int64_t* x0_4 = *(x26 + 0x10)
                        uint64_t x13_3 = zx.q(x13_2)
                        int64_t x12_3 = *x0_4
                        int64_t x14_3 = (x0_4[1] - x12_3) s>> 1
                        
                        if (x14_3 u<= x13_3)
                            goto label_d9a7a0
                        
                        if (x14_3 u<= x11_7)
                            goto label_d9a7a4
                        
                        arg1 = *(x26 + 0x18)
                        uint64_t x13_5 =
                            zx.q(*(x12_3 + (x11_7 << 1))) + zx.q(*(x12_3 + (x13_3 << 1)))
                        int64_t x11_9 = *arg1
                        uint64_t x12_7 = zx.q((x13_5 u>> zx.q(*x26)).w + (x13_5.w & x26[2].w))
                        
                        if (x12_7 u>= (*(arg1 + 8) - x11_9) s>> 1)
                            break
                        
                        x12_1 = *(x11_9 + (x12_7 << 1))
                
                bool cond:2_1 = x8_19 s<= 0
                *(x9_20 + (x8_19 << 1)) = x12_1 ^ *(*(x22 + 8) + x11_5 + 2)
                x8_19 -= 1
                
                if (cond:2_1)
                    goto label_d9a5c4
            
            goto label_d9a79c
        
    label_d9a5c4:
        uint32_t x12_8 = 0
        int16_t* x8_22 = *(*entry_x8 + x28_1 * 0x30 + 8)
        uint32_t x10_14 = zx.d(*(*arg2 + (x28_1 << 1)))
        uint64_t x9_22 = zx.q(*x8_22)
        uint32_t x10_15 = x10_14 ^ x10_14 u>> 1
        
        if (x10_15 == 0 || x9_22.d == 0)
            goto label_d9a648
        
        int64_t* x0_5 = *(x26 + 0x10)
        uint64_t x10_16 = zx.q(x10_15)
        int64_t x12_9 = *x0_5
        int64_t x13_10 = (x0_5[1] - x12_9) s>> 1
        
        if (x13_10 u<= x10_16)
            std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
        else if (x13_10 u> x9_22)
            arg1 = *(x26 + 0x18)
            uint64_t x12_11 = zx.q(*(x12_9 + (x9_22 << 1))) + zx.q(*(x12_9 + (x10_16 << 1)))
            int64_t x10_18 = *arg1
            uint64_t x12_14 = zx.q((x12_11 u>> zx.q(*x26)).w + (x12_11.w & x26[2].w))
            
            if (x12_14 u>= (*(arg1 + 8) - x10_18) s>> 1)
                std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
            else
                x12_8 = zx.d(*(x10_18 + (x12_14 << 1)))
            label_d9a648:
                
                if (x27 s< 1)
                label_d9a3a8:
                    x28_1 += 1
                    
                    if (x28_1 == zx.q(arg3))
                        break
                    
                    continue
                else
                    arg1 = *(x26 + 0x10)
                    int64_t x13_14 = *arg1
                    int64_t x14_6 = (*(arg1 + 8) - x13_14) s>> 1
                    
                    if (x14_6 u<= x9_22)
                    label_d9a794:
                        std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                    else
                        int64_t x10_21 = 0
                        uint64_t x11_11 = zx.q(x12_8) ^ zx.q(**(x22 + 8))
                        int64_t x12_15 = 2
                        
                        while (true)
                            if (x14_6 u<= x11_11)
                                std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                                goto label_d9a794
                            
                            if ((x9_22.d & 0xffff) == 0)
                                *x8_22 = 0
                                
                                if (x19_1 == x12_15)
                                    goto label_d9a3a8
                            else
                                arg1 = *(x26 + 0x18)
                                uint32_t x13_16 =
                                    zx.d(*(x13_14 + (x9_22 << 1))) - zx.d(*(x13_14 + (x11_11 << 1)))
                                int64_t x9_24 = *arg1
                                uint64_t x13_19 = zx.q((x13_16.w & x26[2].w) + (x13_16 s>> *x26).w)
                                
                                if (x13_19 u>= (*(arg1 + 8) - x9_24) s>> 1)
                                    break
                                
                                *x8_22 = *(x9_24 + (x13_19 << 1))
                                
                                if (x19_1 == x12_15)
                                    goto label_d9a3a8
                            
                            arg1 = *(x26 + 0x10)
                            x10_21 += 1
                            void* x8_25 = *(*entry_x8 + x28_1 * 0x30 + 8)
                            x13_14 = *arg1
                            x9_22 = zx.q(*(x8_25 + x12_15))
                            x14_6 = (*(arg1 + 8) - x13_14) s>> 1
                            x8_22 = x8_25 + (x10_21 << 1)
                            x12_15 += 2
                            
                            if (x14_6 u<= x9_22)
                                goto label_d9a794
                    
                    std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                label_d9a79c:
                    std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                label_d9a7a0:
                    std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                label_d9a7a4:
                    std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                    std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                    std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
        
        int64_t* x0_10 = std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
        
        if (var_68 != 0)
            int64_t x9_27
            int32_t i_4
            
            do
                x9_27 = __ldaxr(&var_68[1])
                i_4 = __stlxr(x9_27 - 1, &var_68[1])
            while (i_4 != 0)
            
            if (x9_27 == 0)
                (*(*var_68 + 0x10))(var_68)
                std::__ndk1::__shared_weak_count::__release_weak()
        
        if (var_88 != 0)
            Botan::polyn_gf2m* var_80_1 = var_88
            Botan::deallocate_memory(var_88, (var_78 - var_88) s>> 1, 2)
        
        if (var_98_1 != 0)
            int64_t x9_28
            int32_t i_5
            
            do
                x9_28 = __ldaxr(&var_98_1[1])
                i_5 = __stlxr(x9_28 - 1, &var_98_1[1])
            while (i_5 != 0)
            
            if (x9_28 == 0)
                (*(*var_98_1 + 0x10))(var_98_1)
                std::__ndk1::__shared_weak_count::__release_weak()
        
        std::__ndk1::__vector_base<Botan::polyn_gf2m, std::__ndk1::allocator<Botan::polyn_gf2m> >::~__vector_base()
        
        if (var_a8_1 != 0)
            int64_t x8_39
            int32_t i_6
            
            do
                x8_39 = __ldaxr(x25_1)
                i_6 = __stlxr(x8_39 - 1, x25_1)
            while (i_6 != 0)
            
            if (x8_39 == 0)
                (*(*var_a8_1 + 0x10))(var_a8_1)
                std::__ndk1::__shared_weak_count::__release_weak()
        
        sub_1101e04(x0_10)
        noreturn

if (x24 == 0)
    return 

int64_t x9_26
int32_t i_7

do
    x9_26 = __ldaxr(&x24[1])
    i_7 = __stlxr(x9_26 - 1, &x24[1])
while (i_7 != 0)

if (x9_26 == 0)
    (*(*x24 + 0x10))(x24)
    std::__ndk1::__shared_weak_count::__release_weak()
