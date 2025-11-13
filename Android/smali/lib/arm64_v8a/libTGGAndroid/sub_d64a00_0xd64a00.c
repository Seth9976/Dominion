// 函数: sub_d64a00
// 地址: 0xd64a00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x9 = *arg2
int64_t x8 = arg2[1]
void* x24 = arg5 - arg4
int128_t var_80
char var_68
void* var_58

if (x8 - x9 != x24)
    void** x0_4 = __cxa_allocate_exception(0x20)
    int64_t x0_5
    int128_t v0
    x0_5, v0 = operator new(0x30)
    int64_t var_70_1 = x0_5
    var_80 = data_71aa70
    __builtin_strncpy(x0_5, "EMSA_X931::encoding_of: Bad input length", 0x29)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "Encoding error: ", &var_80)
    *x0_4 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_4[1])
    *x0_4 = _vtable_for_Botan::Invalid_Argument + 0x10
    
    if ((zx.d(var_68) & 1) != 0)
        operator delete(var_58)
    
    *x0_4 = _vtable_for_Botan::Encoding_Error + 0x10
    __cxa_throw(x0_4, _typeinfo_for_Botan::Encoding_Error, Botan::Exception::~Exception)
    noreturn

uint64_t x19 = (arg3 + 1) u>> 3

if (x19 u< x24 + 4)
    void** x0_10 = __cxa_allocate_exception(0x20)
    int64_t x0_11
    int128_t v0_1
    x0_11, v0_1 = operator new(0x40)
    int64_t var_70_2 = x0_11
    var_80 = data_71ac10
    __builtin_strncpy(x0_11, "EMSA_X931::encoding_of: Output length is too small", 0x33)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "Encoding error: ", &var_80)
    *x0_10 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_10[1])
    *x0_10 = _vtable_for_Botan::Invalid_Argument + 0x10
    
    if ((zx.d(var_68) & 1) != 0)
        operator delete(var_58)
    
    *x0_10 = _vtable_for_Botan::Encoding_Error + 0x10
    __cxa_throw(x0_10, _typeinfo_for_Botan::Encoding_Error, Botan::Exception::~Exception)
    noreturn

char x25

if (x9 == x8)
label_d64a74:
    x25 = 0x4b
else
    while (zx.d(*x9) == zx.d(*arg4))
        x9 = &x9[1]
        arg4 = &arg4[1]
        
        if (x8 == x9)
            goto label_d64a74
    
    x25 = 0x6b

__builtin_memset(arg1, 0, 0x18)
char* x0_1 = Botan::allocate_memory(x19, 1)
void* x26 = &x0_1[x19]
*arg1 = x0_1
arg1[2] = x26
int64_t result = memset(x0_1, 0, x19)
void* x8_1 = x19 - x24
arg1[1] = x26
*x0_1 = x25
*(x8_1 + x0_1 - 3) = 0xba

if (x8_1 != 4)
    result = memset(&x0_1[1], 0xbb, x8_1 - 4)

void* x8_2 = x19 - 2 - x24
size_t x9_1 = x19 - x8_2

if (x19 u< x8_2)
    Botan::assertion_failure("buf_offset <= buf.size()", &data_793a18, "buffer_insert", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x461)
else
    int64_t x1 = *arg2
    size_t x10_6 = arg2[1] - x1
    size_t x2_2
    
    x2_2 = x9_1 u< x10_6 ? x9_1 : x10_6
    
    if (x2_2 == 0)
        goto label_d64b0c
    
    if (x1 != 0)
        result = memmove(x0_1 + x8_2, x1, x2_2)
    label_d64b0c:
        x0_1[x19 - 2] = arg6
        x0_1[x19 - 1] = 0xcc
        return result

int64_t* x0_16 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
    "If n > 0 then args are not null", "copy_mem", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
std::exception::~exception()

if ((zx.d(var_68) & 1) != 0)
    operator delete(var_58)

void* var_70

if ((zx.d(var_80.b) & 1) != 0)
    operator delete(var_70)
__cxa_free_exception(x19)
sub_1101e04(x0_16)
noreturn
