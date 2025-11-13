// 函数: _ZN5Botan14ECDH_PublicKeyD1Ev
// 地址: 0xe5a53c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t (** entry_x0)()
*entry_x0 = construction_vtable_for_Botan::EC_PublicKey-in-Botan::ECDH_PublicKey + 0x180
entry_x0[1] = construction_vtable_for_Botan::EC_PublicKey-in-Botan::ECDH_PublicKey + 0x88
int64_t result = Botan::PointGFp::~PointGFp()
int64_t* x19_1 = entry_x0[3]

if (x19_1 != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&x19_1[1])
        i = __stlxr(x9_1 - 1, &x19_1[1])
    while (i != 0)
    
    if (x9_1 == 0)
        (*(*x19_1 + 0x10))(x19_1)
        return std::__ndk1::__shared_weak_count::__release_weak() __tailcall

return result
