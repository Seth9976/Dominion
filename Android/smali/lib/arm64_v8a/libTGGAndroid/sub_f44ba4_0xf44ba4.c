// 函数: sub_f44ba4
// 地址: 0xf44ba4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x22 = *(arg1 + 8)
int64_t x0 = std::__ndk1::chrono::system_clock::now()
Botan::OS::open_socket(arg2, arg3, x22)
int64_t (* var_1c0)()
int64_t* x19_1 = var_1c0

if (x19_1 == 0)
    void** x0_20 = __cxa_allocate_exception(0x20)
    int64_t x0_21
    int128_t v0_1
    x0_21, v0_1 = operator new(0x30)
    int64_t var_1b0_1 = x0_21
    var_1c0.o = data_71d3f0
    __builtin_strncpy(x0_21, "No socket support enabled in build", 0x23)
    Botan::Exception::Exception(x0_20, "Not implemented")
    *x0_20 = _vtable_for_Botan::Not_Implemented + 0x10
    __cxa_throw(x0_20, _typeinfo_for_Botan::Not_Implemented, Botan::Exception::~Exception)
    noreturn

uint64_t x8 = zx.q(*arg4)
int32_t temp0 = x8.d & 1
void* x1_1

if (temp0 != 0)
    x1_1 = *(arg4 + 0x10)
else
    x1_1 = &arg4[1]

uint64_t x2_1

if (temp0 == 0)
    x2_1 = x8 u>> 1
else
    x2_1 = *(arg4 + 8)

(*(*x19_1 + 0x10))(x19_1, x1_1, x2_1)
int64_t x28 = x22 * 0x3e8
int128_t var_80

if (x28 s< std::__ndk1::chrono::system_clock::now() - x0)
    void** x0_24 = __cxa_allocate_exception(0x20)
    int64_t x0_25
    int128_t v0_2
    x0_25, v0_2 = operator new(0x30)
    int64_t var_70_1 = x0_25
    var_80 = data_71b820
    __builtin_strncpy(x0_25, "Timeout during writing message body", 0x24)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "HTTP error ", &var_80)
    *x0_24 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_24[1])
    void* var_1b0
    
    if ((zx.d(var_1c0.b) & 1) != 0)
        operator delete(var_1b0)
    *x0_24 = _vtable_for_Botan::HTTP::HTTP_Error + 0x10
    __cxa_throw(x0_24, _typeinfo_for_Botan::HTTP::HTTP_Error, Botan::Exception::~Exception)
    noreturn

var_1c0 = construction_vtable_for_std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x18
int64_t (* var_150)() = construction_vtable_for_std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
std::__ndk1::ios_base::init(&var_150)
int64_t var_c8 = 0
int32_t var_c0 = 0xffffffff
var_1c0 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x18
var_150 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::basic_streambuf()
char var_178 = (zx.o(0)).b
int64_t var_168 = (zx.o(0)).q
void* __offset(
    vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x10) var_1b8 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x10
int32_t var_158 = 0x10
int64_t x0_5 = operator new(0x400)
memset(x0_5, 0, 0x400)

while (true)
    if ((*(*x19_1 + 0x18))(x19_1, x0_5, 0x400) == 0)
        std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::str()
        operator delete(x0_5)
        var_150 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            + 0x40
        var_1c0 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            + 0x18
        void* __offset(
            vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
            0x10) var_1b8_1 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            + 0x10
        
        if ((zx.d(var_178) & 1) != 0)
            operator delete(var_168)
        
        std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf()
        std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::~basic_ostream()
        std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >::~basic_ios()
        return (*(*x19_1 + 8))(x19_1)
    
    if (x28 s< std::__ndk1::chrono::system_clock::now() - x0)
        break
    
    std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::write(&var_1c0, x0_5)

void** x0_14 = __cxa_allocate_exception(0x20)
int64_t x0_15
int128_t v0
x0_15, v0 = operator new(0x30)
int64_t var_90 = x0_15
int128_t var_a0 = data_71d3f0
__builtin_strncpy(x0_15, "Timeout while reading message body", 0x23)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "HTTP error ", &var_a0)
*x0_14 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_14[1])
void* var_70

if ((zx.d(var_80.b) & 1) != 0)
    operator delete(var_70)
*x0_14 = _vtable_for_Botan::HTTP::HTTP_Error + 0x10
__cxa_throw(x0_14, _typeinfo_for_Botan::HTTP::HTTP_Error, Botan::Exception::~Exception)
noreturn
