// 函数: _ZN5Botan11DER_Encoder10add_objectENS_8ASN1_TagES1_RKNSt6__ndk112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE
// 地址: 0xcb5ce8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x3
*(entry_x3 + 8)
void* x3

if ((zx.d(*entry_x3) & 1) != 0)
    x3 = *(entry_x3 + 0x10)
else
    x3 = &entry_x3[1]

return Botan::DER_Encoder::add_object(arg1, arg2, arg3, x3) __tailcall
