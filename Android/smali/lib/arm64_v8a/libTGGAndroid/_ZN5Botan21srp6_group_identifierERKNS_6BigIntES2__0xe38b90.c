// 函数: _ZN5Botan21srp6_group_identifierERKNS_6BigIntES2_
// 地址: 0xe38b90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::to_string(Botan::BigInt::bits())
char var_50
int128_t* x0_2
int128_t v0
x0_2, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    &var_50, nullptr)
int128_t* entry_x8
entry_x8[1].q = x0_2[1].q
*entry_x8 = *x0_2
__builtin_memset(x0_2, 0, 0x18)
void* var_40

if ((zx.d(var_50) & 1) != 0)
    operator delete(var_40)
Botan::DL_Group::DL_Group(&var_50)
int64_t result = Botan::BigInt::is_equal(Botan::DL_Group::data())
int64_t* __saved_x1_1
int64_t* __saved_x1
int32_t x21_1
int32_t x22

if ((result.d & 1) != 0)
    result = Botan::BigInt::is_equal(Botan::DL_Group::data() + 0x50)
    
    if ((result.d & 1) == 0)
        goto label_e38c40
    
    x21_1 = 0
    x22 = 1
    __saved_x1 = __saved_x1_1
    
    if (__saved_x1 != 0)
        goto label_e38c60
    
    goto label_e38c68

label_e38c40:
x22 = 0
x21_1 = 1
__saved_x1 = __saved_x1_1

if (__saved_x1 == 0)
label_e38c68:
    
    if ((x22 & 1) == 0)
    label_e38c70:
        
        if ((zx.d(*entry_x8) & 1) != 0)
            result = operator delete(entry_x8[1].q)
else
label_e38c60:
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&__saved_x1[1])
        i = __stlxr(x9_1 - 1, &__saved_x1[1])
    while (i != 0)
    
    if (x9_1 != 0)
        goto label_e38c68
    
    (*(*__saved_x1 + 0x10))(__saved_x1)
    result = std::__ndk1::__shared_weak_count::__release_weak()
    
    if ((x22 & 1) == 0)
        goto label_e38c70

if ((x21_1 & 1) == 0)
    return result

void** x0_11 = __cxa_allocate_exception(0x20)
int64_t x0_12
int128_t v0_1
x0_12, v0_1 = operator new(0x30)
v0_1 = data_71c500
int64_t var_40_1 = x0_12
__builtin_strncpy(x0_12, "Invalid or unknown SRP group parameters", 0x28)
var_50.o = v0_1
*x0_11 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_11[1])
*x0_11 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_11, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
