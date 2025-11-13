// 函数: sub_e47f64
// 地址: 0xe47f64
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg4
std::__ndk1::__tree<std::__ndk1::__value_type<Botan::TLS::Handshake_Extension_Type, std::__ndk1::unique_ptr<Botan::TLS::Extension, std::__ndk1::default_delete<Botan::TLS::Extension> > >, std::__ndk1::__map_value_compare<Botan::TLS::Handshake_Extension_Type, std::__ndk1::__value_type<Botan::TLS::Handshake_Extension_Type, std::__ndk1::unique_ptr<Botan::TLS::Extension, std::__ndk1::default_delete<Botan::TLS::Extension> > >, std::__ndk1::less<Botan::TLS::Handshake_Extension_Type>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::TLS::Handshake_Extension_Type, std::__ndk1::unique_ptr<Botan::TLS::Extension, std::__ndk1::default_delete<Botan::TLS::Extension> > > > >::destroy(
    arg3)
void* x0_1 = *arg5
void* x0_2

if (x0_1 == 0)
    x0_2 = *arg6
    
    if (x0_2 != 0)
        goto label_e48154
    
    goto label_e4811c

*(arg2 + 0x78) = x0_1
operator delete(x0_1)
x0_2 = *arg6
void* x0_3

if (x0_2 != 0)
label_e48154:
    *(arg2 + 0x60) = x0_2
    operator delete(x0_2)
    x0_3 = *arg7
    
    if (x0_3 == 0)
        goto label_e48128
    
    goto label_e48168

label_e4811c:
x0_3 = *arg7
void* x0_4

if (x0_3 == 0)
label_e48128:
    x0_4 = *arg8
    
    if (x0_4 != 0)
        goto label_e4817c
    
    goto label_e48134

label_e48168:
*(arg2 + 0x48) = x0_3
operator delete(x0_3)
x0_4 = *arg8
void* x0_5

if (x0_4 == 0)
label_e48134:
    x0_5 = *arg9
    
    if (x0_5 != 0)
        *(arg2 + 0x18) = x0_5
        operator delete(x0_5)
else
label_e4817c:
    *(arg2 + 0x30) = x0_4
    operator delete(x0_4)
    x0_5 = *arg9
    
    if (x0_5 != 0)
        *(arg2 + 0x18) = x0_5
        operator delete(x0_5)
sub_1101e04(arg1)
noreturn
