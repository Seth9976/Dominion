// 函数: _ZN5Botan7X509_DN13add_attributeERKNS_3OIDERKNSt6__ndk112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE
// 地址: 0xeab9ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_50 = 0
int64_t var_48 = 0
void* __offset(vtable_for_Botan::ASN1_String, 0x10) var_60 = _vtable_for_Botan::ASN1_String + 0x10
char var_40
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_40)
uint64_t x8 = zx.q(var_40)
void* var_30
int32_t x8_3

if ((x8.d & 1) != 0)
    int64_t var_38
    int64_t x8_2 = var_38
    void* x9_2 = var_30
    uint64_t x11_3
    
    do
        if (x8_2 == 0)
            goto label_eaba40
        
        x11_3 = zx.q(*x9_2)
        x9_2 += 1
        x8_2 -= 1
    while (zx.d(*(&data_84a2f8 + x11_3)) != 0)
else
    uint64_t x8_1 = x8 u>> 1
    void var_3f
    void* x9_1 = &var_3f
    uint64_t x11_1
    
    do
        if (x8_1 == 0)
        label_eaba40:
            x8_3 = 0x13
            goto label_eaba44
        
        x11_1 = zx.q(*x9_1)
        x9_1 += 1
        x8_1 -= 1
    while (zx.d(*(&data_84a2f8 + x11_1)) != 0)

x8_3 = 0xc
label_eaba44:
int32_t var_28 = x8_3
Botan::X509_DN::add_attribute(arg1, arg2)
void* __offset(vtable_for_Botan::ASN1_String, 0x10) var_60_1 = _vtable_for_Botan::ASN1_String + 0x10

if ((zx.d(var_40) & 1) != 0)
    operator delete(var_30)

return 0
