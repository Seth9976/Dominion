// 函数: _ZN5Botan13pbes2_decryptERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEERKNS0_12basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEERKNS1_IhNSA_IhEEEE
// 地址: 0xde5078
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x28 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x28 + 0x28)
void* __offset(vtable_for_Botan::AlgorithmIdentifier, 0x10) var_1f8 =
    _vtable_for_Botan::AlgorithmIdentifier + 0x10
void* __offset(vtable_for_Botan::OID, 0x10) var_1f0 = _vtable_for_Botan::OID + 0x10
int128_t var_1e8
__builtin_memset(&var_1e8, 0, 0x30)
void* __offset(vtable_for_Botan::AlgorithmIdentifier, 0x10) var_238 =
    _vtable_for_Botan::AlgorithmIdentifier + 0x10
void* __offset(vtable_for_Botan::OID, 0x10) var_230 = _vtable_for_Botan::OID + 0x10
int64_t var_228 = (zx.o(0)).q
int128_t var_218
__builtin_memset(&var_218, 0, 0x20)
char var_1a0
Botan::BER_Decoder::BER_Decoder(&var_1a0)
Botan::BER_Decoder::start_cons(&var_1a0, 0x10)
uint64_t var_b0
(*(var_1f8 + 8))(&var_1f8, &var_b0)
(*(var_238 + 8))(&var_238, &var_b0)
Botan::BER_Decoder::end_cons()
int64_t* var_80_1 = nullptr
int64_t* var_80

if (var_80 != 0)
    (*(*var_80 + 0x38))()

void* var_a0
void* x0_5 = var_a0

if (x0_5 != 0)
    void* var_98_1 = x0_5
    int64_t var_90
    Botan::deallocate_memory(x0_5, var_90 - x0_5, 1)

int64_t* var_170_1 = nullptr
int64_t* var_170

if (var_170 != 0)
    (*(*var_170 + 0x38))()

void* var_190
int64_t var_180

if (var_190 != 0)
    void* var_188_1 = var_190
    Botan::deallocate_memory(var_190, var_180 - var_190, 1)

Botan::OIDS::oid2str_or_throw(&var_230)
var_b0 = &_vtable_for_std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>{for `std::__ndk1::__function::__base<bool (char)>'}
char var_a8 = 0x2f
uint64_t* var_90_1 = &var_b0
char var_250
Botan::split_on_pred(&var_250, &var_b0)

if (&var_b0 == var_90_1)
    (*(*var_90_1 + 0x20))()
else if (var_90_1 != 0)
    (*(*var_90_1 + 0x28))()

void* var_268
char* var_260

if (var_260 - var_268 != 0x30)
    void** x0_99 = __cxa_allocate_exception(0x20)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "PBE-PKCS5 v2.0: Invalid cipher spec ", &var_250)
    *x0_99 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_99[1])
    *x0_99 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_99, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

uint64_t x10 = zx.q(*(var_268 + 0x18))
uint64_t x8_17 = *(var_268 + 0x20)
int32_t x9_1 = x10.d & 1
uint64_t x10_1 = x10 u>> 1
uint64_t x11

x11 = x9_1 == 0 ? x10_1 : x8_17

if (x11 != 3)
    goto label_de526c

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        var_268 + 0x18, 0, -ffffffffffffffff, 0x729965) != 0)
    uint64_t x10_2 = zx.q(*(var_268 + 0x18))
    x8_17 = *(var_268 + 0x20)
    x9_1 = x10_2.d & 1
    x10_1 = x10_2 u>> 1
label_de526c:
    uint64_t x11_1
    
    if ((x9_1 & 0xff) == 0)
        x11_1 = x10_1
    else
        x11_1 = x8_17
    
    if (x11_1 != 3)
        goto label_de52ac
    
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            var_268 + 0x18, 0, -ffffffffffffffff, 0x7509b9) != 0)
        uint64_t x10_3 = zx.q(*(var_268 + 0x18))
        x8_17 = *(var_268 + 0x20)
        x9_1 = x10_3.d & 1
        x10_1 = x10_3 u>> 1
    label_de52ac:
        uint64_t x8_18
        
        if ((x9_1 & 0xff) == 0)
            x8_18 = x10_1
        else
            x8_18 = x8_17
        
        int32_t x0_16
        
        if (x8_18 == 3)
            x0_16 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                var_268 + 0x18, 0, -ffffffffffffffff, 0x738f6e)
        
        if (x8_18 != 3 || x0_16 != 0)
            void** x0_95 = __cxa_allocate_exception(0x20)
            std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                "PBE-PKCS5 v2.0: Don't know param format for ", &var_250)
            *x0_95 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_95[1])
            *x0_95 = _vtable_for_Botan::Decoding_Error + 0x10
            __cxa_throw(x0_95, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
            noreturn

void* var_280
__builtin_memset(&var_280, 0, 0x18)
Botan::BER_Decoder::BER_Decoder(&var_b0)
Botan::BER_Decoder::decode(&var_b0, &var_280, 4, 4)
Botan::BER_Decoder::verify_end()
int64_t* var_80_2 = nullptr

if (var_80_1 != 0)
    (*(*var_80_1 + 0x38))()

void* x0_20 = var_a0

if (x0_20 != 0)
    void* var_98_2 = x0_20
    Botan::deallocate_memory(x0_20, var_90_1 - x0_20, 1)

var_b0.w = 0
Botan::Cipher_Mode::create(&var_250, 1, &var_b0)

if ((zx.d(var_b0.b) & 1) != 0)
    operator delete(var_a0)

uint8_t* var_288

if (var_288 == 0)
    void** x0_103 = __cxa_allocate_exception(0x20)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "PBE-PKCS5 cannot decrypt no cipher ", &var_250)
    *x0_103 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_103[1])
    *x0_103 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_103, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

(*(*var_288 + 0x18))(var_288)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    var_2b0
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x23_1 = var_2b0
var_1a0 = 0x18
int64_t var_19f
__builtin_strncpy(&var_19f, "PKCS5.PBKDF2", 0xd)
Botan::OID::from_string(&var_1a0)
int32_t* x9_3 = var_1e8.q
int64_t x8_24 = var_1e8:8.q
void* x0_25 = var_a8.q
int32_t fp_1

if (x8_24 - x9_3 != var_a0 - x0_25)
    fp_1 = 0
label_de541c:
    var_b0 = _vtable_for_Botan::OID + 0x10
    
    if (x0_25 != 0)
        var_a0 = x0_25
        operator delete(x0_25)
else
    if (x9_3 != x8_24)
        void* x10_6 = x0_25
        
        do
            int32_t x11_3 = *x9_3
            int32_t x12_1 = *x10_6
            fp_1 = x11_3 == x12_1 ? 1 : 0
            
            if (x11_3 != x12_1)
                break
            
            x9_3 = &x9_3[1]
            x10_6 += 4
        while (x8_24 != x9_3)
        
        goto label_de541c
    
    fp_1 = 1
    var_b0 = _vtable_for_Botan::OID + 0x10
    
    if (x0_25 != 0)
        var_a0 = x0_25
        operator delete(x0_25)

if ((zx.d(var_1a0) & 1) != 0)
    operator delete(var_190)

void* var_2a0_1
void* var_298_1
void* var_290_1
char var_1b8
uint64_t var_158
uint64_t var_120
int64_t var_d8
uint64_t var_d0
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    var_b8

if (fp_1 == 0)
    var_1a0 = 0xc
    __builtin_strncpy(&var_19f, "Scrypt", 7)
    Botan::OID::from_string(&var_1a0)
    int32_t* x9_7 = var_1e8.q
    int64_t x8_55 = var_1e8:8.q
    void* x0_59 = var_a8.q
    int32_t x25_3
    
    if (x8_55 - x9_7 != var_a0 - x0_59)
        x25_3 = 0
    label_de5834:
        var_b0 = _vtable_for_Botan::OID + 0x10
        
        if (x0_59 != 0)
            var_a0 = x0_59
            operator delete(x0_59)
    else
        if (x9_7 != x8_55)
            void* x10_10 = x0_59
            
            do
                int32_t x11_5 = *x9_7
                int32_t x12_2 = *x10_10
                x25_3 = x11_5 == x12_2 ? 1 : 0
                
                if (x11_5 != x12_2)
                    break
                
                x9_7 = &x9_7[1]
                x10_10 += 4
            while (x8_55 != x9_7)
            
            goto label_de5834
        
        x25_3 = 1
        var_b0 = _vtable_for_Botan::OID + 0x10
        
        if (x0_59 != 0)
            var_a0 = x0_59
            operator delete(x0_59)
    
    if ((zx.d(var_1a0) & 1) != 0)
        operator delete(var_190)
    
    if (x25_3 == 0)
        void** x0_107 = __cxa_allocate_exception(0x20)
        Botan::OID::to_string()
        int128_t* x0_109
        int128_t v0_2
        x0_109, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
            &var_1a0, nullptr)
        int64_t var_a0_3 = x0_109[1].q
        var_b0.o = *x0_109
        __builtin_memset(x0_109, 0, 0x18)
        *x0_107 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_107[1])
        *x0_107 = _vtable_for_Botan::Decoding_Error + 0x10
        __cxa_throw(x0_107, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
    var_120 = 0
    int64_t var_118_2 = 0
    int64_t var_110_2 = 0
    var_158 = 0
    var_d0 = 0
    var_1b8.q = 0
    var_b8 = nullptr
    Botan::BER_Decoder::BER_Decoder(&var_1a0)
    Botan::BER_Decoder::start_cons(&var_1a0, 0x10)
    Botan::BER_Decoder::decode(&var_b0, &var_120, 4, 4)
    Botan::BER_Decoder::decode(&var_b0, &var_158, 2)
    Botan::BER_Decoder::decode(&var_b0, &var_d0, 2)
    Botan::BER_Decoder::decode(&var_b0, &var_1b8, 2)
    var_d8 = 0
    Botan::BER_Decoder::decode_optional<uint64_t>(&var_b0, &var_b8, 2, nullptr)
    Botan::BER_Decoder::end_cons()
    int64_t var_80_4 = 0
    
    if (var_80_2 != 0)
        (*(*var_80_2 + 0x38))()
    
    void* x0_69 = var_a0
    
    if (x0_69 != 0)
        void* var_98_4 = x0_69
        Botan::deallocate_memory(x0_69, var_90_1 - x0_69, 1)
    
    int64_t var_170_4 = 0
    
    if (var_170_1 != 0)
        (*(*var_170_1 + 0x38))()
    
    if (var_190 != 0)
        void* var_188_3 = var_190
        Botan::deallocate_memory(var_190, var_180 - var_190, 1)
    
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x8_64 = var_b8
    void* var_a0_2
    uint64_t x24_3
    void* x25_4
    
    if (x8_64 == 0)
        var_b8 = x23_1
        var_a8.q = 0
        var_b0 = 0
        var_a0_2 = nullptr
        
        if (x23_1 != 0)
            goto label_de59d8
        
        x25_4 = nullptr
        x24_3 = 0
    label_de5a08:
        uint8_t* x4_8 = var_120
        uint64_t x10_11 = zx.q(*arg2)
        int32_t temp0_1 = x10_11.d & 1
        void* __offset(
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
            0x1) x2_7
        
        if (temp0_1 != 0)
            x2_7 = *(arg2 + 0x10)
        else
            x2_7 = arg2 + 1
        
        uint64_t x3_5
        
        if (temp0_1 == 0)
            x3_5 = x10_11 u>> 1
        else
            x3_5 = *(arg2 + 8)
        
        int64_t var_2d0_1 = var_1b8.q
        Botan::scrypt(x24_3, x25_4 - x24_3, x2_7, x3_5, x4_8, var_118_2 - x4_8, var_158, var_d0)
        int64_t x8_70 = var_a8.q
        void* x22_2 = var_b0
        __builtin_memset(&var_2a0_1, 0, 0x18)
        void* x24_4 = x8_70 - x22_2
        
        if (x8_70 == x22_2)
        label_de5aa8:
            
            if (x22_2 != 0)
                var_a8.q = x22_2
                Botan::deallocate_memory(x22_2, var_a0_2 - x22_2, 1)
            
            uint64_t x0_81 = var_120
            
            if (x0_81 != 0)
                uint64_t var_118_3 = x0_81
                Botan::deallocate_memory(x0_81, var_110_2 - x0_81, 1)
            
        label_de5aec:
            Botan::SymmetricAlgorithm::set_key(var_288, var_2a0_1)
            void* x0_83 = var_2a0_1
            
            if (x0_83 != 0)
                void* var_298_4 = x0_83
                Botan::deallocate_memory(x0_83, var_290_1 - x0_83, 1)
            
            void* x1_34 = var_280
            int64_t var_278
            (*(*var_288 + 0x30))(var_288, x1_34, var_278 - x1_34)
            std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* entry_x8
            std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::vector(entry_x8)
            (*(*var_288 + 0x40))(var_288, entry_x8, 0)
            (*(*var_288 + 8))(var_288)
            void* x0_88 = var_280
            
            if (x0_88 != 0)
                void* var_278_1 = x0_88
                int64_t var_270
                Botan::deallocate_memory(x0_88, var_270 - x0_88, 1)
            
            if (var_268 != 0)
                char* x8_83 = var_260
                void* x0_90
                
                if (x8_83 == var_268)
                    x0_90 = var_268
                else
                    char* x20_1 = x8_83
                    
                    do
                        x20_1 = &x20_1[-0x18]
                        
                        if ((zx.d(*x20_1) & 1) != 0)
                            operator delete(*(x8_83 - 8))
                        
                        x8_83 = x20_1
                    while (var_268 != x20_1)
                    
                    x0_90 = var_268
                
                void* var_260_1 = var_268
                operator delete(x0_90)
            
            void* var_240
            
            if ((zx.d(var_250) & 1) != 0)
                operator delete(var_240)
            void* x0_92 = var_218:8.q
            var_238 = _vtable_for_Botan::AlgorithmIdentifier + 0x10
            
            if (x0_92 != 0)
                int128_t var_208
                var_208.q = x0_92
                operator delete(x0_92)
            
            int64_t x0_93 = var_228
            var_230 = _vtable_for_Botan::OID + 0x10
            
            if (x0_93 != 0)
                var_228 = x0_93
                operator delete(x0_93)
            
            int128_t var_1d8
            void* x0_94 = var_1d8:8.q
            var_1f8 = _vtable_for_Botan::AlgorithmIdentifier + 0x10
            
            if (x0_94 != 0)
                int128_t var_1c8
                var_1c8.q = x0_94
                operator delete(x0_94)
            
            void* result = var_1e8.q
            void* __offset(vtable_for_Botan::OID, 0x10) var_1f0_1 = _vtable_for_Botan::OID + 0x10
            
            if (result != 0)
                var_1e8:8.q = result
                result = operator delete(result)
            
            if (*(x28 + 0x28) == x8)
                return result
        else
            if ((x24_4 & 0xffffffff80000000) == 0)
                void* x0_78 = Botan::allocate_memory(x24_4, 1)
                x22_2 = var_b0
                int64_t x8_71 = var_a8.q
                void* x23_3 = x0_78
                var_2a0_1 = x0_78
                void* var_298_3 = x0_78
                size_t x24_5 = x8_71 - x22_2
                var_290_1 = x0_78 + x24_4
                
                if (x24_5 s>= 1)
                    memcpy(x23_3, x22_2, x24_5)
                    x23_3 += x24_5
                
                var_298_1 = x23_3
                goto label_de5aa8
            
            std::__ndk1::__vector_base_common<true>::__throw_length_error()
            std::__ndk1::__vector_base_common<true>::__throw_length_error()
    else
        x23_1 = x8_64
        var_a8.q = 0
        var_b0 = 0
        int64_t var_a0_1 = 0
    label_de59d8:
        
        if ((x23_1 & 0xffffffff80000000) == 0)
            uint64_t x0_75 = Botan::allocate_memory(x23_1, 1)
            x25_4 = x0_75 + x23_1
            x24_3 = x0_75
            var_b0 = x0_75
            var_a0_2 = x25_4
            memset(x0_75, 0, x23_1)
            var_a8.q = x25_4
            goto label_de5a08
        
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        var_e0
    __builtin_memset(&var_e0, 0, 0x28)
    var_b0 = _vtable_for_Botan::AlgorithmIdentifier + 0x10
    var_a8.q = _vtable_for_Botan::OID + 0x10
    __builtin_memset(&var_a0, 0, 0x30)
    Botan::BER_Decoder::BER_Decoder(&var_158)
    Botan::BER_Decoder::start_cons(&var_158, 0x10)
    Botan::BER_Decoder::decode(&var_120, &var_d0, 4, 4)
    Botan::BER_Decoder::decode(&var_120, &var_d8, 2)
    var_b8 = nullptr
    Botan::AlgorithmIdentifier* x0_32 =
        Botan::BER_Decoder::decode_optional<uint64_t>(&var_120, &var_e0, 2, nullptr)
    var_1b8 = 0x1a
    var_1a0.q = _vtable_for_Botan::AlgorithmIdentifier + 0x10
    int64_t var_1b7
    __builtin_strncpy(&var_1b7, "HMAC(SHA-160)", 0xe)
    Botan::OID::from_string(&var_1b8)
    int64_t var_178_1
    __builtin_memset(&var_178_1, 0, 0x18)
    int16_t* x0_34 = operator new(2)
    void* var_170_2 = &x0_34[1]
    void* var_168_1 = &x0_34[1]
    *x0_34 = 5
    Botan::BER_Decoder::decode_optional<Botan::AlgorithmIdentifier>(x0_32, &var_b0, 0x10, 0x20)
    Botan::BER_Decoder::end_cons()
    var_1a0.q = _vtable_for_Botan::AlgorithmIdentifier + 0x10
    
    if (x0_34 != 0)
        int16_t* var_170_3 = x0_34
        operator delete(x0_34)
    
    var_19f = _vtable_for_Botan::OID + 0x10
    
    if (var_190 != 0)
        void* var_188_2 = var_190
        operator delete(var_190)
    
    void* var_1a8
    
    if ((zx.d(var_1b8) & 1) != 0)
        operator delete(var_1a8)
    
    int64_t var_f0_1 = 0
    int64_t* var_f0
    
    if (var_f0 != 0)
        (*(*var_f0 + 0x38))()
    
    void* var_110
    
    if (var_110 != 0)
        void* var_108_1 = var_110
        int64_t var_100
        Botan::deallocate_memory(var_110, var_100 - var_110, 1)
    
    int64_t var_128_1 = 0
    int64_t* var_128
    
    if (var_128 != 0)
        (*(*var_128 + 0x38))()
    
    void* var_148
    
    if (var_148 != 0)
        void* var_140_1 = var_148
        int64_t var_138
        Botan::deallocate_memory(var_148, var_138 - var_148, 1)
    
    int64_t var_c8
    
    if (var_c8 - var_d0 u<= 7)
        void** x0_112 = __cxa_allocate_exception(0x20)
        int64_t x0_113
        int128_t v0_3
        x0_113, v0_3 = operator new(0x30)
        int64_t var_190_1 = x0_113
        var_1a0.o = data_71cbb0
        __builtin_strncpy(x0_113, "PBE-PKCS5 v2.0: Encoded salt is too small", 0x2a)
        *x0_112 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_112[1])
        *x0_112 = _vtable_for_Botan::Decoding_Error + 0x10
        __cxa_throw(x0_112, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
    if (var_e0 == 0)
        var_e0 = x23_1
    
    Botan::OIDS::oid2str_or_throw(&var_a8)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "PBKDF2(", &var_1a0)
    int128_t* x0_45
    int128_t v0_1
    x0_45, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_158)
    void* x8_41 = x0_45[1].q
    var_120.o = *x0_45
    __builtin_memset(x0_45, 0, 0x18)
    var_1b8.w = 0
    Botan::PBKDF::create_or_throw(&var_120, &var_1b8)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x23_2 = var_b8
    
    if ((zx.d(var_1b8) & 1) == 0)
        if ((zx.d(var_120.b) & 1) != 0)
            goto label_de59a0
        
        goto label_de569c
    
    operator delete(var_1a8)
    
    if ((zx.d(var_120.b) & 1) == 0)
    label_de569c:
        
        if ((zx.d(var_158.b) & 1) != 0)
            operator delete(var_148)
    else
    label_de59a0:
        operator delete(x8_41)
        
        if ((zx.d(var_158.b) & 1) != 0)
            operator delete(var_148)
    
    uint64_t x3_1 = var_d0
    Botan::PBKDF::pbkdf_iterations(x23_2, var_e0, arg2, x3_1, var_c8 - x3_1)
    uint64_t x22_1 = var_120
    __builtin_memset(&var_2a0_1, 0, 0x18)
    int64_t var_118
    uint64_t x25_1 = var_118 - x22_1
    
    if (var_118 == x22_1)
    label_de5724:
        
        if (x22_1 != 0)
            uint64_t var_118_1 = x22_1
            Botan::deallocate_memory(x22_1, x8_41 - x22_1, 1)
        
        (*(*x23_2 + 0x18))(x23_2)
        
        if ((zx.d(var_1a0) & 1) != 0)
            operator delete(var_190)
        
        var_b0 = _vtable_for_Botan::AlgorithmIdentifier + 0x10
        void* var_88
        
        if (var_88 != 0)
            void* var_80_3 = var_88
            operator delete(var_88)
        
        void* x0_56 = var_a0
        var_a8.q = _vtable_for_Botan::OID + 0x10
        
        if (x0_56 != 0)
            void* var_98_3 = x0_56
            operator delete(x0_56)
        
        uint64_t x0_57 = var_d0
        
        if (x0_57 != 0)
            uint64_t var_c8_1 = x0_57
            int64_t var_c0
            Botan::deallocate_memory(x0_57, var_c0 - x0_57, 1)
        
        goto label_de5aec
    
    if ((x25_1 & 0xffffffff80000000) == 0)
        void* x0_50 = Botan::allocate_memory(x25_1, 1)
        x22_1 = var_120
        void* x24_2 = x0_50
        var_2a0_1 = x0_50
        void* var_298_2 = x0_50
        size_t x25_2 = var_118 - x22_1
        var_290_1 = x0_50 + x25_1
        
        if (x25_2 s>= 1)
            memcpy(x24_2, x22_1, x25_2)
            x24_2 += x25_2
        
        var_298_1 = x24_2
        goto label_de5724
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
__stack_chk_fail()
noreturn
