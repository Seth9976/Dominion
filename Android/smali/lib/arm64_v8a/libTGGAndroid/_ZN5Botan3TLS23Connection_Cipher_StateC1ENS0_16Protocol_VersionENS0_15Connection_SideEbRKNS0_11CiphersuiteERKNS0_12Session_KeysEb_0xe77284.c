// 函数: _ZN5Botan3TLS23Connection_Cipher_StateC1ENS0_16Protocol_VersionENS0_15Connection_SideEbRKNS0_11CiphersuiteERKNS0_12Session_KeysEb
// 地址: 0xe77284
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x25 = arg6
int32_t x21 = arg4.d
int32_t x26 = arg3.d
int64_t* x19 = arg1
*x19 = std::__ndk1::chrono::system_clock::now()
*(x19 + 8) = zx.o(0)
*(x19 + 0x18) = zx.o(0)
uint64_t x23_1 = zx.q(arg2)
x19[5].d = *(arg5 + 0x1c)
x19[7] = Botan::TLS::Ciphersuite::nonce_bytes_from_record(arg5)
int64_t x0_4 = Botan::TLS::Ciphersuite::nonce_bytes_from_handshake()
void* x20

if (x26 == 1)
    x20 = x25 + 0x18
else
    x20 = x25 + 0x30

int64_t* x8_2

if (x26 == 1)
    x8_2 = x25 + 0x48
else
    x8_2 = x25 + 0x60

x19[6] = x0_4

if (&x19[2] != x8_2)
    x8_2[1]
    std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::assign<uint8_t*>(&x19[2], *x8_2)
    x0_4 = x19[6]

void* var_d8
int64_t* var_b8
int64_t* var_a0
int64_t* var_80
int64_t* var_68

if (x19[3] - x19[2] != x0_4)
    Botan::assertion_failure("m_nonce.size() == m_nonce_bytes_from_handshake", &data_793a18, 
        "Connection_Cipher_State", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 
        0x14ddc)
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
else if (x19[5].d == 0)
    char* x26_1 = *(arg5 + 0x28)
    void* x0_9 = strlen(x26_1)
    var_d8 = &x19[2]
    
    if (x0_9 u>= -0x10)
        std::__ndk1::__basic_string_common<true>::__throw_length_error()
    else
        x25 = x0_9
        char* var_a8
        char* x27_1
        
        if (x0_9 u>= 0x17)
            uint64_t x28_1 = (x25 + 0x10) & 0xfffffffffffffff0
            char* x0_18 = operator new(x28_1)
            x27_1 = x0_18
            void* var_b0_1 = x25
            var_a8 = x0_18
            var_b8 = x28_1 | 1
            memcpy(x27_1, x26_1, x25)
        else
            x27_1 = &var_b8 | 1
            var_b8.b = (x25.d << 1).b
            
            if (x25 != 0)
                memcpy(x27_1, x26_1, x25)
        
        *(x27_1 + x25) = 0
        int128_t* x0_21
        int128_t v0_1
        x0_21, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
            &var_b8, nullptr)
        void* x8_18 = x0_21[1].q
        var_a0.o = *x0_21
        __builtin_memset(x0_21, 0, 0x18)
        int128_t* x0_23
        int128_t v0_2
        x0_23, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            &var_a0)
        void* var_70_1 = x0_23[1].q
        var_80.o = *x0_23
        __builtin_memset(x0_23, 0, 0x18)
        int16_t var_d0 = 0
        Botan::MessageAuthenticationCode::create_or_throw(&var_80, &var_d0)
        
        if ((zx.d(var_d0.b) & 1) == 0)
            if ((zx.d(var_80.b) & 1) != 0)
                goto label_e77560
            
            goto label_e77500
        
        void* var_c0
        operator delete(var_c0)
        
        if ((zx.d(var_80.b) & 1) != 0)
        label_e77560:
            operator delete(var_70_1)
            
            if ((zx.d(var_a0.b) & 1) == 0)
                goto label_e77508
            
            goto label_e77570
        
    label_e77500:
        
        if ((zx.d(var_a0.b) & 1) != 0)
        label_e77570:
            operator delete(x8_18)
            
            if ((zx.d(var_b8.b) & 1) != 0)
                operator delete(var_a8)
        else
        label_e77508:
            
            if ((zx.d(var_b8.b) & 1) != 0)
                operator delete(var_a8)
        
        char* x26_2 = *(arg5 + 0x20)
        size_t x0_27 = strlen(x26_2)
        
        if (x0_27 u< -0x10)
            void* x27_2
            
            if (x0_27 u>= 0x17)
                uint64_t x28_2 = (x0_27 + 0x10) & 0xfffffffffffffff0
                void* x0_32 = operator new(x28_2)
                x27_2 = x0_32
                size_t var_78_2 = x0_27
                var_70_1 = x0_32
                var_80 = x28_2 | 1
                memcpy(x27_2, x26_2, x0_27)
            else
                x27_2 = &var_80 | 1
                var_80.b = (x0_27.d << 1).b
                
                if (x0_27 != 0)
                    memcpy(x27_2, x26_2, x0_27)
            
            *(x27_2 + x0_27) = 0
            var_a0.w = 0
            Botan::BlockCipher::create_or_throw(&var_80, &var_a0)
            
            if ((zx.d(var_a0.b) & 1) == 0)
                if ((zx.d(var_80.b) & 1) != 0)
                    goto label_e77668
                
                goto label_e775dc
            
            operator delete(x8_18)
            
            if ((zx.d(var_80.b) & 1) != 0)
            label_e77668:
                operator delete(var_70_1)
                
                if ((x21 & 1) != 0)
                    goto label_e775e4
                
                goto label_e77674
            
        label_e775dc:
            struct vtable_for_Botan::TLS::TLS_CBC_HMAC_AEAD_Encryption* const x8_37
            void** x25_3
            
            if ((x21 & 1) == 0)
            label_e77674:
                void** x0_40 = operator new(0xc0)
                int64_t* x8_39 = var_b8
                var_b8 = nullptr
                int64_t var_68_2 = 0
                uint64_t x4_1 = *(arg5 + 0x30)
                int64_t x5_1 = *(arg5 + 0x38)
                x25_3 = x0_40
                var_80 = x8_39
                var_a0 = var_68
                Botan::TLS::TLS_CBC_HMAC_AEAD_Mode::TLS_CBC_HMAC_AEAD_Mode(x0_40, 1, &var_80, 
                    &var_a0, x4_1, x5_1, x23_1.b)
                int64_t* x0_41 = var_a0
                
                if (x0_41 != 0)
                    (*(*x0_41 + 0x10))()
                
                int64_t* x0_42 = var_80
                
                if (x0_42 != 0)
                    (*(*x0_42 + 8))()
                
                x8_37 = _vtable_for_Botan::TLS::TLS_CBC_HMAC_AEAD_Decryption
            else
            label_e775e4:
                void** x0_35 = operator new(0xc0)
                int64_t* x8_32 = var_b8
                var_b8 = nullptr
                int64_t var_68_1 = 0
                uint64_t x4 = *(arg5 + 0x30)
                int64_t x5 = *(arg5 + 0x38)
                x25_3 = x0_35
                var_80 = x8_32
                var_a0 = var_68
                Botan::TLS::TLS_CBC_HMAC_AEAD_Mode::TLS_CBC_HMAC_AEAD_Mode(x0_35, 0, &var_80, 
                    &var_a0, x4, x5, x23_1.b)
                int64_t* x0_36 = var_a0
                
                if (x0_36 != 0)
                    (*(*x0_36 + 0x10))()
                
                int64_t* x0_37 = var_80
                
                if (x0_37 != 0)
                    (*(*x0_37 + 8))()
                
                x8_37 = _vtable_for_Botan::TLS::TLS_CBC_HMAC_AEAD_Encryption
            
            *x25_3 = x8_37 + 0x10
            int64_t* x0_43 = x19[1]
            x19[1] = x25_3
            
            if (x0_43 != 0)
                (*(*x0_43 + 8))()
            
            int64_t* x0_44 = var_b8
            var_b8 = nullptr
            
            if (x0_44 != 0)
                (*(*x0_44 + 8))()
            
            *(x20 + 8)
            return Botan::SymmetricAlgorithm::set_key(x19[1], *x20)
else
    char* x23_2 = *(arg5 + 0x20)
    size_t x0_7 = strlen(x23_2)
    
    if (x0_7 u< -0x10)
        void* var_70
        void* x24_1
        
        if (x0_7 u>= 0x17)
            uint64_t x25_1 = (x0_7 + 0x10) & 0xfffffffffffffff0
            void* x0_11 = operator new(x25_1)
            x24_1 = x0_11
            size_t var_78_1 = x0_7
            var_70 = x0_11
            var_80 = x25_1 | 1
            memcpy(x24_1, x23_2, x0_7)
        else
            x24_1 = &var_80 | 1
            var_80.b = (x0_7.d << 1).b
            
            if (x0_7 != 0)
                memcpy(x24_1, x23_2, x0_7)
        
        *(x24_1 + x0_7) = 0
        var_a0.w = 0
        Botan::AEAD_Mode::create_or_throw(&var_80, zx.q(not.d(x21)) & 1, &var_a0)
        int64_t* x0_14 = x19[1]
        x19[1] = var_b8
        
        if (x0_14 != 0)
            (*(*x0_14 + 8))()
        
        void* var_90
        
        if ((zx.d(var_a0.b) & 1) != 0)
            operator delete(var_90)
        
        if ((zx.d(var_80.b) & 1) != 0)
            operator delete(var_70)
        
        *(x20 + 8)
        return Botan::SymmetricAlgorithm::set_key(x19[1], *x20)
    
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
    std::__ndk1::__basic_string_common<true>::__throw_length_error()

int64_t* x0_47 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
int64_t* x0_48 = var_a0
var_a0 = nullptr

if (x0_48 != 0)
    (*(*x0_48 + 0x10))()

int64_t* x0_49 = var_80
var_80 = nullptr

if (x0_49 != 0)
    (*(*x0_49 + 8))()

operator delete(x25)
int64_t* x0_51 = var_b8
var_b8 = nullptr

if (x0_51 != 0)
    (*(*x0_51 + 8))()

if (var_68 != 0)
    (*(*var_68 + 0x10))()

void* x0_53 = *var_d8
int64_t* x0_54

if (x0_53 != 0)
    x19[3] = x0_53
    operator delete(x0_53)
    x0_54 = x19[1]
    x19[1] = 0
    
    if (x0_54 != 0)
    label_e77930:
        (*(*x0_54 + 8))()
        sub_1101e04(x0_47)
        noreturn
else
    x0_54 = x19[1]
    x19[1] = 0
    
    if (x0_54 != 0)
        goto label_e77930
sub_1101e04(x0_47)
noreturn
