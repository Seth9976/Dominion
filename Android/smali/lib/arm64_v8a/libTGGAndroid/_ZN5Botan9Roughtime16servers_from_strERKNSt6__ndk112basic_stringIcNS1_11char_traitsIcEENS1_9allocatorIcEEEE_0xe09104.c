// 函数: _ZN5Botan9Roughtime16servers_from_strERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xe09104
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::Roughtime::Server_Information* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
int64_t var_170 = 0
void* __offset(
    vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x40) var_168 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
int64_t (* var_f8)() = construction_vtable_for_std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
int64_t (* var_178)() = construction_vtable_for_std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x18
std::__ndk1::ios_base::init(&var_f8)
int32_t var_68 = 0xffffffff
int64_t var_70 = 0
var_f8 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x68
var_178 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x18
void* __offset(
    vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x40) var_168_1 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::basic_streambuf()
void* __offset(
    vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x10) var_160 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x10
char var_120 = (zx.o(0)).b
int64_t var_110 = (zx.o(0)).q
int32_t var_100 = 0x18
std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::str(
    &var_160)
void* x0_2
int128_t v0
x0_2, v0 = operator new(0x40)
v0 = data_71adb0
int64_t var_1a8
__builtin_memset(&var_1a8, 0, 0x18)
char var_190 = v0.b
__builtin_strncpy(x0_2, "Line does not have at least 5 space separated fields", 0x35)

while (true)
    *(var_178 - 0x18)
    std::__ndk1::ios_base::getloc()
    int128_t var_290
    int64_t* x0_5 = std::__ndk1::locale::use_facet(&var_290)
    char x0_6 = (*(*x0_5 + 0x38))(x0_5, 0xa)
    std::__ndk1::locale::~locale()
    int64_t* x0_8 =
        std::__ndk1::getline<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        &var_178, &var_1a8, x0_6)
    
    if ((zx.d(*(x0_8 + *(*x0_8 - 0x18) + 0x20)) & 5) != 0)
        break
    
    std::__ndk1::allocator<char>* x0_10 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::find(
        &var_1a8, 0x20)
    
    if (x0_10 == -1)
        void** x0_69 = __cxa_allocate_exception(0x20)
        *x0_69 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_69[1])
        *x0_69 = _vtable_for_Botan::Decoding_Error + 0x10
        __cxa_throw(x0_69, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
    char var_1c0
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &var_1c0, &var_1a8, 0, x0_10)
    int64_t x0_13 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::find(
        &var_1a8, 0x20)
    
    if (x0_13 == -1)
        void** x0_72 = __cxa_allocate_exception(0x20)
        *x0_72 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_72[1])
        *x0_72 = _vtable_for_Botan::Decoding_Error + 0x10
        __cxa_throw(x0_72, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
    char var_1d8
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &var_1d8, &var_1a8, x0_10 + 1, x0_13 - (x0_10 + 1))
    uint64_t x8_9 = zx.q(var_1d8)
    uint64_t x8_10
    uint64_t var_1d0
    
    if ((x8_9.d & 1) == 0)
        x8_10 = x8_9 u>> 1
    else
        x8_10 = var_1d0
    int32_t x0_16
    
    if (x8_10 == 7)
        x0_16 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            &var_1d8, 0, -ffffffffffffffff, "ed25519")
    
    if (x8_10 != 7 || x0_16 != 0)
        void** x0_59 = __cxa_allocate_exception(0x20)
        int64_t x0_60
        int128_t v0_3
        x0_60, v0_3 = operator new(0x30)
        int64_t var_280_2 = x0_60
        var_290 = data_71cbb0
        __builtin_strncpy(x0_60, "Only ed25519 publicKeyType is implemented", 0x2a)
        Botan::Exception::Exception(x0_59, "Not implemented")
        *x0_59 = _vtable_for_Botan::Not_Implemented + 0x10
        __cxa_throw(x0_59, _typeinfo_for_Botan::Not_Implemented, Botan::Exception::~Exception)
        noreturn
    
    int64_t x0_18 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::find(
        &var_1a8, 0x20)
    
    if (x0_18 == -1)
        void** x0_63 = __cxa_allocate_exception(0x20)
        *x0_63 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_63[1])
        *x0_63 = _vtable_for_Botan::Decoding_Error + 0x10
        __cxa_throw(x0_63, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
    char var_1f0
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &var_1f0, &var_1a8, x0_13 + 1, x0_18 - (x0_13 + 1))
    uint64_t x8_11 = zx.q(var_1f0)
    int32_t temp0_1 = x8_11.d & 1
    char* var_1e0
    char* x0_20
    
    if (temp0_1 == 0)
        x0_20 = &var_1f0 | 1
    else
        x0_20 = var_1e0
    
    uint64_t x1_6
    uint64_t var_1e8
    
    if (temp0_1 == 0)
        x1_6 = x8_11 u>> 1
    else
        x1_6 = var_1e8
    Botan::base64_decode(x0_20, x1_6, true)
    void* __offset(vtable_for_Botan::Ed25519_PublicKey, 0x88) var_210
    Botan::Ed25519_PublicKey::Ed25519_PublicKey(&var_210, var_290.q)
    void* x0_22 = var_290.q
    void* var_280
    
    if (x0_22 != 0)
        var_290:8.q = x0_22
        Botan::deallocate_memory(x0_22, var_280 - x0_22, 1)
    
    int64_t x0_24 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::find(
        &var_1a8, 0x20)
    
    if (x0_24 == -1)
        void** x0_66 = __cxa_allocate_exception(0x20)
        *x0_66 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_66[1])
        *x0_66 = _vtable_for_Botan::Decoding_Error + 0x10
        __cxa_throw(x0_66, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
    int64_t x25_5 = x0_24
    char var_228
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &var_228, &var_1a8, x0_18 + 1, x0_24 - (x0_18 + 1))
    uint64_t x8_14 = zx.q(var_228)
    uint64_t x8_15
    uint64_t var_220
    
    if ((x8_14.d & 1) == 0)
        x8_15 = x8_14 u>> 1
    else
        x8_15 = var_220
    int32_t x0_27
    
    if (x8_15 == 3)
        x0_27 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            &var_228, 0, -ffffffffffffffff, 0x7790aa)
    
    if (x8_15 != 3 || x0_27 != 0)
        void** x0_55 = __cxa_allocate_exception(0x20)
        int64_t x0_56
        int128_t v0_2
        x0_56, v0_2 = operator new(0x30)
        int64_t var_280_1 = x0_56
        var_290 = data_71bb40
        __builtin_strncpy(x0_56, "Only UDP protocol is implemented", 0x21)
        Botan::Exception::Exception(x0_55, "Not implemented")
        *x0_55 = _vtable_for_Botan::Not_Implemented + 0x10
        __cxa_throw(x0_55, _typeinfo_for_Botan::Not_Implemented, Botan::Exception::~Exception)
        noreturn
    
    int32_t x24_1 = 0
    void* var_240
    __builtin_memset(&var_240, 0, 0x18)
    void* __offset(
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
        0x18) var_238_1
    int32_t x26_4
    
    do
        uint64_t x26_5 = x25_5 + 1
        int64_t x0_29 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::find(
            &var_1a8, 0x20)
        x25_5 = x0_29
        std::__ndk1::allocator<char>* x3_5
        
        if (x0_29 != -1)
            x3_5 = x0_29 - x26_5
        else
            x3_5 = -ffffffffffffffff
        
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &var_290, &var_1a8, x26_5, x3_5)
        uint64_t x9_6 = zx.q(var_290.b)
        int32_t x8_17 = x9_6.d & 1
        uint64_t x9_8
        
        if (x8_17 == 0)
            x9_8 = x9_6 u>> 1
        else
            x9_8 = var_290:8.q
        
        if (x9_8 == 0)
            x26_4 = 0
            x24_1 = 1
            
            if ((x8_17 & 0xff) != 0)
                operator delete(var_280)
        else
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                * x26_6 = var_238_1
            int64_t var_230
            
            if (x26_6 == var_230)
                std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>(
                    &var_240)
            else
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    x26_6)
                var_238_1 = x26_6 + 0x18
            
            x26_4 = x25_5 != -1 ? 1 : 0
            x24_1 |= x25_5 == -1 ? 1 : 0
            
            if ((zx.d(var_290.b) & 1) != 0)
                operator delete(var_280)
    while ((x26_4 & 1) != 0)
    
    if ((x24_1 & 1) == 0)
        void* x24_2 = var_240
        
        if (x24_2 != 0)
            void* __offset(
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                0x18) x8_22 = var_238_1
            void* x0_35
            
            if (x8_22 == x24_2)
                x0_35 = x24_2
            else
                void* __offset(
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                    0x18) x25_6 = x8_22
                
                do
                    x25_6 -= 0x18
                    
                    if ((zx.d(*x25_6) & 1) != 0)
                        operator delete(*(x8_22 - 8))
                    
                    x8_22 = x25_6
                while (x24_2 != x25_6)
                
                x0_35 = var_240
            
            var_238_1 = x24_2
            operator delete(x0_35)
    
    if (var_238_1 == var_240)
        void** x0_75 = __cxa_allocate_exception(0x20)
        *x0_75 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_75[1])
        *x0_75 = _vtable_for_Botan::Decoding_Error + 0x10
        __cxa_throw(x0_75, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
    Botan::Roughtime::Server_Information::Server_Information(&var_290, &var_1c0, &var_210)
    int128_t* x8_24 = *(entry_x8 + 8)
    void* var_270
    void* var_268
    char* var_258
    char* var_250
    
    if (x8_24 u>= *(entry_x8 + 0x10))
        std::__ndk1::vector<Botan::Roughtime::Server_Information, std::__ndk1::allocator<Botan::Roughtime::Server_Information> >::__push_back_slow_path<Botan::Roughtime::Server_Information>(
            entry_x8)
        
        if (var_258 != 0)
            char* x8_26 = var_250
            char* x0_39
            
            if (x8_26 == var_258)
                x0_39 = var_258
            else
                char* x25_7 = x8_26
                
                do
                    x25_7 = &x25_7[-0x18]
                    
                    if ((zx.d(*x25_7) & 1) != 0)
                        operator delete(*(x8_26 - 8))
                    
                    x8_26 = x25_7
                while (var_258 != x25_7)
                
                x0_39 = var_258
            
            var_250 = var_258
            operator delete(x0_39)
    else
        int128_t v0_1 = var_290
        x8_24[1].q = var_280
        *(x8_24 + 0x18) = _vtable_for_Botan::Ed25519_PublicKey + 0x88
        *x8_24 = v0_1
        __builtin_memset(&var_290, 0, 0x18)
        __builtin_memset(&x8_24[2], 0, 0x30)
        x8_24[2].q = var_270
        *(x8_24 + 0x28) = var_268
        int64_t var_260
        x8_24[3].q = var_260
        __builtin_memset(&var_270, 0, 0x30)
        *(x8_24 + 0x38) = var_258
        x8_24[4].q = var_250
        int64_t var_248
        *(x8_24 + 0x48) = var_248
        *(entry_x8 + 8) = &x8_24[5]
    void* x0_40 = var_270
    void* __offset(vtable_for_Botan::Ed25519_PublicKey, 0x88) var_278_1 =
        _vtable_for_Botan::Ed25519_PublicKey + 0x88
    
    if (x0_40 != 0)
        var_268 = x0_40
        operator delete(x0_40)
    
    if ((zx.d(var_290.b) & 1) != 0)
        operator delete(var_280)
    
    void* x24_4 = var_240
    
    if (x24_4 != 0)
        void* __offset(
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
            0x18) x8_29 = var_238_1
        void* x0_43
        
        if (x8_29 == x24_4)
            x0_43 = x24_4
        else
            void* __offset(
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                0x18) x25_8 = x8_29
            
            do
                x25_8 -= 0x18
                
                if ((zx.d(*x25_8) & 1) != 0)
                    operator delete(*(x8_29 - 8))
                
                x8_29 = x25_8
            while (x24_4 != x25_8)
            
            x0_43 = var_240
        
        void* var_238_2 = x24_4
        operator delete(x0_43)
    
    void* var_218
    
    if ((zx.d(var_228) & 1) != 0)
        operator delete(var_218)
    var_210 = _vtable_for_Botan::Ed25519_PublicKey + 0x88
    void* var_208
    
    if (var_208 != 0)
        void* var_200_1 = var_208
        operator delete(var_208)
    
    if ((zx.d(var_1f0) & 1) == 0)
        if ((zx.d(var_1d8) & 1) != 0)
            goto label_e0973c
        
        goto label_e09720
    
    operator delete(var_1e0)
    
    if ((zx.d(var_1d8) & 1) == 0)
    label_e09720:
        
        if ((zx.d(var_1c0) & 1) == 0)
            continue
    else
    label_e0973c:
        void* var_1c8
        operator delete(var_1c8)
        
        if ((zx.d(var_1c0) & 1) == 0)
            continue
    
    void* var_1b0
    operator delete(var_1b0)

void* var_198

if ((zx.d(var_1a8.b) & 1) != 0)
    operator delete(var_198)

if ((zx.d(var_190) & 1) != 0)
    operator delete(x0_2)

var_178 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x18
var_f8 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x68
void* __offset(
    vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x40) var_168_2 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
var_160 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x10

if ((zx.d(var_120) & 1) != 0)
    operator delete(var_110)

std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf()
std::__ndk1::basic_iostream<char, std::__ndk1::char_traits<char> >::~basic_iostream()
return std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >::~basic_ios()
