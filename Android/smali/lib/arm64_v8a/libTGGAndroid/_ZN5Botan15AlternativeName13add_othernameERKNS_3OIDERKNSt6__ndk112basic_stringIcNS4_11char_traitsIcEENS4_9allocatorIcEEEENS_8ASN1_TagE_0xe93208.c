// 函数: _ZN5Botan15AlternativeName13add_othernameERKNS_3OIDERKNSt6__ndk112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEENS_8ASN1_TagE
// 地址: 0xe93208
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg3)
uint64_t x8_1

if ((x8.d & 1) == 0)
    x8_1 = x8 u>> 1
else
    x8_1 = *(arg3 + 8)

if (x8_1 == 0)
    return 

void* __offset(vtable_for_Botan::ASN1_String, 0x10) var_60
Botan::ASN1_String::ASN1_String(&var_60, arg3)
Botan::multimap_insert<Botan::OID, Botan::ASN1_String>(arg1 + 0x20, arg2, &var_60)
var_60 = _vtable_for_Botan::ASN1_String + 0x10
char var_40
void* var_30

if ((zx.d(var_40) & 1) != 0)
    operator delete(var_30)
Botan::OID* var_58

if (var_58 != 0)
    Botan::OID const& var_50_1 = var_58
    operator delete(var_58)
