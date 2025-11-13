// 函数: _ZN5Botan3TLS7Channel22create_handshake_stateENS0_16Protocol_VersionE
// 地址: 0xe5bbb8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x24 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x24 + 0x28)
int32_t entry_x1
int16_t var_e8 = entry_x1.w
int128_t var_100
char var_e0

if (*(arg1 + 0x48) != 0)
    void** x0_17 = __cxa_allocate_exception(0x20)
    int64_t x0_18
    int128_t v0_2
    x0_18, v0_2 = operator new(0x30)
    int64_t var_f0 = x0_18
    var_100 = data_71a900
    __builtin_strncpy(x0_18, "create_handshake_state called during handshake", 0x2f)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "Internal error: ", &var_100)
    *x0_17 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_17[1])
    void* var_d0
    
    if ((zx.d(var_e0) & 1) != 0)
        operator delete(var_d0)
    *x0_17 = _vtable_for_Botan::Internal_Error + 0x10
    __cxa_throw(x0_17, _typeinfo_for_Botan::Internal_Error, Botan::Exception::~Exception)
    noreturn

void* x8_2 = *(arg1 + 0x40)
int64_t* x19 = arg1

if (x8_2 != 0)
    uint32_t x8_3 = zx.d(*(x8_2 + 0x20))
    uint16_t var_108_1 = x8_3.w
    
    if (((entry_x1 u>> 8 & 0xff) u> 0xfa ? 1 : 0) != (x8_3 u>> 8 u> 0xfa ? 1 : 0))
        void** x0_23 = __cxa_allocate_exception(0x28)
        Botan::TLS::Protocol_Version::to_string()
        void var_158
        int128_t* x0_25
        int128_t v0_3
        x0_25, v0_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
            &var_158, nullptr)
        int64_t var_130 = x0_25[1].q
        int128_t var_140 = *x0_25
        __builtin_memset(x0_25, 0, 0x18)
        int128_t* x0_27
        int128_t v0_4
        x0_27, v0_4 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            &var_140)
        int64_t var_110 = x0_27[1].q
        int128_t var_120 = *x0_27
        __builtin_memset(x0_27, 0, 0x18)
        Botan::TLS::Protocol_Version::to_string()
        char var_170
        uint64_t x1_5
        uint64_t var_160
        
        if ((zx.d(var_170) & 1) == 0)
            x1_5 = &var_170 | 1
        else
            x1_5 = var_160
        int128_t* x0_29
        int128_t v0_5
        x0_29, v0_5 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            &var_120, x1_5)
        int64_t var_f0_1 = x0_29[1].q
        var_100 = *x0_29
        __builtin_memset(x0_29, 0, 0x18)
        int128_t* x0_31
        int128_t v0_6
        x0_31, v0_6 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            &var_100)
        int64_t var_d0_1 = x0_31[1].q
        var_e0.o = *x0_31
        __builtin_memset(x0_31, 0, 0x18)
        *x0_23 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_23[1])
        x0_23[4].d = 0x46
        *x0_23 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
        __cxa_throw(x0_23, _typeinfo_for_Botan::TLS::TLS_Exception, Botan::Exception::~Exception)
        noreturn

void** x20 = x19[7]

if (x20 != 0)
    if ((entry_x1 u>> 8 & 0xff) u>= 0xfb)
        goto label_e5bcb0
    
    goto label_e5bd7c

int64_t* x21_3

if ((entry_x1 u>> 8 & 0xff) u< 0xfb)
    void** x0_11 = operator new(0x20)
    __builtin_memset(&x0_11[1], 0, 0x14)
    *x0_11 = _vtable_for_Botan::TLS::Stream_Sequence_Numbers + 0x10
    x19[7] = x0_11
label_e5bd7c:
    int64_t* x0_12
    int128_t v0_1
    x0_12, v0_1 = operator new(0x70)
    int64_t var_b0_1 = 0
    int64_t* var_a8_1 = x19
    int64_t (* var_c0)()
    int64_t* var_a0_1 = &var_c0
    v0_1.q = 0
    v0_1:8.q = 0
    var_c0 = vtable for std::__ndk1::__function::__func<std::__ndk1::__bind<void (Botan::TLS::Channel::*)(unsigned char, std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char>> const&), Botan::TLS::Channel*, std::__ndk1::placeholders::__ph<1> const&, std::__ndk1::placeholders::__ph<2> const&>, std::__ndk1::allocator<std::__ndk1::__bind<void (Botan::TLS::Channel::*)(unsigned char, std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char>> const&), Botan::TLS::Channel*, std::__ndk1::placeholders::__ph<1> const&, std::__ndk1::placeholders::__ph<2> const&>>, void (unsigned char, std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char>> const&)>
        + 0x10
    int64_t (* const var_b8_1)(uint8_t, 
        std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > const&) =
        Botan::TLS::Channel::send_record
    __builtin_memset(&x0_12[1], 0, 0x30)
    x21_3 = x0_12
    *x0_12 = _vtable_for_Botan::TLS::Stream_Handshake_IO + 0x10
    x0_12[8] = vtable for std::__ndk1::__function::__func<std::__ndk1::__bind<void (Botan::TLS::Channel::*)(unsigned char, std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char>> const&), Botan::TLS::Channel*, std::__ndk1::placeholders::__ph<1> const&, std::__ndk1::placeholders::__ph<2> const&>, std::__ndk1::allocator<std::__ndk1::__bind<void (Botan::TLS::Channel::*)(unsigned char, std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char>> const&), Botan::TLS::Channel*, std::__ndk1::placeholders::__ph<1> const&, std::__ndk1::placeholders::__ph<2> const&>>, void (unsigned char, std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char>> const&)>
        + 0x10
    *(x0_12 + 0x48) = var_b8_1.o
    x0_12[0xb] = x19
    x0_12[0xc] = &x0_12[8]
else
    void** x0 = operator new(0x38)
    x20 = x0
    x0[2] = 0
    x0[4].d = 0
    x0[5] = 0
    x0[6] = 0
    *x0 = _vtable_for_Botan::TLS::Datagram_Sequence_Numbers + 0x10
    x0[1] = &x0[2]
    x0[3] = 0
    int64_t* x0_1 = operator new(0x30)
    x0_1[4].w = 0
    *x0_1 = 0
    x0_1[1] = 0
    x0_1[2] = &x0[2]
    x20[1] = x0_1
    x20[2] = x0_1
    x0_1[5] = 0
    x20[4].d = 0
    x0_1[3].b = 1
    x20[3] = 1
    x0[5] = 0
    x0[6] = 0
    x19[7] = x20
label_e5bcb0:
    int64_t* x0_2 = operator new(0xe0)
    int64_t var_80_1 = 0
    int64_t* var_78_1 = x19
    int64_t (* var_90)() = vtable for std::__ndk1::__function::__func<std::__ndk1::__bind<void (Botan::TLS::Channel::*)(unsigned short, unsigned char, std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char>> const&), Botan::TLS::Channel*, std::__ndk1::placeholders::__ph<1> const&, std::__ndk1::placeholders::__ph<2> const&, std::__ndk1::placeholders::__ph<3> const&>, std::__ndk1::allocator<std::__ndk1::__bind<void (Botan::TLS::Channel::*)(unsigned short, unsigned char, std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char>> const&), Botan::TLS::Channel*, std::__ndk1::placeholders::__ph<1> const&, std::__ndk1::placeholders::__ph<2> const&, std::__ndk1::placeholders::__ph<3> const&>>, void (unsigned short, unsigned char, std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char>> const&)>
        + 0x10
    int64_t (* const var_88_1)(uint16_t, uint8_t, 
        std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > const&) =
        Botan::TLS::Channel::send_record_under_epoch
    int64_t (** var_70_1)() = &var_90
    int64_t* x8_8 = x19[5]
    x21_3 = x0_2
    int32_t x0_4 = (*(*x8_8 + 0x158))(x8_8)
    uint64_t x0_6 = (*(*x19[5] + 0x160))()
    (*(*x19[5] + 0x168))()
    Botan::TLS::Datagram_Handshake_IO::Datagram_Handshake_IO(x21_3, &var_90, x20.w, zx.q(x0_4), 
        x0_6)
    
    if (&var_90 == var_70_1)
        (*(*var_70_1 + 0x20))()
    else if (var_70_1 != 0)
        (*(*var_70_1 + 0x28))()

int64_t x0_14 = (*(*x19 + 0x30))(x19, x21_3)
int64_t* x8_20 = x19[9]
x19[9] = x0_14

if (x8_20 != 0)
    (*(*x8_20 + 8))(x8_20)

void* x8_21 = x19[8]

if (x8_21 != 0)
    *(x19[9] + 0x20) = *(x8_21 + 0x20)

if (*(x24 + 0x28) == x8)
    return x19[9]

__stack_chk_fail()
noreturn
