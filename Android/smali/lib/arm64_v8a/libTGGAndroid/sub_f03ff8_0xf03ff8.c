// 函数: sub_f03ff8
// 地址: 0xf03ff8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::EC_Group::random_scalar(arg1 + 0x30)
int128_t var_90
sub_f03d18(&var_90, arg2, arg3)
int128_t v0
int128_t v1
v0, v1 = Botan::Modular_Reducer::reduce(Botan::EC_Group::data() + 0x138)
v1 = var_90
int128_t var_c0 = v1
var_90 = var_c0
int32_t var_a0
int32_t x8 = var_a0
int64_t var_b0
int64_t var_80_1 = var_b0
int64_t i_19
int64_t i_18 = i_19
uint64_t x0_5 = v1.q
int64_t var_80
int64_t var_b0_1 = var_80
int64_t i_20
int64_t i_16 = i_20
int32_t var_70_1 = x8
int32_t var_70
int32_t var_a0_1 = var_70

if (x0_5 != 0)
    var_c0:8.q = x0_5
    Botan::deallocate_memory(x0_5, (var_80 - x0_5) s>> 2, 4)
    x8 = var_70_1

if (x8 != 0)
    int64_t i_7 = i_18
    
    if (i_7 == -1)
        int64_t x9_1 = var_90.q
        int64_t x11_1 = var_90:8.q
        int64_t x10_2 = x11_1 - x9_1
        
        if (x11_1 == x9_1)
            i_7 = 0
            i_18 = 0
        label_f04144:
            
            if (i_7 == 0)
            label_f04180:
                int64_t x23_1 = -1
                __builtin_memset(&var_c0, 0, 0x18)
                int32_t var_a0_2 = 1
                int64_t var_a8 = -1
                std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&var_c0)
                *var_c0.q = 1
                void* x8_3 = var_c0.q
                int64_t x9_4 = var_c0:8.q
                int64_t var_a8_1 = -1
                
                if ((x9_4 - x8_3) s>> 2 u>= 2)
                    *(x8_3 + 4) = 0
                    x8_3 = var_c0.q
                    x9_4 = var_c0:8.q
                    x23_1 = var_a8_1
                
                void* x0_7 = var_90.q
                var_90.q = x8_3
                var_90:8.q = x9_4
                int64_t x10_9 = var_80_1
                var_c0.q = x0_7
                var_b0_1 = x10_9
                i_16 = i_18
                int64_t var_b0_2
                var_80_1 = var_b0_2
                int64_t var_78 = x23_1
                int32_t var_70_2 = var_a0_2
                var_a0_1 = var_70_1
                
                if (x0_7 != 0)
                    var_c0:8.q = x0_7
                    Botan::deallocate_memory(x0_7, (x10_9 - x0_7) s>> 2, 4)
            else
                int32_t* x9_3 = var_90.q
                int32_t x10_5 = 0
                int64_t i
                
                do
                    int32_t x11_4 = *x9_3
                    x9_3 = &x9_3[1]
                    i = i_7
                    i_7 -= 1
                    int32_t x11_6 = ((x11_4 - 1) & not.d(x11_4)) s>> 0x1f
                    x10_5 = (x10_5 & x11_6) | (not.d(x11_6) & 1)
                while (i != 1)
                
                if (x10_5 == 0)
                    goto label_f04180
        else
            int64_t x12_1
            
            x12_1 = x10_2 s>= 0 ? x10_2 : -1
            
            int64_t x11_2 = x9_1 - x11_1
            int64_t x12_2
            
            x12_2 = x12_1 s< 1 ? x12_1 : 1
            
            i_7 = x10_2 s>> 2
            int64_t x10_3
            
            x10_3 = x11_2 s> x10_2 ? x11_2 : x10_2
            
            int64_t i_11 = x12_2 * (x10_3 u>> 2)
            uint64_t x11_3 = 1
            int64_t i_1
            
            do
                int32_t x12_3 = *(x9_1 - 4 + (i_11 << 2))
                i_1 = i_11
                i_11 -= 1
                x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
                i_7 -= x11_3
            while (i_1 != 1)
            i_18 = i_7
            
            if (i_7 u<= 1)
                goto label_f04144
    else if (i_7 u<= 1)
        goto label_f04144

void* result_1
Botan::EC_Group::blinded_base_point_multiply_x(arg1 + 0x30, &result_1, arg4)
Botan::Modular_Reducer::reduce(Botan::EC_Group::data() + 0x138)
void* var_e8
void* x0_12 = var_e8
void* var_e0
int64_t var_d8

if (x0_12 != 0)
    var_e0 = x0_12
    Botan::deallocate_memory(x0_12, (var_d8 - x0_12) s>> 2, 4)

*(arg1 + 0x40)
Botan::Modular_Reducer::multiply(Botan::EC_Group::data() + 0x138, &var_c0)
Botan::Modular_Reducer::multiply(Botan::EC_Group::data() + 0x138, &result_1)
int64_t var_150
int64_t x2_3 = var_150
uint32_t* var_168

if (x2_3 == -1)
    int64_t var_160
    void* x9_6 = var_160 - var_168
    
    if (var_160 == var_168)
        x2_3 = 0
    else
        void* x11_10
        
        x11_10 = x9_6 s>= 0 ? x9_6 : -ffffffffffffffff
        
        void* x10_10 = var_168 - var_160
        void* x11_11
        
        x11_11 = x11_10 s< 1 ? x11_10 : 1
        
        x2_3 = x9_6 s>> 2
        void* x9_7
        
        x9_7 = x10_10 s> x9_6 ? x10_10 : x9_6
        
        int64_t i_10 = x11_11 * (x9_7 u>> 2)
        uint64_t x10_11 = 1
        int64_t i_2
        
        do
            int32_t x11_12 = *(var_168 - 4 + (i_10 << 2))
            i_2 = i_10
            i_10 -= 1
            x10_11 = zx.q(x10_11.d) & zx.q(((x11_12 - 1) & not.d(x11_12)) s>> 0x1f)
            x2_3 -= x10_11
        while (i_2 != 1)
    
    int64_t var_150_1 = x2_3

int32_t var_148
void* var_140
Botan::BigInt::add2(&var_140, var_168, x2_3, zx.q(var_148))
Botan::Modular_Reducer::reduce(Botan::EC_Group::data() + 0x138)
void* var_110
void* var_100

if (var_110 != 0)
    void* var_108_1 = var_110
    Botan::deallocate_memory(var_110, (var_100 - var_110) s>> 2, 4)

if (var_168 != 0)
    uint32_t* var_160_1 = var_168
    int64_t var_158
    Botan::deallocate_memory(var_168, (var_158 - var_168) s>> 2, 4)

void* x0_25 = var_140

if (x0_25 != 0)
    void* var_138_1 = x0_25
    int64_t var_130
    Botan::deallocate_memory(x0_25, (var_130 - x0_25) s>> 2, 4)

if (var_a0_1 == 0)
label_f04468:
    int32_t var_c8
    
    if (var_c8 == 0)
    label_f04554:
        Botan::BigInt::encode_fixed_length_int_pair(&var_e8, &var_c0, 
            (*(Botan::EC_Group::data() + 0x1e8) + 7) u>> 3)
        void* x0_29 = var_e8
        
        if (x0_29 != 0)
            void* var_e0_1 = x0_29
            Botan::deallocate_memory(x0_29, (var_d8 - x0_29) s>> 2, 4)
        
        void* x0_30 = var_c0.q
        
        if (x0_30 != 0)
            var_c0:8.q = x0_30
            Botan::deallocate_memory(x0_30, (var_b0_1 - x0_30) s>> 2, 4)
        
        void* x0_31 = var_90.q
        
        if (x0_31 != 0)
            var_90:8.q = x0_31
            Botan::deallocate_memory(x0_31, (var_80_1 - x0_31) s>> 2, 4)
        
        void* result = result_1
        
        if (result == 0)
            return result
        
        void* result_2 = result
        int64_t var_58
        return Botan::deallocate_memory(result, (var_58 - result) s>> 2, 4)
    
    int64_t i_14
    int64_t i_9 = i_14
    
    if (i_9 != -1)
        if (i_9 u<= 1)
            goto label_f044fc
        
        goto label_f04554
    
    void* x9_12 = var_e8
    void* x10_17 = var_e0 - x9_12
    
    if (var_e0 == x9_12)
        i_9 = 0
        int64_t var_d0 = 0
    else
        void* x12_13
        
        x12_13 = x10_17 s>= 0 ? x10_17 : -ffffffffffffffff
        
        void* x11_23 = x9_12 - var_e0
        void* x12_14
        
        x12_14 = x12_13 s< 1 ? x12_13 : 1
        
        i_9 = x10_17 s>> 2
        void* x10_18
        
        x10_18 = x11_23 s> x10_17 ? x11_23 : x10_17
        
        int64_t i_13 = x12_14 * (x10_18 u>> 2)
        uint64_t x11_24 = 1
        int64_t i_3
        
        do
            int32_t x12_15 = *(x9_12 - 4 + (i_13 << 2))
            i_3 = i_13
            i_13 -= 1
            x11_24 = zx.q(x11_24.d) & zx.q(((x12_15 - 1) & not.d(x12_15)) s>> 0x1f)
            i_9 -= x11_24
        while (i_3 != 1)
        int64_t i_15 = i_9
        
        if (i_9 u> 1)
            goto label_f04554
    
label_f044fc:
    
    if (i_9 != 0)
        void* x9_14 = var_e8
        int32_t x10_20 = 0
        int64_t i_4
        
        do
            int32_t x11_25 = *x9_14
            x9_14 += 4
            i_4 = i_9
            i_9 -= 1
            int32_t x11_27 = ((x11_25 - 1) & not.d(x11_25)) s>> 0x1f
            x10_20 = (x10_20 & x11_27) | (not.d(x11_27) & 1)
        while (i_4 != 1)
        
        if (x10_20 != 0)
            goto label_f04554
else
    int64_t i_8 = i_16
    
    if (i_8 != -1)
        if (i_8 u<= 1)
            goto label_f0442c
        
        goto label_f04468
    
    int64_t x9_9 = var_c0.q
    int64_t x11_14 = var_c0:8.q
    int64_t x10_12 = x11_14 - x9_9
    
    if (x11_14 == x9_9)
        i_8 = 0
        int64_t var_a8_2 = 0
    else
        int64_t x12_8
        
        x12_8 = x10_12 s>= 0 ? x10_12 : -1
        
        int64_t x11_15 = x9_9 - x11_14
        int64_t x12_9
        
        x12_9 = x12_8 s< 1 ? x12_8 : 1
        
        i_8 = x10_12 s>> 2
        int64_t x10_13
        
        x10_13 = x11_15 s> x10_12 ? x11_15 : x10_12
        
        int64_t i_12 = x12_9 * (x10_13 u>> 2)
        uint64_t x11_16 = 1
        int64_t i_5
        
        do
            int32_t x12_10 = *(x9_9 - 4 + (i_12 << 2))
            i_5 = i_12
            i_12 -= 1
            x11_16 = zx.q(x11_16.d) & zx.q(((x12_10 - 1) & not.d(x12_10)) s>> 0x1f)
            i_8 -= x11_16
        while (i_5 != 1)
        int64_t i_17 = i_8
        
        if (i_8 u> 1)
            goto label_f04468
    
label_f0442c:
    
    if (i_8 != 0)
        int32_t* x9_11 = var_c0.q
        int32_t x10_15 = 0
        int64_t i_6
        
        do
            int32_t x11_17 = *x9_11
            x9_11 = &x9_11[1]
            i_6 = i_8
            i_8 -= 1
            int32_t x11_19 = ((x11_17 - 1) & not.d(x11_17)) s>> 0x1f
            x10_15 = (x10_15 & x11_19) | (not.d(x11_19) & 1)
        while (i_6 != 1)
        
        if (x10_15 != 0)
            goto label_f04468

void** x0_32 = __cxa_allocate_exception(0x20)
int64_t x0_33
int128_t v0_1
x0_33, v0_1 = operator new(0x40)
int64_t var_130_1 = x0_33
var_140.o = data_71b210
__builtin_strncpy(x0_33, "GOST 34.10 signature generation failed, r/s equal to zero", 0x3a)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Internal error: ", &var_140)
*x0_32 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_32[1])

if ((zx.d(var_110.b) & 1) != 0)
    operator delete(var_100)

*x0_32 = _vtable_for_Botan::Internal_Error + 0x10
__cxa_throw(x0_32, _typeinfo_for_Botan::Internal_Error, Botan::Exception::~Exception)
noreturn
