// 函数: _ZN5Botan16MDx_HashFunctionC2Embbh
// 地址: 0xdac8b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x22
int64_t var_20 = x22
uint64_t x21 = arg2
uint64_t x19 = arg1
char x10

if ((arg4.d & 1) != 0)
    x10 = -0x80
else
    x10 = 1

*arg1 = _vtable_for_Botan::MDx_HashFunction + 0x10
*(arg1 + 8) = x10
char entry_x4
*(arg1 + 9) = entry_x4
int32_t x9_1

if ((arg2 & 0xffffffff80000000) != 0)
    x9_1 = 0x40
else if (x21 u< 2)
    x9_1 = 0
else
    x9_1 = 0
    int64_t x10_1 = 1
    
    do
        x10_1 <<= 1
        x9_1 += 1
    while (x10_1 u< x21)

int128_t v0
v0.q = 0
v0:8.q = 0
*(x19 + 0xa) = x9_1.b
*(x19 + 0xb) = arg3 & 1
__builtin_memset(x19 + 0x10, 0, 0x20)

if (x21 != 0)
    if ((x21 & 0xffffffff80000000) != 0)
        int64_t* x0_18 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        char var_50
        void* var_40
        
        if ((zx.d(var_50) & 1) != 0)
            operator delete(var_40)
        void* x0_20 = *(x19 + 0x18)
        
        if (x0_20 != 0)
            int64_t x8_12 = *(x19 + 0x28)
            *(x19 + 0x20) = x0_20
            Botan::deallocate_memory(x0_20, x8_12 - x0_20, 1)
        
        sub_1101e04(x0_18)
        noreturn
    
    int64_t x0_1 = Botan::allocate_memory(x21, 1)
    int64_t x22_1 = x0_1 + x21
    *(x19 + 0x18) = x0_1
    *(x19 + 0x28) = x22_1
    arg1, v0 = memset(x0_1, 0, x21)
    *(x19 + 0x20) = x22_1

*(x19 + 0x30) = 0

if (x21 u>= 2)
    v0.q = float.d(x21)
    int128_t v0_1
    v0_1.w = vaddlv_u8(vcnt_s8(v0))
    
    if (zx.q(v0_1.d) u< 2)
        if (zx.d(*(x19 + 0xa)) - 3 u>= 0xe)
            void** x0_7 = __cxa_allocate_exception(0x20)
            int64_t x0_8
            int128_t v0_3
            x0_8, v0_3 = operator new(0x40)
            v0_3 = data_71ac10
            int64_t var_40_2 = x0_8
            __builtin_strncpy(x0_8, "MDx_HashFunction block size too large or too small", 0x33)
            int128_t var_50_2 = v0_3
            *x0_7 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_7[1])
            *x0_7 = _vtable_for_Botan::Invalid_Argument + 0x10
            __cxa_throw(x0_7, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
            noreturn
        
        uint64_t x8_4 = zx.q(*(x19 + 9))
        
        if (x8_4 u>= 8 && x8_4 u<= x21)
            return 
        
        void** x0_12 = __cxa_allocate_exception(0x20)
        int64_t x0_13
        int128_t v0_4
        x0_13, v0_4 = operator new(0x30)
        v0_4 = data_71c500
        int64_t var_40_3 = x0_13
        __builtin_strncpy(x0_13, "MDx_HashFunction invalid counter length", 0x28)
        int128_t var_50_3 = v0_4
        *x0_12 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_12[1])
        *x0_12 = _vtable_for_Botan::Invalid_State + 0x10
        __cxa_throw(x0_12, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
        noreturn

void** x0_2 = __cxa_allocate_exception(0x20)
int64_t x0_3
int128_t v0_2
x0_3, v0_2 = operator new(0x40)
v0_2 = data_71ac10
int64_t var_40_1 = x0_3
__builtin_strncpy(x0_3, "MDx_HashFunction block length must be a power of 2", 0x33)
int128_t var_50_1 = v0_2
*x0_2 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_2[1])
*x0_2 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_2, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
