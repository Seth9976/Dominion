// 函数: sub_e93a30
// 地址: 0xe93a30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::~basic_istream()
std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >::~basic_ios()
void* x0 = arg2[4]
*arg2 = _vtable_for_Botan::X509_DN + 0x10
void* x20

if (x0 != 0)
    arg2[5] = x0
    operator delete(x0)
    x20 = *arg3
    
    if (x20 == 0)
        sub_1101e04(arg1)
        noreturn
else
    x20 = *arg3
    
    if (x20 == 0)
        sub_1101e04(arg1)
        noreturn

void* x22 = arg2[2]
void* x0_2 = x20

if (x22 != x20)
    bool cond:0_1
    
    do
        uint32_t x8_3 = zx.d(*(x22 - 0x20))
        *(x22 - 0x40) = _vtable_for_Botan::ASN1_String + 0x10
        
        if ((x8_3 & 1) != 0)
            operator delete(*(x22 - 0x10))
        
        void* x0_4 = *(x22 - 0x38)
        
        if (x0_4 != 0)
            *(x22 - 0x30) = x0_4
            operator delete(x0_4)
        
        void* x0_5 = *(x22 - 0x58)
        *(x22 - 0x60) = _vtable_for_Botan::OID + 0x10
        
        if (x0_5 != 0)
            *(x22 - 0x50) = x0_5
            operator delete(x0_5)
        
        cond:0_1 = x20 == x22 - 0x60
        x22 -= 0x60
    while (not(cond:0_1))
    x0_2 = *arg3

arg2[2] = x20
operator delete(x0_2)
sub_1101e04(arg1)
noreturn
