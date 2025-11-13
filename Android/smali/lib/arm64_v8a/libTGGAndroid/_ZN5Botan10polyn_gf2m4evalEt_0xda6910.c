// 函数: _ZN5Botan10polyn_gf2m4evalEt
// 地址: 0xda6910
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int16_t* x11 = *(arg1 + 8)
int32_t* x8 = *(arg1 + 0x20)
int64_t* x19 = *(arg1 + 0x28)
int64_t x9 = sx.q(*arg1)

if (x19 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(&x19[1]) + 1, &x19[1])
    while (i != 0)

uint32_t x20 = zx.d(x11[x9])

if (x9.d s< 1)
label_da69f0:
    
    if (x19 != 0)
    label_da6a04:
        int64_t x9_1
        int32_t i_1
        
        do
            x9_1 = __ldaxr(&x19[1])
            i_1 = __stlxr(x9_1 - 1, &x19[1])
        while (i_1 != 0)
        
        if (x9_1 == 0)
            (*(*x19 + 0x10))(x19)
            std::__ndk1::__shared_weak_count::__release_weak()
else
    int16_t entry_x1
    
    if (zx.d(entry_x1) != 0)
        uint64_t x10_2 = zx.q(entry_x1)
        
        while (true)
            if ((x20 & 0xffff) != 0)
                int64_t* x0 = *(x8 + 0x10)
                uint64_t x13_2 = zx.q(x20.w)
                int64_t x12_4 = *x0
                int64_t x14_3 = (x0[1] - x12_4) s>> 1
                
                if (x14_3 u<= x13_2)
                    std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                else if (x14_3 u<= x10_2)
                    std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                    std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                else
                    int64_t* x0_1 = *(x8 + 0x18)
                    uint64_t x13_4 = zx.q(*(x12_4 + (x10_2 << 1))) + zx.q(*(x12_4 + (x13_2 << 1)))
                    int64_t x12_6 = *x0_1
                    uint64_t x13_7 = zx.q((x13_4 u>> zx.q(*x8)).w + (x13_4.w & x8[2].w))
                    
                    if (x13_7 u< (x0_1[1] - x12_6) s>> 1)
                        x20 = zx.d(*(x11 - 2 + (x9 << 1))) ^ zx.d(*(x12_6 + (x13_7 << 1)))
                        x9 -= 1
                        
                        if (x9 + 1 s<= 1)
                            break
                        
                        continue
                
                int64_t* x0_6 = std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                
                if (x19 != 0)
                    int64_t x9_2
                    int32_t i_2
                    
                    do
                        x9_2 = __ldaxr(&x19[1])
                        i_2 = __stlxr(x9_2 - 1, &x19[1])
                    while (i_2 != 0)
                    
                    if (x9_2 == 0)
                        (*(*x19 + 0x10))(x19)
                        std::__ndk1::__shared_weak_count::__release_weak()
                
                sub_1101e04(x0_6)
                noreturn
            
            x20 = zx.d(*(x11 - 2 + (x9 << 1)))
            x9 -= 1
            
            if (x9 + 1 s<= 1)
                break
        
        goto label_da69f0
    
    x20 = zx.d(*x11)
    
    if (x19 != 0)
        goto label_da6a04

return zx.q(x20)
