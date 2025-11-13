// 函数: _ZN5Botan14Montgomery_Int8mul_by_8ERNSt6__ndk16vectorIjNS_16secure_allocatorIjEEEE
// 地址: 0xdd45d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x30) == 0)
    int64_t x0_3
    Botan::BigInt* x1_3
    uint64_t x2_1
    bool x3
    x0_3, x1_3, x2_1, x3 = Botan::throw_invalid_argument("*this must be positive", "mod_mul", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
    return Botan::Montgomery_Exponentation_State::Montgomery_Exponentation_State(x0_3, x1_3, x2_1, 
        x3) __tailcall

Botan::BigInt::reduce_below(Botan::BigInt::operator*=(arg1.d + 0x10), *arg1)
return arg1
