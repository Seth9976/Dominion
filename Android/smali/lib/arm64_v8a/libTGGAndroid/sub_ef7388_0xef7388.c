// 函数: sub_ef7388
// 地址: 0xef7388
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0_1 = Botan::DL_Group::data()
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x0_3 = Botan::DL_Group::data()
char var_c8 = 0xc
int32_t var_c7
__builtin_strncpy(&var_c7, "q_bits", 7)
Botan::DL_Group_Data::assert_q_is_set(x0_3)
void* var_b8

if ((zx.d(var_c8) & 1) != 0)
    operator delete(var_b8)

int64_t x25 = *(Botan::DL_Group::data() + 0x150)
int64_t var_e0 = 0
int64_t var_d8 = -1
uint64_t x24_1

if (x25 u< arg3 << 3)
    x24_1 = (x25 + 7) u>> 3
else
    x24_1 = arg3

uint32_t* result_1 = nullptr
int64_t var_e8 = 0
int32_t var_d0 = 1
Botan::BigInt::binary_decode(&result_1, arg2)

if (x25 u< x24_1 << 3)
    Botan::BigInt::operator>>=(&result_1)

while ((Botan::BigInt::cmp(&result_1, (x0_1 + 0x28).b) & 0x80000000) == 0)
    int64_t x2_1 = *(x0_1 + 0x40)
    uint64_t x1_3 = *(x0_1 + 0x28)
    
    if (x2_1 == -1)
        int64_t x8_5 = *(x0_1 + 0x30)
        int64_t x9_1 = x8_5 - x1_3
        
        if (x8_5 == x1_3)
            x2_1 = 0
        else
            int64_t x11_1
            
            x11_1 = x9_1 s>= 0 ? x9_1 : -1
            
            int64_t x10_1 = x1_3 - x8_5
            int64_t x11_2
            
            x11_2 = x11_1 s< 1 ? x11_1 : 1
            
            x2_1 = x9_1 s>> 2
            int64_t x9_2
            
            x9_2 = x10_1 s> x9_1 ? x10_1 : x9_1
            
            int64_t i_4 = x11_2 * (x9_2 u>> 2)
            uint64_t x10_2 = 1
            int64_t i
            
            do
                int32_t x11_3 = *(x1_3 - 4 + (i_4 << 2))
                i = i_4
                i_4 -= 1
                x10_2 = zx.q(x10_2.d) & zx.q(((x11_3 - 1) & not.d(x11_3)) s>> 0x1f)
                x2_1 -= x10_2
            while (i != 1)
        
        *(x0_1 + 0x40) = x2_1
    
    *(x0_1 + 0x48)
    Botan::BigInt::add(&result_1, x1_3, x2_1)

*(arg1 + 0x40)
Botan::RFC6979_Nonce_Generator::RFC6979_Nonce_Generator(&var_c8, arg1 + 0x48, x0_1 + 0x28)
void* x0_14 = Botan::RFC6979_Nonce_Generator::nonce_for(&var_c8)
void* var_118
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(&var_118)
int64_t var_100 = *(x0_14 + 0x18)
int32_t var_f8 = *(x0_14 + 0x20)
Botan::RFC6979_Nonce_Generator::~RFC6979_Nonce_Generator()
Botan::DL_Group::inverse_mod_q(arg1 + 0x30)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x0_18 = Botan::DL_Group::data()
char var_198 = 0xc
int32_t var_197
__builtin_strncpy(&var_197, "q_bits", 7)
Botan::DL_Group_Data::assert_q_is_set(x0_18)
void* var_188

if ((zx.d(var_198) & 1) != 0)
    operator delete(var_188)

*(Botan::DL_Group::data() + 0x150)
Botan::Montgomery_Exponentation_State::exponentiation(*(Botan::DL_Group::data() + 0x138), &var_118)
void* result_5
Botan::ct_modulo(&result_5, Botan::DL_Group::data() + 0x28)
void* result_7 = result_5
int64_t var_160

if (result_7 != 0)
    void* result_11 = result_7
    Botan::deallocate_memory(result_7, (var_160 - result_7) s>> 2, 4)

Botan::DL_Group::square_mod_q(arg1 + 0x30)
uint64_t var_158
int32_t var_150
void* result_12
void* result_8

if (arg1 + 0x60 == &result_5)
    result_8 = result_5
    
    if (result_8 != 0)
        result_12 = result_8
        Botan::deallocate_memory(result_8, (var_160 - result_8) s>> 2, 4)
else
    result_8 = *(arg1 + 0x60)
    int128_t v0 = result_5.o
    result_5 = result_8
    *(arg1 + 0x60) = v0
    int64_t x11_5 = *(arg1 + 0x70)
    uint64_t x9_4 = *(arg1 + 0x78)
    *(arg1 + 0x70) = var_160
    *(arg1 + 0x78) = var_158
    var_160 = x11_5
    var_158 = x9_4
    int32_t x9_5 = *(arg1 + 0x80)
    *(arg1 + 0x80) = var_150
    var_150 = x9_5
    
    if (result_8 != 0)
        result_12 = result_8
        Botan::deallocate_memory(result_8, (var_160 - result_8) s>> 2, 4)
Botan::DL_Group::square_mod_q(arg1 + 0x30)
void* result_13
void* result_9

if (arg1 + 0x88 == &result_5)
    result_9 = result_5
    
    if (result_9 != 0)
        result_13 = result_9
        Botan::deallocate_memory(result_9, (var_160 - result_9) s>> 2, 4)
else
    result_9 = *(arg1 + 0x88)
    int128_t v0_1 = result_5.o
    result_5 = result_9
    *(arg1 + 0x88) = v0_1
    int64_t x11_6 = *(arg1 + 0x98)
    uint64_t x9_6 = *(arg1 + 0xa0)
    *(arg1 + 0x98) = var_160
    *(arg1 + 0xa0) = var_158
    var_160 = x11_6
    var_158 = x9_6
    int32_t x9_7 = *(arg1 + 0xa8)
    *(arg1 + 0xa8) = var_150
    var_150 = x9_7
    
    if (result_9 != 0)
        result_13 = result_9
        Botan::deallocate_memory(result_9, (var_160 - result_9) s>> 2, 4)
Botan::DL_Group::multiply_mod_q(arg1 + 0x30, arg1 + 0x60)
uint32_t* result_3 = result_1
int64_t var_158_1 = var_d8
result_1.o = result_5.o
result_5 = result_3
int32_t var_150_1 = var_d0

if (result_3 != 0)
    uint32_t* result_6 = result_3
    Botan::deallocate_memory(result_3, (var_e0 - result_3) s>> 2, 4)

Botan::DL_Group::multiply_mod_q(arg1 + 0x30, arg1 + 0x60, *(arg1 + 0x40))
uint64_t x2_6 = var_158
uint32_t* result_4 = result_1

if (x2_6 == -1)
    void* x9_10 = var_e8 - result_4
    
    if (var_e8 == result_4)
        x2_6 = 0
    else
        void* x11_8
        
        x11_8 = x9_10 s>= 0 ? x9_10 : -ffffffffffffffff
        
        void* x10_7 = result_4 - var_e8
        void* x11_9
        
        x11_9 = x11_8 s< 1 ? x11_8 : 1
        
        x2_6 = x9_10 s>> 2
        void* x9_11
        
        x9_11 = x10_7 s> x9_10 ? x10_7 : x9_10
        
        int64_t i_5 = x11_9 * (x9_11 u>> 2)
        uint64_t x10_8 = 1
        int64_t i_1
        
        do
            int32_t x11_10 = *(result_4 - 4 + (i_5 << 2))
            i_1 = i_5
            i_5 -= 1
            x10_8 = zx.q(x10_8.d) & zx.q(((x11_10 - 1) & not.d(x11_10)) s>> 0x1f)
            x2_6 -= x10_8
        while (i_1 != 1)
    
    uint64_t var_d8_2 = x2_6

Botan::BigInt::add2(&result_5, result_4, x2_6, zx.q(var_150))
Botan::DL_Group::mod_q(arg1 + 0x30)
Botan::DL_Group::multiply_mod_q(arg1 + 0x30, arg1 + 0x88, &var_c8)
void* var_1c0
void* var_1b0

if (var_1c0 != 0)
    void* var_1b8_1 = var_1c0
    Botan::deallocate_memory(var_1c0, (var_1b0 - var_1c0) s>> 2, 4)

void* var_1f0
void* x0_36 = var_1f0

if (x0_36 != 0)
    void* var_1e8_1 = x0_36
    int64_t var_1e0
    Botan::deallocate_memory(x0_36, (var_1e0 - x0_36) s>> 2, 4)

int64_t var_128
int64_t x8_28 = var_128
void* var_140

if (x8_28 == -1)
    void* x9_13 = var_140
    int64_t var_138
    void* x10_9 = var_138 - x9_13
    
    if (var_138 == x9_13)
        x8_28 = 0
    else
        void* x12_3
        
        x12_3 = x10_9 s>= 0 ? x10_9 : -ffffffffffffffff
        
        void* x11_13 = x9_13 - var_138
        void* x12_4
        
        x12_4 = x12_3 s< 1 ? x12_3 : 1
        
        x8_28 = x10_9 s>> 2
        void* x10_10
        
        x10_10 = x11_13 s> x10_9 ? x11_13 : x10_9
        
        int64_t i_6 = x12_4 * (x10_10 u>> 2)
        uint64_t x11_14 = 1
        int64_t i_2
        
        do
            int32_t x12_5 = *(x9_13 - 4 + (i_6 << 2))
            i_2 = i_6
            i_6 -= 1
            x11_14 = zx.q(x11_14.d) & zx.q(((x12_5 - 1) & not.d(x12_5)) s>> 0x1f)
            x8_28 -= x11_14
        while (i_2 != 1)
    
    int64_t var_128_1 = x8_28

if (x8_28 != 0)
    int64_t var_180
    int64_t x8_29 = var_180
    
    if (x8_29 == -1)
        int64_t x9_15 = var_198.q
        int64_t var_190
        int64_t x10_12 = var_190 - x9_15
        
        if (var_190 == x9_15)
            x8_29 = 0
        else
            int64_t x12_7
            
            x12_7 = x10_12 s>= 0 ? x10_12 : -1
            
            int64_t x11_16 = x9_15 - var_190
            int64_t x12_8
            
            x12_8 = x12_7 s< 1 ? x12_7 : 1
            
            x8_29 = x10_12 s>> 2
            int64_t x10_13
            
            x10_13 = x11_16 s> x10_12 ? x11_16 : x10_12
            
            int64_t i_7 = x12_8 * (x10_13 u>> 2)
            uint64_t x11_17 = 1
            int64_t i_3
            
            do
                int32_t x12_9 = *(x9_15 - 4 + (i_7 << 2))
                i_3 = i_7
                i_7 -= 1
                x11_17 = zx.q(x11_17.d) & zx.q(((x12_9 - 1) & not.d(x12_9)) s>> 0x1f)
                x8_29 -= x11_17
            while (i_3 != 1)
        
        int64_t var_180_1 = x8_29
    
    if (x8_29 != 0)
        int64_t x0_38 = Botan::BigInt::bits()
        int64_t x8_32
        
        if ((x0_38 & 7) == 0)
            x8_32 = 0
        else
            x8_32 = 8 - (x0_38 & 7)
        
        Botan::BigInt::encode_fixed_length_int_pair(&var_140, &var_198, (x8_32 + x0_38) u>> 3)
        void* x0_40 = var_198.q
        
        if (x0_40 != 0)
            void* var_190_1 = x0_40
            Botan::deallocate_memory(x0_40, (var_188 - x0_40) s>> 2, 4)
        
        void* result_10 = result_5
        
        if (result_10 != 0)
            void* result_14 = result_10
            Botan::deallocate_memory(result_10, (var_e0 - result_10) s>> 2, 4)
        
        void* x0_41 = var_140
        
        if (x0_41 != 0)
            void* var_138_1 = x0_41
            int64_t var_130
            Botan::deallocate_memory(x0_41, (var_130 - x0_41) s>> 2, 4)
        
        void* x0_42 = var_c8.q
        
        if (x0_42 != 0)
            void* var_c0_1 = x0_42
            Botan::deallocate_memory(x0_42, (var_b8 - x0_42) s>> 2, 4)
        
        void* x0_43 = var_118
        
        if (x0_43 != 0)
            void* var_110_1 = x0_43
            int64_t var_108
            Botan::deallocate_memory(x0_43, (var_108 - x0_43) s>> 2, 4)
        
        uint32_t* result = result_1
        
        if (result == 0)
            return result
        
        uint32_t* result_2 = result
        return Botan::deallocate_memory(result, (var_160 - result) s>> 2, 4)

void** x0_44 = __cxa_allocate_exception(0x20)
int64_t x0_45
int128_t v0_3
x0_45, v0_3 = operator new(0x30)
int64_t var_1e0_1 = x0_45
var_1f0.o = data_71b5b0
__builtin_strncpy(x0_45, "Computed zero r/s during DSA signature", 0x27)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Internal error: ", &var_1f0)
*x0_44 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_44[1])

if ((zx.d(var_1c0.b) & 1) != 0)
    operator delete(var_1b0)

*x0_44 = _vtable_for_Botan::Internal_Error + 0x10
__cxa_throw(x0_44, _typeinfo_for_Botan::Internal_Error, Botan::Exception::~Exception)
noreturn
