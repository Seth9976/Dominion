// 函数: sub_e96db4
// 地址: 0xe96db4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(vtable_for_Botan::X509_DN, 0x10) arg_8 = _vtable_for_Botan::X509_DN + 0x10
void* x20

if (arg4 != 0)
    void* arg_30 = arg4
    operator delete(arg4)
    x20 = arg2
    
    if (x20 == 0)
        sub_1101e04(arg1)
        noreturn
else
    x20 = arg2
    
    if (x20 == 0)
        sub_1101e04(arg1)
        noreturn

void* x21 = arg3
void* x0_2 = x20

if (x21 != x20)
    bool cond:0_1
    
    do
        uint32_t x8_1 = zx.d(*(x21 - 0x20))
        *(x21 - 0x40) = _vtable_for_Botan::ASN1_String + 0x10
        
        if ((x8_1 & 1) != 0)
            operator delete(*(x21 - 0x10))
        
        void* x0_4 = *(x21 - 0x38)
        
        if (x0_4 != 0)
            *(x21 - 0x30) = x0_4
            operator delete(x0_4)
        
        void* x0_5 = *(x21 - 0x58)
        *(x21 - 0x60) = _vtable_for_Botan::OID + 0x10
        
        if (x0_5 != 0)
            *(x21 - 0x50) = x0_5
            operator delete(x0_5)
        
        cond:0_1 = x20 == x21 - 0x60
        x21 -= 0x60
    while (not(cond:0_1))
    x0_2 = arg2

arg3 = x20
operator delete(x0_2)
sub_1101e04(arg1)
noreturn
