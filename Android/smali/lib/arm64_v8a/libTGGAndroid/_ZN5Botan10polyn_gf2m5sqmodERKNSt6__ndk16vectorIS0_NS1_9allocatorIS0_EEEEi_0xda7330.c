// 函数: _ZN5Botan10polyn_gf2m5sqmodERKNSt6__ndk16vectorIS0_NS1_9allocatorIS0_EEEEi
// 地址: 0xda7330
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x25 = *(arg1 + 0x20)
int64_t* x19 = *(arg1 + 0x28)

if (x19 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(&x19[1]) + 1, &x19[1])
    while (i != 0)
    int32_t i_1
    
    do
        i_1 = __stxr(__ldxr(&x19[1]) + 1, &x19[1])
    while (i_1 != 0)

int32_t entry_x2
int32_t x21 = entry_x2 - 1
int32_t* var_50 = x25
int64_t* var_48 = x19
int32_t* entry_x8
int64_t* result = Botan::polyn_gf2m::polyn_gf2m(entry_x8.d, zx.q(x21))
int64_t x9_5

if (x19 != 0)
    int32_t i_2
    
    do
        x9_5 = __ldaxr(&x19[1])
        i_2 = __stlxr(x9_5 - 1, &x19[1])
    while (i_2 != 0)

int32_t i_9
int32_t x8_2

if (x19 != 0 && x9_5 == 0)
    (*(*x19 + 0x10))(x19)
    result = std::__ndk1::__shared_weak_count::__release_weak()
    
    if (entry_x2 s< 0)
        x8_2 = entry_x2 + 1
    else
        x8_2 = entry_x2
    
    if (entry_x2 s>= 2)
        goto label_da73c4
    
    i_9 = 0
else
    if (entry_x2 s< 0)
        x8_2 = entry_x2 + 1
    else
        x8_2 = entry_x2
    
    if (entry_x2 s< 2)
        i_9 = 0
    else
    label_da73c4:
        i_9 = x8_2 s>> 1
        int64_t x9_6 = 0
        uint64_t i_8 = zx.q(i_9)
        int32_t i_3
        
        do
            uint64_t x11_2 = zx.q(*(*(arg1 + 8) + x9_6))
            
            if (x11_2 != 0)
                int64_t* x0_1 = *(x25 + 0x10)
                int64_t x12_2 = *x0_1
                
                if (x11_2 u>= (x0_1[1] - x12_2) s>> 1)
                    goto label_da76c4
                
                result = *(x25 + 0x18)
                uint64_t x14_1 = zx.q(*(x12_2 + (x11_2 << 1))) << 1
                int64_t x11_5 = *result
                uint64_t x12_6 = zx.q((x14_1 u>> zx.q(*x25)).w + (x14_1.w & x25[2].w))
                
                if (x12_6 u>= (result[1] - x11_5) s>> 1)
                    goto label_da76c0
                
                x11_2 = zx.q(*(x11_5 + (x12_6 << 1)))
            
            i_3 = i_8
            i_8 -= 1
            *(*(entry_x8 + 8) + (x9_6 << 1)) = (x11_2.d).w
            x9_6 += 2
        while (i_3 != 1)

if (i_9 s< entry_x2)
    uint64_t i_10 = zx.q(i_9)
    uint64_t x9_7 = zx.q(entry_x2)
    
    if (entry_x2 s< 1)
    label_da7570:
        int16_t* x10_6 = *(arg1 + 8) + (i_10 << 1)
        uint64_t x8_5 = x9_7 - i_10
        
        while (true)
            uint64_t x9_8 = zx.q(*x10_6)
            
            if (x9_8 != 0)
                result = *(x25 + 0x10)
                
                if (x9_8 u>= (result[1] - *result) s>> 1)
                    break
            
            uint64_t temp1_1 = x8_5
            x8_5 -= 1
            x10_6 = &x10_6[1]
            
            if (temp1_1 == 1)
                goto label_da75a8
    else
        uint64_t x13_6
        
        while (true)
            x13_6 = zx.q(*(*(arg1 + 8) + (i_10 << 1)))
            
            if (x13_6 != 0)
                break
            
        label_da7494:
            i_10 += 1
            
            if (i_10 == x9_7)
                goto label_da75a8
        
        result = *(x25 + 0x10)
        int64_t x14_2 = *result
        
        if (x13_6 u< (result[1] - x14_2) s>> 1)
            int64_t x12_10 = 0
            uint32_t x13_8 = zx.d(*(x14_2 + (x13_6 << 1))) << 1
            int16_t x13_10 = (x25[2].w & x13_8.w) + ((x13_8 & 0xfffe) u>> *x25).w
            
            while (true)
                uint64_t x14_5 = zx.q(*(*(*arg2 + i_10 * 0x30 + 8) + x12_10))
                
                if (x14_5 != 0)
                    int64_t* x0_4 = *(x25 + 0x10)
                    int64_t x15_4 = *x0_4
                    
                    if (x14_5 u>= (x0_4[1] - x15_4) s>> 1)
                        std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                        break
                    
                    result = *(x25 + 0x18)
                    uint64_t x17_1 = zx.q(*(x15_4 + (x14_5 << 1))) + zx.q(x13_10)
                    int64_t x14_11 = *result
                    uint64_t x15_8 = zx.q((x17_1 u>> zx.q(*x25)).w + (x17_1.w & x25[2].w))
                    
                    if (x15_8 u>= (result[1] - x14_11) s>> 1)
                        result, i_10, x9_7 =
                            std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                        goto label_da7570
                    
                    x14_5 = zx.q(*(x14_11 + (x15_8 << 1)))
                
                int16_t* x15_3 = *(entry_x8 + 8)
                *(x15_3 + x12_10) ^= x14_5.w
                x12_10 += 2
                
                if (x9_7 << 1 == x12_10)
                    goto label_da7494
            
        label_da76c0:
            std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
        label_da76c4:
            int64_t* x0_8 = std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
            
            if (x19 != 0)
                int64_t x9_14
                int32_t i_4
                
                do
                    x9_14 = __ldaxr(&x19[1])
                    i_4 = __stlxr(x9_14 - 1, &x19[1])
                while (i_4 != 0)
                
                if (x9_14 == 0)
                    (*(*x19 + 0x10))(x19)
                    std::__ndk1::__shared_weak_count::__release_weak()
                
                int64_t x9_15
                int32_t i_5
                
                do
                    x9_15 = __ldaxr(&x19[1])
                    i_5 = __stlxr(x9_15 - 1, &x19[1])
                while (i_5 != 0)
                
                if (x9_15 == 0)
                    (*(*x19 + 0x10))(x19)
                    std::__ndk1::__shared_weak_count::__release_weak()
            
            sub_1101e04(x0_8)
            noreturn
    
    result = std::__ndk1::__vector_base_common<true>::__throw_out_of_range()

label_da75a8:
int64_t x8_6 = *(entry_x8 + 8)
int64_t x9_10 = *(entry_x8 + 0x10) - x8_6
uint32_t x10_7 = (x9_10 u>> 1).d
int64_t x9_11 = (x9_10 & 0x1fffffffe) << 0x1f s>> 0x20

while (true)
    int64_t x13_11 = x9_11
    *entry_x8 = x21
    
    while (true)
        int64_t x12_13 = x13_11 - 1
        
        if (x13_11 s< 1)
            *entry_x8 = (x10_7 & x10_7 s>> 0x1f) - 1
            
            if ((((x10_7 & x10_7 s>> 0x1f) - 1) & 0x80000000) == 0)
            label_da7604:
                int64_t x13_12 = x9_11
                int64_t x12_15
                uint32_t i_6
                
                do
                    x12_15 = x13_12 - 1
                    
                    if (x13_12 s< 1)
                        *entry_x8 = (x10_7 & x10_7 s>> 0x1f) - 1
                        
                        if (zx.d(*(x8_6 + (sx.q((x10_7 & x10_7 s>> 0x1f) - 1) << 1))) != 0)
                            goto label_da765c
                        
                        goto label_da763c
                    
                    i_6 = zx.d(*(x8_6 - 2 + (x13_12 << 1)))
                    x13_12 = x12_15
                while (i_6 == 0)
                *entry_x8 = x12_15.d
                
                if (zx.d(*(x8_6 + (sx.q(x12_15.d) << 1))) == 0)
                label_da763c:
                    int64_t x13_13 = x9_11
                    
                    while (true)
                        int64_t x12_19 = x13_13 - 1
                        
                        if (x13_13 s< 1)
                            x21 = (x10_7 & x10_7 s>> 0x1f) - 2
                            break
                        
                        uint32_t x14_13 = zx.d(*(x8_6 - 2 + (x13_13 << 1)))
                        x13_13 = x12_19
                        
                        if (x14_13 != 0)
                            x21 = x12_19.d - 1
                            break
                    
                    break
        else
            uint32_t x14_12 = zx.d(*(x8_6 - 2 + (x13_11 << 1)))
            x13_11 = x12_13
            
            if (x14_12 == 0)
                continue
            else
                *entry_x8 = x12_13.d
                
                if ((x12_13.d & 0x80000000) == 0)
                    goto label_da7604
        
    label_da765c:
        
        if (x19 != 0)
            int64_t x9_12
            int32_t i_7
            
            do
                x9_12 = __ldaxr(&x19[1])
                i_7 = __stlxr(x9_12 - 1, &x19[1])
            while (i_7 != 0)
            
            if (x9_12 == 0)
                (*(*x19 + 0x10))(x19)
                return std::__ndk1::__shared_weak_count::__release_weak() __tailcall
        
        return result
