// 函数: sub_f1ea74
// 地址: 0xf1ea74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x20 = arg2
arg2 = nullptr

if (x20 != 0)
    if (zx.d(arg3) != 0)
        uint32_t x8_2 = zx.d(*(x20 + 0x60))
        *(x20 + 0x40) = _vtable_for_Botan::ASN1_String + 0x10
        
        if ((x8_2 & 1) != 0)
            operator delete(*(x20 + 0x70))
        
        void* x0_1 = *(x20 + 0x48)
        
        if (x0_1 != 0)
            *(x20 + 0x50) = x0_1
            operator delete(x0_1)
        
        void* x0_2 = *(x20 + 0x28)
        *(x20 + 0x20) = _vtable_for_Botan::OID + 0x10
        
        if (x0_2 != 0)
            *(x20 + 0x30) = x0_2
            operator delete(x0_2)
    
    operator delete(x20)

sub_1101e04(arg1)
noreturn
