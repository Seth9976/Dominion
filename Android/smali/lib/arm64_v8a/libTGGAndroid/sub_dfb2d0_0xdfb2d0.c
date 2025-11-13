// 函数: sub_dfb2d0
// 地址: 0xdfb2d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x27 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x27 + 0x28)
int128_t v0
v0.q = 0
v0:8.q = 0
void* __offset(vtable_for_Botan::AlgorithmIdentifier, 0x10) var_1e0 =
    _vtable_for_Botan::AlgorithmIdentifier + 0x10
void* __offset(vtable_for_Botan::OID, 0x10) var_1d8 = _vtable_for_Botan::OID + 0x10
int64_t result_1 = (zx.o(0)).q
int128_t var_1c0
__builtin_memset(&var_1c0, 0, 0x20)
int64_t* x8_2 = *(arg3 + 0x20)
int32_t x20 = arg4
void var_a0
int64_t* var_80

if (x8_2 == 0)
    var_80 = nullptr
else if (arg3 == x8_2)
    var_80 = &var_a0
    (*(*x8_2 + 0x18))(x8_2, &var_a0, v0)
else
    var_80 = (*(*x8_2 + 0x10))(x8_2, v0)

uint8_t* var_100
__builtin_memset(&var_100, 0, 0x18)
void* __offset(vtable_for_Botan::AlgorithmIdentifier, 0x10) var_e8 =
    _vtable_for_Botan::AlgorithmIdentifier + 0x10
void* __offset(vtable_for_Botan::OID, 0x10) var_e0 = _vtable_for_Botan::OID + 0x10
int64_t var_d8 = (zx.o(0)).q
int128_t var_c8
__builtin_memset(&var_c8, 0, 0x20)
void* var_200
__builtin_memset(&var_200, 0, 0x18)
int32_t x0_4 = Botan::ASN1::maybe_BER(arg2)
uint64_t var_160
void* var_150
int32_t x0_6

if ((x0_4 & 1) != 0)
    var_160.w = 0
    x0_6 = Botan::PEM_Code::matches(arg2, &var_160, 0x1000)
    
    if ((zx.d(var_160.b) & 1) != 0)
        operator delete(var_150)

void* var_1f0
int64_t var_1a0
void* var_190
int128_t var_158
int128_t var_120
uint8_t* var_f8_1
void* var_f0
uint8_t* x1_15

if ((x0_4 & 1) != 0 && (x0_6 & 1) == 0)
    if ((x20 & 1) == 0)
        while (true)
            if (((*(*arg2 + 0x18))(arg2) & 1) != 0)
                x1_15 = var_100
                
                if (x1_15 == var_f8_1)
                    goto label_dfbb08
                
                goto label_dfb7e4
            
            if ((**arg2)(arg2, &var_160, 1) != 0)
                if (var_f8_1 != var_f0)
                    *var_f8_1 = var_160.b
                    var_f8_1 = &var_f8_1[1]
                else
                    void* __offset(vtable_for_Botan::OID, 0x10)* x20_1 = var_100
                    size_t x24_1 = var_f8_1 - x20_1
                    
                    if (x24_1 + 1 s< 0)
                        std::__ndk1::__vector_base_common<true>::__throw_length_error()
                        break
                    
                    int64_t x9_18 = x24_1 << 1
                    int64_t x8_30
                    
                    if (x9_18 u< x24_1 + 1)
                        x8_30 = x24_1 + 1
                    else
                        x8_30 = x9_18
                    
                    int64_t x22_4
                    
                    x22_4 = x24_1 u< 0x3fffffffffffffff ? x8_30 : 0x7fffffffffffffff
                    
                    size_t x2_5
                    void* const x23_1
                    
                    if (x22_4 == 0)
                        x23_1 = nullptr
                        x2_5 = x24_1
                    else
                        void* x0_36 = Botan::allocate_memory(x22_4, 1)
                        x20_1 = var_100
                        x23_1 = x0_36
                        x2_5 = var_f8_1 - x20_1
                    
                    void* x25_1 = x23_1 + x24_1
                    void* x24_2 = x25_1 - x2_5
                    *x25_1 = var_160.b
                    
                    if (x2_5 s>= 1)
                        memcpy(x24_2, x20_1, x2_5)
                    
                    void* x8_33 = var_f0
                    var_100 = x24_2
                    var_f8_1 = x25_1 + 1
                    var_f0 = x23_1 + x22_4
                    
                    if (x20_1 != 0)
                        Botan::deallocate_memory(x20_1, x8_33 - x20_1, 1)
        
        goto label_dfbcd0
    
    sub_f09260(&var_160, arg2, &var_e8)
    void* x0_22 = var_100
    
    if (x0_22 != 0)
        var_f8_1 = x0_22
        Botan::deallocate_memory(x0_22, var_f0 - x0_22, 1)
    
    int128_t v0_3 = var_158
    uint8_t* x8_15 = var_160
    var_100 = x8_15
    var_f8_1.o = v0_3
    
    if (x8_15 == v0_3.q)
    label_dfbb08:
        void** x0_66 = __cxa_allocate_exception(0x20)
        __builtin_strcpy(&var_1a0, "\"No key data found")
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "PKCS #8: ", &var_1a0)
        *x0_66 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_66[1])
        *x0_66 = _vtable_for_Botan::Decoding_Error + 0x10
        
        if ((zx.d(var_160.b) & 1) != 0)
            operator delete(var_150)
        
        *x0_66 = _vtable_for_Botan::PKCS8_Exception + 0x10
        __cxa_throw(x0_66, _typeinfo_for_Botan::PKCS8_Exception, Botan::Exception::~Exception)
        noreturn
    
label_dfb5e8:
    Botan::OIDS::oid2str_or_throw(&var_e0)
    uint64_t x9_11 = zx.q(var_160.b)
    int32_t x8_16 = x9_11.d & 1
    uint64_t x9_13
    
    if (x8_16 == 0)
        x9_13 = x9_11 u>> 1
    else
        x9_13 = var_158.q
    
    int32_t x21_2
    
    if (x9_13 != 0xc)
        x21_2 = 1
        
        if ((x8_16 & 0xff) != 0)
            operator delete(var_150)
    else
        x21_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            &var_160, 0, -ffffffffffffffff, "PBE-PKCS5v20") != 0 ? 1 : 0
        
        if ((zx.d(var_160.b) & 1) != 0)
            operator delete(var_150)
    
    if (x21_2 != 0)
    label_dfbcd0:
        void** x0_81 = __cxa_allocate_exception(0x20)
        Botan::OID::to_string()
        int128_t* x0_84
        int128_t v0_7
        x0_84, v0_7 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
            &var_120, nullptr)
        int64_t var_190_2 = x0_84[1].q
        var_1a0.o = *x0_84
        __builtin_memset(x0_84, 0, 0x18)
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "PKCS #8: ", &var_1a0)
        *x0_81 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_81[1])
        *x0_81 = _vtable_for_Botan::Decoding_Error + 0x10
        
        if ((zx.d(var_160.b) & 1) != 0)
            operator delete(var_150)
        
        *x0_81 = _vtable_for_Botan::PKCS8_Exception + 0x10
        __cxa_throw(x0_81, _typeinfo_for_Botan::PKCS8_Exception, Botan::Exception::~Exception)
        noreturn
    
    if (var_80 == 0)
        sub_a58ab4()
        noreturn
    
    (*(*var_80 + 0x30))()
    Botan::pbes2_decrypt(&var_100, &var_1a0, &var_c8:8)
    void* x0_29 = var_200
    
    if (x0_29 != 0)
        void* var_1f8_1 = x0_29
        Botan::deallocate_memory(x0_29, var_1f0 - x0_29, 1)
    
    void* x8_21 = var_150
    uint32_t x9_15 = zx.d(var_1a0.b)
    var_158.q = 0
    var_150 = nullptr
    var_200.o = var_160.o
    var_1f0 = x8_21
    var_160 = 0
    
    if ((x9_15 & 1) != 0)
        operator delete(var_190)
    
    goto label_dfb7f0

__builtin_memset(&var_1a0, 0, 0x18)
Botan::PEM_Code::decode(arg2, &var_1a0)
uint8_t* x0_9 = var_100

if (x0_9 != 0)
    var_f8_1 = x0_9
    Botan::deallocate_memory(x0_9, var_f0 - x0_9, 1)

uint64_t x10_1 = zx.q(var_1a0.b)
uint64_t var_198
uint64_t x8_6 = var_198
int32_t x9_6 = x10_1.d & 1
uint64_t x10_2 = x10_1 u>> 1
uint64_t x12_1

x12_1 = x9_6 == 0 ? x10_2 : x8_6

var_100.o = var_160.o
var_f0 = var_150

if (x12_1 != 0xb)
    goto label_dfb474

int64_t var_140

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        &var_1a0, 0, -ffffffffffffffff, "PRIVATE KEY") == 0)
    x20 = 0
    
    if ((zx.d(var_1a0.b) & 1) == 0)
        goto label_dfb578
    
label_dfb574:
    operator delete(var_190)
label_dfb578:
    x1_15 = var_100
    
    if (x1_15 == var_f8_1)
        goto label_dfbb08
    
    if ((x20 & 1) != 0)
        goto label_dfb5e8
    
label_dfb7e4:
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t*>(&var_200, 
        x1_15)
label_dfb7f0:
    Botan::BER_Decoder::BER_Decoder(&var_1a0)
    Botan::BER_Decoder::start_cons(&var_1a0, 0x10)
    void* x0_42
    int128_t v0_5
    x0_42, v0_5 = operator new(0x20)
    var_120 = data_71c370
    __builtin_strncpy(x0_42, "Unknown PKCS #8 version number", 0x1f)
    int64_t var_a8
    Botan::BER_Decoder::decode(&var_160, &var_a8, 2)
    
    if (var_a8 != 0)
        void** x0_71 = __cxa_allocate_exception(0x20)
        *x0_71 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_71[1])
        *x0_71 = _vtable_for_Botan::Decoding_Error + 0x10
        __cxa_throw(x0_71, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
    (*(var_1e0 + 8))(&var_1e0, &var_160)
    Botan::BER_Decoder::decode(&var_160, &var_200, 4, 4)
    int64_t i
    
    do
        int64_t* var_138
        i = (**var_138)(var_138, &var_a8, 1)
    while (i != 0)
    Botan::BER_Decoder::end_cons()
    
    if ((zx.d(var_120.b) & 1) != 0)
        operator delete(x0_42)
    
    int64_t var_130_1 = 0
    int64_t* var_130
    
    if (var_130 != 0)
        (*(*var_130 + 0x38))()
    
    if (var_150 != 0)
        void* var_148_2 = var_150
        Botan::deallocate_memory(var_150, var_140 - var_150, 1)
    
    int64_t var_170_1 = 0
    int64_t* var_170
    
    if (var_170 != 0)
        (*(*var_170 + 0x38))()
    
    if (var_190 != 0)
        void* var_188_1 = var_190
        int64_t var_180
        Botan::deallocate_memory(var_190, var_180 - var_190, 1)
    
    uint8_t* x0_52 = var_100
    
    if (x0_52 != 0)
        uint8_t* var_f8_2 = x0_52
        Botan::deallocate_memory(x0_52, var_f0 - x0_52, 1)
    
    void* x0_53 = var_c8:8.q
    var_e8 = _vtable_for_Botan::AlgorithmIdentifier + 0x10
    
    if (x0_53 != 0)
        int128_t var_b8
        var_b8.q = x0_53
        operator delete(x0_53)
    
    int64_t x0_54 = var_d8
    var_e0 = _vtable_for_Botan::OID + 0x10
    
    if (x0_54 != 0)
        var_d8 = x0_54
        operator delete(x0_54)
    
    if (&var_a0 == var_80)
        (*(*var_80 + 0x20))()
    else if (var_80 != 0)
        (*(*var_80 + 0x28))()
    
    Botan::OIDS::oid2str_or_empty(&var_1d8)
    uint64_t x8_52 = zx.q(var_160.b)
    uint64_t x8_53
    
    if ((x8_52.d & 1) == 0)
        x8_53 = x8_52 u>> 1
    else
        x8_53 = var_158.q
    
    if (x8_53 == 0)
        void** x0_74 = __cxa_allocate_exception(0x20)
        Botan::OID::to_string()
        int128_t* x0_76
        int128_t v0_6
        x0_76, v0_6 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
            &var_100, nullptr)
        int64_t var_190_1 = x0_76[1].q
        var_1a0.o = *x0_76
        __builtin_memset(x0_76, 0, 0x18)
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "PKCS #8: ", &var_1a0)
        *x0_74 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_74[1])
        *x0_74 = _vtable_for_Botan::Decoding_Error + 0x10
        
        if ((zx.d(var_e8.b) & 1) != 0)
            operator delete(var_d8)
        
        *x0_74 = _vtable_for_Botan::PKCS8_Exception + 0x10
        __cxa_throw(x0_74, _typeinfo_for_Botan::PKCS8_Exception, Botan::Exception::~Exception)
        noreturn
    
    Botan::load_private_key(&var_1e0, &var_200)
    
    if ((zx.d(var_160.b) & 1) != 0)
        operator delete(var_150)
    
    void* x0_59 = var_200
    
    if (x0_59 != 0)
        void* var_1f8_2 = x0_59
        Botan::deallocate_memory(x0_59, var_1f0 - x0_59, 1)
    
    void* x0_60 = var_1c0:8.q
    var_1e0 = _vtable_for_Botan::AlgorithmIdentifier + 0x10
    
    if (x0_60 != 0)
        int128_t var_1b0
        var_1b0.q = x0_60
        operator delete(x0_60)
    
    int64_t result = result_1
    var_1d8 = _vtable_for_Botan::OID + 0x10
    
    if (result != 0)
        result_1 = result
        result = operator delete(result)
    
    if (*(x27 + 0x28) == x8)
        return result
else
    uint64_t x10_3 = zx.q(var_1a0.b)
    x8_6 = var_198
    x9_6 = x10_3.d & 1
    x10_2 = x10_3 u>> 1
label_dfb474:
    uint64_t x8_7
    
    if ((x9_6 & 0xff) == 0)
        x8_7 = x10_2
    else
        x8_7 = x8_6
    
    int32_t x0_13
    
    if (x8_7 == 0x15)
        x0_13 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            &var_1a0, 0, -ffffffffffffffff, "ENCRYPTED PRIVATE KEY")
    
    if (x8_7 != 0x15 || x0_13 != 0)
        void** x0_61 = __cxa_allocate_exception(0x20)
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "Unknown PEM label ", &var_1a0)
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "PKCS #8: ", &var_120)
        *x0_61 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_61[1])
        *x0_61 = _vtable_for_Botan::Decoding_Error + 0x10
        
        if ((zx.d(var_160.b) & 1) != 0)
            operator delete(var_150)
        
        *x0_61 = _vtable_for_Botan::PKCS8_Exception + 0x10
        __cxa_throw(x0_61, _typeinfo_for_Botan::PKCS8_Exception, Botan::Exception::~Exception)
        noreturn
    
    uint8_t* x9_7 = var_100
    uint64_t x22_2 = var_f8_1 - x9_7
    var_160 = _vtable_for_Botan::DataSource_Memory + 0x10
    __builtin_memset(&var_158, 0, 0x18)
    void* var_148_1
    
    if (var_f8_1 == x9_7)
    label_dfb504:
        var_140 = 0
        sub_f09260(&var_120, &var_160, &var_e8)
        uint8_t* x0_18 = var_100
        
        if (x0_18 != 0)
            var_f8_1 = x0_18
            Botan::deallocate_memory(x0_18, var_f0 - x0_18, 1)
        
        void* x0_19 = var_158.q
        var_100.o = var_120
        void* var_110
        var_f0 = var_110
        var_160 = _vtable_for_Botan::DataSource_Memory + 0x10
        
        if (x0_19 != 0)
            var_150 = x0_19
            Botan::deallocate_memory(x0_19, var_148_1 - x0_19, 1)
        
        if ((zx.d(var_1a0.b) & 1) == 0)
            goto label_dfb578
        
        goto label_dfb574
    
    if ((x22_2 & 0xffffffff80000000) == 0)
        void* x0_15 = Botan::allocate_memory(x22_2, 1)
        uint8_t* x1_4 = var_100
        void* x21_1 = x0_15
        var_158.q = x0_15
        void* var_150_1 = x0_15
        size_t x22_3 = var_f8_1 - x1_4
        var_148_1 = x0_15 + x22_2
        
        if (x22_3 s>= 1)
            memcpy(x21_1, x1_4, x22_3)
            x21_1 += x22_3
        
        var_150 = x21_1
        goto label_dfb504
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
__stack_chk_fail()
noreturn
