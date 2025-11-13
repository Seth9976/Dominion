// 函数: sub_d60ab8
// 地址: 0xd60ab8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x22 = *arg2
int64_t x27 = arg2[1]
uint64_t x21 = arg3 u>> 3
int128_t var_90
char var_78
void* var_68

if (x21 u< arg5 + x27 - x22 + 0xa)
    void** x0_6 = __cxa_allocate_exception(0x20)
    int64_t x0_7
    int128_t v0_1
    x0_7, v0_1 = operator new(0x30)
    int64_t var_80_1 = x0_7
    var_90 = data_71c1e0
    __builtin_strncpy(x0_7, "emsa3_encoding: Output length is too small", 0x2b)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "Encoding error: ", &var_90)
    *x0_6 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_6[1])
    *x0_6 = _vtable_for_Botan::Invalid_Argument + 0x10
    
    if ((zx.d(var_78) & 1) != 0)
        operator delete(var_68)
    
    *x0_6 = _vtable_for_Botan::Encoding_Error + 0x10
    __cxa_throw(x0_6, _typeinfo_for_Botan::Encoding_Error, Botan::Exception::~Exception)
    noreturn

__builtin_memset(arg1, 0, 0x18)
char* x20
void* x26

if (x21 == 0)
    x26 = nullptr
    x20 = nullptr
else
    char* x0_1 = Botan::allocate_memory(x21, 1)
    x26 = &x0_1[x21]
    x20 = x0_1
    *arg1 = x0_1
    arg1[2] = x26
    memset(x0_1, 0, x21)
    arg1[1] = x26
    x22 = *arg2
    x27 = arg2[1]

void* x25_2 = x21 - arg5 - x27 + x22
*x20 = 1

if (x25_2 != 2)
    memset(&x20[1], 0xff, x25_2 - 2)

*(x25_2 + x20 - 1) = 0
void* x28_1

if (arg5 == 0)
    x28_1 = x26 - x20
label_d60bac:
    size_t x9_1 = x27 - x22
    int64_t x8_7 = x21 - x9_1
    size_t x10_1 = x28_1 - x8_7
    
    if (x28_1 u< x8_7)
        Botan::assertion_failure("buf_offset <= buf.size()", &data_793a18, "buffer_insert", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x461)
        Botan::assertion_failure("hash_id is not null", &data_793a18, "emsa3_encoding", 
            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x8b48)
        Botan::assertion_failure("buf_offset <= buf.size()", &data_793a18, "buffer_insert", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x461)
    else
        size_t x2_3
        
        x2_3 = x10_1 u< x9_1 ? x10_1 : x9_1
        
        if (x2_3 == 0)
            return 
        
        if (x22 != 0)
            return memmove(&x20[x8_7], x22, x2_3) __tailcall
else if (arg4 == 0)
    Botan::assertion_failure("hash_id is not null", &data_793a18, "emsa3_encoding", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x8b48)
    Botan::assertion_failure("buf_offset <= buf.size()", &data_793a18, "buffer_insert", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x461)
else
    x28_1 = x26 - x20
    size_t x8_6 = x28_1 - x25_2
    
    if (x28_1 u>= x25_2)
        size_t x2_2
        
        x2_2 = x8_6 u< arg5 ? x8_6 : arg5
        
        if (x2_2 != 0)
            memmove(x20 + x25_2, arg4, x2_2)
        
        goto label_d60bac
    
    Botan::assertion_failure("buf_offset <= buf.size()", &data_793a18, "buffer_insert", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x461)
int64_t* x0_12 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
    "If n > 0 then args are not null", "copy_mem", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
std::exception::~exception()

if ((zx.d(var_78) & 1) != 0)
    operator delete(var_68)

void* var_80

if ((zx.d(var_90.b) & 1) != 0)
    operator delete(var_80)
__cxa_free_exception(arg1)
sub_1101e04(x0_12)
noreturn
