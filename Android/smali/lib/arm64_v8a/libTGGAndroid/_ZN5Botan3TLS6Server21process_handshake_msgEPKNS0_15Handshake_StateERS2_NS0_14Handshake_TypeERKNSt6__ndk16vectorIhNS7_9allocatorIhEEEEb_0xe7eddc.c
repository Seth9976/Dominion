// 函数: _ZN5Botan3TLS6Server21process_handshake_msgEPKNS0_15Handshake_StateERS2_NS0_14Handshake_TypeERKNSt6__ndk16vectorIhNS7_9allocatorIhEEEEb
// 地址: 0xe7eddc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x24 = arg4.d
int64_t x19 = arg5
std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >* x0_1 = __dynamic_cast(arg3, 
    _typeinfo_for_Botan::TLS::Handshake_State, _typeinfo_for_Botan::TLS::Server_Handshake_State, 0)

if (x0_1 == 0)
    __cxa_bad_cast()
    noreturn

Botan::TLS::Handshake_State::confirm_transition_to(x0_1)

if (x24 == 0xf)
    return Botan::TLS::Server::process_certificate_verify_msg(arg1, x0_1, 0xf)

if (x24 == 0x14)
    return Botan::TLS::Server::process_finished_msg(arg1, x0_1, 0x14) __tailcall

if (x24 != 0xfe)
    int64_t* x0_6 = *(x0_1 + 0x10)
    (*(*x0_6 + 0x20))(x0_6, x19, zx.q(x24))
    void* fp_1 = *(x0_1 + 0xe8)
    void* var_80
    void* x27_1 = var_80
    int64_t x28_1 = *(x0_1 + 0xf0)
    int64_t var_78
    int64_t var_98_1 = var_78
    size_t x22_1 = x28_1 - fp_1
    uint64_t x26_1 = var_78 - x27_1 + x22_1
    
    if (*(x0_1 + 0xf8) - fp_1 u< x26_1)
        int64_t x0_8 = operator new(x26_1)
        x28_1 = x0_8 + x22_1
        
        if (x22_1 s>= 1)
            memcpy(x0_8, fp_1, x22_1)
        
        *(x0_1 + 0xe8) = x0_8
        *(x0_1 + 0xf0) = x28_1
        *(x0_1 + 0xf8) = x0_8 + x26_1
        
        if (fp_1 != 0)
            operator delete(fp_1)
            x28_1 = *(x0_1 + 0xf0)
            x27_1 = var_80
    
    std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::insert<std::__ndk1::__wrap_iter<uint8_t const*> >(
        x0_1 + 0xe8, x28_1, x27_1)
    
    if (var_80 != 0)
        void* var_78_1 = var_80
        operator delete(var_80)
    
    uint64_t x8_7 = zx.q(x24 - 1)
    
    if (x8_7.d u<= 0xf)
        switch (x8_7)
            case 0
                return Botan::TLS::Server::process_client_hello_msg(arg1, arg2, x0_1, x19.b)
            case 0xa
                return Botan::TLS::Server::process_certificate_msg(arg1, x0_1)
            case 0xf
                return Botan::TLS::Server::process_client_key_exchange_msg(arg1, x0_1)
        
        goto label_e7efdc
    
    if (x24 != 0xfe)
    label_e7efdc:
        void** x0_15 = __cxa_allocate_exception(0x28)
        int64_t x0_16
        int128_t v0_1
        x0_16, v0_1 = operator new(0x30)
        v0_1 = data_71d3f0
        int64_t var_70 = x0_16
        __builtin_strncpy(x0_16, "Unknown handshake message received", 0x23)
        var_80.o = v0_1
        *x0_15 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_15[1])
        x0_15[4].d = 0xa
        *x0_15 = _vtable_for_Botan::TLS::Unexpected_Message + 0x10
        __cxa_throw(x0_15, _typeinfo_for_Botan::TLS::Unexpected_Message, 
            Botan::Exception::~Exception)
        noreturn

*(x0_1 + 0x18) |= 0x4000
return Botan::TLS::Channel::change_cipher_spec_reader(arg1)
