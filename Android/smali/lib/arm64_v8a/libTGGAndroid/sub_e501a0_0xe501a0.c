// 函数: sub_e501a0
// 地址: 0xe501a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x22 = *(arg5 + 8)
*(arg5 + 0x10) = arg6
void* x0_2

if (x22 == 0)
    x0_2 = arg5
else
    void* x0 = x22
    
    if (x22 != arg6)
        char* x24_1 = arg6
        
        do
            x24_1 = &x24_1[-0x18]
            
            if ((zx.d(*x24_1) & 1) != 0)
                operator delete(*(arg6 - 8))
            
            arg6 = x24_1
        while (x22 != x24_1)
        
        x0 = *arg4
    
    *(arg5 + 0x10) = x22
    operator delete(x0)
    x0_2 = arg5

operator delete(x0_2)
*arg2
std::__ndk1::__tree<std::__ndk1::__value_type<Botan::TLS::Handshake_Extension_Type, std::__ndk1::unique_ptr<Botan::TLS::Extension, std::__ndk1::default_delete<Botan::TLS::Extension> > >, std::__ndk1::__map_value_compare<Botan::TLS::Handshake_Extension_Type, std::__ndk1::__value_type<Botan::TLS::Handshake_Extension_Type, std::__ndk1::unique_ptr<Botan::TLS::Extension, std::__ndk1::default_delete<Botan::TLS::Extension> > >, std::__ndk1::less<Botan::TLS::Handshake_Extension_Type>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::TLS::Handshake_Extension_Type, std::__ndk1::unique_ptr<Botan::TLS::Extension, std::__ndk1::default_delete<Botan::TLS::Extension> > > > >::destroy(
    arg9)
void* x0_4 = *arg7

if (x0_4 != 0)
    *(arg3 + 0x30) = x0_4
    operator delete(x0_4)

void* x0_5 = *arg8

if (x0_5 != 0)
    *(arg3 + 0x18) = x0_5
    operator delete(x0_5)

sub_1101e04(arg1)
noreturn
