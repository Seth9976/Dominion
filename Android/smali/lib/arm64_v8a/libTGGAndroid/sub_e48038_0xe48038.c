// 函数: sub_e48038
// 地址: 0xe48038
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8_10 = *arg5

if (x8_10 != 0)
    *(arg3 + 0x10) = x8_10
    operator delete(x8_10)

if (arg12 != 0)
    void* arg_c0 = arg12
    operator delete(arg12)

operator delete(arg3)
*arg6
std::__ndk1::__tree<std::__ndk1::__value_type<Botan::TLS::Handshake_Extension_Type, std::__ndk1::unique_ptr<Botan::TLS::Extension, std::__ndk1::default_delete<Botan::TLS::Extension> > >, std::__ndk1::__map_value_compare<Botan::TLS::Handshake_Extension_Type, std::__ndk1::__value_type<Botan::TLS::Handshake_Extension_Type, std::__ndk1::unique_ptr<Botan::TLS::Extension, std::__ndk1::default_delete<Botan::TLS::Extension> > >, std::__ndk1::less<Botan::TLS::Handshake_Extension_Type>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::TLS::Handshake_Extension_Type, std::__ndk1::unique_ptr<Botan::TLS::Extension, std::__ndk1::default_delete<Botan::TLS::Extension> > > > >::destroy(
    arg4)
void* x0_4 = *arg7
void* x0_5

if (x0_4 == 0)
    x0_5 = *arg8
    
    if (x0_5 != 0)
        goto label_e48154
    
    goto label_e4811c

*(arg2 + 0x78) = x0_4
operator delete(x0_4)
x0_5 = *arg8
void* x0_6

if (x0_5 != 0)
label_e48154:
    *(arg2 + 0x60) = x0_5
    operator delete(x0_5)
    x0_6 = *arg9
    
    if (x0_6 == 0)
        goto label_e48128
    
    goto label_e48168

label_e4811c:
x0_6 = *arg9
void* x0_7

if (x0_6 == 0)
label_e48128:
    x0_7 = *arg10
    
    if (x0_7 != 0)
        goto label_e4817c
    
    goto label_e48134

label_e48168:
*(arg2 + 0x48) = x0_6
operator delete(x0_6)
x0_7 = *arg10
void* x0_8

if (x0_7 == 0)
label_e48134:
    x0_8 = *arg11
    
    if (x0_8 != 0)
        *(arg2 + 0x18) = x0_8
        operator delete(x0_8)
else
label_e4817c:
    *(arg2 + 0x30) = x0_7
    operator delete(x0_7)
    x0_8 = *arg11
    
    if (x0_8 != 0)
        *(arg2 + 0x18) = x0_8
        operator delete(x0_8)
sub_1101e04(arg1)
noreturn
