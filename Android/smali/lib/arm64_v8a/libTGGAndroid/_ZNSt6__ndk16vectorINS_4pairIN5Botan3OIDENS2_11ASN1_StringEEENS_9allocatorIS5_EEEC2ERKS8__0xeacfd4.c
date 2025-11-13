// 函数: _ZNSt6__ndk16vectorINS_4pairIN5Botan3OIDENS2_11ASN1_StringEEENS_9allocatorIS5_EEEC2ERKS8_
// 地址: 0xeacfd4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = 0
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
int64_t* entry_x1
int64_t x9 = *entry_x1
int64_t x8 = entry_x1[1]
uint64_t result = x8 - x9

if (x8 == x9)
    return result

int64_t x21_1 = (result s>> 5) * -0x5555555555555555

if (x21_1 u< 0x2aaaaaaaaaaaaab)
    int64_t x0 = operator new(result)
    *arg1 = x0
    *(arg1 + 8) = x0
    *(arg1 + 0x10) = x0 + x21_1 * 0x60
    return std::__ndk1::vector<std::__ndk1::pair<Botan::OID, Botan::ASN1_String>, std::__ndk1::allocator<std::__ndk1::pair<Botan::OID, Botan::ASN1_String> > >::__construct_at_end<std::__ndk1::pair<Botan::OID, Botan::ASN1_String>*>(
        arg1, *entry_x1, entry_x1[1])

int64_t* x0_3 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
void* x21_2 = *arg1

if (x21_2 != 0)
    void* x22_1 = *(arg1 + 8)
    void* x0_4 = x21_2
    
    if (x22_1 != x21_2)
        bool cond:0_1
        
        do
            uint32_t x8_3 = zx.d(*(x22_1 - 0x20))
            *(x22_1 - 0x40) = _vtable_for_Botan::ASN1_String + 0x10
            
            if ((x8_3 & 1) != 0)
                operator delete(*(x22_1 - 0x10))
            
            void* x0_6 = *(x22_1 - 0x38)
            
            if (x0_6 != 0)
                *(x22_1 - 0x30) = x0_6
                operator delete(x0_6)
            
            void* x0_7 = *(x22_1 - 0x58)
            *(x22_1 - 0x60) = _vtable_for_Botan::OID + 0x10
            
            if (x0_7 != 0)
                *(x22_1 - 0x50) = x0_7
                operator delete(x0_7)
            
            cond:0_1 = x21_2 == x22_1 - 0x60
            x22_1 -= 0x60
        while (not(cond:0_1))
        x0_4 = *arg1
    
    *(arg1 + 8) = x21_2
    operator delete(x0_4)

sub_1101e04(x0_3)
noreturn
