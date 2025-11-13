// 函数: _ZTv0_n24_N5Botan19McEliece_PrivateKeyD1Ev
// 地址: 0xda1170
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x19 = arg1 + *(*arg1 - 0x18)
void* x0 = *(x19 + 0x50)
*(x19 + 0x78) = _vtable_for_Botan::McEliece_PrivateKey + 0x208
*x19 = _vtable_for_Botan::McEliece_PrivateKey + 0xd0

if (x0 != 0)
    *(x19 + 0x58) = x0
    operator delete(x0)

void* x0_1 = *(x19 + 0x38)

if (x0_1 != 0)
    *(x19 + 0x40) = x0_1
    operator delete(x0_1)

std::__ndk1::__vector_base<Botan::polyn_gf2m, std::__ndk1::allocator<Botan::polyn_gf2m> >::~__vector_base()
std::__ndk1::__vector_base<Botan::polyn_gf2m, std::__ndk1::allocator<Botan::polyn_gf2m> >::~__vector_base()
void* result = *(x19 + 0x80)
*(x19 + 0x78) =
    construction_vtable_for_Botan::McEliece_PublicKey-in-Botan::McEliece_PrivateKey + 0x88

if (result == 0)
    return result

*(x19 + 0x88) = result
return operator delete(result) __tailcall
