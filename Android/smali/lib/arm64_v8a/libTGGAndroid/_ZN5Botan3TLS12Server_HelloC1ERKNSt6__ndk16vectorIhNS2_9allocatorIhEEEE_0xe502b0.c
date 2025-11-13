// 函数: _ZN5Botan3TLS12Server_HelloC1ERKNSt6__ndk16vectorIhNS2_9allocatorIhEEEE
// 地址: 0xe502b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
v0.q = 0
v0:8.q = 0
*(arg1 + 8) = 0
*arg1 = _vtable_for_Botan::TLS::Server_Hello + 0x10
*(arg1 + 0x10) = zx.o(0)
*(arg1 + 0x50) = 0
*(arg1 + 0x48) = arg1 + 0x50
*(arg1 + 0x58) = 0
*(arg1 + 0x20) = zx.o(0)
*(arg1 + 0x30) = zx.o(0)
int128_t var_70
int64_t* entry_x1

if (entry_x1[1] - *entry_x1 u<= 0x25)
    void** x0_11 = __cxa_allocate_exception(0x20, v0)
    int64_t x0_12
    int128_t v0_2
    x0_12, v0_2 = operator new(0x20)
    int64_t var_60_6 = x0_12
    var_70 = data_71c370
    __builtin_strncpy(x0_12, "Server_Hello: Packet corrupted", 0x1f)
    *x0_11 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_11[1])
    *x0_11 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_11, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

var_70.q = "ServerHello"
var_70:8.q = entry_x1
int64_t var_60 = 0
Botan::TLS::TLS_Data_Reader::assert_at_least(&var_70)
char x21 = (*var_70:8.q)[var_60]
Botan::TLS::TLS_Data_Reader::assert_at_least(&var_70)
*(arg1 + 8) = zx.w((*var_70:8.q)[var_60 + 1]) | (zx.d(x21) << 8).w
Botan::TLS::TLS_Data_Reader::assert_at_least(&var_70)
char* x0_3 = operator new(0x20)
int64_t* x9_4 = var_70:8.q
__builtin_memset(x0_3, 0, 0x20)
*x0_3 = (*x9_4)[var_60 + 2]
x0_3[1] = *(*x9_4 + var_60 + 2 + 1)
x0_3[2] = *(*x9_4 + var_60 + 2 + 2)
x0_3[3] = *(*x9_4 + var_60 + 2 + 3)
x0_3[4] = *(*x9_4 + var_60 + 2 + 4)
x0_3[5] = *(*x9_4 + var_60 + 2 + 5)
x0_3[6] = *(*x9_4 + var_60 + 2 + 6)
x0_3[7] = *(*x9_4 + var_60 + 2 + 7)
x0_3[8] = *(*x9_4 + var_60 + 2 + 8)
x0_3[9] = *(*x9_4 + var_60 + 2 + 9)
x0_3[0xa] = *(*x9_4 + var_60 + 2 + 0xa)
x0_3[0xb] = *(*x9_4 + var_60 + 2 + 0xb)
x0_3[0xc] = *(*x9_4 + var_60 + 2 + 0xc)
x0_3[0xd] = *(*x9_4 + var_60 + 2 + 0xd)
x0_3[0xe] = *(*x9_4 + var_60 + 2 + 0xe)
x0_3[0xf] = *(*x9_4 + var_60 + 2 + 0xf)
x0_3[0x10] = *(*x9_4 + var_60 + 2 + 0x10)
x0_3[0x11] = *(*x9_4 + var_60 + 2 + 0x11)
x0_3[0x12] = *(*x9_4 + var_60 + 2 + 0x12)
x0_3[0x13] = *(*x9_4 + var_60 + 2 + 0x13)
x0_3[0x14] = *(*x9_4 + var_60 + 2 + 0x14)
x0_3[0x15] = *(*x9_4 + var_60 + 2 + 0x15)
x0_3[0x16] = *(*x9_4 + var_60 + 2 + 0x16)
x0_3[0x17] = *(*x9_4 + var_60 + 2 + 0x17)
x0_3[0x18] = *(*x9_4 + var_60 + 2 + 0x18)
x0_3[0x19] = *(*x9_4 + var_60 + 2 + 0x19)
x0_3[0x1a] = *(*x9_4 + var_60 + 2 + 0x1a)
x0_3[0x1b] = *(*x9_4 + var_60 + 2 + 0x1b)
x0_3[0x1c] = *(*x9_4 + var_60 + 2 + 0x1c)
x0_3[0x1d] = *(*x9_4 + var_60 + 2 + 0x1d)
x0_3[0x1e] = *(*x9_4 + var_60 + 2 + 0x1e)
x0_3[0x1f] = *(*x9_4 + var_60 + 2 + 0x1f)
void* x0_4 = *(arg1 + 0x28)

if (x0_4 != 0)
    *(arg1 + 0x30) = x0_4
    operator delete(x0_4)
    __builtin_memset(arg1 + 0x28, 0, 0x18)

*(arg1 + 0x28) = x0_3
*(arg1 + 0x30) = &x0_3[0x20]
*(arg1 + 0x38) = &x0_3[0x20]
Botan::TLS::TLS_Data_Reader::get_range<uint8_t>(&var_70, 1, 0)
void* x0_6 = *(arg1 + 0x10)

if (x0_6 != 0)
    *(arg1 + 0x18) = x0_6
    operator delete(x0_6)
    __builtin_memset(arg1 + 0x10, 0, 0x18)

int128_t var_90
*(arg1 + 0x10) = var_90
int64_t var_80
*(arg1 + 0x20) = var_80
Botan::TLS::TLS_Data_Reader::assert_at_least(&var_70)
*(arg1 + 0x40) = (_byteswap(zx.d(*(*var_70:8.q + var_60 + 0x22))) u>> 0x10).w
Botan::TLS::TLS_Data_Reader::assert_at_least(&var_70)
int64_t var_60_5 = var_60 + 0x25
*(arg1 + 0x42) = (*var_70:8.q)[var_60 + 0x24]
return Botan::TLS::Extensions::deserialize(arg1 + 0x48, &var_70)
