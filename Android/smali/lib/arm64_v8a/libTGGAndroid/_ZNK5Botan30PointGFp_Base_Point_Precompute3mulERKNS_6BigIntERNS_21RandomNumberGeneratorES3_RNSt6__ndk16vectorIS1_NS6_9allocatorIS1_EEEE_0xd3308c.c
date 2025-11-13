// 函数: _ZNK5Botan30PointGFp_Base_Point_Precompute3mulERKNS_6BigIntERNS_21RandomNumberGeneratorES3_RNSt6__ndk16vectorIS1_NS6_9allocatorIS1_EEEE
// 地址: 0xd3308c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_90

if (*(arg2 + 0x20) == 0)
    void** x0_40 = __cxa_allocate_exception(0x20)
    int64_t x0_41
    int128_t v2
    x0_41, v2 = operator new(0x40)
    (*"calar must be positive")[0].o
    int64_t var_80_1 = x0_41
    v2 = data_71bff0
    __builtin_strncpy(x0_41, "PointGFp_Base_Point_Precompute scalar must be positive", 0x37)
    var_90 = v2
    *x0_40 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_40[1])
    *x0_40 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_40, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

Botan::Modular_Reducer::reduce(*(arg1 + 8))
uint64_t var_b8

if (((*(*arg3 + 0x48))(arg3) & 1) == 0)
    int64_t x2_2 = *(arg4 + 0x18)
    uint64_t x1_3 = *arg4
    
    if (x2_2 == -1)
        int64_t x8_5 = *(arg4 + 8)
        int64_t x9_4 = x8_5 - x1_3
        
        if (x8_5 == x1_3)
            x2_2 = 0
        else
            int64_t x11_5
            
            x11_5 = x9_4 s>= 0 ? x9_4 : -1
            
            int64_t x10_3 = x1_3 - x8_5
            int64_t x11_6
            
            x11_6 = x11_5 s< 1 ? x11_5 : 1
            
            x2_2 = x9_4 s>> 2
            int64_t x9_5
            
            x9_5 = x10_3 s> x9_4 ? x10_3 : x9_4
            
            int64_t i_4 = x11_6 * (x9_5 u>> 2)
            uint64_t x10_4 = 1
            int64_t i
            
            do
                int32_t x11_7 = *(x1_3 - 4 + (i_4 << 2))
                i = i_4
                i_4 -= 1
                x10_4 = zx.q(x10_4.d) & zx.q(((x11_7 - 1) & not.d(x11_7)) s>> 0x1f)
                x2_2 -= x10_4
            while (i != 1)
        
        *(arg4 + 0x18) = x2_2
    
    *(arg4 + 0x20)
    Botan::BigInt::add(&var_90, x1_3, x2_2)
    
    if (Botan::BigInt::bits() == Botan::BigInt::bits())
        int64_t x2_3 = *(arg4 + 0x18)
        uint64_t x1_4 = *arg4
        
        if (x2_3 == -1)
            int64_t x8_7 = *(arg4 + 8)
            int64_t x9_7 = x8_7 - x1_4
            
            if (x8_7 == x1_4)
                x2_3 = 0
            else
                int64_t x11_9
                
                x11_9 = x9_7 s>= 0 ? x9_7 : -1
                
                int64_t x10_5 = x1_4 - x8_7
                int64_t x11_10
                
                x11_10 = x11_9 s< 1 ? x11_9 : 1
                
                x2_3 = x9_7 s>> 2
                int64_t x9_8
                
                x9_8 = x10_5 s> x9_7 ? x10_5 : x9_7
                
                int64_t i_5 = x11_10 * (x9_8 u>> 2)
                uint64_t x10_6 = 1
                int64_t i_1
                
                do
                    int32_t x11_11 = *(x1_4 - 4 + (i_5 << 2))
                    i_1 = i_5
                    i_5 -= 1
                    x10_6 = zx.q(x10_6.d) & zx.q(((x11_11 - 1) & not.d(x11_11)) s>> 0x1f)
                    x2_3 -= x10_6
                while (i_1 != 1)
            
            *(arg4 + 0x18) = x2_3
        
        *(arg4 + 0x20)
        Botan::BigInt::add(&var_90, x1_4, x2_3)
else
    int64_t x8_2 = Botan::BigInt::bits() + 1
    __builtin_memset(&var_b8, 0, 0x18)
    int64_t var_a0_1 = -1
    int32_t var_98_1 = 1
    Botan::BigInt::randomize(&var_b8, arg3, (x8_2 u>> 1).b)
    Botan::operator*(arg4, &var_b8)
    int64_t var_c8
    int64_t x2_1 = var_c8
    uint64_t var_e0
    
    if (x2_1 == -1)
        int64_t var_d8
        int64_t x9_1 = var_d8 - var_e0
        
        if (var_d8 == var_e0)
            x2_1 = 0
        else
            int64_t x11_1
            
            x11_1 = x9_1 s>= 0 ? x9_1 : -1
            
            int64_t x10_1 = var_e0 - var_d8
            int64_t x11_2
            
            x11_2 = x11_1 s< 1 ? x11_1 : 1
            
            x2_1 = x9_1 s>> 2
            int64_t x9_2
            
            x9_2 = x10_1 s> x9_1 ? x10_1 : x9_1
            
            int64_t i_3 = x11_2 * (x9_2 u>> 2)
            uint64_t x10_2 = 1
            int64_t i_2
            
            do
                int32_t x11_3 = *(var_e0 - 4 + (i_3 << 2))
                i_2 = i_3
                i_3 -= 1
                x10_2 = zx.q(x10_2.d) & zx.q(((x11_3 - 1) & not.d(x11_3)) s>> 0x1f)
                x2_1 -= x10_2
            while (i_2 != 1)
        
        int64_t var_c8_1 = x2_1
    
    Botan::BigInt::add(&var_90, var_e0, x2_1)
    
    if (var_e0 != 0)
        uint64_t var_d8_1 = var_e0
        int64_t var_d0
        Botan::deallocate_memory(var_e0, (var_d0 - var_e0) s>> 2, 4)
    
    uint64_t x0_13 = var_b8
    
    if (x0_13 != 0)
        uint64_t var_b0_1 = x0_13
        int64_t var_a8
        Botan::deallocate_memory(x0_13, (var_a8 - x0_13) s>> 2, 4)

int64_t x0_15 = Botan::BigInt::bits()
int64_t x19 = *(arg1 + 0x10)
int64_t x25 = x19 << 1
int64_t x10_9

if (x0_15 == x0_15 u/ 3 * 3)
    x10_9 = 0
else
    x10_9 = (x0_15 u% 3) ^ 3

int64_t x20 = x10_9 + x0_15
uint64_t x11_17 = x20 u/ 3
void* var_80

if (x11_17 u> ((*(arg1 + 0x20) - *(arg1 + 0x18)) s>> 2) u/ ((x25 + x19) << 1))
    Botan::assertion_failure("windows <= m_W.size() / (3*elem_size)", 
        "Precomputed sufficient values for scalar mult", "mul", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x73fa)
else
    *arg1
    Botan::RandomNumberGenerator* entry_x8
    Botan::PointGFp::PointGFp(entry_x8)
    uint64_t entry_x4
    int64_t* x9_13 = entry_x4
    
    if (((x9_13[1] - *x9_13) s>> 3) * -0x3333333333333333 u<= 7)
        std::__ndk1::vector<Botan::BigInt, std::__ndk1::allocator<Botan::BigInt> >::__append(
            entry_x4)
    
    uint64_t x15_1 = x11_17
    __builtin_memset(&var_b8, 0, 0x18)
    uint64_t x23_1
    
    if (x25 == 0)
        x23_1 = 0
        
        if (x20 u< 3)
        label_d336d8:
            
            if (x23_1 != 0)
                uint64_t var_b0_3 = x23_1
                operator delete(x23_1)
            
            void* result = var_90.q
            
            if (result == 0)
                return result
            
            var_90:8.q = result
            return Botan::deallocate_memory(result, (var_80 - result) s>> 2, 4)
        
    label_d33414:
        int64_t x8_21 = x15_1 * 0xe
        int64_t x27_1 = x19 * 0x38
        int64_t x28_1 = x19 * (x15_1 - 1) * 0x38
        int64_t x23_2 = 0
        int64_t fp_1 = (x19 * (x8_21 - 4)) << 2
        int64_t x24_3 = (x19 * (x8_21 - 6)) << 2
        int64_t x21_2 = (x19 * (x8_21 - 8)) << 2
        int64_t x19_1 = (x19 * (x8_21 - 0xa)) << 2
        int64_t x20_1 = (x19 * (x8_21 - 0xc)) << 2
        int64_t x26_1 = (x19 * (x8_21 - 2)) << 2
        
        do
            int64_t x10_15 = var_90.q
            int64_t x8_26 = (x15_1 + not.q(x23_2)) * 3
            uint64_t x11_20 = x8_26 u>> 5
            int64_t x12_6 = (var_90:8.q - x10_15) s>> 2
            int32_t x9_19
            int64_t x13_3
            
            if (x12_6 u> x11_20)
                x9_19 = *(x10_15 + (x11_20 << 2))
                x13_3 = x8_26 & 0x1f
                
                if (x13_3 != 0 && x11_20 != (x8_26 + 3) u>> 5)
                    goto label_d33504
                
                goto label_d334f0
            
            x9_19 = 0
            x13_3 = x8_26 & 0x1f
            uint32_t x8_27
            
            if (x13_3 == 0 || x11_20 == (x8_26 + 3) u>> 5)
            label_d334f0:
                x8_27 = x9_19 u>> x13_3.d
                
                if (x25 != 0)
                label_d3352c:
                    int32_t x8_30 = x8_27 & 7
                    int32_t x8_32 = ((x8_30 ^ 1) - 1) s>> 0x1f
                    int32_t x9_23 = ((x8_30 ^ 2) - 1) s>> 0x1f
                    int32_t x10_20 = ((x8_30 ^ 3) - 1) s>> 0x1f
                    int32_t x11_24 = ((x8_30 ^ 4) - 1) s>> 0x1f
                    int32_t x12_9 = ((x8_30 ^ 5) - 1) s>> 0x1f
                    int32_t x13_6 = ((x8_30 ^ 6) - 1) s>> 0x1f
                    int64_t x14_4 = 0
                    
                    if (x8_30 != 7)
                        do
                            void* x15_6 = *(arg1 + 0x18)
                            int64_t x16_2 = x14_4 << 2
                            x14_4 += 1
                            int32_t x0_33 = ((x15_6 + x20_1)[x14_4] & x9_23)
                                | ((x15_6 + x28_1)[x14_4] & x8_32)
                                | (*(x15_6 + x19_1 + x16_2) & x10_20)
                                | (*(x15_6 + x21_2 + x16_2) & x11_24)
                            *(var_b8 + x16_2) = x0_33 | (*(x15_6 + x24_3 + x16_2) & x12_9)
                                | ((x15_6 + fp_1)[x14_4] & x13_6)
                        while (x25 != x14_4)
                    else
                        do
                            void* x15_2 = *(arg1 + 0x18)
                            int64_t x16_1 = x14_4 << 2
                            x14_4 += 1
                            int32_t x0_25 = ((x15_2 + x20_1)[x14_4] & x9_23)
                                | ((x15_2 + x28_1)[x14_4] & x8_32)
                                | (*(x15_2 + x19_1 + x16_1) & x10_20)
                                | (*(x15_2 + x21_2 + x16_1) & x11_24)
                            *(var_b8 + x16_1) = x0_25 | (*(x15_2 + x24_3 + x16_1) & x12_9)
                                | (*(x15_2 + fp_1 + x16_1) & x13_6) | (x15_2 + x26_1)[x14_4]
                        while (x25 != x14_4)
            else
            label_d33504:
                int32_t x10_16
                
                if (x12_6 u<= x11_20 + 1)
                    x10_16 = 0
                else
                    x10_16 = *(x10_15 + ((x11_20 + 1) << 2))
                
                x8_27 = x10_16 << 1 << not.d(x8_26.d) | x9_19 u>> x8_26.d
                
                if (x25 != 0)
                    goto label_d3352c
            uint64_t x1_21 = var_b8
            uint32_t* x2_11 = *(arg1 + 0x10)
            Botan::PointGFp::add_affine(entry_x8, x1_21, x2_11, x1_21 + (x2_11 << 2), x2_11)
            
            if (x23_2 == 0 && ((*(*arg3 + 0x48))() & 1) != 0)
                *(*entry_x4 + 0x18) = -1
                Botan::PointGFp::randomize_repr(entry_x8, arg3)
            
            x15_1 = x11_17
            x23_2 += 1
            fp_1 -= x27_1
            x24_3 -= x27_1
            x21_2 -= x27_1
            x19_1 -= x27_1
            x20_1 -= x27_1
            x28_1 -= x27_1
            x26_1 -= x27_1
        while (x15_1 != x23_2)
        
        x23_1 = var_b8
        goto label_d336d8
    
    if (x25 u>> 0x3e == 0)
        size_t x24_2 = x19 << 3
        uint64_t x0_19 = operator new(x24_2)
        x23_1 = x0_19
        var_b8 = x0_19
        int64_t var_a8_1 = x0_19 + (x25 << 2)
        memset(x0_19, 0, x24_2)
        x15_1 = x11_17
        uint64_t var_b0_2 = x24_2 + x0_19
        
        if (x20 u>= 3)
            goto label_d33414
        
        goto label_d336d8

int64_t* x0_45 = std::__ndk1::__vector_base_common<true>::__throw_length_error()

if ((zx.d(var_90.b) & 1) != 0)
    operator delete(var_80)

sub_1101e04(x0_45)
noreturn
