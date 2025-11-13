// 函数: _ZN5Botan8PointGFpC1ERKNS_8CurveGFpERKNS_6BigIntES6_
// 地址: 0xd2cc04
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = *arg2
int64_t x8_1 = *(arg2 + 8)
*(arg1 + 8) = x8_1

if (x8_1 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(x8_1 + 8) + 1, x8_1 + 8)
    while (i != 0)

std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(arg1 + 0x10)
*(arg1 + 0x28) = *(arg3 + 0x18)
*(arg1 + 0x30) = *(arg3 + 0x20)
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(arg1 + 0x38)
int64_t* x0_2 = *arg1
int64_t* entry_x3
*(arg1 + 0x50) = entry_x3[3]
*(arg1 + 0x58) = entry_x3[4].d
void* x0_3 = (*(*x0_2 + 0x60))()
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(arg1 + 0x60)
*(arg1 + 0x78) = *(x0_3 + 0x18)
*(arg1 + 0x80) = *(x0_3 + 0x20)
int128_t var_70

if (*(arg3 + 0x20) != 0)
    int64_t i_6 = *(arg3 + 0x18)
    
    if (i_6 == -1)
        int64_t x9_3 = *arg3
        int64_t x11_1 = *(arg3 + 8)
        int64_t x10_2 = x11_1 - x9_3
        
        if (x11_1 == x9_3)
            i_6 = 0
            *(arg3 + 0x18) = 0
            
            if (i_6 == 0)
                goto label_d2cdac
            
            goto label_d2cd64
        
        int64_t x12_1
        
        x12_1 = x10_2 s>= 0 ? x10_2 : -1
        
        int64_t x11_2 = x9_3 - x11_1
        int64_t x12_2
        
        x12_2 = x12_1 s< 1 ? x12_1 : 1
        
        i_6 = x10_2 s>> 2
        int64_t x10_3
        
        x10_3 = x11_2 s> x10_2 ? x11_2 : x10_2
        
        int64_t i_8 = x12_2 * (x10_3 u>> 2)
        uint64_t x11_3 = 1
        int64_t i_1
        
        do
            int32_t x12_3 = *(x9_3 - 4 + (i_8 << 2))
            i_1 = i_8
            i_8 -= 1
            x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
            i_6 -= x11_3
        while (i_1 != 1)
        *(arg3 + 0x18) = i_6
        
        if (i_6 u<= 1 && i_6 != 0)
            goto label_d2cd64
        
        goto label_d2cdac
    
    if (i_6 u<= 1 && i_6 != 0)
    label_d2cd64:
        int32_t* x9_5 = *arg3
        int32_t x10_5 = 0
        int32_t x11_6
        int32_t i_2
        
        do
            int32_t x11_4 = *x9_5
            x9_5 = &x9_5[1]
            i_2 = i_6
            i_6 -= 1
            x11_6 = (x10_5 ^ 1) & ((x11_4 - 1) & not.d(x11_4)) s>> 0x1f
            x10_5 = x11_6 ^ 1
        while (i_2 != 1)
        
        if ((x11_6 & 0x80000000) == 0)
            goto label_d2cdac
    else
    label_d2cdac:
        
        if ((Botan::BigInt::cmp(arg3, (*(**arg2 + 0x10))()) & 0x80000000) != 0)
            if (entry_x3[4].d != 0)
                int64_t i_7 = entry_x3[3]
                
                if (i_7 == -1)
                    int64_t x9_6 = *entry_x3
                    int64_t x11_7 = entry_x3[1]
                    int64_t x10_7 = x11_7 - x9_6
                    
                    if (x11_7 == x9_6)
                        i_7 = 0
                        entry_x3[3] = 0
                        
                        if (i_7 == 0)
                            goto label_d2ce98
                        
                        goto label_d2ce50
                    
                    int64_t x12_6
                    
                    x12_6 = x10_7 s>= 0 ? x10_7 : -1
                    
                    int64_t x11_8 = x9_6 - x11_7
                    int64_t x12_7
                    
                    x12_7 = x12_6 s< 1 ? x12_6 : 1
                    
                    i_7 = x10_7 s>> 2
                    int64_t x10_8
                    
                    x10_8 = x11_8 s> x10_7 ? x11_8 : x10_7
                    
                    int64_t i_9 = x12_7 * (x10_8 u>> 2)
                    uint64_t x11_9 = 1
                    int64_t i_3
                    
                    do
                        int32_t x12_8 = *(x9_6 - 4 + (i_9 << 2))
                        i_3 = i_9
                        i_9 -= 1
                        x11_9 = zx.q(x11_9.d) & zx.q(((x12_8 - 1) & not.d(x12_8)) s>> 0x1f)
                        i_7 -= x11_9
                    while (i_3 != 1)
                    entry_x3[3] = i_7
                    
                    if (i_7 u<= 1 && i_7 != 0)
                        goto label_d2ce50
                    
                    goto label_d2ce98
                
                if (i_7 u<= 1 && i_7 != 0)
                label_d2ce50:
                    int32_t* x9_8 = *entry_x3
                    int32_t x10_10 = 0
                    int32_t x11_12
                    int64_t i_4
                    
                    do
                        int32_t x11_10 = *x9_8
                        x9_8 = &x9_8[1]
                        i_4 = i_7
                        i_7 -= 1
                        x11_12 = (x10_10 ^ 1) & ((x11_10 - 1) & not.d(x11_10)) s>> 0x1f
                        x10_10 = x11_12 ^ 1
                    while (i_4 != 1)
                    
                    if ((x11_12 & 0x80000000) == 0)
                        goto label_d2ce98
                else
                label_d2ce98:
                    
                    if ((Botan::BigInt::cmp(entry_x3, (*(**arg2 + 0x10))()) & 0x80000000) != 0)
                        uint64_t x0_14 = (*(**arg1 + 0x30))()
                        __builtin_memset(&var_70, 0, 0x18)
                        void* var_60
                        
                        if (x0_14 != 0)
                            if (x0_14 u>> 0x3e != 0)
                                int64_t* x0_27 =
                                    std::__ndk1::__vector_base_common<true>::__throw_length_error()
                                
                                if ((zx.d(var_70.b) & 1) != 0)
                                    operator delete(var_60)
                                
                                void* x0_30 = *(arg1 + 0x60)
                                
                                if (x0_30 != 0)
                                    int64_t x8_33 = *(arg1 + 0x70)
                                    *(arg1 + 0x68) = x0_30
                                    Botan::deallocate_memory(x0_30, (x8_33 - x0_30) s>> 2, 4)
                                
                                void* x0_31 = *(arg1 + 0x38)
                                
                                if (x0_31 != 0)
                                    int64_t x8_35 = *(arg1 + 0x48)
                                    *(arg1 + 0x40) = x0_31
                                    Botan::deallocate_memory(x0_31, (x8_35 - x0_31) s>> 2, 4)
                                
                                void* x0_32 = *(arg1 + 0x10)
                                
                                if (x0_32 != 0)
                                    int64_t x8_37 = *(arg1 + 0x20)
                                    *(arg1 + 0x18) = x0_32
                                    Botan::deallocate_memory(x0_32, (x8_37 - x0_32) s>> 2, 4)
                                
                                int64_t* x19_1 = *(arg1 + 8)
                                
                                if (x19_1 != 0)
                                    int64_t x9_11
                                    int32_t i_5
                                    
                                    do
                                        x9_11 = __ldaxr(&x19_1[1])
                                        i_5 = __stlxr(x9_11 - 1, &x19_1[1])
                                    while (i_5 != 0)
                                    
                                    if (x9_11 == 0)
                                        (*(*x19_1 + 0x10))(x19_1)
                                        std::__ndk1::__shared_weak_count::__release_weak()
                                
                                sub_1101e04(x0_27)
                                noreturn
                            
                            void* x0_16 = Botan::allocate_memory(x0_14, 4)
                            int64_t x2_2 = x0_14 << 2
                            void* x23_2 = x0_16 + x2_2
                            var_70.q = x0_16
                            var_60 = x23_2
                            memset(x0_16, 0, x2_2)
                            var_70:8.q = x23_2
                        
                        int64_t* x0_17 = *arg1
                        (*(*x0_17 + 0x70))(x0_17, arg1 + 0x10, &var_70)
                        int64_t* x0_18 = *arg1
                        (*(*x0_18 + 0x70))(x0_18, arg1 + 0x38, &var_70)
                        void* result = var_70.q
                        
                        if (result == 0)
                            return result
                        
                        var_70:8.q = result
                        return Botan::deallocate_memory(result, (var_60 - result) s>> 2, 4)
            
            void** x0_23 = __cxa_allocate_exception(0x20)
            int64_t x0_24
            int128_t v0_1
            x0_24, v0_1 = operator new(0x20)
            int64_t var_60_2 = x0_24
            var_70 = data_71aa40
            __builtin_strncpy(x0_24, "Invalid PointGFp affine y", 0x1a)
            *x0_23 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_23[1])
            *x0_23 = _vtable_for_Botan::Invalid_Argument + 0x10
            __cxa_throw(x0_23, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
            noreturn

void** x0_19 = __cxa_allocate_exception(0x20)
int64_t x0_20
int128_t v0
x0_20, v0 = operator new(0x20)
int64_t var_60_1 = x0_20
var_70 = data_71aa40
__builtin_strncpy(x0_20, "Invalid PointGFp affine x", 0x1a)
*x0_19 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_19[1])
*x0_19 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_19, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
