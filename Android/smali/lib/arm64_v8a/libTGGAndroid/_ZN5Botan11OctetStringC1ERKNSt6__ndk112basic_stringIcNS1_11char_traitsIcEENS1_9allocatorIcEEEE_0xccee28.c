// 函数: _ZN5Botan11OctetStringC1ERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xccee28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = 0
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
char* entry_x1
uint64_t x8 = zx.q(*entry_x1)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const
    & x19 = arg1

if ((x8.d & 1) != 0)
    if (*(entry_x1 + 8) != 0)
    label_ccee6c:
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(x19)
        uint64_t x8_3 = zx.q(*entry_x1)
        int32_t temp0_1 = x8_3.d & 1
        void* x1_1
        
        if (temp0_1 != 0)
            x1_1 = *(entry_x1 + 0x10)
        else
            x1_1 = &entry_x1[1]
        
        uint64_t x2_1
        
        if (temp0_1 == 0)
            x2_1 = x8_3 u>> 1
        else
            x2_1 = *(entry_x1 + 8)
        
        arg1 = Botan::hex_decode(*x19, x1_1, x2_1, true)
        void* x8_4 = *x19
        void* x9_3 = *(x19 + 8) - x8_4
        
        if (arg1 u> x9_3)
            std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(x19)
        else if (arg1 u< x9_3)
            *(x19 + 8) = x8_4 + arg1
else if (x8.d u>= 2)
    goto label_ccee6c
