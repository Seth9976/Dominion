// 函数: _ZN5Botan11ASN1_StringC1ERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xcb58c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
*arg1 = _vtable_for_Botan::ASN1_String + 0x10
*(arg1 + 8) = 0
int64_t result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    arg1 + 0x20)
uint64_t x8_1 = zx.q(*(arg1 + 0x20))

if ((x8_1.d & 1) != 0)
    int64_t x8_3 = *(arg1 + 0x28)
    char* x9_1 = *(arg1 + 0x30)
    uint64_t x11_3
    
    do
        if (x8_3 == 0)
            goto label_cb5958
        
        x11_3 = zx.q(*x9_1)
        x9_1 = &x9_1[1]
        x8_3 -= 1
    while (zx.d(*(&data_84a2f8 + x11_3)) != 0)
else
    uint64_t x8_2 = x8_1 u>> 1
    void* __offset(
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
        0x21) x9 = arg1 + 0x21
    uint64_t x11_1
    
    do
        if (x8_2 == 0)
        label_cb5958:
            *(arg1 + 0x38) = 0x13
            return result
        
        x11_1 = zx.q(*x9)
        x9 += 1
        x8_2 -= 1
    while (zx.d(*(&data_84a2f8 + x11_1)) != 0)

*(arg1 + 0x38) = 0xc
return result
