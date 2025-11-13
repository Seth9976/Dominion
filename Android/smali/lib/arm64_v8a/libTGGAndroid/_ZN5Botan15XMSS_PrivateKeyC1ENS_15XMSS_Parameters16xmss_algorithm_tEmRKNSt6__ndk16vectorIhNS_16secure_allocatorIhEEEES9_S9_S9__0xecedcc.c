// 函数: _ZN5Botan15XMSS_PrivateKeyC1ENS_15XMSS_Parameters16xmss_algorithm_tEmRKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEES9_S9_S9_
// 地址: 0xecedcc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x180) = _vtable_for_Botan::Public_Key + 0x10
void** x20 = arg1
Botan::XMSS_PublicKey::XMSS_PublicKey(arg1 + 0x180, _VTT_for_Botan::XMSS_PrivateKey + 0x20, 
    zx.q(arg2.d))
x20[0x30] = _vtable_for_Botan::XMSS_PrivateKey + 0x258
*x20 = _vtable_for_Botan::XMSS_PrivateKey + 0xd0
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* entry_x6
Botan::XMSS_WOTS_PrivateKey::XMSS_WOTS_PrivateKey(&x20[1], zx.q(*(arg1 + 0x1a4)), entry_x6)
Botan::XMSS_Hash::XMSS_Hash(&x20[0x23])
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::vector(&x20[0x2c])

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

x20[0x2f] = Botan::XMSS_Index_Registry::get_instance()::self
return Botan::XMSS_PrivateKey::set_unused_leaf_index(x20)
