// 函数: sub_ea8724
// 地址: 0xea8724
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

operator delete(arg3)
arg2[5]
*arg2 = _vtable_for_Botan::Extensions + 0x10
std::__ndk1::__tree<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::__map_value_compare<Botan::OID, std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::less<Botan::OID>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info> > >::destroy(
    &arg2[4])
void* x21 = arg2[1]

if (x21 != 0)
    void** x8_1 = arg2[2]
    void* x0_2 = x21
    
    if (x8_1 != x21)
        void** x23 = x8_1
        
        do
            x23 = &x23[-4]
            *x23 = _vtable_for_Botan::OID + 0x10
            void* x0_3 = x23[1]
            
            if (x0_3 != 0)
                x8_1[-2] = x0_3
                operator delete(x0_3)
            
            x8_1 = x23
        while (x21 != x23)
        
        x0_2 = arg2[1]
    
    arg2[2] = x21
    operator delete(x0_2)

sub_1101e04(arg1)
noreturn
