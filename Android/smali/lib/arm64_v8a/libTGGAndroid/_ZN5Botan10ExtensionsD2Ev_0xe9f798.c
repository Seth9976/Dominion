// 函数: _ZN5Botan10ExtensionsD2Ev
// 地址: 0xe9f798
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
entry_x0[5]
*entry_x0 = _vtable_for_Botan::Extensions + 0x10
int64_t result = std::__ndk1::__tree<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::__map_value_compare<Botan::OID, std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::less<Botan::OID>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info> > >::destroy(
    &entry_x0[4])
void* x20 = entry_x0[1]

if (x20 == 0)
    return result

void** x8_1 = entry_x0[2]
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
    
    x0_2 = entry_x0[1]

entry_x0[2] = x20
return operator delete(x0_2) __tailcall
