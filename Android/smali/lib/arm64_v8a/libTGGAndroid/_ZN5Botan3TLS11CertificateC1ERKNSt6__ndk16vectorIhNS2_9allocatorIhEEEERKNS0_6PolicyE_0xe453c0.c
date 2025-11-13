// 函数: _ZN5Botan3TLS11CertificateC1ERKNSt6__ndk16vectorIhNS2_9allocatorIhEEEERKNS0_6PolicyE
// 地址: 0xe453c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
*arg1 = _vtable_for_Botan::TLS::Certificate + 0x10
*(arg1 + 8) = 0
char* x9_2 = *arg2
void* x8_2 = *(arg2 + 8) - x9_2
int128_t var_110

if (x8_2 u<= 2)
    void** x0_22 = __cxa_allocate_exception(0x20)
    int64_t x0_23
    int128_t v0_2
    x0_23, v0_2 = operator new(0x20)
    int64_t var_100_4 = x0_23
    var_110 = data_71c370
    __builtin_strncpy(x0_23, "Certificate: Message malformed", 0x1f)
    *x0_22 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_22[1])
    *x0_22 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_22, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

int64_t x20 = (-0xff01 & zx.q(*x9_2) << 0x10) | zx.q(x9_2[1]) << 8 | zx.q(x9_2[2])

if (x8_2 - 3 != x20)
    void** x0_26 = __cxa_allocate_exception(0x20)
    int64_t x0_27
    int128_t v0_3
    x0_27, v0_3 = operator new(0x20)
    int64_t var_100_5 = x0_27
    var_110 = data_71c370
    __builtin_strncpy(x0_27, "Certificate: Message malformed", 0x1f)
    *x0_26 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_26[1])
    *x0_26 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_26, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

int64_t* entry_x2
int64_t x0_1 = (*(*entry_x2 + 0x170))(entry_x2)

if (x0_1 != 0 && x0_1 u< x20)
    void** x0_30 = __cxa_allocate_exception(0x20)
    int64_t x0_31
    int128_t v2
    x0_31, v2 = operator new(0x40)
    (*" specified maximum size")[0].o
    int64_t var_100_6 = x0_31
    v2 = data_71c540
    __builtin_strncpy(x0_31, "Certificate chain exceeds policy specified maximum size", 0x38)
    var_110 = v2
    *x0_30 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_30[1])
    *x0_30 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_30, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

int64_t x9_4 = *(arg2 + 8)
char* x28 = *arg2 + 3
void* x8_7 = x9_4 - x28

if (x9_4 != x28)
    int64_t x8_8
    
    do
        if (x8_7 u<= 2)
            void** x0_14 = __cxa_allocate_exception(0x20)
            int64_t x0_15
            int128_t v0
            x0_15, v0 = operator new(0x20)
            int64_t var_100_2 = x0_15
            var_110 = data_71c370
            __builtin_strncpy(x0_15, "Certificate: Message malformed", 0x1f)
            *x0_14 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_14[1])
            *x0_14 = _vtable_for_Botan::Decoding_Error + 0x10
            __cxa_throw(x0_14, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
            noreturn
        
        size_t x22_1 = (-0xff01 & zx.q(*x28) << 0x10) | zx.q(x28[1]) << 8 | zx.q(x28[2])
        
        if (x8_7 u< x22_1 + 3)
            void** x0_18 = __cxa_allocate_exception(0x20)
            int64_t x0_19
            int128_t v0_1
            x0_19, v0_1 = operator new(0x20)
            int64_t var_100_3 = x0_19
            var_110 = data_71c370
            __builtin_strncpy(x0_19, "Certificate: Message malformed", 0x1f)
            *x0_18 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_18[1])
            *x0_18 = _vtable_for_Botan::Decoding_Error + 0x10
            __cxa_throw(x0_18, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
            noreturn
        
        void* __offset(vtable_for_Botan::DataSource_Memory, 0x10) var_88_1 =
            _vtable_for_Botan::DataSource_Memory + 0x10
        void* var_80_1
        __builtin_memset(&var_80_1, 0, 0x18)
        void* var_70_1
        
        if (x22_1 != 0)
            void* x0_3 = Botan::allocate_memory(x22_1, 1)
            void* x25_1 = x0_3 + x22_1
            var_80_1 = x0_3
            void* var_78_1 = x0_3
            var_70_1 = x25_1
            memcpy(x0_3, &x28[3], x22_1)
            void* var_78_2 = x25_1
        
        int64_t var_68_1 = 0
        Botan::X509_Certificate::X509_Certificate(&var_110)
        void** x22_2 = *(arg1 + 0x10)
        int64_t* var_90
        
        if (x22_2 u>= *(arg1 + 0x18))
            std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> >::__push_back_slow_path<Botan::X509_Certificate>(
                arg1 + 8)
        else
            Botan::X509_Object::X509_Object(x22_2)
            *x22_2 = _vtable_for_Botan::X509_Certificate + 0x10
            int64_t var_98
            x22_2[0xf] = var_98
            x22_2[0x10] = var_90
            
            if (var_90 != 0)
                int32_t i
                
                do
                    i = __stxr(__ldxr(&var_90[1]) + 1, &var_90[1])
                while (i != 0)
            
            *(arg1 + 0x10) = &x22_2[0x11]
        
        var_110.q = _vtable_for_Botan::X509_Certificate + 0x10
        void* var_b0
        void* var_a8_1
        
        if (var_90 == 0)
        label_e455c4:
            var_110.q = _vtable_for_Botan::X509_Object + 0x10
            
            if (var_b0 != 0)
                var_a8_1 = var_b0
                operator delete(var_b0)
        else
            int64_t x9_11
            int32_t i_1
            
            do
                x9_11 = __ldaxr(&var_90[1])
                i_1 = __stlxr(x9_11 - 1, &var_90[1])
            while (i_1 != 0)
            
            if (x9_11 != 0)
                goto label_e455c4
            
            (*(*var_90 + 0x10))(var_90)
            std::__ndk1::__shared_weak_count::__release_weak()
            var_110.q = _vtable_for_Botan::X509_Object + 0x10
            
            if (var_b0 != 0)
                var_a8_1 = var_b0
                operator delete(var_b0)
        void* var_c8
        
        if (var_c8 != 0)
            void* var_c0_1 = var_c8
            operator delete(var_c8)
        
        var_110:8.q = _vtable_for_Botan::AlgorithmIdentifier + 0x10
        void* var_e0
        
        if (var_e0 != 0)
            void* var_d8_1 = var_e0
            operator delete(var_e0)
        
        void* __offset(vtable_for_Botan::OID, 0x10) var_100_1 = _vtable_for_Botan::OID + 0x10
        void* var_f8
        
        if (var_f8 != 0)
            void* var_f0_1 = var_f8
            operator delete(var_f8)
        
        void* x0_11 = var_80_1
        void* __offset(vtable_for_Botan::DataSource_Memory, 0x10) var_88_2 =
            _vtable_for_Botan::DataSource_Memory + 0x10
        
        if (x0_11 != 0)
            void* var_78_3 = x0_11
            Botan::deallocate_memory(x0_11, var_70_1 - x0_11, 1)
        
        x8_8 = *(arg2 + 8)
        x28 = &x28[x22_1 + 3]
        x8_7 = x8_8 - x28
    while (x8_8 != x28)

void* result = *(arg1 + 8)

if (*(arg1 + 0x10) != result)
    result = Botan::X509_Certificate::data()
    
    if (*(result + 0x428) != 3)
        void** x0_35 = __cxa_allocate_exception(0x28)
        int64_t x0_36
        int128_t v0_4
        x0_36, v0_4 = operator new(0x20)
        int64_t var_100_7 = x0_36
        var_110 = data_71b7d0
        __builtin_strncpy(x0_36, "The leaf certificate must be v3", 0x20)
        *x0_35 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_35[1])
        x0_35[4].d = 0x2a
        *x0_35 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
        __cxa_throw(x0_35, _typeinfo_for_Botan::TLS::TLS_Exception, Botan::Exception::~Exception)
        noreturn

return result
