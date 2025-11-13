// 函数: _ZN5Botan11BER_Decoder10start_consENS_8ASN1_TagES1_
// 地址: 0xcae9bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::BER_Decoder::get_next_object()
char var_68 = 0xc
int32_t var_67
__builtin_strncpy(&var_67, "object", 7)
int64_t var_50
int32_t entry_x2
Botan::BER_Object::assert_is_a(&var_50, zx.q(arg2), zx.q(entry_x2) | 0x20)
int64_t* entry_x8
*entry_x8 = 0
__builtin_memset(entry_x8 + 0xc, 0, 0x1c)
entry_x8[1].d = 0xff00
entry_x8[6] = 0
struct Botan::DataSource::Botan::(anonymous namespace)::DataSource_BERObject::VTable** result
int128_t v0
result, v0 = operator new(0x30)
int64_t x9 = var_50
entry_x8[5] = result
entry_x8[6] = result
*entry_x8 = arg1
*result = &_vtable_for_Botan::(anonymous namespace)::DataSource_BERObject{for `Botan::DataSource'}
result[1] = x9
int128_t var_48
*(result + 0x10) = var_48
int64_t var_38
result[4] = var_38
result[5] = 0
return result
