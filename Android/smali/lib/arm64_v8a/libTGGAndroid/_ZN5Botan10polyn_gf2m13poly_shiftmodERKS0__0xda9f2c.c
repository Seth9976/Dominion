// 函数: _ZN5Botan10polyn_gf2m13poly_shiftmodERKS0_
// 地址: 0xda9f2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* entry_x1
int64_t x11 = *(entry_x1 + 8)
int64_t x9_1 = *(entry_x1 + 0x10) - x11
uint32_t x12 = (x9_1 u>> 1).d
int64_t x9_2 = (x9_1 & 0x1fffffffe) << 0x1f s>> 0x20
int32_t x10_1 = (x12 & x12 s>> 0x1f) - 1
int64_t x14 = x9_2

while (true)
    int64_t x13_1 = x14 - 1
    
    if (x14 s< 1)
        break
    
    uint32_t x15_1 = zx.d(*(x11 + (x14 << 1) - 2))
    x14 = x13_1
    
    if (x15_1 != 0)
        x10_1 = x13_1.d
        break

*entry_x1 = x10_1

if (x10_1 s<= 1)
label_daa254:
    void** x0_6 = __cxa_allocate_exception(0x20)
    int64_t x0_7
    int128_t v2_1
    x0_7, v2_1 = operator new(0x40)
    (*"degree 1 or less")[0].o
    int64_t var_30_1 = x0_7
    v2_1 = data_71b0e0
    __builtin_strncpy(x0_7, "shiftmod cannot be called on polynomials of degree 1 or less", 0x3d)
    int128_t var_40_1 = v2_1
    *x0_6 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_6[1])
    *x0_6 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_6, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

int32_t* x10_2 = *(entry_x1 + 0x20)
int64_t* x19_1 = *(entry_x1 + 0x28)

if (x19_1 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(&x19_1[1]) + 1, &x19_1[1])
    while (i != 0)
    x11 = *(entry_x1 + 8)
    int64_t x9_5 = *(entry_x1 + 0x10) - x11
    x12 = (x9_5 u>> 1).d
    x9_2 = (x9_5 & 0x1fffffffe) << 0x1f s>> 0x20

int32_t x14_2 = (x12 & x12 s>> 0x1f) - 1

while (true)
    int64_t x12_3 = x9_2 - 1
    
    if (x9_2 s< 1)
        break
    
    uint32_t x13_2 = zx.d(*(x11 + (x9_2 << 1) - 2))
    x9_2 = x12_3
    
    if (x13_2 != 0)
        x14_2 = x12_3.d
        break

*entry_x1 = x14_2
int64_t* x9_7 = *(x10_2 + 0x10)
int64_t x12_4 = *(arg1 + 8)
int64_t x13_3 = *x9_7
uint64_t x16_1 = zx.q(*(x12_4 + (sx.q(x14_2 - 1) << 1)))
int64_t x1 = (x9_7[1] - x13_3) s>> 1

if (x1 u<= x16_1)
    std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
label_daa2e8:
    std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
label_daa2f0:
    std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
label_daa2f8:
    std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
label_daa300:
    std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
label_daa308:
    int64_t* x0_17 = std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
    char var_40
    void* var_30
    
    if ((zx.d(var_40) & 1) != 0)
        operator delete(var_30)
    sub_1101e04(x0_17)
    noreturn

uint64_t x17_3 = zx.q(*(x11 + (sx.q(x14_2) << 1)))

if (x1 u<= x17_3)
    goto label_daa2e8

uint64_t x13_6

if (x16_1.d == 0)
    if (x14_2 s> 1)
    label_daa120:
        *(x12_4 + (zx.q(x14_2 - 1) << 1)) = *(x12_4 + (zx.q(x14_2 - 2) << 1))
        
        if (x14_2 - 1 u>= 2)
            int32_t x9_16 = x14_2 - 3
            int64_t x11_6 = zx.q(x14_2 - 1) - 1
            bool cond:2_1
            
            do
                int64_t x12_5 = *(arg1 + 8)
                cond:2_1 = x11_6 + 1 s> 2
                int16_t x13_7 = *(x12_5 + (zx.q(x9_16) << 1))
                x9_16 -= 1
                *(x12_5 + (x11_6 << 1)) = x13_7
                x11_6 -= 1
            while (cond:2_1)
        
        x13_6 = 0
        goto label_daa158
    
    **(arg1 + 8) = 0
    
    if (x19_1 == 0)
        return 
else
    int64_t* x9_8 = *(x10_2 + 0x18)
    uint32_t x16_3 = zx.d(*(x13_3 + (x16_1 << 1))) - zx.d(*(x13_3 + (x17_3 << 1)))
    int64_t x13_5 = *x9_8
    uint64_t x16_6 = zx.q((x16_3.w & x10_2[2].w) + (x16_3 s>> *x10_2).w)
    
    if (x16_6 u>= (x9_8[1] - x13_5) s>> 1)
        goto label_daa2f0
    
    x13_6 = zx.q(*(x13_5 + (x16_6 << 1)))
    
    if (x14_2 s> 1)
        if (x13_6.d == 0)
            goto label_daa120
        
        uint64_t x15_3 = zx.q(x14_2 - 1)
        int32_t x14_3 = x14_2 - 2
        uint64_t x17_7 = zx.q(*(x11 + (x15_3 << 1)))
        int16_t x11_3 = *(x12_4 + (zx.q(x14_3) << 1))
        
        if (x17_7 != 0)
            while (true)
                int32_t* x16_7 = *(arg1 + 0x20)
                int64_t* x9_9 = *(x16_7 + 0x10)
                int64_t x1_2 = *x9_9
                int64_t x2_4 = (x9_9[1] - x1_2) s>> 1
                
                if (x2_4 u<= x13_6)
                    std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                else if (x2_4 u<= x17_7)
                    std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                    std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                else
                    int64_t* x9_10 = *(x16_7 + 0x18)
                    uint64_t x17_9 = zx.q(*(x1_2 + (x17_7 << 1))) + zx.q(*(x1_2 + (x13_6 << 1)))
                    int64_t x16_8 = *x9_10
                    uint64_t x17_12 = zx.q((x17_9 u>> zx.q(*x16_7)).w + (x17_9.w & x16_7[2].w))
                    
                    if (x17_12 u< (x9_10[1] - x16_8) s>> 1)
                        *(x12_4 + (x15_3 << 1)) = *(x16_8 + (x17_12 << 1)) ^ x11_3
                        
                        if (x15_3 s< 2)
                            goto label_daa158
                        
                    label_daa0ec:
                        x12_4 = *(arg1 + 8)
                        x15_3 -= 1
                        x14_3 -= 1
                        x17_7 = zx.q(*(*(entry_x1 + 8) + (x15_3 << 1)))
                        x11_3 = *(x12_4 + (zx.q(x14_3) << 1))
                        
                        if (x17_7 == 0)
                            break
                        
                        continue
                
                std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
                goto label_daa254
        
        *(x12_4 + (x15_3 << 1)) = x11_3
        
        if (x15_3 s>= 2)
            goto label_daa0ec
        
        goto label_daa158
    
label_daa158:
    int16_t x11_11 = 0
    
    if (x13_6.d == 0)
        goto label_daa1d0
    
    uint64_t x9_17 = zx.q(**(entry_x1 + 8))
    
    if (x9_17.d == 0)
        goto label_daa1d0
    
    int64_t* x8_2 = *(x10_2 + 0x10)
    uint64_t x12_6 = zx.q(x13_6.d)
    int64_t x11_7 = *x8_2
    int64_t x13_9 = (x8_2[1] - x11_7) s>> 1
    
    if (x13_9 u<= x12_6)
        goto label_daa2f8
    
    if (x13_9 u<= x9_17)
        goto label_daa300
    
    int64_t* x8_3 = *(x10_2 + 0x18)
    uint64_t x12_8 = zx.q(*(x11_7 + (x9_17 << 1))) + zx.q(*(x11_7 + (x12_6 << 1)))
    int64_t x9_19 = *x8_3
    uint64_t x10_6 = zx.q((x12_8 u>> zx.q(*x10_2)).w + (x12_8.w & x10_2[2].w))
    
    if (x10_6 u>= (x8_3[1] - x9_19) s>> 1)
        goto label_daa308
    
    x11_11 = *(x9_19 + (x10_6 << 1))
label_daa1d0:
    **(arg1 + 8) = x11_11
    
    if (x19_1 == 0)
        return 
int64_t x9_20
int32_t i_1

do
    x9_20 = __ldaxr(&x19_1[1])
    i_1 = __stlxr(x9_20 - 1, &x19_1[1])
while (i_1 != 0)

if (x9_20 != 0)
    return 

(*(*x19_1 + 0x10))(x19_1)
return std::__ndk1::__shared_weak_count::__release_weak() __tailcall
