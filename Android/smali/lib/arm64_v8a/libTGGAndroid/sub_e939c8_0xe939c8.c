// 函数: sub_e939c8
// 地址: 0xe939c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg4) & 1) != 0)
    operator delete(arg5)

void* x0_1 = arg2[4]
*arg2 = _vtable_for_Botan::X509_DN + 0x10
void* x20

if (x0_1 != 0)
    arg2[5] = x0_1
    operator delete(x0_1)
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
void* x0_3 = x20

if (x22 != x20)
    bool cond:0_1
    
    do
        uint32_t x8_3 = zx.d(*(x22 - 0x20))
        *(x22 - 0x40) = _vtable_for_Botan::ASN1_String + 0x10
        
        if ((x8_3 & 1) != 0)
            operator delete(*(x22 - 0x10))
        
        void* x0_5 = *(x22 - 0x38)
        
        if (x0_5 != 0)
            *(x22 - 0x30) = x0_5
            operator delete(x0_5)
        
        void* x0_6 = *(x22 - 0x58)
        *(x22 - 0x60) = _vtable_for_Botan::OID + 0x10
        
        if (x0_6 != 0)
            *(x22 - 0x50) = x0_6
            operator delete(x0_6)
        
        cond:0_1 = x20 == x22 - 0x60
        x22 -= 0x60
    while (not(cond:0_1))
    x0_3 = *arg3

arg2[2] = x20
operator delete(x0_3)
sub_1101e04(arg1)
noreturn
