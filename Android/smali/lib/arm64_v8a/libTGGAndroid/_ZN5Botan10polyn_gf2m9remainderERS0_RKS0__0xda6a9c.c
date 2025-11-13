// 函数: _ZN5Botan10polyn_gf2m9remainderERS0_RKS0_
// 地址: 0xda6a9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x10 = *(arg2 + 0x20)
int64_t* x19 = *(arg2 + 0x28)

if (x19 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(&x19[1]) + 1, &x19[1])
    while (i != 0)

int64_t x12_2 = *(arg1 + 8)
int64_t x9_3 = *(arg1 + 0x10) - x12_2
uint32_t x13 = (x9_3 u>> 1).d
int64_t x11_3 = (x9_3 & 0x1fffffffe) << 0x1f s>> 0x20
int32_t x9_5 = (x13 & x13 s>> 0x1f) - 1

while (true)
    int64_t x13_1 = x11_3 - 1
    
    if (x11_3 s< 1)
        break
    
    uint32_t x14_1 = zx.d(*(x12_2 - 2 + (x11_3 << 1)))
    x11_3 = x13_1
    
    if (x14_1 != 0)
        x9_5 = x13_1.d
        break

*arg1 = x9_5
int64_t x11_4 = *(arg2 + 8)
int64_t x12_5 = *(arg2 + 0x10) - x11_4
uint32_t x14_2 = (x12_5 u>> 1).d
int64_t x13_2 = (x12_5 & 0x1fffffffe) << 0x1f s>> 0x20
int32_t x12_7 = (x14_2 & x14_2 s>> 0x1f) - 1

while (true)
    int64_t x15_1 = x13_2 - 1
    
    if (x13_2 s< 1)
        break
    
    uint32_t x16_1 = zx.d(*(x11_4 - 2 + (x13_2 << 1)))
    x13_2 = x15_1
    
    if (x16_1 != 0)
        x12_7 = x15_1.d
        break

*arg2 = x12_7

if (x9_5 - x12_7 s>= 0)
    int64_t* x9_6 = *(x10 + 0x10)
    uint64_t x11_5 = zx.q(*(x11_4 + (sx.q(x12_7) << 1)))
    int64_t x14_4 = *x9_6
    
    if (x11_5 u>= (x9_6[1] - x14_4) s>> 1)
    label_da6e14:
        std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
    label_da6e3c:
        int64_t* x0_7 = Botan::assertion_failure("p_degree > 0", "Valid polynomial", "remainder", 
            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xbe96)
        
        if (x19 != 0)
            int64_t x9_27
            int32_t i_1
            
            do
                x9_27 = __ldaxr(&x19[1])
                i_1 = __stlxr(x9_27 - 1, &x19[1])
            while (i_1 != 0)
            
            if (x9_27 == 0)
                (*(*x19 + 0x10))(x19)
                std::__ndk1::__shared_weak_count::__release_weak()
        
        sub_1101e04(x0_7)
        noreturn
    
    int64_t x9_7 = *(arg1 + 8)
    int16_t x11_7 = x10[2].w - *(x14_4 + (x11_5 << 1))
    int64_t x12_10 = *(arg1 + 0x10) - x9_7
    uint32_t x15_3 = (x12_10 u>> 1).d
    int64_t x14_6 = (x12_10 & 0x1fffffffe) << 0x1f s>> 0x20
    int32_t x12_12 = (x15_3 & x15_3 s>> 0x1f) - 1
    
    while (true)
        int64_t x15_4 = x14_6 - 1
        
        if (x14_6 s< 1)
            break
        
        uint32_t x16_2 = zx.d(*(x9_7 + (x14_6 << 1) - 2))
        x14_6 = x15_4
        
        if (x16_2 != 0)
            x12_12 = x15_4.d
            break
    
    *arg1 = x12_12
    
    if (x12_12 s< 1)
        goto label_da6e3c
    
    uint64_t x12_13 = zx.q(x12_12)
    int64_t x13_4 = sx.q(x9_5 - x12_7)
    uint64_t x15_5 = zx.q(*(x9_7 + (x12_13 << 1)))
    
    if (x15_5 != 0)
    label_da6bb0:
        int64_t* x9_26 = *(x10 + 0x10)
        int64_t x16_3 = *x9_26
        
        if (x15_5 u< (x9_26[1] - x16_3) s>> 1)
            int64_t x14_10 = 0
            int16_t x9_9 = *(x16_3 + (x15_5 << 1)) + x11_7
            int16_t x15_8 = (x10[2].w & x9_9) + (zx.d(x9_9) u>> *x10).w
            
            while (true)
                int64_t x9_13 = *(arg2 + 8)
                int64_t x16_7 = *(arg2 + 0x10) - x9_13
                uint32_t x1_1 = (x16_7 u>> 1).d
                int64_t x17_4 = (x16_7 & 0x1fffffffe) << 0x1f s>> 0x20
                int32_t x16_9 = (x1_1 & x1_1 s>> 0x1f) - 1
                
                while (true)
                    int64_t x2_1 = x17_4 - 1
                    
                    if (x17_4 s< 1)
                        break
                    
                    uint32_t x3_1 = zx.d(*(x9_13 - 2 + (x17_4 << 1)))
                    x17_4 = x2_1
                    
                    if (x3_1 != 0)
                        x16_9 = x2_1.d
                        break
                
                *arg2 = x16_9
                
                if (x14_10 s>= sx.q(x16_9))
                    *(*(arg1 + 8) + (x12_13 << 1)) = 0
                    goto label_da6cac
                
                uint64_t x16_10 = zx.q(*(x9_13 + (x14_10 << 1)))
                int16_t x9_11
                
                if (x16_10 == 0)
                    x9_11 = 0
                else
                    int64_t* x9_14 = *(x10 + 0x10)
                    int64_t x17_5 = *x9_14
                    
                    if (x16_10 u>= (x9_14[1] - x17_5) s>> 1)
                        std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                        break
                    
                    int64_t* x9_15 = *(x10 + 0x18)
                    uint64_t x2_2 = zx.q(*(x17_5 + (x16_10 << 1))) + zx.q(x15_8)
                    int64_t x16_12 = *x9_15
                    uint64_t x17_9 = zx.q((x2_2 u>> zx.q(*x10)).w + (x2_2.w & x10[2].w))
                    
                    if (x17_9 u>= (x9_15[1] - x16_12) s>> 1)
                        std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                        std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                        break
                    
                    x9_11 = *(x16_12 + (x17_9 << 1))
                
                int16_t* x16_5 = *(arg1 + 8)
                x14_10 += 1
                x16_5[x14_10 + x13_4] ^= x9_11
        
        std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
        goto label_da6e14
    
    while (true)
    label_da6cac:
        int32_t temp0_1 = x13_4
        x13_4 -= 1
        
        if (temp0_1 s< 1)
            int64_t x10_1 = *(arg2 + 8)
            int64_t x9_19 = *(arg2 + 0x10) - x10_1
            uint32_t x11_8 = (x9_19 u>> 1).d
            int64_t x9_20 = (x9_19 & 0x1fffffffe) << 0x1f s>> 0x20
            uint64_t x12_14 = zx.q((x11_8 & x11_8 s>> 0x1f) - 1)
            
            while (true)
                int64_t x11_10 = x9_20 - 1
                
                if (x9_20 s< 1)
                    break
                
                uint32_t x13_5 = zx.d(*(x10_1 - 2 + (x9_20 << 1)))
                x9_20 = x11_10
                
                if (x13_5 != 0)
                    x12_14 = zx.q(x11_10.d)
                    break
            
            *arg2 = x12_14.d
            int64_t x8_1 = *(arg1 + 8)
            int64_t x9_22 = *(arg1 + 0x10) - x8_1
            uint32_t x10_3 = (x9_22 u>> 1).d
            int64_t x9_23 = (x9_22 & 0x1fffffffe) << 0x1f s>> 0x20
            
            while (true)
                int64_t x13_6 = x9_23
                *arg1 = x12_14.d - 1
                int64_t x12_16
                uint32_t i_2
                
                do
                    x12_16 = x13_6 - 1
                    
                    if (x13_6 s< 1)
                        *arg1 = (x10_3 & x10_3 s>> 0x1f) - 1
                        
                        if ((((x10_3 & x10_3 s>> 0x1f) - 1) & 0x80000000) != 0)
                            goto label_da6db0
                        
                        goto label_da6d5c
                    
                    i_2 = zx.d(*(x8_1 - 2 + (x13_6 << 1)))
                    x13_6 = x12_16
                while (i_2 == 0)
                *arg1 = x12_16.d
                
                if ((x12_16.d & 0x80000000) != 0)
                    break
                
            label_da6d5c:
                int64_t x13_7 = x9_23
                int64_t x12_18
                uint32_t i_3
                
                do
                    x12_18 = x13_7 - 1
                    
                    if (x13_7 s< 1)
                        *arg1 = (x10_3 & x10_3 s>> 0x1f) - 1
                        
                        if (zx.d(*(x8_1 + (sx.q((x10_3 & x10_3 s>> 0x1f) - 1) << 1))) != 0)
                            goto label_da6db0
                        
                        goto label_da6d94
                    
                    i_3 = zx.d(*(x8_1 - 2 + (x13_7 << 1)))
                    x13_7 = x12_18
                while (i_3 == 0)
                *arg1 = x12_18.d
                
                if (zx.d(*(x8_1 + (sx.q(x12_18.d) << 1))) != 0)
                    break
                
            label_da6d94:
                uint64_t x13_8 = x9_23
                uint32_t i_4
                
                do
                    x12_14 = x13_8 - 1
                    
                    if (x13_8 s< 1)
                        x12_14 = zx.q((x10_3 & x10_3 s>> 0x1f) - 1)
                        break
                    
                    i_4 = zx.d(*(x8_1 - 2 + (x13_8 << 1)))
                    x13_8 = x12_14
                while (i_4 == 0)
            
            break
        
        x12_13 -= 1
        x15_5 = zx.q(*(*(arg1 + 8) + (x12_13 << 1)))
        
        if (x15_5 != 0)
            goto label_da6bb0

label_da6db0:

if (x19 == 0)
    return 

int64_t x9_24
int32_t i_5

do
    x9_24 = __ldaxr(&x19[1])
    i_5 = __stlxr(x9_24 - 1, &x19[1])
while (i_5 != 0)

if (x9_24 == 0)
    (*(*x19 + 0x10))(x19)
    return std::__ndk1::__shared_weak_count::__release_weak() __tailcall
