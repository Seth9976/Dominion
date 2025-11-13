// 函数: _ZN5Botan2OS11open_socketERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_NS1_6chrono8durationIxNS1_5ratioILl1ELl1000EEEEE
// 地址: 0xe309e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

struct Botan::OS::Socket::Botan::(anonymous namespace)::BSD_Socket::VTable** x0 = operator new(0x18)
x0[2].d = 0xffffffff
int128_t var_90
__builtin_memset(&var_90, 0, 0x30)
var_90:8.d = 1
*x0 = &_vtable_for_Botan::(anonymous namespace)::BSD_Socket{for `Botan::OS::Socket'}
x0[1] = arg3 * 0x3e8
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

struct fd_set writefds
struct addrinfo* ai_next_1

if (getaddrinfo(x0_1, x1, &var_90, &ai_next_1) != 0)
    void* x0_19 = __cxa_allocate_exception(0x28)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "Name resolution failed for ", arg1)
    Botan::System_Error::System_Error(x0_19, &writefds)
    __cxa_throw(x0_19, _typeinfo_for_Botan::System_Error, Botan::Exception::~Exception)
    noreturn

struct addrinfo* ai_next = ai_next_1
int32_t var_178
struct timeval timeout
int128_t var_140

if (ai_next != 0 && x0[2].d == 0xffffffff)
    do
        int32_t ai_family = ai_next->ai_family
        
        if ((ai_family | 8) == 0xa)
            int32_t fd = socket(ai_family, zx.q(ai_next->ai_socktype), zx.q(ai_next->ai_protocol))
            x0[2].d = fd
            
            if (fd != 0xffffffff)
                if ((fcntl(fd, 4, 0x800) & 0x80000000) != 0)
                    void* x0_14 = __cxa_allocate_exception(0x28)
                    int64_t x0_15
                    int128_t v0_2
                    x0_15, v0_2 = operator new(0x30)
                    v0_2 = data_71cfc0
                    writefds.fds_bits[2] = x0_15
                    writefds.fds_bits[0] = v0_2.q
                    writefds.fds_bits[1] = v0_2:8.q
                    __builtin_strncpy(x0_15, "Setting socket to non-blocking state failed", 0x2c)
                    *__errno()
                    Botan::System_Error::System_Error(x0_14, &writefds)
                    __cxa_throw(x0_14, _typeinfo_for_Botan::System_Error, 
                        Botan::Exception::~Exception)
                    noreturn
                
                if (connect(x0[2].d, ai_next->ai_canonname, ai_next->ai_addrlen) == 0xffffffff)
                    int32_t* x0_6
                    int128_t v0_1
                    x0_6, v0_1 = __errno()
                    
                    if (*x0_6 != 0x73)
                        close(x0[2].d)
                        x0[2].d = 0xffffffff
                    else
                        int64_t x8_5 = x0[1]
                        uint64_t x0_7 = zx.q(x0[2].d)
                        v0_1.q = 0
                        v0_1:8.q = 0
                        timeout.tv_sec = x8_5 s/ 0xf4240
                        timeout.tv_usec = x8_5 s% 0xf4240
                        __builtin_memset(&writefds, 0, 0x80)
                        __FD_SET_chk(x0_7, &writefds, 0x80, v0_1)
                        
                        if (select(&x0[2].d->vFunc_0 + 1, nullptr, &writefds, nullptr, &timeout)
                                == 0)
                            close(x0[2].d)
                            x0[2].d = 0xffffffff
                        else
                            uint64_t x0_10 = zx.q(x0[2].d)
                            var_178 = 0
                            int32_t var_124 = 4
                            
                            if ((getsockopt(x0_10, 1, 4, &var_178, &var_124) & 0x80000000) != 0)
                                void* x0_32 = __cxa_allocate_exception(0x28)
                                int64_t x0_33
                                int128_t v0_6
                                x0_33, v0_6 = operator new(0x20)
                                int64_t var_130_1 = x0_33
                                var_140 = data_71af80
                                __builtin_strncpy(x0_33, "Error calling getsockopt", 0x19)
                                *x0_6
                                Botan::System_Error::System_Error(x0_32, &var_140)
                                __cxa_throw(x0_32, _typeinfo_for_Botan::System_Error, 
                                    Botan::Exception::~Exception)
                                noreturn
                            
                            if (var_178 != 0)
                                close(x0[2].d)
                                x0[2].d = 0xffffffff
        
        ai_next = ai_next->ai_next
        
        if (ai_next == 0)
            break
    while (x0[2].d == 0xffffffff)
    
    ai_next = ai_next_1

int64_t result = freeaddrinfo(ai_next)

if (x0[2].d != 0xffffffff)
    struct Botan::OS::Socket::Botan::(anonymous namespace)::BSD_Socket::VTable*** entry_x8
    *entry_x8 = x0
    return result

void* x0_22 = __cxa_allocate_exception(0x28)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Connecting to ", arg1)
int128_t* x0_24
int128_t v0_3
x0_24, v0_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_178)
v0_3 = *x0_24
int64_t var_150 = x0_24[1].q
timeout.tv_sec = v0_3.q
timeout.tv_usec = v0_3:8.q
__builtin_memset(x0_24, 0, 0x18)
*(arg2 + 8)
void* __offset(
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x1) x1_11

if ((zx.d(*arg2) & 1) == 0)
    x1_11 = arg2 + 1
else
    x1_11 = *(arg2 + 0x10)

int128_t* x0_26
int128_t v0_4
x0_26, v0_4 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &timeout, x1_11)
int64_t var_130 = x0_26[1].q
var_140 = *x0_26
__builtin_memset(x0_26, 0, 0x18)
int128_t* x0_28
int128_t v0_5
x0_28, v0_5 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_140)
v0_5 = *x0_28
writefds.fds_bits[2] = x0_28[1].q
writefds.fds_bits[0] = v0_5.q
writefds.fds_bits[1] = v0_5:8.q
__builtin_memset(x0_28, 0, 0x18)
*__errno()
Botan::System_Error::System_Error(x0_22, &writefds)
__cxa_throw(x0_22, _typeinfo_for_Botan::System_Error, Botan::Exception::~Exception)
noreturn
