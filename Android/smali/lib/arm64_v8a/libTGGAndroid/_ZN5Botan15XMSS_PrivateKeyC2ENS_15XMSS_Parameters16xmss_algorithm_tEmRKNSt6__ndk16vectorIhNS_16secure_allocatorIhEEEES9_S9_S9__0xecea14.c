// 函数: _ZN5Botan15XMSS_PrivateKeyC2ENS_15XMSS_Parameters16xmss_algorithm_tEmRKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEES9_S9_S9_
// 地址: 0xecea14
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *arg2
uint64_t x19 = arg1
*arg1 = x8
*(arg1 + *(x8 - 0xc8)) = *(arg2 + 8)
*(arg1 + *(*arg1 - 0x88)) = *(arg2 + 0x10)
*(arg1 + *(*arg1 - 0xd0)) = *(arg2 + 0x18)
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* entry_x7
Botan::XMSS_WOTS_PrivateKey::XMSS_WOTS_PrivateKey(arg1 + 8, zx.q(*(arg1 + 0x1a4)), entry_x7)
Botan::XMSS_Hash::XMSS_Hash(x19 + 0x118)
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::vector(x19 + 0x160)

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
return Botan::XMSS_PrivateKey::set_unused_leaf_index(x19)
