// 函数: sub_ea8d94
// 地址: 0xea8d94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(vtable_for_Botan::Extensions, 0x10) arg_8 = _vtable_for_Botan::Extensions + 0x10
std::__ndk1::__tree<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::__map_value_compare<Botan::OID, std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::less<Botan::OID>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info> > >::destroy(
    arg2 + 0x20)

if (arg3 != 0)
    void** x8_1 = arg4
    void** x0_1 = arg3
    
    if (x8_1 != arg3)
        void** x22_1 = x8_1
        
        do
            x22_1 = &x22_1[-4]
            *x22_1 = _vtable_for_Botan::OID + 0x10
            void* x0_2 = x22_1[1]
            
            if (x0_2 != 0)
                x8_1[-2] = x0_2
                operator delete(x0_2)
            
            x8_1 = x22_1
        while (arg3 != x22_1)
        
        x0_1 = arg3
    
    arg4 = arg3
    operator delete(x0_1)

sub_1101e04(arg1)
noreturn
