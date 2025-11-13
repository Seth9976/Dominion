// 函数: sub_e47f80
// 地址: 0xe47f80
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg12 != 0)
    int64_t* x8_1 = arg13
    int64_t* x0 = arg12
    
    if (x8_1 != arg12)
        int64_t* x24_1 = x8_1
        
        do
            x24_1 = &x24_1[-3]
            void* x0_1 = *x24_1
            
            if (x0_1 != 0)
                x8_1[-2] = x0_1
                operator delete(x0_1)
            
            x8_1 = x24_1
        while (arg12 != x24_1)
        
        x0 = arg12
    
    arg13 = arg12
    operator delete(x0)

if (arg3 != 0)
    operator delete(arg5)

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
