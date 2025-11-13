// 函数: _ZN5Botan15ECDH_PrivateKeyD0Ev
// 地址: 0xedd794
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t (** entry_x0)()
void* x0 = entry_x0[2]
entry_x0[8] = construction_vtable_for_Botan::EC_PrivateKey-in-Botan::ECDH_PrivateKey + 0x208
*entry_x0 = construction_vtable_for_Botan::EC_PrivateKey-in-Botan::ECDH_PrivateKey + 0x300
entry_x0[1] = construction_vtable_for_Botan::EC_PrivateKey-in-Botan::ECDH_PrivateKey + 0xd0

if (x0 != 0)
    int64_t x8_1 = entry_x0[4]
    entry_x0[3] = x0
    Botan::deallocate_memory(x0, (x8_1 - x0) s>> 2, 4)

entry_x0[8] = construction_vtable_for_Botan::EC_PublicKey-in-Botan::ECDH_PrivateKey + 0x88
*entry_x0 = construction_vtable_for_Botan::EC_PublicKey-in-Botan::ECDH_PrivateKey + 0x180
Botan::PointGFp::~PointGFp()
int64_t* x20 = entry_x0[0xa]

if (x20 != 0)
    int64_t x9_2
    int32_t i
    
    do
        x9_2 = __ldaxr(&x20[1])
        i = __stlxr(x9_2 - 1, &x20[1])
    while (i != 0)
    
    if (x9_2 == 0)
        (*(*x20 + 0x10))(x20)
        std::__ndk1::__shared_weak_count::__release_weak()
        return operator delete(entry_x0) __tailcall

return operator delete(entry_x0) __tailcall
