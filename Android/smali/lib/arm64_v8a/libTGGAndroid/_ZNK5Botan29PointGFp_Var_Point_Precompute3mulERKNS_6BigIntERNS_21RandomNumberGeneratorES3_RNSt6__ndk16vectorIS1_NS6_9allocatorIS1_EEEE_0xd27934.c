// 函数: _ZNK5Botan29PointGFp_Var_Point_Precompute3mulERKNS_6BigIntERNS_21RandomNumberGeneratorES3_RNSt6__ndk16vectorIS1_NS6_9allocatorIS1_EEEE
// 地址: 0xd27934
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_90

if (*(arg2 + 0x20) == 0)
    void** x0_27 = __cxa_allocate_exception(0x20)
    int64_t x0_28
    int128_t v2
    x0_28, v2 = operator new(0x40)
    (*"alar must be positive")[0].o
    int64_t var_80_1 = x0_28
    v2 = data_71c880
    __builtin_strncpy(x0_28, "PointGFp_Var_Point_Precompute scalar must be positive", 0x36)
    var_90 = v2
    *x0_27 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_27[1])
    *x0_27 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_27, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

int64_t* entry_x4

if (((entry_x4[1] - *entry_x4) s>> 3) * -0x3333333333333333 u<= 7)
    std::__ndk1::vector<Botan::BigInt, std::__ndk1::allocator<Botan::BigInt> >::__append(entry_x4)

int64_t x8_4 = Botan::BigInt::bits() + 1
__builtin_memset(&var_90, 0, 0x18)
int64_t var_78 = -1
int32_t var_70 = 1
Botan::BigInt::randomize(&var_90, arg3, (x8_4 u>> 1).b)
Botan::operator*(arg4, &var_90)
uint64_t var_c8
uint64_t x2_1 = var_c8
uint32_t* var_e0

if (x2_1 == -1)
    int64_t var_d8
    void* x9_2 = var_d8 - var_e0
    
    if (var_d8 == var_e0)
        x2_1 = 0
    else
        void* x11_1
        
        x11_1 = x9_2 s>= 0 ? x9_2 : -ffffffffffffffff
        
        void* x10_1 = var_e0 - var_d8
        void* x11_2
        
        x11_2 = x11_1 s< 1 ? x11_1 : 1
        
        x2_1 = x9_2 s>> 2
        void* x9_3
        
        x9_3 = x10_1 s> x9_2 ? x10_1 : x9_2
        
        int64_t i_3 = x11_2 * (x9_3 u>> 2)
        uint64_t x10_2 = 1
        int64_t i
        
        do
            int32_t x11_3 = *(var_e0 - 4 + (i_3 << 2))
            i = i_3
            i_3 -= 1
            x10_2 = zx.q(x10_2.d) & zx.q(((x11_3 - 1) & not.d(x11_3)) s>> 0x1f)
            x2_1 -= x10_2
        while (i != 1)
    
    uint64_t var_c8_1 = x2_1

int32_t var_c0
Botan::BigInt::add2(arg2, var_e0, x2_1, zx.q(var_c0))

if (var_e0 != 0)
    uint32_t* var_d8_1 = var_e0
    int64_t var_d0
    Botan::deallocate_memory(var_e0, (var_d0 - var_e0) s>> 2, 4)

int64_t x27 = *(arg1 + 0x10)
int64_t x28 = *(arg1 + 0x18)
int64_t x0_7 = Botan::BigInt::bits()
int64_t x26 = *(arg1 + 0x18)
void* var_80

if (x26 == 0)
    Botan::throw_invalid_argument("align_to must not be 0", "round_up", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
else
    int64_t x8_10 = x0_7 u% x26
    int64_t x25_1
    
    if (x8_10 == 0)
        x25_1 = 0
    else
        x25_1 = x26 - x8_10
    
    Botan::RandomNumberGenerator* entry_x8
    Botan::PointGFp::PointGFp(entry_x8)
    uint64_t x23_1 = x27 * 3
    uint64_t var_e0_1
    __builtin_memset(&var_e0_1, 0, 0x18)
    
    if (x23_1 == 0)
        goto label_d27b0c
    
    if (x23_1 u>> 0x3e == 0)
        uint64_t x0_10 = Botan::allocate_memory(x23_1, 4)
        int64_t x2_2 = x27 * 0xc
        var_e0_1 = x0_10
        uint64_t var_d0_1 = x0_10 + (x23_1 << 2)
        memset(x0_10, 0, x2_2)
        int64_t var_d8_2 = x2_2 + x0_10
    label_d27b0c:
        int64_t x8_13 = x25_1 + x0_7
        int64_t x25_2 = 1 << x28
        void* var_b8
        int64_t i_2
        
        if (x26 u<= x8_13)
            i_2 = x8_13 u/ x26 - 1
            int32_t x0_12 = Botan::BigInt::get_substring(&var_b8, *(arg1 + 0x18) * i_2)
            uint64_t x0_13 = var_e0_1
            
            if (var_d8_2 != x0_13)
                memset(x0_13, 0, var_d8_2 - x0_13)
            
            if (x28 != 0 && x23_1 != 0)
                int64_t x8_17 = x27 * 0xc
                int64_t x9_7 = 1
                int64_t x10_3 = x8_17
                
                do
                    int32_t x12_2 = x0_12 ^ x9_7.d
                    int64_t x11_5 = 0
                    
                    do
                        uint64_t x14_1 = var_e0_1
                        int64_t x15_1 = x11_5 << 2
                        x11_5 += 1
                        *(x14_1 + x15_1) |=
                            (*(arg1 + 0x20) + x10_3)[x11_5] & ((x12_2 - 1) & not.d(x12_2)) s>> 0x1f
                    while (x23_1 != x11_5)
                    
                    x9_7 += 1
                    x10_3 += x8_17
                while (x9_7 != x25_2)
            
            uint64_t x1_7 = var_e0_1
            uint32_t* x2_5 = *(arg1 + 0x10)
            Botan::PointGFp::add(entry_x8, x1_7, x2_5, x1_7 + (x2_5 << 2), x2_5, 
                x1_7 + (x2_5 << 3), x2_5)
            *(*entry_x4 + 0x18) = -1
            Botan::PointGFp::randomize_repr(entry_x8, arg3)
        else
            i_2 = 0
        
        if (x28 == 0)
            int64_t i_1 = i_2 - 1
            
            while (i_1 != -1)
                Botan::PointGFp::mult2i(entry_x8, *(arg1 + 0x18))
                Botan::BigInt::get_substring(&var_b8, *(arg1 + 0x18) * i_1)
                uint64_t x1_12 = var_e0_1
                
                if (var_d8_2 != x1_12)
                    memset(x1_12, 0, var_d8_2 - x1_12)
                    x1_12 = var_e0_1
                
                uint32_t* x2_11 = *(arg1 + 0x10)
                i_1 -= 1
                Botan::PointGFp::add(entry_x8, x1_12, x2_11, x1_12 + (x2_11 << 2), x2_11, 
                    x1_12 + (x2_11 << 3), x2_11)
        else
            int64_t x24_3 = x27 * 0xc
            
            while (i_2 != 0)
                Botan::PointGFp::mult2i(entry_x8, *(arg1 + 0x18))
                i_2 -= 1
                int32_t x0_19 = Botan::BigInt::get_substring(&var_b8, *(arg1 + 0x18) * i_2)
                uint64_t x0_20 = var_e0_1
                
                if (var_d8_2 != x0_20)
                    memset(x0_20, 0, var_d8_2 - x0_20)
                
                if (x23_1 != 0)
                    int64_t x8_20 = x24_3
                    int64_t x9_8 = 1
                    
                    do
                        int32_t x11_6 = x0_19 ^ x9_8.d
                        int64_t x10_4 = 0
                        
                        do
                            uint64_t x13_7 = var_e0_1
                            int64_t x14_2 = x10_4 << 2
                            x10_4 += 1
                            *(x13_7 + x14_2) |= (*(arg1 + 0x20) + x8_20)[x10_4]
                                & ((x11_6 - 1) & not.d(x11_6)) s>> 0x1f
                        while (x23_1 != x10_4)
                        
                        x9_8 += 1
                        x8_20 += x24_3
                    while (x9_8 != x25_2)
                
                uint64_t x1_9 = var_e0_1
                uint32_t* x2_7 = *(arg1 + 0x10)
                Botan::PointGFp::add(entry_x8, x1_9, x2_7, x1_9 + (x2_7 << 2), x2_7, 
                    x1_9 + (x2_7 << 3), x2_7)
        
        uint64_t x0_25 = var_e0_1
        
        if (x0_25 != 0)
            uint64_t var_d8_3 = x0_25
            Botan::deallocate_memory(x0_25, (var_d0_1 - x0_25) s>> 2, 4)
        
        void* x0_26 = var_b8
        
        if (x0_26 != 0)
            void* var_b0_1 = x0_26
            int64_t var_a8
            Botan::deallocate_memory(x0_26, (var_a8 - x0_26) s>> 2, 4)
        
        void* result = var_90.q
        
        if (result == 0)
            return result
        
        var_90:8.q = result
        return Botan::deallocate_memory(result, (var_80 - result) s>> 2, 4)

int64_t* x0_32 = std::__ndk1::__vector_base_common<true>::__throw_length_error()

if ((zx.d(var_90.b) & 1) != 0)
    operator delete(var_80)

sub_1101e04(x0_32)
noreturn
