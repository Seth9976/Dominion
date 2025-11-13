// 函数: _ZN5Botan24Fixed_Exponent_Power_ModC1ERKNS_6BigIntES3_NS_9Power_Mod11Usage_HintsE
// 地址: 0xdd8db8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0_1 = Botan::BigInt::bits()
int64_t x0_3 = Botan::BigInt::bits()
char x8

if (x0_1 u< x0_3 u>> 5)
    x8 = 2
else
    x8 = ((x0_1 u> x0_3 u>> 2 ? 1 : 0) << 2).b

*arg1 = _vtable_for_Botan::Power_Mod + 0x10
*(arg1 + 8) = 0
char entry_x3
Botan::Power_Mod::set_modulus(arg1, arg3, x8 | entry_x3)
*arg1 = _vtable_for_Botan::Fixed_Exponent_Power_Mod + 0x10
return Botan::Power_Mod::set_exponent(arg1)
