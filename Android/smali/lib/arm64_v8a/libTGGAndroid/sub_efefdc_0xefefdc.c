// 函数: sub_efefdc
// 地址: 0xefefdc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x25 = *(Botan::EC_Group::data() + 0x1e8)
int64_t var_68 = 0
uint64_t var_60 = -1
uint64_t x23_1

if (x25 u< arg3 << 3)
    x23_1 = (x25 + 7) u>> 3
else
    x23_1 = arg3

uint32_t* result_1 = nullptr
int64_t var_70 = 0
int32_t var_58 = 1
Botan::BigInt::binary_decode(&result_1, arg2)

if (x25 u< x23_1 << 3)
    Botan::BigInt::operator>>=(&result_1)

Botan::EC_Group::random_scalar(arg1 + 0x30)
void* var_a0
Botan::EC_Group::blinded_base_point_multiply_x(arg1 + 0x30, &var_a0, arg4)
Botan::Modular_Reducer::reduce(Botan::EC_Group::data() + 0x138)
void* var_f0
void* x0_9 = var_f0
int64_t var_e0

if (x0_9 != 0)
    void* var_e8_1 = x0_9
    Botan::deallocate_memory(x0_9, (var_e0 - x0_9) s>> 2, 4)

Botan::Modular_Reducer::multiply(Botan::EC_Group::data() + 0x138, &var_a0)
uint64_t x2_2 = var_60
uint32_t* result_3 = result_1

if (x2_2 == -1)
    void* x9_1 = var_70 - result_3
    
    if (var_70 == result_3)
        x2_2 = 0
    else
        void* x11_1
        
        x11_1 = x9_1 s>= 0 ? x9_1 : -ffffffffffffffff
        
        void* x10_1 = result_3 - var_70
        void* x11_2
        
        x11_2 = x11_1 s< 1 ? x11_1 : 1
        
        x2_2 = x9_1 s>> 2
        void* x9_2
        
        x9_2 = x10_1 s> x9_1 ? x10_1 : x9_1
        
        int64_t i_3 = x11_2 * (x9_2 u>> 2)
        uint64_t x10_2 = 1
        int64_t i
        
        do
            int32_t x11_3 = *(result_3 - 4 + (i_3 << 2))
            i = i_3
            i_3 -= 1
            x10_2 = zx.q(x10_2.d) & zx.q(((x11_3 - 1) & not.d(x11_3)) s>> 0x1f)
            x2_2 -= x10_2
        while (i != 1)
    
    uint64_t var_60_1 = x2_2

Botan::BigInt* x21_1 = *(arg1 + 0x40)
Botan::BigInt::add2(&var_f0, result_3, x2_2, zx.q(var_58 != 1 ? 1 : 0))
Botan::Modular_Reducer::multiply(Botan::EC_Group::data() + 0x138, x21_1)
void* var_140
void* var_130

if (var_140 != 0)
    void* var_138_1 = var_140
    Botan::deallocate_memory(var_140, (var_130 - var_140) s>> 2, 4)

int64_t var_b0
int64_t x8_10 = var_b0
void* var_c8

if (x8_10 == -1)
    void* x9_4 = var_c8
    int64_t var_c0
    void* x10_3 = var_c0 - x9_4
    
    if (var_c0 == x9_4)
        x8_10 = 0
    else
        void* x12_2
        
        x12_2 = x10_3 s>= 0 ? x10_3 : -ffffffffffffffff
        
        void* x11_6 = x9_4 - var_c0
        void* x12_3
        
        x12_3 = x12_2 s< 1 ? x12_2 : 1
        
        x8_10 = x10_3 s>> 2
        void* x10_4
        
        x10_4 = x11_6 s> x10_3 ? x11_6 : x10_3
        
        int64_t i_4 = x12_3 * (x10_4 u>> 2)
        uint64_t x11_7 = 1
        int64_t i_1
        
        do
            int32_t x12_4 = *(x9_4 - 4 + (i_4 << 2))
            i_1 = i_4
            i_4 -= 1
            x11_7 = zx.q(x11_7.d) & zx.q(((x12_4 - 1) & not.d(x12_4)) s>> 0x1f)
            x8_10 -= x11_7
        while (i_1 != 1)
    
    int64_t var_b0_1 = x8_10

if (x8_10 != 0)
    int64_t var_100
    int64_t x8_11 = var_100
    void* var_118
    
    if (x8_11 == -1)
        void* x9_6 = var_118
        int64_t var_110
        void* x10_6 = var_110 - x9_6
        
        if (var_110 == x9_6)
            x8_11 = 0
        else
            void* x12_6
            
            x12_6 = x10_6 s>= 0 ? x10_6 : -ffffffffffffffff
            
            void* x11_9 = x9_6 - var_110
            void* x12_7
            
            x12_7 = x12_6 s< 1 ? x12_6 : 1
            
            x8_11 = x10_6 s>> 2
            void* x10_7
            
            x10_7 = x11_9 s> x10_6 ? x11_9 : x10_6
            
            int64_t i_5 = x12_7 * (x10_7 u>> 2)
            uint64_t x11_10 = 1
            int64_t i_2
            
            do
                int32_t x12_8 = *(x9_6 - 4 + (i_5 << 2))
                i_2 = i_5
                i_5 -= 1
                x11_10 = zx.q(x11_10.d) & zx.q(((x12_8 - 1) & not.d(x12_8)) s>> 0x1f)
                x8_11 -= x11_10
            while (i_2 != 1)
        
        int64_t var_100_1 = x8_11
    
    if (x8_11 != 0)
        Botan::BigInt::encode_fixed_length_int_pair(&var_c8, &var_118, 
            (*(Botan::EC_Group::data() + 0x1e8) + 7) u>> 3)
        void* x0_21 = var_118
        
        if (x0_21 != 0)
            void* var_110_1 = x0_21
            int64_t var_108
            Botan::deallocate_memory(x0_21, (var_108 - x0_21) s>> 2, 4)
        
        void* x0_22 = var_f0
        
        if (x0_22 != 0)
            void* var_e8_2 = x0_22
            Botan::deallocate_memory(x0_22, (var_e0 - x0_22) s>> 2, 4)
        
        void* x0_23 = var_c8
        
        if (x0_23 != 0)
            void* var_c0_1 = x0_23
            int64_t var_b8
            Botan::deallocate_memory(x0_23, (var_b8 - x0_23) s>> 2, 4)
        
        void* x0_24 = var_a0
        
        if (x0_24 != 0)
            void* var_98_1 = x0_24
            int64_t var_90
            Botan::deallocate_memory(x0_24, (var_90 - x0_24) s>> 2, 4)
        
        uint32_t* result = result_1
        
        if (result == 0)
            return result
        
        uint32_t* result_2 = result
        return Botan::deallocate_memory(result, (var_68 - result) s>> 2, 4)

void** x0_25 = __cxa_allocate_exception(0x20)
int64_t x0_26
int128_t v0
x0_26, v0 = operator new(0x30)
int64_t var_150 = x0_26
int128_t var_160 = data_71c1e0
__builtin_strncpy(x0_26, "During ECGDSA signature generated zero r/s", 0x2b)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Internal error: ", &var_160)
*x0_25 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_25[1])

if ((zx.d(var_140.b) & 1) != 0)
    operator delete(var_130)

*x0_25 = _vtable_for_Botan::Internal_Error + 0x10
__cxa_throw(x0_25, _typeinfo_for_Botan::Internal_Error, Botan::Exception::~Exception)
noreturn
