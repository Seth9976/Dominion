// 函数: _ZN5Botan9Roughtime5ChainC1ERKNSt6__ndk112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE
// 地址: 0xe06fcc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x26 = _ReadMSR(tpidr_el0)
int64_t x9 = *(x26 + 0x28)
*arg1 = 0
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
int64_t var_240 = 0
void* __offset(
    vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x40) var_238 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
int64_t (* var_1c8)() = construction_vtable_for_std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
int64_t (* var_248)() = construction_vtable_for_std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x18
std::__ndk1::ios_base::init(&var_1c8)
int32_t var_138 = 0xffffffff
int64_t var_140 = 0
var_1c8 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x68
var_248 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x18
void* __offset(
    vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x40) var_238_1 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::basic_streambuf()
void* __offset(
    vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x10) var_230 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x10
char var_1f0 = (zx.o(0)).b
int64_t var_1e0 = (zx.o(0)).q
int32_t var_1d0 = 0x18
std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::str(
    &var_230)
void* x0_2
int128_t v0
x0_2, v0 = operator new(0x30)
v0 = data_71cfc0
int64_t var_278
__builtin_memset(&var_278, 0, 0x18)
char var_260 = v0.b
int128_t var_130
char* __saved_x1_9 = &var_130 | 1
__builtin_strncpy(x0_2, "Line does not have 4 space separated fields", 0x2c)

while (true)
    *(var_248 - 0x18)
    std::__ndk1::ios_base::getloc()
    int64_t* x0_5 = std::__ndk1::locale::use_facet(&var_130)
    char x0_6 = (*(*x0_5 + 0x38))(x0_5, 0xa)
    std::__ndk1::locale::~locale()
    int64_t* x0_8 =
        std::__ndk1::getline<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        &var_248, &var_278, x0_6)
    
    if ((zx.d(*(x0_8 + *(*x0_8 - 0x18) + 0x20)) & 5) != 0)
        void* var_268
        
        if ((zx.d(var_278.b) & 1) != 0)
            operator delete(var_268)
        
        if ((zx.d(var_260) & 1) != 0)
            operator delete(x0_2)
        
        var_248 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            + 0x18
        var_1c8 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            + 0x68
        void* __offset(
            vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
            0x40) var_238_2 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            + 0x40
        var_230 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            + 0x10
        
        if ((zx.d(var_1f0) & 1) != 0)
            operator delete(var_1e0)
        
        std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf()
        std::__ndk1::basic_iostream<char, std::__ndk1::char_traits<char> >::~basic_iostream()
        int64_t result = std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >::~basic_ios()
        
        if (*(x26 + 0x28) == x9)
            return result
        
        break
    
    std::__ndk1::allocator<char>* x0_10 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::find(
        &var_278, 0x20)
    
    if (x0_10 == -1)
        void** x0_63 = __cxa_allocate_exception(0x20)
        *x0_63 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_63[1])
        *x0_63 = _vtable_for_Botan::Decoding_Error + 0x10
        __cxa_throw(x0_63, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
    char var_290
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &var_290, &var_278, 0, x0_10)
    uint64_t x8_9 = zx.q(var_290)
    uint64_t x8_10
    uint64_t var_288
    
    if ((x8_9.d & 1) == 0)
        x8_10 = x8_9 u>> 1
    else
        x8_10 = var_288
    int32_t x0_13
    
    if (x8_10 == 7)
        x0_13 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            &var_290, 0, -ffffffffffffffff, "ed25519")
    
    if (x8_10 != 7 || x0_13 != 0)
        void** x0_52 = __cxa_allocate_exception(0x20)
        int64_t x0_53
        int128_t v0_3
        x0_53, v0_3 = operator new(0x30)
        int64_t var_120 = x0_53
        var_130 = data_71cbb0
        __builtin_strncpy(x0_53, "Only ed25519 publicKeyType is implemented", 0x2a)
        Botan::Exception::Exception(x0_52, "Not implemented")
        *x0_52 = _vtable_for_Botan::Not_Implemented + 0x10
        __cxa_throw(x0_52, _typeinfo_for_Botan::Not_Implemented, Botan::Exception::~Exception)
        noreturn
    
    int64_t x0_15 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::find(
        &var_278, 0x20)
    
    if (x0_15 == -1)
        void** x0_66 = __cxa_allocate_exception(0x20)
        *x0_66 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_66[1])
        *x0_66 = _vtable_for_Botan::Decoding_Error + 0x10
        __cxa_throw(x0_66, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
    char var_b0
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &var_b0, &var_278, x0_10 + 1, x0_15 - (x0_10 + 1))
    uint64_t x8_11 = zx.q(var_b0)
    int32_t temp0_1 = x8_11.d & 1
    char* var_a0
    char* x0_17
    
    if (temp0_1 == 0)
        x0_17 = &var_b0 | 1
    else
        x0_17 = var_a0
    
    uint64_t x1_5
    uint64_t var_a8
    
    if (temp0_1 == 0)
        x1_5 = x8_11 u>> 1
    else
        x1_5 = var_a8
    Botan::base64_decode(x0_17, x1_5, true)
    void* __offset(vtable_for_Botan::Ed25519_PublicKey, 0x88) var_2b0
    Botan::Ed25519_PublicKey::Ed25519_PublicKey(&var_2b0, var_130.q)
    void* x0_19 = var_130.q
    char* __saved_x1_4
    
    if (x0_19 != 0)
        var_130:8.q = x0_19
        Botan::deallocate_memory(x0_19, __saved_x1_4 - x0_19, 1)
    
    if ((zx.d(var_b0) & 1) != 0)
        operator delete(var_a0)
    
    int64_t x0_22 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::find(
        &var_278, 0x20)
    
    if (x0_22 == -1)
        void** x0_60 = __cxa_allocate_exception(0x20)
        *x0_60 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_60[1])
        *x0_60 = _vtable_for_Botan::Decoding_Error + 0x10
        __cxa_throw(x0_60, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
    if (x0_22 - (x0_15 + 1) != 0x58)
        void** x0_56 = __cxa_allocate_exception(0x20)
        int64_t x0_57
        int128_t v0_4
        x0_57, v0_4 = operator new(0x20)
        int64_t var_120_1 = x0_57
        var_130 = data_71af80
        __builtin_strncpy(x0_57, "Nonce has invalid length", 0x19)
        *x0_56 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_56[1])
        *x0_56 = _vtable_for_Botan::Decoding_Error + 0x10
        __cxa_throw(x0_56, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &var_130, &var_278, x0_15 + 1, 0x58)
    uint64_t x8_16 = zx.q(var_130.b)
    int32_t temp1_1 = x8_16.d & 1
    char* __saved_x1_7
    
    __saved_x1_7 = temp1_1 == 0 ? __saved_x1_9 : __saved_x1_4
    
    uint64_t x1_9
    
    if (temp1_1 == 0)
        x1_9 = x8_16 u>> 1
    else
        x1_9 = var_130:8.q
    
    Botan::base64_decode(__saved_x1_7, x1_9, true)
    
    if ((zx.d(var_130.b) & 1) != 0)
        operator delete(__saved_x1_4)
    
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &var_130, &var_278, x0_15 + 1, 0x58)
    uint64_t x8_18 = zx.q(var_130.b)
    int32_t temp2_1 = x8_18.d & 1
    char* __saved_x1_8
    
    __saved_x1_8 = temp2_1 == 0 ? __saved_x1_9 : __saved_x1_4
    
    uint64_t x1_11
    
    if (temp2_1 == 0)
        x1_11 = x8_18 u>> 1
    else
        x1_11 = var_130:8.q
    
    int128_t v0_1
    int128_t v1_1
    int128_t v2_1
    int128_t v3_1
    v0_1, v1_1, v2_1, v3_1 = Botan::base64_decode(__saved_x1_8, x1_11, true)
    void* var_2e0
    void* var_2d8
    
    if (var_2d8 - var_2e0 != 0x40)
        char* x0_69 = __cxa_allocate_exception(0x10)
        std::logic_error::logic_error(x0_69)
        __cxa_throw(x0_69, _typeinfo_for_std::logic_error, std::logic_error::~logic_error)
        noreturn
    
    v0_1 = *(var_2e0 + 0x20)
    v1_1 = *(var_2e0 + 0x30)
    var_2d8 = var_2e0
    var_b0.o = *var_2e0
    var_a0.o = *(var_2e0 + 0x10)
    int64_t var_2d0
    Botan::deallocate_memory(var_2e0, var_2d0 - var_2e0, 1)
    
    if ((zx.d(var_130.b) & 1) != 0)
        operator delete(__saved_x1_4)
    
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::find(
            &var_278, 0x20) != -1)
        void** x0_71 = __cxa_allocate_exception(0x20)
        *x0_71 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_71[1])
        *x0_71 = _vtable_for_Botan::Decoding_Error + 0x10
        __cxa_throw(x0_71, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
    char var_310
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &var_310, &var_278, x0_22 + 1, -ffffffffffffffff)
    uint64_t x8_23 = zx.q(var_310)
    int32_t temp3_1 = x8_23.d & 1
    char* var_300
    char* x0_31
    
    if (temp3_1 == 0)
        x0_31 = &var_310 | 1
    else
        x0_31 = var_300
    
    uint64_t x1_14
    uint64_t var_308
    
    if (temp3_1 == 0)
        x1_14 = x8_23 u>> 1
    else
        x1_14 = var_308
    int128_t v0_2
    int128_t v1_2
    int128_t v2_2
    int128_t v3_2
    v0_2, v1_2, v2_2, v3_2 = Botan::base64_decode(x0_31, x1_14, true)
    void* x25_6 = var_130.q
    void* __saved_x1_1 = var_130:8.q
    char* var_2f8_1
    __builtin_memset(&var_2f8_1, 0, 0x18)
    uint64_t x26_3 = __saved_x1_1 - x25_6
    char* var_2f0_1
    
    if (__saved_x1_1 == x25_6)
    label_e074a4:
        
        if (x25_6 != 0)
            var_130:8.q = x25_6
            v0_2, v1_2, v2_2, v3_2 = Botan::deallocate_memory(x25_6, __saved_x1_4 - x25_6, 1)
        
        if ((zx.d(var_310) & 1) != 0)
            v0_2, v1_2, v2_2, v3_2 = operator delete(var_300)
        
        char* x26_4 = var_2f8_1
        __builtin_memset(&var_130, 0, 0x18)
        void* x25_7 = var_2f0_1 - x26_4
        
        if (var_2f0_1 == x26_4)
            goto label_e07518
        
        if ((x25_7 & 0xffffffff80000000) == 0)
            void* x0_37 = operator new(x25_7)
            void* __saved_x1_2 = x0_37 + x25_7
            var_130:8.q = x0_37
            var_130.q = x0_37
            __saved_x1_4 = __saved_x1_2
            v0_2, v1_2, v2_2, v3_2 = memcpy(x0_37, x26_4, x25_7)
            var_130:8.q = __saved_x1_2
        label_e07518:
            void* __offset(vtable_for_Botan::Ed25519_PublicKey, 0x88) var_118_1 =
                _vtable_for_Botan::Ed25519_PublicKey + 0x88
            void* var_110_1
            __builtin_memset(&var_110_1, 0, 0x18)
            void* var_2a8
            void* var_2a0
            uint64_t x26_5 = var_2a0 - var_2a8
            
            if (var_2a0 == var_2a8)
                goto label_e0755c
            
            if ((x26_5 & 0xffffffff80000000) == 0)
                void* x0_39 = operator new(x26_5)
                void* __saved_x1_3 = x0_39 + x26_5
                void* var_108_1 = x0_39
                var_110_1 = x0_39
                void* __saved_x1_6 = __saved_x1_3
                v0_2, v1_2, v2_2, v3_2 = memcpy(x0_39, var_2a8, x26_5)
                void* __saved_x1_5 = __saved_x1_3
            label_e0755c:
                v3_2 = var_b0.o
                int128_t var_e8_1 = var_a0.o
                int64_t* x8_32 = *(arg1 + 8)
                
                if (x8_32 u>= *(arg1 + 0x10))
                    std::__ndk1::vector<Botan::Roughtime::Link, std::__ndk1::allocator<Botan::Roughtime::Link> >::__push_back_slow_path<Botan::Roughtime::Link>(
                        arg1)
                    void* x0_41 = var_110_1
                    void* __offset(vtable_for_Botan::Ed25519_PublicKey, 0x88) var_118_3 =
                        _vtable_for_Botan::Ed25519_PublicKey + 0x88
                    
                    if (x0_41 != 0)
                        void* var_108_2 = x0_41
                        operator delete(x0_41)
                else
                    __builtin_memset(x8_32, 0, 0x18)
                    *x8_32 = var_130.q
                    x8_32[1] = var_130:8.q
                    x8_32[2] = __saved_x1_4
                    x8_32[3] = _vtable_for_Botan::Ed25519_PublicKey + 0x88
                    __builtin_memset(&var_130, 0, 0x18)
                    __builtin_memset(&x8_32[4], 0, 0x18)
                    x8_32[4] = var_110_1
                    x8_32[5] = __saved_x1_5
                    x8_32[6] = __saved_x1_6
                    int64_t var_110_2
                    __builtin_memset(&var_110_2, 0, 0x18)
                    *(x8_32 + 0x68) = v1_1
                    *(x8_32 + 0x58) = v0_1
                    *(x8_32 + 0x48) = var_e8_1
                    *(x8_32 + 0x38) = v3_2
                    *(arg1 + 8) = &x8_32[0xf]
                    void* __offset(vtable_for_Botan::Ed25519_PublicKey, 0x88) var_118_2 =
                        _vtable_for_Botan::Ed25519_PublicKey + 0x88
                
                void* x0_42 = var_130.q
                
                if (x0_42 != 0)
                    var_130:8.q = x0_42
                    operator delete(x0_42)
                
                char* x0_43 = var_2f8_1
                
                if (x0_43 != 0)
                    char* var_2f0_3 = x0_43
                    operator delete(x0_43)
                
                void* var_2c8
                
                if (var_2c8 != 0)
                    void* var_2c0_1 = var_2c8
                    int64_t var_2b8
                    Botan::deallocate_memory(var_2c8, var_2b8 - var_2c8, 1)
                
                var_2b0 = _vtable_for_Botan::Ed25519_PublicKey + 0x88
                
                if (var_2a8 != 0)
                    var_2a0 = var_2a8
                    operator delete(var_2a8)
                
                if ((zx.d(var_290) & 1) == 0)
                    continue
                else
                    void* var_280
                    operator delete(var_280)
                    continue
            
            std::__ndk1::__vector_base_common<true>::__throw_length_error()
    else
        if ((x26_3 & 0xffffffff80000000) == 0)
            char* x0_33
            x0_33, v0_2, v1_2, v2_2, v3_2 = operator new(x26_3)
            var_2f8_1 = x0_33
            char* var_2f0_2 = x0_33
            void* var_2e8_1 = &x0_33[x26_3]
            char* x9_9
            
            if (x25_6 == __saved_x1_1)
                x9_9 = x0_33
            else
                void* x8_25
                
                if (x26_3 u>= 0x20)
                    if (x0_33 u< __saved_x1_1)
                        x8_25 = x25_6
                    
                    if (x0_33 u< __saved_x1_1 && x25_6 u< __saved_x1_1 + x0_33 - x25_6)
                        goto label_e0748c
                    
                    int64_t i_2 = x26_3 & 0xffffffffffffffe0
                    void* x11_5 = x25_6 + 0x10
                    x9_9 = &x0_33[i_2]
                    x8_25 = x25_6 + i_2
                    void* x12_1 = &x0_33[0x10]
                    int64_t i_1 = i_2
                    int64_t i
                    
                    do
                        v0_2 = *(x11_5 - 0x10)
                        v1_2 = *x11_5
                        x11_5 += 0x20
                        i = i_1
                        i_1 -= 0x20
                        *(x12_1 - 0x10) = v0_2
                        *x12_1 = v1_2
                        x12_1 += 0x20
                    while (i != 0x20)
                    x0_33 = x9_9
                    
                    if (x26_3 != i_2)
                        goto label_e0748c
                else
                    x8_25 = x25_6
                label_e0748c:
                    x9_9 = x0_33
                    
                    do
                        char x10_6 = *x8_25
                        x8_25 += 1
                        *x9_9 = x10_6
                        x9_9 = &x9_9[1]
                    while (__saved_x1_1 != x8_25)
            
            var_2f0_1 = x9_9
            goto label_e074a4
        
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
    break

__stack_chk_fail()
noreturn
