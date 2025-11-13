// 函数: _ZN5Botan7X509_DND0Ev
// 地址: 0xedba44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x0 = entry_x0[4]
*entry_x0 = _vtable_for_Botan::X509_DN + 0x10

if (x0 != 0)
    entry_x0[5] = x0
    operator delete(x0)

void* x20 = entry_x0[1]

if (x20 != 0)
    void* x23_1 = entry_x0[2]
    void* x0_4
    
    if (x23_1 == x20)
        x0_4 = x20
    else
        bool cond:0_1
        
        do
            uint32_t x8_1 = zx.d(*(x23_1 - 0x20))
            *(x23_1 - 0x40) = _vtable_for_Botan::ASN1_String + 0x10
            
            if ((x8_1 & 1) != 0)
                operator delete(*(x23_1 - 0x10))
            
            void* x0_2 = *(x23_1 - 0x38)
            
            if (x0_2 != 0)
                *(x23_1 - 0x30) = x0_2
                operator delete(x0_2)
            
            void* x0_3 = *(x23_1 - 0x58)
            *(x23_1 - 0x60) = _vtable_for_Botan::OID + 0x10
            
            if (x0_3 != 0)
                *(x23_1 - 0x50) = x0_3
                operator delete(x0_3)
            
            cond:0_1 = x20 == x23_1 - 0x60
            x23_1 -= 0x60
        while (not(cond:0_1))
        x0_4 = entry_x0[1]
    
    entry_x0[2] = x20
    operator delete(x0_4)

return operator delete(entry_x0) __tailcall
