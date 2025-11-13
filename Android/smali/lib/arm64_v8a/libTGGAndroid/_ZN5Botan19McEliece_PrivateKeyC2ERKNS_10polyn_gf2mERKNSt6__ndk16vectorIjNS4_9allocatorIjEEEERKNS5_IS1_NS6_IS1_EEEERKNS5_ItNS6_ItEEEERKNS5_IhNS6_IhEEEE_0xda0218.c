// 函数: _ZN5Botan19McEliece_PrivateKeyC2ERKNS_10polyn_gf2mERKNSt6__ndk16vectorIjNS4_9allocatorIjEEEERKNS5_IS1_NS6_IS1_EEEERKNS5_ItNS6_ItEEEERKNS5_IhNS6_IhEEEE
// 地址: 0xda0218
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(Botan::polyn_gf2m, 0x50) x26
void* __offset(Botan::polyn_gf2m, 0x50) var_40 = x26
void* x8 = *arg2
*arg1 = x8
*(arg1 + *(x8 - 0xc8)) = *(arg2 + 8)
*(arg1 + *(*arg1 - 0x88)) = *(arg2 + 0x10)
*(arg1 + *(*arg1 - 0xd0)) = *(arg2 + 0x18)
int32_t x8_6 = *arg3
void* var_88
std::__ndk1::vector<uint16_t, Botan::secure_allocator<uint16_t> >::vector(&var_88)
int64_t x9_3 = *(arg3 + 0x20)
void* x8_7 = *(arg3 + 0x28)

if (x8_7 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(x8_7 + 8) + 1, x8_7 + 8)
    while (i != 0)

__builtin_memset(arg1 + 8, 0, 0x18)
int32_t* x0_1 = operator new(0x30)
*(arg1 + 8) = x0_1
*(arg1 + 0x10) = x0_1
*(arg1 + 0x18) = &x0_1[0xc]
*x0_1 = x8_6
std::__ndk1::vector<uint16_t, Botan::secure_allocator<uint16_t> >::vector(&x0_1[2])
*(x0_1 + 0x20) = x9_3
*(x0_1 + 0x28) = x8_7
void* var_80_1
int64_t var_78
void* x0_5

if (x8_7 == 0)
    *(arg1 + 0x10) = &x0_1[0xc]
    x0_5 = var_88
    
    if (x0_5 != 0)
        var_80_1 = x0_5
        Botan::deallocate_memory(x0_5, (var_78 - x0_5) s>> 1, 2)
else
    int32_t i_1
    
    do
        i_1 = __stxr(__ldxr(x8_7 + 8) + 1, x8_7 + 8)
    while (i_1 != 0)
    x26 = x8_7
    *(arg1 + 0x10) = &x0_1[0xc]
    
    if (x26 != 0)
        int64_t x9_9
        int32_t i_2
        
        do
            x9_9 = __ldaxr(x26 + 8)
            i_2 = __stlxr(x9_9 - 1, x26 + 8)
        while (i_2 != 0)
        
        if (x9_9 == 0)
            (*(*x26 + 0x10))(x26)
            std::__ndk1::__shared_weak_count::__release_weak()
    
    x0_5 = var_88
    
    if (x0_5 != 0)
        var_80_1 = x0_5
        Botan::deallocate_memory(x0_5, (var_78 - x0_5) s>> 1, 2)
int64_t result =
    std::__ndk1::vector<Botan::polyn_gf2m, std::__ndk1::allocator<Botan::polyn_gf2m> >::vector(arg1
    + 0x20)
__builtin_memset(arg1 + 0x38, 0, 0x18)
int64_t* entry_x5
int64_t x9_10 = *entry_x5
int64_t x8_20 = entry_x5[1]
uint64_t x27 = x8_20 - x9_10

if (x8_20 == x9_10)
label_da03f0:
    __builtin_memset(arg1 + 0x50, 0, 0x18)
    int64_t x9_11 = *arg4
    int64_t x8_24 = *(arg4 + 8)
    uint64_t x28_1 = x8_24 - x9_11
    
    if (x8_24 == x9_11)
    label_da044c:
        int64_t x8_29 = entry_x5[1] - *entry_x5
        uint64_t x8_31
        
        if (x8_29 s< -1)
            x8_31 = 0x40
        else
            int64_t x8_30 = x8_29 s>> 1
            
            if (x8_30 u< 2)
                x8_31 = 0
            else
                int32_t x9_13 = 0
                int64_t x10_4 = 1
                
                do
                    x10_4 <<= 1
                    x9_13 += 1
                while (x10_4 u< x8_30)
                
                x8_31 = zx.q(x9_13.b)
        
        int64_t x11_2 = *(arg3 + 8)
        int64_t x9_15 = *(arg3 + 0x10) - x11_2
        uint32_t x12 = (x9_15 u>> 1).d
        int64_t x10_5 = (x9_15 & 0x1fffffffe) << 0x1f s>> 0x20
        int32_t x9_17 = (x12 & x12 s>> 0x1f) - 1
        
        while (true)
            int64_t x12_1 = x10_5 - 1
            
            if (x10_5 s< 1)
                break
            
            uint32_t x13_1 = zx.d(*(x11_2 - 2 + (x10_5 << 1)))
            x10_5 = x12_1
            
            if (x13_1 != 0)
                x9_17 = x12_1.d
                break
        
        *arg3 = x9_17
        int64_t x8_32 = x8_31 * sx.q(x9_17)
        *(arg1 + 0x68) = x8_32
        *(arg1 + 0x70) = ((entry_x5[1] - *entry_x5) s>> 1) - x8_32
        return result
    
    if ((x28_1 & 0xffffffff80000000) == 0)
        result = operator new(x28_1)
        *(arg1 + 0x50) = result
        *(arg1 + 0x58) = result
        *(arg1 + 0x60) = result + (x28_1 s>> 2 << 2)
        int64_t x1_5 = *arg4
        int64_t result_2 = result
        size_t x22_1 = *(arg4 + 8) - x1_5
        
        if (x22_1 s>= 1)
            result = memcpy(result_2, x1_5, x22_1)
            result_2 += x22_1
        
        *(arg1 + 0x58) = result_2
        goto label_da044c
else
    if ((x27 & 0xffffffff80000000) == 0)
        result = operator new(x27)
        *(arg1 + 0x38) = result
        *(arg1 + 0x40) = result
        *(arg1 + 0x48) = result + (x27 s>> 1 << 1)
        int64_t x1_4 = *entry_x5
        int64_t result_1 = result
        size_t x27_1 = entry_x5[1] - x1_4
        
        if (x27_1 s>= 1)
            result = memcpy(result_1, x1_4, x27_1)
            result_1 += x27_1
        
        *(arg1 + 0x40) = result_1
        goto label_da03f0
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()

sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
noreturn
