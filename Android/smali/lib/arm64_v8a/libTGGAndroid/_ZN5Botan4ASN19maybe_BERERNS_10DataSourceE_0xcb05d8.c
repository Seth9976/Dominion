// 函数: _ZN5Botan4ASN19maybe_BERERNS_10DataSourceE
// 地址: 0xcb05d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_3c

if ((*(*arg1 + 0x10))(arg1, &var_3c, 1, 0) != 0)
    return zx.q(zx.d(var_3c) == 0x30 ? 1 : 0)

int128_t var_60
char var_38
void* var_28

if ((**arg1)(arg1, &var_3c, 1) != 0)
    int64_t* x0_10 = Botan::assertion_failure("source.read_byte(first_u8) == 0", "Expected EOF", 
        "maybe_BER", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x2cbe)
    std::exception::~exception()
    
    if ((zx.d(var_38) & 1) != 0)
        operator delete(var_28)
    
    void* var_50
    
    if ((zx.d(var_60.b) & 1) != 0)
        operator delete(var_50)
    __cxa_free_exception(arg1)
    sub_1101e04(x0_10)
    noreturn

void** x0_4 = __cxa_allocate_exception(0x20)
int64_t x0_5
int128_t v0
x0_5, v0 = operator new(0x30)
int64_t var_50_1 = x0_5
var_60 = data_71c510
__builtin_strncpy(x0_5, "ASN1::maybe_BER: Source was empty", 0x22)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "I/O error: ", &var_60)
*x0_4 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_4[1])

if ((zx.d(var_38) & 1) != 0)
    operator delete(var_28)

*x0_4 = _vtable_for_Botan::Stream_IO_Error + 0x10
__cxa_throw(x0_4, _typeinfo_for_Botan::Stream_IO_Error, Botan::Exception::~Exception)
noreturn
