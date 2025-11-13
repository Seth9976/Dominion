// 函数: _ZN5Botan15ECDSA_PublicKeyD0Ev
// 地址: 0xeddd64
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t (** entry_x0)()
void* x19 = entry_x0
*entry_x0 = construction_vtable_for_Botan::EC_PublicKey-in-Botan::ECDSA_PublicKey + 0x180
entry_x0[1] = construction_vtable_for_Botan::EC_PublicKey-in-Botan::ECDSA_PublicKey + 0x88
Botan::PointGFp::~PointGFp()
int64_t* x20 = *(x19 + 0x18)

if (x20 != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&x20[1])
        i = __stlxr(x9_1 - 1, &x20[1])
    while (i != 0)
    
    if (x9_1 == 0)
        (*(*x20 + 0x10))(x20)
        std::__ndk1::__shared_weak_count::__release_weak()
        return operator delete(x19) __tailcall

return operator delete(x19) __tailcall
