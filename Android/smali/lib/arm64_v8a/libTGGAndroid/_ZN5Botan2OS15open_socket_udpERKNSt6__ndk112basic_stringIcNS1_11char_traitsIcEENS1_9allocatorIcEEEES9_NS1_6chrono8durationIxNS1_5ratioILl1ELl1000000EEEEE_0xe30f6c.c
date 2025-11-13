// 函数: _ZN5Botan2OS15open_socket_udpERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_NS1_6chrono8durationIxNS1_5ratioILl1ELl1000000EEEEE
// 地址: 0xe30f6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

struct Botan::OS::SocketUDP::Botan::(anonymous namespace)::BSD_SocketUDP::VTable** x0 =
    operator new(0xa0)
x0[0x12] = arg3
*x0 = &_vtable_for_Botan::(anonymous namespace)::BSD_SocketUDP{for `Botan::OS::SocketUDP'}
x0[0x13].d = 0xffffffff
int128_t var_b0
__builtin_memset(&var_b0, 0, 0x30)
var_b0:8.d = 2
void* __offset(
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x1) x0_1

if ((zx.d(*arg1) & 1) != 0)
    x0_1 = *(arg1 + 0x10)
else
    x0_1 = arg1 + 1

char* x1

if ((zx.d(*arg2) & 1) != 0)
    x1 = *(arg2 + 0x10)
else
    x1 = arg2 + 1

struct addrinfo* ai_next_1
int128_t var_70

if (getaddrinfo(x0_1, x1, &var_b0, &ai_next_1) != 0)
    void* x0_11 = __cxa_allocate_exception(0x28)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "Name resolution failed for ", arg1)
    Botan::System_Error::System_Error(x0_11, &var_70)
    __cxa_throw(x0_11, _typeinfo_for_Botan::System_Error, Botan::Exception::~Exception)
    noreturn

struct addrinfo* ai_next = ai_next_1

if (ai_next != 0 && x0[0x13].d == 0xffffffff)
    do
        int32_t ai_family = ai_next->ai_family
        
        if ((ai_family | 8) == 0xa)
            int32_t fd = socket(ai_family, zx.q(ai_next->ai_socktype), zx.q(ai_next->ai_protocol))
            x0[0x13].d = fd
            
            if (fd != 0xffffffff)
                if ((fcntl(fd, 4, 0x800) & 0x80000000) != 0)
                    void* x0_6 = __cxa_allocate_exception(0x28)
                    int64_t x0_7
                    int128_t v0
                    x0_7, v0 = operator new(0x30)
                    int64_t var_60 = x0_7
                    var_70 = data_71cfc0
                    __builtin_strncpy(x0_7, "Setting socket to non-blocking state failed", 0x2c)
                    *__errno()
                    Botan::System_Error::System_Error(x0_6, &var_70)
                    __cxa_throw(x0_6, _typeinfo_for_Botan::System_Error, 
                        Botan::Exception::~Exception)
                    noreturn
                
                struct addrinfo* ai_next_2 = ai_next_1
                memcpy(&x0[1], ai_next_2->ai_canonname, zx.q(ai_next_2->ai_addrlen))
                x0[0x11].d = ai_next_2->ai_addrlen
                
                if (x0[0x13].d != 0xffffffff)
                    break
        
        ai_next = ai_next->ai_next
    while (ai_next != 0)
    
    ai_next = ai_next_1

int64_t result = freeaddrinfo(ai_next)

if (x0[0x13].d != 0xffffffff)
    struct Botan::OS::SocketUDP::Botan::(anonymous namespace)::BSD_SocketUDP::VTable*** entry_x8
    *entry_x8 = x0
    return result

void* x0_14 = __cxa_allocate_exception(0x28)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Connecting to ", arg1)
char var_108[0x18]
int128_t* x0_16
int128_t v0_1
x0_16, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_108)
int64_t var_e0 = x0_16[1].q
int128_t var_f0 = *x0_16
__builtin_memset(x0_16, 0, 0x18)
*(arg2 + 8)
void* __offset(
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x1) x1_10

if ((zx.d(*arg2) & 1) == 0)
    x1_10 = arg2 + 1
else
    x1_10 = *(arg2 + 0x10)

int128_t* x0_18
int128_t v0_2
x0_18, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_f0, x1_10)
int64_t var_c0 = x0_18[1].q
int128_t var_d0 = *x0_18
__builtin_memset(x0_18, 0, 0x18)
int128_t* x0_20
int128_t v0_3
x0_20, v0_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_d0)
int64_t var_60_1 = x0_20[1].q
var_70 = *x0_20
__builtin_memset(x0_20, 0, 0x18)
*__errno()
Botan::System_Error::System_Error(x0_14, &var_70)
__cxa_throw(x0_14, _typeinfo_for_Botan::System_Error, Botan::Exception::~Exception)
noreturn
