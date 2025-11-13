// 函数: _ZN5Botan15XMSS_PrivateKeyC1ENS_15XMSS_Parameters16xmss_algorithm_tERNS_21RandomNumberGeneratorE
// 地址: 0xdf79cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x180) = _vtable_for_Botan::Public_Key + 0x10
void** x19 = arg1
Botan::XMSS_PublicKey::XMSS_PublicKey(arg1 + 0x180, _VTT_for_Botan::XMSS_PrivateKey + 0x20)
x19[0x30] = _vtable_for_Botan::XMSS_PrivateKey + 0x258
*x19 = _vtable_for_Botan::XMSS_PrivateKey + 0xd0
Botan::XMSS_WOTS_PrivateKey::XMSS_WOTS_PrivateKey(&x19[1], zx.q(*(arg1 + 0x1a4)), &x19[0x51])
char var_58
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_58)
Botan::XMSS_Hash::XMSS_Hash(&x19[0x23])
void* var_48

if ((zx.d(var_58) & 1) != 0)
    operator delete(var_48)
int64_t x1_3 = x19[0x3b]
__builtin_memset(&x19[0x2c], 0, 0x18)
int64_t x8_3

if (x1_3 == 0)
    x8_3 = 0
else
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&x19[0x2c])
    x1_3 = x19[0x2c]
    x8_3 = x19[0x2d]

int64_t* entry_x2
(*(*entry_x2 + 0x10))(entry_x2, x1_3, x8_3 - x1_3)

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

x19[0x2f] = Botan::XMSS_Index_Registry::get_instance()::self
__builtin_memset(&var_58, 0, 0x18)
int64_t* x0_7 = Botan::allocate_memory(0x20, 1)
*(x0_7 + 7) = 0
*x0_7 = 0
void* var_50 = &x0_7[4]
var_58.q = x0_7
*(x0_7 + 0xf) = 0xff
x0_7[2] = 0
x0_7[3] = 0
Botan::XMSS_PrivateKey::tree_hash(x19, 0, x19[0x3c])
void* x0_9 = x19[0x4e]

if (x0_9 != 0)
    int64_t x8_6 = x19[0x50]
    x19[0x4f] = x0_9
    Botan::deallocate_memory(x0_9, x8_6 - x0_9, 1)
    __builtin_memset(&x19[0x4e], 0, 0x18)

int128_t var_70
*(x19 + 0x270) = var_70
void* result = var_58.q
int64_t var_60
x19[0x50] = var_60

if (result == 0)
    return result

void* result_1 = result
return Botan::deallocate_memory(result, &x0_7[4] - result, 1)
