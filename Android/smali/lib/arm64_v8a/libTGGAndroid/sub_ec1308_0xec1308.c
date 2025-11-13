// 函数: sub_ec1308
// 地址: 0xec1308
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg4
std::__ndk1::__tree<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::__map_value_compare<Botan::OID, std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::less<Botan::OID>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info> > >::destroy(
    arg5)
void* x22 = *arg3

if (x22 != 0)
    void** x8_1 = *(arg2 + 0x10)
    void* x0_1 = x22
    
    if (x8_1 != x22)
        void** x24_1 = x8_1
        
        do
            x24_1 = &x24_1[-4]
            *x24_1 = _vtable_for_Botan::OID + 0x10
            void* x0_2 = x24_1[1]
            
            if (x0_2 != 0)
                x8_1[-2] = x0_2
                operator delete(x0_2)
            
            x8_1 = x24_1
        while (x22 != x24_1)
        
        x0_1 = *arg3
    
    *(arg2 + 0x10) = x22
    operator delete(x0_1)

sub_1101e04(arg1)
noreturn
