// 函数: _ZNK5Botan19ASN1_Pretty_Printer10format_binENS_8ASN1_TagES1_RKNSt6__ndk16vectorIhNS2_9allocatorIhEEEE
// 地址: 0xcb5580
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x3
uint8_t* x21 = *entry_x3
int64_t x9 = entry_x3[1]
uint64_t x19 = x9 - x21
void* x20_1
char* entry_x8

if (x9 == x21)
    *entry_x8 = 0
    x20_1 = &entry_x8[1]
else
    int64_t x9_1 = 0
    
    do
        int32_t x10_1 = sx.d(x21[x9_1])
        
        if ((x10_1 & 0x80000000) != 0)
            return Botan::hex_encode(x21, x19, true) __tailcall
        
        uint64_t x10_2 = zx.q(x10_1.b)
        
        if ((zx.d(*(x10_2 + *_ctype_ + 1)) & 7) == 0 && x10_2.d - 0x2d u>= 3 && x10_2.d != 0x3a)
            return Botan::hex_encode(x21, x19, true) __tailcall
        
        x9_1 += 1
    while (x19 != x9_1)
    
    if (x19 u>= -0x10)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            * x0_6
        int64_t x1_3
        x0_6, x1_3 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
        return Botan::ASN1_String::ASN1_String(x0_6, x1_3) __tailcall
    
    if (x19 u>= 0x17)
        uint64_t x22_1 = (x19 + 0x10) & 0xfffffffffffffff0
        void* x0_3 = operator new(x22_1)
        *(entry_x8 + 8) = x19
        *(entry_x8 + 0x10) = x0_3
        *entry_x8 = x22_1 | 1
        x20_1 = x0_3
    else
        *entry_x8 = (x19.d << 1).b
        x20_1 = &entry_x8[1]
    
    memcpy(x20_1, x21, x19)
*(x20_1 + x19) = 0
