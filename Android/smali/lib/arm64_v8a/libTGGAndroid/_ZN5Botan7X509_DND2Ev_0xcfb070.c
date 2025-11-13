// 函数: _ZN5Botan7X509_DND2Ev
// 地址: 0xcfb070
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* result = entry_x0[4]
*entry_x0 = _vtable_for_Botan::X509_DN + 0x10

if (result != 0)
    entry_x0[5] = result
    result = operator delete(result)

void* x20 = entry_x0[1]

if (x20 == 0)
    return result

void* x23 = entry_x0[2]
void* x0_3

if (x23 == x20)
    x0_3 = x20
else
    bool cond:0_1
    
    do
        uint32_t x8_1 = zx.d(*(x23 - 0x20))
        *(x23 - 0x40) = _vtable_for_Botan::ASN1_String + 0x10
        
        if ((x8_1 & 1) != 0)
            operator delete(*(x23 - 0x10))
        
        void* x0_1 = *(x23 - 0x38)
        
        if (x0_1 != 0)
            *(x23 - 0x30) = x0_1
            operator delete(x0_1)
        
        void* x0_2 = *(x23 - 0x58)
        *(x23 - 0x60) = _vtable_for_Botan::OID + 0x10
        
        if (x0_2 != 0)
            *(x23 - 0x50) = x0_2
            operator delete(x0_2)
        
        cond:0_1 = x20 == x23 - 0x60
        x23 -= 0x60
    while (not(cond:0_1))
    x0_3 = entry_x0[1]

entry_x0[2] = x20
return operator delete(x0_3) __tailcall
