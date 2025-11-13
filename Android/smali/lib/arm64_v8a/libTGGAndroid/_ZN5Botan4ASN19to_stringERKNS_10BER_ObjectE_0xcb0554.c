// 函数: _ZN5Botan4ASN19to_stringERKNS_10BER_ObjectE
// 地址: 0xcb0554
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x21 = *(arg1 + 8)
size_t x19 = *(arg1 + 0x10) - x21

if (x19 u>= -0x10)
    return Botan::ASN1::maybe_BER(std::__ndk1::__basic_string_common<true>::__throw_length_error())
        __tailcall

void* x20_1
char* entry_x8

if (x19 u>= 0x17)
    uint64_t x22_1 = (x19 + 0x10) & 0xfffffffffffffff0
    void* x0_1 = operator new(x22_1)
    *(entry_x8 + 8) = x19
    *(entry_x8 + 0x10) = x0_1
    *entry_x8 = x22_1 | 1
    x20_1 = x0_1
    memcpy(x20_1, x21, x19)
else
    *entry_x8 = (x19.d << 1).b
    x20_1 = &entry_x8[1]
    
    if (x19 != 0)
        memcpy(x20_1, x21, x19)
*(x20_1 + x19) = 0
