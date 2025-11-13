// 函数: _ZN5Botan15XMSS_PrivateKeyC2ENS_15XMSS_Parameters16xmss_algorithm_tERNS_21RandomNumberGeneratorE
// 地址: 0xecd5c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *arg2
uint64_t x19 = arg1
*arg1 = x8
*(arg1 + *(x8 - 0xc8)) = *(arg2 + 8)
*(arg1 + *(*arg1 - 0x88)) = *(arg2 + 0x10)
*(arg1 + *(*arg1 - 0xd0)) = *(arg2 + 0x18)
Botan::XMSS_WOTS_PrivateKey::XMSS_WOTS_PrivateKey(arg1 + 8, zx.q(*(arg1 + 0x1a4)), x19 + 0x288)
char var_48
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_48)
Botan::XMSS_Hash::XMSS_Hash(x19 + 0x118)
void* var_38

if ((zx.d(var_48) & 1) != 0)
    operator delete(var_38)
int64_t x1_2 = *(x19 + 0x1d8)
__builtin_memset(x19 + 0x160, 0, 0x18)
int64_t x8_7

if (x1_2 == 0)
    x8_7 = 0
else
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(x19 + 0x160)
    x1_2 = *(x19 + 0x160)
    x8_7 = *(x19 + 0x168)

int64_t* entry_x3
(*(*entry_x3 + 0x10))(entry_x3, x1_2, x8_7 - x1_2)

if ((zx.d(*guard_variable_for_Botan::XMSS_Index_Registry::get_instance()::self) & 1) == 0
        && __cxa_guard_acquire(guard_variable_for_Botan::XMSS_Index_Registry::get_instance()::self)
        != 0)
    *(Botan::XMSS_Index_Registry::get_instance()::self + 0x50) = 0
    *(Botan::XMSS_Index_Registry::get_instance()::self + 0x30) = zx.o(0)
    *(Botan::XMSS_Index_Registry::get_instance()::self + 0x40) = zx.o(0)
    *(Botan::XMSS_Index_Registry::get_instance()::self + 0x10) = zx.o(0)
    *(Botan::XMSS_Index_Registry::get_instance()::self + 0x20) = zx.o(0)
    *Botan::XMSS_Index_Registry::get_instance()::self = zx.o(0)
    __cxa_atexit(Botan::XMSS_Index_Registry::~XMSS_Index_Registry, 
        Botan::XMSS_Index_Registry::get_instance()::self, &data_1122730)
    __cxa_guard_release(guard_variable_for_Botan::XMSS_Index_Registry::get_instance()::self)

*(x19 + 0x178) = Botan::XMSS_Index_Registry::get_instance()::self
__builtin_memset(&var_48, 0, 0x18)
int64_t* x0_6 = Botan::allocate_memory(0x20, 1)
*(x0_6 + 7) = 0
*x0_6 = 0
void* var_40 = &x0_6[4]
var_48.q = x0_6
*(x0_6 + 0xf) = 0xff
x0_6[2] = 0
x0_6[3] = 0
Botan::XMSS_PrivateKey::tree_hash(x19, 0, *(x19 + 0x1e0))
void* x0_8 = *(x19 + 0x270)

if (x0_8 != 0)
    int64_t x8_10 = *(x19 + 0x280)
    *(x19 + 0x278) = x0_8
    Botan::deallocate_memory(x0_8, x8_10 - x0_8, 1)
    __builtin_memset(x19 + 0x270, 0, 0x18)

int128_t var_60
*(x19 + 0x270) = var_60
void* result = var_48.q
int64_t var_50
*(x19 + 0x280) = var_50

if (result == 0)
    return result

void* result_1 = result
return Botan::deallocate_memory(result, &x0_6[4] - result, 1)
