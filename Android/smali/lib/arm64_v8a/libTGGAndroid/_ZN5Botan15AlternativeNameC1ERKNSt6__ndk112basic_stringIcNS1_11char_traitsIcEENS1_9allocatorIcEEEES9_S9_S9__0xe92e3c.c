// 函数: _ZN5Botan15AlternativeNameC1ERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_S9_S9_
// 地址: 0xe92e3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::AlternativeName + 0x10
*(arg1 + 0x10) = 0
*(arg1 + 8) = arg1 + 0x10
*(arg1 + 0x18) = 0
*(arg1 + 0x28) = 0
*(arg1 + 0x20) = arg1 + 0x28
*(arg1 + 0x30) = 0
char var_68 = 0xc
int32_t var_67
__builtin_strncpy(&var_67, "RFC822", 7)
Botan::AlternativeName::add_attribute(arg1, &var_68)
void* var_58

if ((zx.d(var_68) & 1) != 0)
    operator delete(var_58)

var_68 = 6
int32_t var_67_1 = 0x534e44
Botan::AlternativeName::add_attribute(arg1, &var_68)

if ((zx.d(var_68) & 1) != 0)
    operator delete(var_58)

var_68 = 6
int32_t var_67_2 = 0x495255
Botan::AlternativeName::add_attribute(arg1, &var_68)

if ((zx.d(var_68) & 1) != 0)
    operator delete(var_58)

var_68 = 4
var_67_2.w = 0x5049
var_67_2:2.b = 0
int64_t result = Botan::AlternativeName::add_attribute(arg1, &var_68)

if ((zx.d(var_68) & 1) == 0)
    return result

return operator delete(var_58)
