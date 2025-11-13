// 函数: _ZN5Botan6Comb4PC1EPNS_12HashFunctionES2_
// 地址: 0xd05288
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x2
*(arg1 + 0x10) = entry_x2
*arg1 = _vtable_for_Botan::Comb4P + 0x10
*(arg1 + 8) = arg2
(*(*arg2 + 0x40))(arg2)
(*(**(arg1 + 0x10) + 0x40))()
char var_50
uint64_t x8_3 = zx.q(var_50)
char var_70
uint64_t x21 = zx.q(var_70)
int32_t x20 = x8_3.d & 1
uint64_t i_1 = x8_3 u>> 1
uint64_t i_2
uint64_t i_3

i_2 = x20 == 0 ? i_1 : i_3
uint64_t x9_3
uint64_t var_68

if ((x21.d & 1) == 0)
    x9_3 = x21 u>> 1
else
    x9_3 = var_68
int32_t x22_1
char* var_60

if (i_2 != x9_3)
    x22_1 = 0
    
    if ((x21.d & 1) != 0)
        operator delete(var_60)
        x20 = zx.d(var_50) & 1
else
    char* x9_4 = &var_50 | 1
    char* x1
    
    if ((x21.d & 1) == 0)
        x1 = &var_70 | 1
    else
        x1 = var_60
    
    if ((x20 & 0xff) == 0)
        if (i_2 == 0)
            x22_1 = 1
        else
            uint64_t i
            
            do
                uint32_t x10_1 = zx.d(*x9_4)
                uint32_t x11_2 = zx.d(*x1)
                x22_1 = x10_1 == x11_2 ? 1 : 0
                
                if (x10_1 != x11_2)
                    break
                
                i = i_1
                i_1 -= 1
                x9_4 = &x9_4[1]
                x1 = &x1[1]
            while (i != 1)
        
        if ((x21.d & 1) != 0)
            operator delete(var_60)
            x20 = zx.d(var_50) & 1
    else if (i_2 == 0)
        x22_1 = 1
        
        if ((x21.d & 1) != 0)
            operator delete(var_60)
            x20 = zx.d(var_50) & 1
    else
        x22_1 = memcmp() == 0 ? 1 : 0
        
        if ((x21.d & 1) != 0)
            operator delete(var_60)
            x20 = zx.d(var_50) & 1
char* var_40

if ((x20 & 0xff) != 0)
    operator delete(var_40)

if (x22_1 != 0)
    void** x0_14 = __cxa_allocate_exception(0x20)
    int64_t x0_15
    int128_t v0
    x0_15, v0 = operator new(0x30)
    v0 = data_71b7f0
    int64_t var_40_1 = x0_15
    __builtin_strncpy(x0_15, "Comb4P: Must use two distinct hashes", 0x25)
    var_50.o = v0
    *x0_14 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_14[1])
    *x0_14 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_14, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

if ((***(arg1 + 8))() == (***(arg1 + 0x10))())
    (*(**(arg1 + 8) + 0x38))()
    (*(**(arg1 + 0x10) + 0x38))()
    int64_t* x0_11 = *(arg1 + 8)
    var_50 = 0
    (*(*x0_11 + 0x18))(x0_11, &var_50, 1)
    int64_t* x0_12 = *(arg1 + 0x10)
    var_50 = 0
    return (*(*x0_12 + 0x18))(x0_12, &var_50, 1)

void** x0_19 = __cxa_allocate_exception(0x20)
int64_t* x9_5 = *(arg1 + 8)
(*(*x9_5 + 0x40))(x9_5)
void var_a8
int128_t* x0_22
int128_t v0_1
x0_22, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    &var_a8, nullptr)
int64_t var_80 = x0_22[1].q
int128_t var_90 = *x0_22
__builtin_memset(x0_22, 0, 0x18)
int128_t* x0_24
int128_t v0_2
x0_24, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_90)
int64_t var_60_1 = x0_24[1].q
var_70.o = *x0_24
__builtin_memset(x0_24, 0, 0x18)
(*(**(arg1 + 0x10) + 0x40))()
char var_c0
uint64_t x1_5
uint64_t var_b0

if ((zx.d(var_c0) & 1) == 0)
    x1_5 = &var_c0 | 1
else
    x1_5 = var_b0
int128_t* x0_27
int128_t v0_3
x0_27, v0_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_70, x1_5)
int64_t var_40_2 = x0_27[1].q
var_50.o = *x0_27
__builtin_memset(x0_27, 0, 0x18)
*x0_19 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_19[1])
*x0_19 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_19, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
