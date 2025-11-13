// 函数: sub_eff8fc
// 地址: 0xeff8fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** x0 = operator new(0x1f8)
char var_68 = 6
int32_t var_67 = 0x776152
*x0 = _vtable_for_Botan::PK_Ops::Key_Agreement_with_KDF + 0x10
x0[1] = 0

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        &var_68, 0, -ffffffffffffffff, 0x75cb1e) != 0)
    int64_t x0_4 = Botan::get_kdf(&var_68)
    int64_t* x0_5 = x0[1]
    x0[1] = x0_4
    
    if (x0_5 != 0)
        (*(*x0_5 + 8))()

void* var_58

if ((zx.d(var_68) & 1) != 0)
    operator delete(var_58)
*x0 = &_vtable_for_Botan::(anonymous namespace)::ECIES_ECDH_KA_Operation{for `Botan::PK_Ops::Key_Agreement_with_KDF'}
int64_t x8_5 = *(arg1 + 0x128)
x0[0x26] = construction_vtable_for_Botan::EC_PublicKey-in-Botan::EC_PrivateKey + 0x88
x0[0x27] = x8_5
int64_t x8_6 = *(arg1 + 0x130)
x0[0x28] = x8_6

if (x8_6 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(x8_6 + 8) + 1, x8_6 + 8)
    while (i != 0)

Botan::PointGFp::PointGFp(&x0[0x29])
int64_t x8_8 = *(arg1 + 0x1c0)
x0[2] = &_vtable_for_Botan::EC_PrivateKey
x0[0x26] = &_vtable_for_Botan::EC_PrivateKey
x0[0x3a] = x8_8
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(&x0[3])
x0[6] = *(arg1 + 0x20)
int32_t x8_10 = *(arg1 + 0x28)
x0[0x26] = &_vtable_for_Botan::(anonymous namespace)::ECIES_PrivateKey
x0[2] = &_vtable_for_Botan::(anonymous namespace)::ECIES_PrivateKey{for `Botan::EC_PrivateKey'}
x0[8] =
    &_vtable_for_Botan::(anonymous namespace)::ECIES_PrivateKey{for `Botan::PK_Key_Agreement_Key'}
x0[7].d = x8_10
int64_t result = Botan::ECDH_PrivateKey::ECDH_PrivateKey(&x0[9])
x0[0x3b] = arg2
__builtin_memset(&x0[0x3c], 0, 0x18)
*arg3 = x0
return result
