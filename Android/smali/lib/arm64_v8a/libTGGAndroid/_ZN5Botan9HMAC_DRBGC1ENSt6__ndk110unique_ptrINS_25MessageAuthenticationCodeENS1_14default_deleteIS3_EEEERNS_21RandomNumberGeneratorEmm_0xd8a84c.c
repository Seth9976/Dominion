// 函数: _ZN5Botan9HMAC_DRBGC1ENSt6__ndk110unique_ptrINS_25MessageAuthenticationCodeENS1_14default_deleteIS3_EEEERNS_21RandomNumberGeneratorEmm
// 地址: 0xd8a84c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x19 = arg1
*arg1 = _vtable_for_Botan::Stateful_RNG + 0x10
std::__ndk1::recursive_mutex::recursive_mutex()
x19[6] = arg3
x19[7] = 0
x19[8] = arg4
x19[9].d = 0
x19[0xa] = 0
*x19 = _vtable_for_Botan::HMAC_DRBG + 0x10
int64_t* x0_1 = *arg2
*arg2 = 0
__builtin_memset(&x19[0xc], 0, 0x18)
x19[0xb] = x0_1
int64_t entry_x4
x19[0xf] = entry_x4
int64_t x0_2 = (**x0_1)()
int64_t x9 = x19[0xb]
int64_t x8_6

if (x0_2 u< 0x20)
    x8_6 = (x0_2 << 3) - 0x20
else
    x8_6 = 0x100

x19[0x10] = x8_6

if (x9 != 0)
    sub_d8a9c4(arg4, entry_x4)
    std::__ndk1::recursive_mutex::lock()
    void* x8_7 = *x19
    x19[0xa] = 0
    x19[9].d = 0
    (*(x8_7 + 0x80))(x19)
    return std::__ndk1::recursive_mutex::unlock() __tailcall

int64_t* x0_8 = Botan::assertion_failure("m_mac is not null", &data_793a18, "HMAC_DRBG", 
    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xaeef)
std::__ndk1::recursive_mutex::unlock()
void* x0_10 = x19[0xc]

if (x0_10 != 0)
    int64_t x8_10 = x19[0xe]
    x19[0xd] = x0_10
    Botan::deallocate_memory(x0_10, x8_10 - x0_10, 1)

int64_t* x0_11 = x19[0xb]
x19[0xb] = 0

if (x0_11 != 0)
    (*(*x0_11 + 0x10))()

*x19 = _vtable_for_Botan::Stateful_RNG + 0x10
std::__ndk1::recursive_mutex::~recursive_mutex()
sub_1101e04(x0_8)
noreturn
