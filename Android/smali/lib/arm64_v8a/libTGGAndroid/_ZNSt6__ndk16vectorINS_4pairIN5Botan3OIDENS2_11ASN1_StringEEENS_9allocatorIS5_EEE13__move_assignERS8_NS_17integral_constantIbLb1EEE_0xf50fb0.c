// 函数: _ZNSt6__ndk16vectorINS_4pairIN5Botan3OIDENS2_11ASN1_StringEEENS_9allocatorIS5_EEE13__move_assignERS8_NS_17integral_constantIbLb1EEE
// 地址: 0xf50fb0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x21 = *arg1
int64_t* x19 = arg2

if (x21 != 0)
    void* x24_1 = *(arg1 + 8)
    void* x0_3
    
    if (x24_1 == x21)
        x0_3 = x21
    else
        bool cond:0_1
        
        do
            uint32_t x8_1 = zx.d(*(x24_1 - 0x20))
            *(x24_1 - 0x40) = _vtable_for_Botan::ASN1_String + 0x10
            
            if ((x8_1 & 1) != 0)
                operator delete(*(x24_1 - 0x10))
            
            void* x0_1 = *(x24_1 - 0x38)
            
            if (x0_1 != 0)
                *(x24_1 - 0x30) = x0_1
                operator delete(x0_1)
            
            void* x0_2 = *(x24_1 - 0x58)
            *(x24_1 - 0x60) = _vtable_for_Botan::OID + 0x10
            
            if (x0_2 != 0)
                *(x24_1 - 0x50) = x0_2
                operator delete(x0_2)
            
            cond:0_1 = x21 == x24_1 - 0x60
            x24_1 -= 0x60
        while (not(cond:0_1))
        x0_3 = *arg1
    
    *(arg1 + 8) = x21
    operator delete(x0_3)
    __builtin_memset(arg1, 0, 0x18)

*arg1 = *x19
*(arg1 + 8) = x19[1]
*(arg1 + 0x10) = x19[2]
__builtin_memset(x19, 0, 0x18)
