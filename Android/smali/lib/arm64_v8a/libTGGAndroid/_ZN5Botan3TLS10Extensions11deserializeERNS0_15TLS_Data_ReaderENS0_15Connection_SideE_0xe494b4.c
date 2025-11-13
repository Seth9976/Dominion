// 函数: _ZN5Botan3TLS10Extensions11deserializeERNS0_15TLS_Data_ReaderENS0_15Connection_SideE
// 地址: 0xe494b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *(arg2 + 8)

if (x8[1] - *x8 == *(arg2 + 0x10))
    return 

uint64_t x20_1 = arg2
Botan::TLS::TLS_Data_Reader::assert_at_least(x20_1)
int64_t* x10_1 = *(x20_1 + 8)
int64_t x11_1 = *(x20_1 + 0x10)
uint64_t x12_1 = zx.q(*(*x10_1 + x11_1))
*(x20_1 + 0x10) = x11_1 + 2
int64_t x9_2 = *x10_1
int64_t x10_2 = x10_1[1]

if (x10_2 - (x11_1 + x9_2) - 2 != _byteswap(x12_1 << 0x30))
    void** x0_26 = __cxa_allocate_exception(0x20)
    char var_80_1
    __builtin_strncpy(&var_80_1, "$Bad extension size", 0x14)
    *x0_26 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_26[1])
    *x0_26 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_26, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

if (x10_2 - x9_2 == x11_1 + 2)
    return 

int64_t* x8_6

do
    Botan::TLS::TLS_Data_Reader::assert_at_least(x20_1)
    int64_t x9_5 = *(x20_1 + 0x10)
    uint32_t x8_11 = zx.d(*(**(x20_1 + 8) + x9_5))
    *(x20_1 + 0x10) = x9_5 + 2
    int32_t temp0_2 = _byteswap(x8_11 << 0x10)
    Botan::TLS::TLS_Data_Reader::assert_at_least(x20_1)
    int64_t x9_7 = *(x20_1 + 0x10)
    uint64_t x8_15 = zx.q(*(**(x20_1 + 8) + x9_7))
    *(x20_1 + 0x10) = x9_7 + 2
    void* i = *(arg1 + 8)
    
    if (i != 0)
        void* __offset(Botan::TLS::TLS_Data_Reader, 0x8) i_1 = arg1 + 8
        
        do
            int32_t x11_5 = *(i + 0x20)
            
            if (x11_5 s>= temp0_2)
                i_1 = i
            
            i = *(i + (zx.q(x11_5 s< temp0_2 ? 1 : 0) << 3))
        while (i != 0)
        
        if (i_1 != arg1 + 8 && *(i_1 + 0x20) s<= temp0_2)
            void** x0_22 = __cxa_allocate_exception(0x28)
            int64_t x0_23
            int128_t v0
            x0_23, v0 = operator new(0x20)
            int128_t var_7f
            var_7f:0xf.q = x0_23
            char var_80
            var_80.o = data_71b7d0
            __builtin_strncpy(x0_23, "Peer sent duplicated extensions", 0x20)
            *x0_22 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_22[1])
            x0_22[4].d = 0x32
            *x0_22 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
            __cxa_throw(x0_22, _typeinfo_for_Botan::TLS::TLS_Exception, 
                Botan::Exception::~Exception)
            noreturn
    
    uint64_t x23_1 = _byteswap(x8_15 << 0x30)
    
    if (temp0_2 u<= 0x2b)
        switch (temp0_2)
            case 0
                Botan::TLS::Server_Name_Indicator::Server_Name_Indicator(operator new(0x20), 
                    x20_1.w)
            case 1, 2, 3, 4, 6, 7, 8, 9, 0xf, 0x11, 0x12, 0x13, 0x14, 0x15, 0x18, 0x19, 0x1a, 0x1b, 
                    0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 
                    0x2a
                goto label_e49590
            case 5
                Botan::TLS::Certificate_Status_Request::Certificate_Status_Request(
                    operator new(0x50), x20_1.w, zx.q(x23_1.d))
            case 0xa
                Botan::TLS::Supported_Groups::Supported_Groups(operator new(0x20), x20_1.w)
            case 0xb
                Botan::TLS::Supported_Point_Formats::Supported_Point_Formats(operator new(0x10), 
                    x20_1.w)
            case 0xc
                Botan::TLS::SRP_Identifier::SRP_Identifier(operator new(0x20), x20_1.w)
            case 0xd
                Botan::TLS::Signature_Algorithms::Signature_Algorithms(operator new(0x20), x20_1.w)
            case 0xe
                Botan::TLS::SRTP_Protection_Profiles::SRTP_Protection_Profiles(operator new(0x20), 
                    x20_1.w)
            case 0x10
                Botan::TLS::Application_Layer_Protocol_Notification::Application_Layer_Protocol_Notification(
                    operator new(0x20), x20_1.w)
            case 0x16
                void** x0_9
                uint16_t x1_8
                x0_9, x1_8 = operator new(8)
                Botan::TLS::Encrypt_then_MAC::Encrypt_then_MAC(x0_9, x1_8)
            case 0x17
                void** x0_21
                uint16_t x1_17
                x0_21, x1_17 = operator new(8)
                Botan::TLS::Extended_Master_Secret::Extended_Master_Secret(x0_21, x1_17)
            case 0x23
                void** x0_14 = operator new(0x20)
                *x0_14 = _vtable_for_Botan::TLS::Session_Ticket + 0x10
                Botan::TLS::TLS_Data_Reader::assert_at_least(x20_1)
                __builtin_memset(&x0_14[1], 0, 0x18)
                
                if (x23_1.d != 0)
                    char* x0_17 = operator new(x23_1)
                    void* fp_1 = &x0_17[x23_1]
                    x0_14[1] = x0_17
                    x0_14[3] = fp_1
                    memset(x0_17, 0, x23_1)
                    x0_14[2] = fp_1
                    int64_t* x8_19 = *(x20_1 + 8)
                    int64_t x9_10 = *(x20_1 + 0x10)
                    *x0_17 = (*x8_19)[x9_10]
                    
                    if (x23_1.d != 1)
                        x0_17[1] = *(*x8_19 + x9_10 + 1)
                        
                        if (x23_1.d != 2)
                            x0_17[2] = *(*x8_19 + x9_10 + 2)
                            
                            if (x23_1.d != 3)
                                x0_17[3] = *(*x8_19 + x9_10 + 3)
                                
                                if (x23_1.d != 4)
                                    int64_t x8_23 = 4
                                    
                                    do
                                        x0_14[1][x8_23] = (**(x20_1 + 8) + *(x20_1 + 0x10))[x8_23]
                                        x8_23 += 1
                                    while (x23_1 != x8_23)
                
                *(x20_1 + 0x10) += x23_1
            case 0x2b
                Botan::TLS::Supported_Versions::Supported_Versions(operator new(0x20), x20_1.w, 
                    zx.q(x23_1.d))
    else if (temp0_2 != 0xff01)
    label_e49590:
        void** x0_1 = operator new(0x28)
        *x0_1 = _vtable_for_Botan::TLS::Unknown_Extension + 0x10
        x0_1[1].d = temp0_2
        Botan::TLS::TLS_Data_Reader::get_fixed<uint8_t>(x20_1)
    else
        Botan::TLS::Renegotiation_Extension::Renegotiation_Extension(operator new(0x20), x20_1.w)
    
    Botan::TLS::Extensions::add(arg1)
    x8_6 = *(x20_1 + 8)
while (x8_6[1] - *x8_6 != *(x20_1 + 0x10))
