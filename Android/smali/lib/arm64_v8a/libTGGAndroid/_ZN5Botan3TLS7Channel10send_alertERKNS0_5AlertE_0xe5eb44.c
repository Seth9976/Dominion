// 函数: _ZN5Botan3TLS7Channel10send_alertERKNS0_5AlertE
// 地址: 0xe5eb44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x1
int32_t x22 = *(entry_x1 + 4)
Botan::TLS::Alert const& x19 = arg1

if (x22 != 0x100)
    if (zx.d(*(x19 + 0xc8)) != 0)
        goto label_e5ebc8
    
    uint32_t x23_1 = zx.d(*entry_x1)
    int16_t* x0 = operator new(2)
    int16_t x8_2
    
    x8_2 = x23_1 != 0 ? 2 : 1
    
    *x0 = x8_2 | (x22 << 8).w
    int64_t* x0_1 = *(x19 + 0x38)
    
    if (x0_1 == 0)
        __cxa_begin_catch(Botan::assertion_failure("m_sequence_numbers", 
            "Have a sequence numbers object", "sequence_numbers", 
            "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x13ded))
        __cxa_end_catch()
        
        if (*(entry_x1 + 4) == 0x64)
            goto label_e5ebd0
    else
        Botan::TLS::Channel::send_record_array(x19.w, (*(*x0_1 + 0x28))(), 0x15, x0)
        operator delete(x0)
    label_e5ebc8:
        
        if (*(entry_x1 + 4) == 0x64)
        label_e5ebd0:
            arg1 = *(x19 + 0x48)
            *(x19 + 0x48) = 0
            
            if (arg1 != 0)
                (*(*arg1 + 8))()

uint32_t x8_17 = zx.d(*entry_x1)

if (x8_17 != 0)
    void* x8_9 = *(x19 + 0x40)
    int64_t* x0_7
    
    if (x8_9 == 0)
        x0_7 = *(x19 + 0x48)
        *(x19 + 0x40) = 0
        *(x19 + 0x48) = 0
        
        if (x0_7 != 0)
            (*(*x0_7 + 8))()
    else
        int64_t* x0_5 = *(x19 + 0x20)
        (*(*x0_5 + 0x10))(x0_5, *(x8_9 + 0x108) + 0x10)
        int64_t* x0_6 = *(x19 + 0x40)
        *(x19 + 0x40) = 0
        
        if (x0_6 != 0)
            (*(*x0_6 + 8))()
        
        x0_7 = *(x19 + 0x48)
        *(x19 + 0x48) = 0
        
        if (x0_7 != 0)
            (*(*x0_7 + 8))()
    *(x19 + 0xa0) = *(x19 + 0x98)
    *(x19 + 0x58)
    std::__ndk1::__tree<std::__ndk1::__value_type<uint16_t, std::__ndk1::shared_ptr<Botan::TLS::Connection_Cipher_State> >, std::__ndk1::__map_value_compare<uint16_t, std::__ndk1::__value_type<uint16_t, std::__ndk1::shared_ptr<Botan::TLS::Connection_Cipher_State> >, std::__ndk1::less<uint16_t>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<uint16_t, std::__ndk1::shared_ptr<Botan::TLS::Connection_Cipher_State> > > >::destroy(
        x19 + 0x50)
    *(x19 + 0x50) = x19 + 0x58
    *(x19 + 0x58) = 0
    *(x19 + 0x70)
    *(x19 + 0x60) = 0
    std::__ndk1::__tree<std::__ndk1::__value_type<uint16_t, std::__ndk1::shared_ptr<Botan::TLS::Connection_Cipher_State> >, std::__ndk1::__map_value_compare<uint16_t, std::__ndk1::__value_type<uint16_t, std::__ndk1::shared_ptr<Botan::TLS::Connection_Cipher_State> >, std::__ndk1::less<uint16_t>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<uint16_t, std::__ndk1::shared_ptr<Botan::TLS::Connection_Cipher_State> > > >::destroy(
        x19 + 0x68)
    *(x19 + 0x68) = x19 + 0x70
    *(x19 + 0x70) = 0
    *(x19 + 0x78) = 0
    x8_17 = zx.d(*entry_x1) != 0 ? 1 : 0

if (*(entry_x1 + 4) != 0 && x8_17 == 0)
    return 

*(x19 + 0xc8) = 1
