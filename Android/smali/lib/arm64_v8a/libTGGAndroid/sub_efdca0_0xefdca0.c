// 函数: sub_efdca0
// 地址: 0xefdca0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x25 = *(Botan::EC_Group::data() + 0x1e8)
int64_t var_70 = 0
int64_t var_68 = -1
uint64_t x23_1

if (x25 u< arg3 << 3)
    x23_1 = (x25 + 7) u>> 3
else
    x23_1 = arg3

uint32_t* result_1 = nullptr
int64_t var_78 = 0
int32_t var_60 = 1
Botan::BigInt::binary_decode(&result_1, arg2)

if (x25 u< x23_1 << 3)
    Botan::BigInt::operator>>=(&result_1)

void* x0_5 = Botan::RFC6979_Nonce_Generator::nonce_for(*(arg1 + 0x48))
void* var_a8
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(&var_a8)
int64_t var_90 = *(x0_5 + 0x18)
int32_t var_88 = *(x0_5 + 0x20)
Botan::EC_Group::blinded_base_point_multiply_x(arg1 + 0x30, &var_a8, arg4)
Botan::Modular_Reducer::reduce(Botan::EC_Group::data() + 0x138)
void* var_f8
void* x0_11 = var_f8
int64_t var_e8

if (x0_11 != 0)
    void* var_f0_1 = x0_11
    Botan::deallocate_memory(x0_11, (var_e8 - x0_11) s>> 2, 4)

Botan::inverse_mod(&var_a8, Botan::EC_Group::data() + 0xe8)
Botan::Modular_Reducer::square(Botan::EC_Group::data() + 0x138)
void* var_120
int64_t var_110
int64_t var_108
int32_t var_100
void* var_118_1
void* x0_18

if (arg1 + 0x68 == &var_120)
    x0_18 = var_120
    
    if (x0_18 != 0)
        var_118_1 = x0_18
        Botan::deallocate_memory(x0_18, (var_110 - x0_18) s>> 2, 4)
else
    x0_18 = *(arg1 + 0x68)
    int128_t v0 = var_120.o
    var_120 = x0_18
    *(arg1 + 0x68) = v0
    int64_t x11_1 = *(arg1 + 0x78)
    int64_t x9_1 = *(arg1 + 0x80)
    *(arg1 + 0x78) = var_110
    *(arg1 + 0x80) = var_108
    var_110 = x11_1
    var_108 = x9_1
    int32_t x9_2 = *(arg1 + 0x88)
    *(arg1 + 0x88) = var_100
    var_100 = x9_2
    
    if (x0_18 != 0)
        var_118_1 = x0_18
        Botan::deallocate_memory(x0_18, (var_110 - x0_18) s>> 2, 4)
Botan::Modular_Reducer::square(Botan::EC_Group::data() + 0x138)
void* var_118_2
void* x0_22

if (arg1 + 0x90 == &var_120)
    x0_22 = var_120
    
    if (x0_22 != 0)
        var_118_2 = x0_22
        Botan::deallocate_memory(x0_22, (var_110 - x0_22) s>> 2, 4)
else
    x0_22 = *(arg1 + 0x90)
    int128_t v0_1 = var_120.o
    var_120 = x0_22
    *(arg1 + 0x90) = v0_1
    int64_t x11_2 = *(arg1 + 0xa0)
    int64_t x9_3 = *(arg1 + 0xa8)
    *(arg1 + 0xa0) = var_110
    *(arg1 + 0xa8) = var_108
    var_110 = x11_2
    var_108 = x9_3
    int32_t x9_4 = *(arg1 + 0xb0)
    *(arg1 + 0xb0) = var_100
    var_100 = x9_4
    
    if (x0_22 != 0)
        var_118_2 = x0_22
        Botan::deallocate_memory(x0_22, (var_110 - x0_22) s>> 2, 4)
Botan::Modular_Reducer::reduce(Botan::EC_Group::data() + 0x138)
int128_t v0_2
int128_t v1
v0_2, v1 = Botan::Modular_Reducer::multiply(Botan::EC_Group::data() + 0x138, arg1 + 0x68)
v1 = result_1.o
uint64_t x0_29 = v1.q
int64_t var_108_1 = var_68
result_1.o = var_120.o
var_120.o = v1
int32_t var_100_1 = var_60

if (x0_29 != 0)
    uint64_t var_118_3 = x0_29
    Botan::deallocate_memory(x0_29, (var_70 - x0_29) s>> 2, 4)

void* var_148
void* x0_30 = var_148
void* var_140
int64_t var_138

if (x0_30 != 0)
    var_140 = x0_30
    Botan::deallocate_memory(x0_30, (var_138 - x0_30) s>> 2, 4)

Botan::EC_Group_Data::multiply_mod_order(Botan::EC_Group::data(), *(arg1 + 0x40), arg1 + 0x68)
int64_t x2_3 = var_108
uint32_t* result_3 = result_1

if (x2_3 == -1)
    void* x9_7 = var_78 - result_3
    
    if (var_78 == result_3)
        x2_3 = 0
    else
        void* x11_4
        
        x11_4 = x9_7 s>= 0 ? x9_7 : -ffffffffffffffff
        
        void* x10_5 = result_3 - var_78
        void* x11_5
        
        x11_5 = x11_4 s< 1 ? x11_4 : 1
        
        x2_3 = x9_7 s>> 2
        void* x9_8
        
        x9_8 = x10_5 s> x9_7 ? x10_5 : x9_7
        
        int64_t i_3 = x11_5 * (x9_8 u>> 2)
        uint64_t x10_6 = 1
        int64_t i
        
        do
            int32_t x11_6 = *(result_3 - 4 + (i_3 << 2))
            i = i_3
            i_3 -= 1
            x10_6 = zx.q(x10_6.d) & zx.q(((x11_6 - 1) & not.d(x11_6)) s>> 0x1f)
            x2_3 -= x10_6
        while (i != 1)
    
    int64_t var_68_2 = x2_3

void* var_170
Botan::BigInt::add2(&var_170, result_3, x2_3, zx.q(var_100))
Botan::Modular_Reducer::reduce(Botan::EC_Group::data() + 0x138)
void* x0_37 = var_148

if (x0_37 != 0)
    var_140 = x0_37
    Botan::deallocate_memory(x0_37, (var_138 - x0_37) s>> 2, 4)

void* x0_38 = var_170
void* var_160

if (x0_38 != 0)
    void* var_168_1 = x0_38
    Botan::deallocate_memory(x0_38, (var_160 - x0_38) s>> 2, 4)

Botan::EC_Group_Data::multiply_mod_order(Botan::EC_Group::data(), &var_f8, &var_120)
int64_t var_b8
int64_t x8_25 = var_b8
void* var_d0

if (x8_25 == -1)
    void* x9_10 = var_d0
    int64_t var_c8
    void* x10_7 = var_c8 - x9_10
    
    if (var_c8 == x9_10)
        x8_25 = 0
    else
        void* x12_2
        
        x12_2 = x10_7 s>= 0 ? x10_7 : -ffffffffffffffff
        
        void* x11_9 = x9_10 - var_c8
        void* x12_3
        
        x12_3 = x12_2 s< 1 ? x12_2 : 1
        
        x8_25 = x10_7 s>> 2
        void* x10_8
        
        x10_8 = x11_9 s> x10_7 ? x11_9 : x10_7
        
        int64_t i_4 = x12_3 * (x10_8 u>> 2)
        uint64_t x11_10 = 1
        int64_t i_1
        
        do
            int32_t x12_4 = *(x9_10 - 4 + (i_4 << 2))
            i_1 = i_4
            i_4 -= 1
            x11_10 = zx.q(x11_10.d) & zx.q(((x12_4 - 1) & not.d(x12_4)) s>> 0x1f)
            x8_25 -= x11_10
        while (i_1 != 1)
    
    int64_t var_b8_1 = x8_25

if (x8_25 != 0)
    int64_t var_130
    int64_t x8_26 = var_130
    
    if (x8_26 == -1)
        void* x9_12 = var_148
        void* x10_10 = var_140 - x9_12
        
        if (var_140 == x9_12)
            x8_26 = 0
        else
            void* x12_6
            
            x12_6 = x10_10 s>= 0 ? x10_10 : -ffffffffffffffff
            
            void* x11_12 = x9_12 - var_140
            void* x12_7
            
            x12_7 = x12_6 s< 1 ? x12_6 : 1
            
            x8_26 = x10_10 s>> 2
            void* x10_11
            
            x10_11 = x11_12 s> x10_10 ? x11_12 : x10_10
            
            int64_t i_5 = x12_7 * (x10_11 u>> 2)
            uint64_t x11_13 = 1
            int64_t i_2
            
            do
                int32_t x12_8 = *(x9_12 - 4 + (i_5 << 2))
                i_2 = i_5
                i_5 -= 1
                x11_13 = zx.q(x11_13.d) & zx.q(((x12_8 - 1) & not.d(x12_8)) s>> 0x1f)
                x8_26 -= x11_13
            while (i_2 != 1)
        
        int64_t var_130_1 = x8_26
    
    if (x8_26 != 0)
        Botan::BigInt::encode_fixed_length_int_pair(&var_d0, &var_148, 
            (*(Botan::EC_Group::data() + 0x1e8) + 7) u>> 3)
        void* x0_44 = var_148
        
        if (x0_44 != 0)
            void* var_140_1 = x0_44
            Botan::deallocate_memory(x0_44, (var_138 - x0_44) s>> 2, 4)
        
        void* x0_45 = var_120
        
        if (x0_45 != 0)
            void* var_118_4 = x0_45
            Botan::deallocate_memory(x0_45, (var_70 - x0_45) s>> 2, 4)
        
        void* x0_46 = var_f8
        
        if (x0_46 != 0)
            void* var_f0_2 = x0_46
            Botan::deallocate_memory(x0_46, (var_e8 - x0_46) s>> 2, 4)
        
        void* x0_47 = var_d0
        
        if (x0_47 != 0)
            void* var_c8_1 = x0_47
            int64_t var_c0
            Botan::deallocate_memory(x0_47, (var_c0 - x0_47) s>> 2, 4)
        
        void* x0_48 = var_a8
        
        if (x0_48 != 0)
            void* var_a0_1 = x0_48
            int64_t var_98
            Botan::deallocate_memory(x0_48, (var_98 - x0_48) s>> 2, 4)
        
        uint32_t* result = result_1
        
        if (result == 0)
            return result
        
        uint32_t* result_2 = result
        return Botan::deallocate_memory(result, (var_110 - result) s>> 2, 4)

void** x0_49 = __cxa_allocate_exception(0x20)
int64_t x0_50
int128_t v0_3
x0_50, v0_3 = operator new(0x30)
int64_t var_180 = x0_50
int128_t var_190 = data_71cbb0
__builtin_strncpy(x0_50, "During ECDSA signature generated zero r/s", 0x2a)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Internal error: ", &var_190)
*x0_49 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_49[1])

if ((zx.d(var_170.b) & 1) != 0)
    operator delete(var_160)

*x0_49 = _vtable_for_Botan::Internal_Error + 0x10
__cxa_throw(x0_49, _typeinfo_for_Botan::Internal_Error, Botan::Exception::~Exception)
noreturn
