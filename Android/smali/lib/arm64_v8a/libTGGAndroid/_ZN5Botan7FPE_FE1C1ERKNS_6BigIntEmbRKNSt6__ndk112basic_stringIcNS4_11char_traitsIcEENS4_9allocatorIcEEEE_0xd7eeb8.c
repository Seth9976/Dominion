// 函数: _ZN5Botan7FPE_FE1C1ERKNS_6BigIntEmbRKNSt6__ndk112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE
// 地址: 0xd7eeb8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
v0.q = 0
v0:8.q = 0
*arg1 = _vtable_for_Botan::FPE_FE1 + 0x10
*(arg1 + 0x28) = zx.o(0)
*(arg1 + 0x38) = zx.o(0)
*(arg1 + 8) = zx.o(0)
*(arg1 + 0x18) = zx.o(0)
*(arg1 + 0x48) = -1
*(arg1 + 0x50) = 1
*(arg1 + 0x58) = 0
*(arg1 + 0x60) = 0
*(arg1 + 0x68) = 0
*(arg1 + 0x70) = -1
*(arg1 + 0x78) = 1
*(arg1 + 0x80) = arg3
int128_t var_90

if (arg3 u<= 2)
    void** x0_39 = __cxa_allocate_exception(0x20, v0)
    int64_t x0_40
    int128_t v0_8
    x0_40, v0_8 = operator new(0x20)
    int64_t var_80_3 = x0_40
    var_90 = data_71af80
    __builtin_strncpy(x0_40, "FPE_FE1 rounds too small", 0x19)
    *x0_39 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_39[1])
    *x0_39 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_39, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

var_90.w = 0
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x4
Botan::MessageAuthenticationCode::create_or_throw(entry_x4, &var_90)
int64_t* x0_1 = *(arg1 + 8)
int64_t var_b0
*(arg1 + 8) = var_b0

if (x0_1 != 0)
    (*(*x0_1 + 0x10))()

void* var_80

if ((zx.d(var_90.b) & 1) != 0)
    operator delete(var_80)
Botan::BigInt::encode(arg2)
void* x0_4 = *(arg1 + 0x18)

if (x0_4 != 0)
    *(arg1 + 0x20) = x0_4
    operator delete(x0_4)
    __builtin_memset(arg1 + 0x18, 0, 0x18)

int64_t x8_5 = var_90.q
*(arg1 + 0x18) = x8_5
int128_t v0_1 = var_90
*(arg1 + 0x20) = v0_1

if (v0_1.q - x8_5 u>= 0x11)
    void** x0_43 = __cxa_allocate_exception(0x20)
    int64_t x0_44
    int128_t v0_9
    x0_44, v0_9 = operator new(0x30)
    v0_9 = data_71c510
    int64_t var_80_4 = x0_44
    __builtin_strncpy(x0_44, "N is too large for FPE encryption", 0x22)
    var_90 = v0_9
    *x0_43 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_43[1])
    *x0_43 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_43, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

void* var_d8
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(&var_d8)
int64_t var_c0 = *(arg2 + 0x18)
int32_t x8_8 = *(arg2 + 0x20)
__builtin_memset(&var_90, 0, 0x18)
int32_t var_70 = 1
int64_t var_78 = -1
int32_t var_b8 = x8_8
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&var_90)
*var_90.q = 1
void* x8_10 = var_90.q
int64_t var_78_1 = -1

if ((var_90:8.q - x8_10) s>> 2 u>= 2)
    *(x8_10 + 4) = 0

int64_t var_80_1
void* x0_7

if (&var_90 == arg1 + 0x30)
    x0_7 = var_90.q
    
    if (x0_7 != 0)
        var_90:8.q = x0_7
        Botan::deallocate_memory(x0_7, (var_80_1 - x0_7) s>> 2, 4)
else
    x0_7 = *(arg1 + 0x30)
    var_90.q = x0_7
    *(arg1 + 0x30) = var_90
    int64_t x11_1 = *(arg1 + 0x40)
    int64_t x9_5 = *(arg1 + 0x48)
    *(arg1 + 0x40) = var_80_1
    *(arg1 + 0x48) = var_78_1
    int64_t var_78_2 = x9_5
    int32_t x9_6 = *(arg1 + 0x50)
    *(arg1 + 0x50) = var_70
    int32_t var_70_1 = x9_6
    
    if (x0_7 != 0)
        var_90:8.q = x0_7
        Botan::deallocate_memory(x0_7, (x11_1 - x0_7) s>> 2, 4)
__builtin_memset(&var_90, 0, 0x18)
int32_t var_70_2 = 1
int64_t var_78_3 = -1
int128_t v0_3
int128_t v1
v0_3, v1 = std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&var_90)
*var_90.q = 1
void* x8_16 = var_90.q
int64_t var_78_4 = -1

if ((var_90:8.q - x8_16) s>> 2 u>= 2)
    *(x8_16 + 4) = 0

void* var_80_2
uint64_t x0_9

if (&var_90 == arg1 + 0x58)
    x0_9 = var_90.q
    
    if (x0_9 != 0)
        var_90:8.q = x0_9
        Botan::deallocate_memory(x0_9, (var_80_2 - x0_9) s>> 2, 4)
else
    v1 = *(arg1 + 0x58)
    *(arg1 + 0x58) = var_90
    var_90 = v1
    void* x11_2 = *(arg1 + 0x68)
    int64_t x9_10 = *(arg1 + 0x70)
    x0_9 = v1.q
    *(arg1 + 0x68) = var_80_2
    *(arg1 + 0x70) = var_78_4
    var_80_2 = x11_2
    int64_t var_78_5 = x9_10
    int32_t x9_11 = *(arg1 + 0x78)
    *(arg1 + 0x78) = var_70_2
    int32_t var_70_3 = x9_11
    
    if (x0_9 != 0)
        var_90:8.q = x0_9
        Botan::deallocate_memory(x0_9, (var_80_2 - x0_9) s>> 2, 4)
void* x10_3 = var_d8
int64_t var_d0
void* x13 = var_d0 - x10_3

if (var_d0 != x10_3)
    void* x15_1
    
    x15_1 = x13 s>= 0 ? x13 : -ffffffffffffffff
    
    void* x14_1 = x10_3 - var_d0
    void* x15_2
    
    x15_2 = x15_1 s< 1 ? x15_1 : 1
    
    void* x13_1
    
    x13_1 = x14_1 s> x13 ? x14_1 : x13
    
    int64_t x9_12 = 0
    int64_t i = 0
    int32_t x8_21 = 0
    
    do
        int32_t x14_2
        
        if (x13 s>> 2 u> i)
            x14_2 = *(x10_3 + (i << 2))
        else
            x14_2 = 0
        
        int32_t x16_4 = ((x14_2 & 0xffff) - 1) u>> 0x1b & 0x10
        int32_t x15_4 = (x14_2 - 1) & not.d(x14_2)
        uint32_t x14_3 = x14_2 u>> x16_4
        int32_t x17_4 = ((x14_3 & 0xff) - 1) u>> 0x1c & 8
        uint32_t x14_4 = x14_3 u>> x17_4
        int32_t x17_8 = ((x14_4 & 0xf) - 1) u>> 0x1d & 4
        uint32_t x14_5 = x14_4 u>> x17_8
        int32_t x17_12 = ((x14_5 & 3) - 1) u>> 0x1e & 2
        i += 1
        x9_12 += zx.q(((x16_4 & 0xfffffffe) | (x15_4 & 0x80000000) u>> 0x1f | x17_4 | x17_8
            | x17_12) + (((x14_5 u>> x17_12 & 1) - 1) u>> 0x1f)) & zx.q(not.d(x8_21))
        x8_21 |= not.d(x15_4 s>> 0x1f)
    while (x15_2 * (x13_1 u>> 2) != i)

Botan::BigInt::operator<<=(arg1 + 0x30)
Botan::BigInt::operator<<=(arg1 + 0x58)
Botan::BigInt::operator>>=(&var_d8)

for (int64_t i_1 = 0; i_1 != 0x198d; i_1 += 1)
    uint32_t x24_2 = zx.d(*(Botan::PRIMES + (i_1 << 1)))
    
    if (Botan::operator%(&var_d8, x24_2) == 0)
        int32_t j
        
        do
            Botan::BigInt::operator*=((arg1 + 0x30).d)
            int32_t x0_17
            int128_t v0_4
            int128_t v1_1
            x0_17, v0_4, v1_1 = Botan::BigInt::is_less_than(arg1 + 0x58)
            
            if ((x0_17 & 1) != 0)
                int64_t x9_13 = *(arg1 + 0x70)
                v0_4 = *(arg1 + 0x30)
                v1_1 = *(arg1 + 0x58)
                int64_t x10_4 = *(arg1 + 0x40)
                int64_t x11_3 = *(arg1 + 0x48)
                *(arg1 + 0x40) = *(arg1 + 0x68)
                *(arg1 + 0x48) = x9_13
                int32_t x8_23 = *(arg1 + 0x78)
                int32_t x9_14 = *(arg1 + 0x50)
                *(arg1 + 0x68) = x10_4
                *(arg1 + 0x70) = x11_3
                *(arg1 + 0x30) = v1_1
                *(arg1 + 0x58) = v0_4
                *(arg1 + 0x50) = x8_23
                *(arg1 + 0x78) = x9_14
            
            Botan::BigInt::BigInt(&var_90)
            Botan::BigInt::operator/=(&var_d8)
            void* x0_20 = var_90.q
            
            if (x0_20 != 0)
                var_90:8.q = x0_20
                Botan::deallocate_memory(x0_20, (var_80_2 - x0_20) s>> 2, 4)
            
            j = Botan::operator%(&var_d8, x24_2)
        while (j == 0)

int32_t x0_23
int128_t v0_5
int128_t v1_2
x0_23, v0_5, v1_2 = Botan::BigInt::is_less_than(arg1 + 0x58)

if ((x0_23 & 1) != 0)
    int64_t x9_15 = *(arg1 + 0x70)
    v0_5 = *(arg1 + 0x30)
    v1_2 = *(arg1 + 0x58)
    int64_t x10_5 = *(arg1 + 0x40)
    int64_t x11_4 = *(arg1 + 0x48)
    *(arg1 + 0x40) = *(arg1 + 0x68)
    *(arg1 + 0x48) = x9_15
    int32_t x8_27 = *(arg1 + 0x78)
    int32_t x9_16 = *(arg1 + 0x50)
    *(arg1 + 0x68) = x10_5
    *(arg1 + 0x70) = x11_4
    *(arg1 + 0x30) = v1_2
    *(arg1 + 0x58) = v0_5
    *(arg1 + 0x50) = x8_27
    *(arg1 + 0x78) = x9_16

Botan::BigInt::operator*=(arg1 + 0x30)

if (*(arg1 + 0x50) != 0)
    int64_t i_6 = *(arg1 + 0x48)
    
    if (i_6 == -1)
        int64_t x9_17 = *(arg1 + 0x30)
        int64_t x11_5 = *(arg1 + 0x38)
        int64_t x10_6 = x11_5 - x9_17
        
        if (x11_5 != x9_17)
            int64_t x12_2
            
            x12_2 = x10_6 s>= 0 ? x10_6 : -1
            
            int64_t x11_6 = x9_17 - x11_5
            int64_t x12_3
            
            x12_3 = x12_2 s< 1 ? x12_2 : 1
            
            i_6 = x10_6 s>> 2
            int64_t x10_7
            
            x10_7 = x11_6 s> x10_6 ? x11_6 : x10_6
            
            int64_t i_8 = x12_3 * (x10_7 u>> 2)
            uint64_t x11_7 = 1
            int64_t i_2
            
            do
                int32_t x12_4 = *(x9_17 - 4 + (i_8 << 2))
                i_2 = i_8
                i_8 -= 1
                x11_7 = zx.q(x11_7.d) & zx.q(((x12_4 - 1) & not.d(x12_4)) s>> 0x1f)
                i_6 -= x11_7
            while (i_2 != 1)
            *(arg1 + 0x48) = i_6
            
            if (i_6 u<= 1)
                goto label_d7f408
            
            goto label_d7f458
        
        i_6 = 0
        *(arg1 + 0x48) = 0
    label_d7f408:
        
        if (i_6 != 0)
            int32_t* x9_19 = *(arg1 + 0x30)
            int32_t x10_9 = 0
            int64_t i_3
            
            do
                int32_t x11_8 = *x9_19
                x9_19 = &x9_19[1]
                i_3 = i_6
                i_6 -= 1
                int32_t x11_10 = (((x11_8 ^ 1) - 1) & not.d(x11_8)) s>> 0x1f
                x10_9 =
                    (x10_9 & x11_10) | ((((x11_8 - 1) & not.d(x11_8)) s>> 0x1f | 1) & not.d(x11_10))
            while (i_3 != 1)
            
            if (x10_9 s>= 1)
                goto label_d7f458
    else
        if (i_6 u<= 1)
            goto label_d7f408
        
    label_d7f458:
        
        if (*(arg1 + 0x78) != 0)
            int64_t i_7 = *(arg1 + 0x70)
            
            if (i_7 != -1)
                if (i_7 u<= 1)
                    goto label_d7f4ec
                
            label_d7f538:
                void* x0_25 = var_d8
                
                if (x0_25 != 0)
                    void* var_d0_1 = x0_25
                    int64_t var_c8
                    Botan::deallocate_memory(x0_25, (var_c8 - x0_25) s>> 2, 4)
                
                int128_t v0_6
                int128_t v1_3
                
                if ((arg4.d & 1) == 0)
                    int32_t x0_29
                    x0_29, v0_6, v1_3 = Botan::BigInt::is_less_than(arg1 + 0x58)
                    
                    if ((x0_29 & 1) != 0)
                    label_d7f580:
                        int64_t x9_23 = *(arg1 + 0x70)
                        v0_6 = *(arg1 + 0x30)
                        v1_3 = *(arg1 + 0x58)
                        int64_t x10_16 = *(arg1 + 0x40)
                        int64_t x11_17 = *(arg1 + 0x48)
                        *(arg1 + 0x40) = *(arg1 + 0x68)
                        *(arg1 + 0x48) = x9_23
                        int32_t x8_33 = *(arg1 + 0x78)
                        int32_t x9_24 = *(arg1 + 0x50)
                        *(arg1 + 0x68) = x10_16
                        *(arg1 + 0x70) = x11_17
                        *(arg1 + 0x30) = v1_3
                        *(arg1 + 0x58) = v0_6
                        *(arg1 + 0x50) = x8_33
                        *(arg1 + 0x78) = x9_24
                else
                    int32_t x0_27
                    x0_27, v0_6, v1_3 = Botan::BigInt::is_less_than(arg1 + 0x30)
                    
                    if ((x0_27 & 1) != 0)
                        goto label_d7f580
                Botan::BigInt* x0_30 = operator new(0x58)
                Botan::Modular_Reducer::Modular_Reducer(x0_30)
                return sub_d7f9f0(arg1 + 0x10, x0_30)
            
            int64_t x9_20 = *(arg1 + 0x58)
            int64_t x11_11 = *(arg1 + 0x60)
            int64_t x10_11 = x11_11 - x9_20
            
            if (x11_11 == x9_20)
                i_7 = 0
                *(arg1 + 0x70) = 0
            else
                int64_t x12_11
                
                x12_11 = x10_11 s>= 0 ? x10_11 : -1
                
                int64_t x11_12 = x9_20 - x11_11
                int64_t x12_12
                
                x12_12 = x12_11 s< 1 ? x12_11 : 1
                
                i_7 = x10_11 s>> 2
                int64_t x10_12
                
                x10_12 = x11_12 s> x10_11 ? x11_12 : x10_11
                
                int64_t i_9 = x12_12 * (x10_12 u>> 2)
                uint64_t x11_13 = 1
                int64_t i_4
                
                do
                    int32_t x12_13 = *(x9_20 - 4 + (i_9 << 2))
                    i_4 = i_9
                    i_9 -= 1
                    x11_13 = zx.q(x11_13.d) & zx.q(((x12_13 - 1) & not.d(x12_13)) s>> 0x1f)
                    i_7 -= x11_13
                while (i_4 != 1)
                *(arg1 + 0x70) = i_7
                
                if (i_7 u> 1)
                    goto label_d7f538
            
        label_d7f4ec:
            
            if (i_7 != 0)
                int32_t* x9_22 = *(arg1 + 0x58)
                int32_t x10_14 = 0
                int64_t i_5
                
                do
                    int32_t x11_14 = *x9_22
                    x9_22 = &x9_22[1]
                    i_5 = i_7
                    i_7 -= 1
                    int32_t x11_16 = (((x11_14 ^ 1) - 1) & not.d(x11_14)) s>> 0x1f
                    x10_14 = (x10_14 & x11_16)
                        | ((((x11_14 - 1) & not.d(x11_14)) s>> 0x1f | 1) & not.d(x11_16))
                while (i_5 != 1)
                
                if (x10_14 s> 0)
                    goto label_d7f538

void** x0_33 = __cxa_allocate_exception(0x20)
int64_t x0_34
int128_t v0_7
x0_34, v0_7 = operator new(0x30)
int64_t var_a0 = x0_34
var_b0.o = data_71c510
__builtin_strncpy(x0_34, "Could not factor n for use in FPE", 0x22)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Internal error: ", &var_b0)
*x0_33 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_33[1])

if ((zx.d(var_90.b) & 1) != 0)
    operator delete(var_80_2)

*x0_33 = _vtable_for_Botan::Internal_Error + 0x10
__cxa_throw(x0_33, _typeinfo_for_Botan::Internal_Error, Botan::Exception::~Exception)
noreturn
