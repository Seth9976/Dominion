// 函数: sub_e98704
// 地址: 0xe98704
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x19 = *arg1
*arg1 = 0

if (x19 == 0)
    return 

*(x19 + 0x70)
*(x19 + 0x48) = _vtable_for_Botan::Extensions + 0x10
std::__ndk1::__tree<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::__map_value_compare<Botan::OID, std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::less<Botan::OID>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info> > >::destroy(
    x19 + 0x68)
void* x20 = *(x19 + 0x50)

if (x20 != 0)
    void** x8_1 = *(x19 + 0x58)
    void* x0_2
    
    if (x8_1 == x20)
        x0_2 = x20
    else
        void** x22_1 = x8_1
        
        do
            x22_1 = &x22_1[-4]
            *x22_1 = _vtable_for_Botan::OID + 0x10
            void* x0_1 = x22_1[1]
            
            if (x0_1 != 0)
                x8_1[-2] = x0_1
                operator delete(x0_1)
            
            x8_1 = x22_1
        while (x20 != x22_1)
        
        x0_2 = *(x19 + 0x50)
    
    *(x19 + 0x58) = x20
    operator delete(x0_2)

void* x0_3 = *x19

if (x0_3 != 0)
    *(x19 + 8) = x0_3
    operator delete(x0_3)

return operator delete(x19) __tailcall
