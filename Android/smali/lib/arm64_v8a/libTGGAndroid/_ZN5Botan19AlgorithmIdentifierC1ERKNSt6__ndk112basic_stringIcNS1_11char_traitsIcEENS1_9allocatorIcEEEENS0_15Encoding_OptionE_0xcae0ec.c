// 函数: _ZN5Botan19AlgorithmIdentifierC1ERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS0_15Encoding_OptionE
// 地址: 0xcae0ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::AlgorithmIdentifier + 0x10
int64_t x0_1 = Botan::OID::from_string(arg2)
__builtin_memset(arg1 + 0x28, 0, 0x18)
int32_t entry_x2

if (entry_x2 != 0)
    return x0_1

int16_t* x0_2 = operator new(2)
*(arg1 + 0x38) = &x0_2[1]
*x0_2 = 5
*(arg1 + 0x28) = x0_2
*(arg1 + 0x30) = &x0_2[1]
return x0_2
