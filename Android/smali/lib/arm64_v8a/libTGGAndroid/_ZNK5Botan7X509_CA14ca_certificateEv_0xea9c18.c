// 函数: _ZNK5Botan7X509_CA14ca_certificateEv
// 地址: 0xea9c18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x8
int64_t result = Botan::X509_Object::X509_Object(entry_x8)
*entry_x8 = _vtable_for_Botan::X509_Certificate + 0x10
void* entry_x0
int64_t x8_1 = *(entry_x0 + 0xc0)
entry_x8[0xf] = *(entry_x0 + 0xb8)
entry_x8[0x10] = x8_1

if (x8_1 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(x8_1 + 8) + 1, x8_1 + 8)
    while (i != 0)

return result
