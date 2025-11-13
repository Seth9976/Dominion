// 函数: _ZN5Botan11BER_DecoderC1EONS_10BER_ObjectEPS0_
// 地址: 0xcb8484
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = 0
*(arg1 + 0xc) = 0
*(arg1 + 0x1c) = 0
*(arg1 + 0x14) = 0
*(arg1 + 0x24) = 0
*(arg1 + 8) = 0xff00
*(arg1 + 0x30) = 0
struct Botan::DataSource::Botan::(anonymous namespace)::DataSource_BERObject::VTable** result
int128_t v0
result, v0 = operator new(0x30)
int64_t x8 = *arg2
*result = &_vtable_for_Botan::(anonymous namespace)::DataSource_BERObject{for `Botan::DataSource'}
result[1] = x8
*(result + 0x10) = *(arg2 + 8)
result[4] = *(arg2 + 0x18)
result[5] = 0
__builtin_memset(arg2 + 8, 0, 0x18)
int64_t* x8_2 = *(arg1 + 0x30)
*(arg1 + 0x30) = result

if (x8_2 != 0)
    (*(*x8_2 + 0x38))(x8_2)
    result = *(arg1 + 0x30)

*(arg1 + 0x28) = result
int64_t entry_x2
*arg1 = entry_x2
return result
