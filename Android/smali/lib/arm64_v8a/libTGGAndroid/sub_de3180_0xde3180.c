// 函数: sub_de3180
// 地址: 0xde3180
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x19 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x19 + 0x28)
struct std::__ndk1::__function::__base<bool (char)>::std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>::VTable
    * const var_d0 = &_vtable_for_std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>{for `std::__ndk1::__function::__base<bool (char)>'}
char var_c8 = 0x2f
struct std::__ndk1::__function::__base<bool (char)>::std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>::VTable
    * const* var_b0 = &var_d0
Botan::split_on_pred(arg6, &var_d0)

if (&var_d0 == var_b0)
    (*var_b0)->vFunc_4()
else if (var_b0 != 0)
    (*var_b0)->j_operator delete()

void* var_1c0
char* var_1b8
int16_t var_110
void* var_c0

if (var_1b8 - var_1c0 != 0x30)
    void** x0_150 = __cxa_allocate_exception(0x20)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "PBE-PKCS5 v2.0: Invalid cipher spec ", arg6)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "Encoding error: ", &var_110)
    *x0_150 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_150[1])
    *x0_150 = _vtable_for_Botan::Invalid_Argument + 0x10
    
    if ((zx.d(var_d0.b) & 1) != 0)
        operator delete(var_c0)
    
    *x0_150 = _vtable_for_Botan::Encoding_Error + 0x10
    __cxa_throw(x0_150, _typeinfo_for_Botan::Encoding_Error, Botan::Exception::~Exception)
    noreturn

uint64_t x10 = zx.q(*(var_1c0 + 0x18))
uint64_t x8_6 = *(var_1c0 + 0x20)
int32_t x9 = x10.d & 1
uint64_t x10_1 = x10 u>> 1
uint64_t x11

x11 = x9 == 0 ? x10_1 : x8_6

if (x11 != 3)
    goto label_de3284

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        var_1c0 + 0x18, 0, -ffffffffffffffff, 0x729965) != 0)
    uint64_t x10_2 = zx.q(*(var_1c0 + 0x18))
    x8_6 = *(var_1c0 + 0x20)
    x9 = x10_2.d & 1
    x10_1 = x10_2 u>> 1
label_de3284:
    uint64_t x11_1
    
    if ((x9 & 0xff) == 0)
        x11_1 = x10_1
    else
        x11_1 = x8_6
    
    if (x11_1 != 3)
        goto label_de32c4
    
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            var_1c0 + 0x18, 0, -ffffffffffffffff, 0x7509b9) != 0)
        uint64_t x10_3 = zx.q(*(var_1c0 + 0x18))
        x8_6 = *(var_1c0 + 0x20)
        x9 = x10_3.d & 1
        x10_1 = x10_3 u>> 1
    label_de32c4:
        uint64_t x8_7
        
        if ((x9 & 0xff) == 0)
            x8_7 = x10_1
        else
            x8_7 = x8_6
        
        int32_t x0_7
        
        if (x8_7 == 3)
            x0_7 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                var_1c0 + 0x18, 0, -ffffffffffffffff, 0x738f6e)
        
        if (x8_7 != 3 || x0_7 != 0)
            void** x0_145 = __cxa_allocate_exception(0x20)
            std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                "PBE-PKCS5 v2.0: Don't know param format for ", arg6)
            std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                "Encoding error: ", &var_110)
            *x0_145 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_145[1])
            *x0_145 = _vtable_for_Botan::Invalid_Argument + 0x10
            
            if ((zx.d(var_d0.b) & 1) != 0)
                operator delete(var_c0)
            
            *x0_145 = _vtable_for_Botan::Encoding_Error + 0x10
            __cxa_throw(x0_145, _typeinfo_for_Botan::Encoding_Error, Botan::Exception::~Exception)
            noreturn

Botan::OIDS::str2oid_or_empty(arg6)
void* result_1
int64_t var_1d0

if (result_1 == var_1d0)
    void** x0_155 = __cxa_allocate_exception(0x20)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "PBE-PKCS5 v2.0: No OID assigned for ", arg6)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "Encoding error: ", &var_110)
    *x0_155 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_155[1])
    *x0_155 = _vtable_for_Botan::Invalid_Argument + 0x10
    
    if ((zx.d(var_d0.b) & 1) != 0)
        operator delete(var_c0)
    
    *x0_155 = _vtable_for_Botan::Encoding_Error + 0x10
    __cxa_throw(x0_155, _typeinfo_for_Botan::Encoding_Error, Botan::Exception::~Exception)
    noreturn

var_d0.w = 0
Botan::Cipher_Mode::create(arg6, 0, &var_d0)

if ((zx.d(var_d0.b) & 1) != 0)
    operator delete(var_c0)

int64_t* var_1e8

if (var_1e8 == 0)
    void** x0_160 = __cxa_allocate_exception(0x20)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "PBE-PKCS5 cannot encrypt no cipher ", arg6)
    *x0_160 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_160[1])
    *x0_160 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_160, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

(*(*var_1e8 + 0x18))(var_1e8)
size_t x26_1 = var_c8.q
uint64_t x1_1 = (*(*var_1e8 + 0x60))(var_1e8)
uint64_t var_200
__builtin_memset(&var_200, 0, 0x18)
int64_t var_1f8
int64_t x8_13

if (x1_1 == 0)
    x8_13 = 0
else
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&var_200)
    x1_1 = var_200
    x8_13 = var_1f8

(*(*arg8 + 0x10))(arg8, x1_1, x8_13 - x1_1)
uint64_t var_130
__builtin_memset(&var_130, 0, 0x18)
int64_t var_230 = (zx.o(0)).q
int128_t var_220
__builtin_memset(&var_220, 0, 0x20)
void* __offset(vtable_for_Botan::AlgorithmIdentifier, 0x10) var_240 =
    _vtable_for_Botan::AlgorithmIdentifier + 0x10
void* __offset(vtable_for_Botan::OID, 0x10) var_238 = _vtable_for_Botan::OID + 0x10
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&var_130)
uint64_t x1_3 = var_130
uint64_t var_128
(*(*arg8 + 0x10))(arg8, x1_3, var_128 - x1_3)
uint64_t x8_17 = zx.q(*arg7)
uint64_t x8_18

if ((x8_17.d & 1) == 0)
    x8_18 = x8_17 u>> 1
else
    x8_18 = *(arg7 + 8)

int32_t x0_19

if (x8_18 == 6)
    x0_19 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        arg7, 0, -ffffffffffffffff, "Scrypt")

uint64_t var_258_1
int64_t var_250_1
int64_t var_248_1
void* var_230_1
int128_t var_210
void* var_190
int128_t var_170
int128_t var_150
void* var_140_1
void* var_100
int16_t* var_e8
void* var_c0_1
int128_t var_a8
int128_t var_80
uint64_t x0_65

if (x8_18 == 6 && x0_19 == 0)
    var_d0.b = 0xc
    __builtin_strncpy(&var_d0:1, "Scrypt", 7)
    var_110 = 0
    Botan::PasswordHashFamily::create_or_throw(&var_d0, &var_110)
    
    if ((zx.d(var_110.b) & 1) == 0)
        if ((zx.d(var_d0.b) & 1) != 0)
            goto label_de3fb8
        
        goto label_de3f78
    
    operator delete(var_100)
    void* x23_2
    
    if ((zx.d(var_d0.b) & 1) == 0)
    label_de3f78:
        
        if (arg4 == 0)
            x23_2 = var_190
            (*(*x23_2 + 0x28))(x23_2, arg5)
        else
            x23_2 = var_190
            (*(*x23_2 + 0x18))(x23_2, x26_1, *arg4, 0)
    else
    label_de3fb8:
        operator delete(var_c0)
        
        if (arg4 != 0)
            x23_2 = var_190
            (*(*x23_2 + 0x18))(x23_2, x26_1, *arg4, 0)
        else
            x23_2 = var_190
            (*(*x23_2 + 0x28))(x23_2, arg5)
    
    struct std::__ndk1::__function::__base<bool (char)>::std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>::VTable
        * const x25_2 = var_d0
    __builtin_memset(&var_258_1, 0, 0x18)
    uint64_t x28_2
    int64_t fp_2
    
    if (x26_1 == 0)
        fp_2 = 0
        x28_2 = 0
    label_de4028:
        uint64_t x8_108 = zx.q(*arg3)
        uint64_t x5_1 = var_130
        int32_t temp0_1 = x8_108.d & 1
        void* x3_3
        
        if (temp0_1 != 0)
            x3_3 = *(arg3 + 0x10)
        else
            x3_3 = &arg3[1]
        
        uint64_t x4_8
        
        if (temp0_1 == 0)
            x4_8 = x8_108 u>> 1
        else
            x4_8 = *(arg3 + 8)
        
        (*(x25_2->vFunc_0 + 0x38))(x25_2, x28_2, fp_2 - x28_2, x3_3, x4_8, x5_1, var_128 - x5_1)
        (*(x25_2->vFunc_0 + 0x20))(x25_2)
        (*(x25_2->vFunc_0 + 0x18))(x25_2)
        (*(x25_2->vFunc_0 + 0x28))(x25_2)
        
        if (arg4 != 0)
            *arg4 = 0
        
        __builtin_memset(&var_150, 0, 0x18)
        int64_t* var_b0_4 = nullptr
        int128_t var_a0_3
        __builtin_memset(&var_a0_3, 0, 0x30)
        var_110.q = &_vtable_for_std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>{for `std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>'}
        void* var_108_8 = &var_150
        int16_t* var_f0_4 = &var_110
        sub_f2410c(&var_110, &var_d0)
        
        if (&var_110 == var_f0_4)
            (*(*var_f0_4 + 0x20))()
        else if (var_f0_4 != 0)
            (*(*var_f0_4 + 0x28))()
        
        Botan::DER_Encoder::start_cons(&var_d0, 0x10)
        Botan::DER_Encoder::add_object(&var_d0, 4, nullptr, var_130)
        Botan::DER_Encoder::encode(Botan::DER_Encoder::encode(Botan::DER_Encoder::encode(
            Botan::DER_Encoder::encode(&var_d0))))
        Botan::DER_Encoder::end_cons()
        int128_t var_90_3
        void* x27_4 = var_90_3:8.q
        
        if (x27_4 != 0)
            void* x24_4 = var_80.q
            void* x0_133
            
            if (x24_4 == x27_4)
                x0_133 = x27_4
            else
                do
                    x24_4 -= 0x38
                    sub_f230d4(&var_80:8, x24_4)
                while (x27_4 != x24_4)
                
                x0_133 = var_90_3:8.q
            
            var_80.q = x27_4
            operator delete(x0_133)
        
        void* x0_134 = var_a0_3.q
        
        if (x0_134 != 0)
            var_a0_3:8.q = x0_134
            Botan::deallocate_memory(x0_134, var_90_3.q - x0_134, 1)
        
        if (&var_d0 == var_b0_4)
            (*(*var_b0_4 + 0x20))()
        else if (var_b0_4 != 0)
            (*(*var_b0_4 + 0x28))()
        
        var_170.b = 0xc
        __builtin_strncpy(&var_170:1, "Scrypt", 7)
        Botan::OID::from_string(&var_170)
        Botan::AlgorithmIdentifier::AlgorithmIdentifier(&var_d0, &var_110)
        int64_t x0_138 = var_230
        
        if (x0_138 != 0)
            var_230 = x0_138
            operator delete(x0_138)
        
        void* x0_139 = var_220:8.q
        __builtin_memset(&var_c0_1, 0, 0x18)
        var_230_1 = var_c0.o.q
        var_220.q = var_b0_4
        
        if (x0_139 != 0)
            var_210.q = x0_139
            operator delete(x0_139)
            x0_139 = var_c0_1
        
        int128_t v0_6 = var_a8
        int64_t x8_125 = var_a0_3:8.q
        __builtin_memset(&var_a8, 0, 0x18)
        var_220 = v0_6
        var_210:8.q = x8_125
        var_d0 = _vtable_for_Botan::AlgorithmIdentifier + 0x10
        var_c8.q = _vtable_for_Botan::OID + 0x10
        
        if (x0_139 != 0)
            void* var_b8_3 = x0_139
            operator delete(x0_139)
        
        var_110.q = _vtable_for_Botan::OID + 0x10
        
        if (var_108_8 != 0)
            var_100 = var_108_8
            operator delete(var_108_8)
        
        void* var_160
        
        if ((zx.d(var_170.b) & 1) != 0)
            operator delete(var_160)
        void* x0_142 = var_150.q
        
        if (x0_142 != 0)
            var_150:8.q = x0_142
            operator delete(x0_142)
        
        if (x25_2 != 0)
            (*(x25_2->vFunc_0 + 8))(x25_2)
        
        if (x23_2 != 0)
            (*(*x23_2 + 8))(x23_2)
        
        x0_65 = var_130
        
        if (x0_65 == 0)
            goto label_de3978
        
    label_de395c:
        var_128 = x0_65
        uint64_t var_120
        Botan::deallocate_memory(x0_65, var_120 - x0_65, 1)
    label_de3978:
        Botan::SymmetricAlgorithm::set_key(var_1e8, var_258_1)
        uint64_t x1_21 = var_200
        (*(*var_1e8 + 0x30))(var_1e8, x1_21, var_1f8 - x1_21)
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::vector(&var_150)
        (*(*var_1e8 + 0x40))(var_1e8, &var_150, 0)
        __builtin_memset(&var_170, 0, 0x18)
        int64_t* var_b0_2 = nullptr
        int64_t var_a0_1 = (zx.o(0)).q
        int128_t var_90_1
        __builtin_memset(&var_90_1, 0, 0x20)
        var_110.q = &_vtable_for_std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>{for `std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>'}
        int128_t* var_108_3 = &var_170
        int16_t* var_f0_2 = &var_110
        sub_f2410c(&var_110, &var_d0)
        
        if (&var_110 == var_f0_2)
            (*(*var_f0_2 + 0x20))()
        else if (var_f0_2 != 0)
            (*(*var_f0_2 + 0x28))()
        
        Botan::DER_Encoder::add_object(&var_d0, 4, nullptr, var_200)
        void* x24_3 = var_90_1:8.q
        
        if (x24_3 != 0)
            void* __saved_x1_1 = var_80.q
            void* x0_74
            
            if (__saved_x1_1 == x24_3)
                x0_74 = x24_3
            else
                do
                    __saved_x1_1 -= 0x38
                    sub_f230d4(&var_80:8, __saved_x1_1)
                while (x24_3 != __saved_x1_1)
                
                x0_74 = var_90_1:8.q
            
            var_80.q = x24_3
            operator delete(x0_74)
        
        int64_t x0_75 = var_a0_1
        
        if (x0_75 != 0)
            var_a0_1 = x0_75
            Botan::deallocate_memory(x0_75, var_90_1.q - x0_75, 1)
        
        if (&var_d0 == var_b0_2)
            (*(*var_b0_2 + 0x20))()
        else if (var_b0_2 != 0)
            (*(*var_b0_2 + 0x28))()
        
        __builtin_memset(&var_190, 0, 0x18)
        int64_t* var_b0_3 = nullptr
        int64_t var_a0_2 = (zx.o(0)).q
        int128_t var_90_2
        __builtin_memset(&var_90_2, 0, 0x20)
        var_110.q = &_vtable_for_std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>{for `std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>'}
        void** var_108_4 = &var_190
        int16_t* var_f0_3 = &var_110
        sub_f2410c(&var_110, &var_d0)
        
        if (&var_110 == var_f0_3)
            (*(*var_f0_3 + 0x20))()
        else if (var_f0_3 != 0)
            (*(*var_f0_3 + 0x28))()
        
        Botan::DER_Encoder::start_cons(&var_d0, 0x10)
        (*var_240)(&var_240, &var_d0)
        Botan::OID::from_string(arg6)
        Botan::AlgorithmIdentifier::AlgorithmIdentifier(&var_110, &var_130)
        var_130 = _vtable_for_Botan::OID + 0x10
        
        if (var_128 != 0)
            var_120 = var_128
            operator delete(var_128)
        
        (*var_110.q)(&var_110, &var_d0)
        Botan::DER_Encoder::end_cons()
        var_110.q = _vtable_for_Botan::AlgorithmIdentifier + 0x10
        
        if (var_e8 != 0)
            int16_t* var_e0_3 = var_e8
            operator delete(var_e8)
        
        if (var_100 != 0)
            void* var_f8_2 = var_100
            operator delete(var_100)
        
        void* x20_1 = var_90_2:8.q
        
        if (x20_1 != 0)
            void* x21_1 = var_80.q
            void* x0_88
            
            if (x21_1 == x20_1)
                x0_88 = x20_1
            else
                do
                    x21_1 -= 0x38
                    sub_f230d4(&var_80:8, x21_1)
                while (x20_1 != x21_1)
                
                x0_88 = var_90_2:8.q
            
            var_80.q = x20_1
            operator delete(x0_88)
        
        int64_t x0_89 = var_a0_2
        
        if (x0_89 != 0)
            var_a0_2 = x0_89
            Botan::deallocate_memory(x0_89, var_90_2.q - x0_89, 1)
        
        if (&var_d0 == var_b0_3)
            (*(*var_b0_3 + 0x20))()
        else if (var_b0_3 != 0)
            (*(*var_b0_3 + 0x28))()
        
        var_130.b = 0x18
        __builtin_strncpy(&var_130:1, "PBE-PKCS5v20", 0xd)
        Botan::OID::from_string(&var_130)
        Botan::AlgorithmIdentifier::AlgorithmIdentifier(&var_d0, &var_110)
        var_110.q = _vtable_for_Botan::OID + 0x10
        
        if (_vtable_for_Botan::OID != -0x10)
            void* __offset(vtable_for_Botan::OID, 0x10) var_100_1 = _vtable_for_Botan::OID + 0x10
            operator delete(_vtable_for_Botan::OID + 0x10)
        
        if ((zx.d(var_130.b) & 1) != 0)
            operator delete(var_120)
        
        char* __saved_x1_2 = var_150.q
        void* x20_2 = var_150:8.q
        __builtin_memset(&var_110, 0, 0x18)
        uint64_t x21_2 = x20_2 - __saved_x1_2
        void* var_100_2
        
        if (x20_2 == __saved_x1_2)
        label_de3d90:
            Botan::AlgorithmIdentifier::AlgorithmIdentifier(arg1)
            int64_t x0_98 = var_a8.q
            *(arg1 + 0x40) = var_110.o
            *(arg1 + 0x50) = var_100_2
            var_d0 = _vtable_for_Botan::AlgorithmIdentifier + 0x10
            
            if (x0_98 != 0)
                var_a0_2 = x0_98
                operator delete(x0_98)
            
            void* x0_99 = var_c0_1
            var_c8.q = _vtable_for_Botan::OID + 0x10
            
            if (x0_99 != 0)
                void* var_b8_2 = x0_99
                operator delete(x0_99)
            
            void* x0_100 = var_190
            
            if (x0_100 != 0)
                void* var_188_2 = x0_100
                operator delete(x0_100)
            
            void* x0_101 = var_170.q
            
            if (x0_101 != 0)
                var_170:8.q = x0_101
                operator delete(x0_101)
            
            void* x0_102 = var_150.q
            
            if (x0_102 != 0)
                var_150:8.q = x0_102
                Botan::deallocate_memory(x0_102, var_140_1 - x0_102, 1)
            
            uint64_t x0_103 = var_258_1
            
            if (x0_103 != 0)
                uint64_t var_250_2 = x0_103
                Botan::deallocate_memory(x0_103, var_248_1 - x0_103, 1)
            
            void* x0_104 = var_220:8.q
            var_240 = _vtable_for_Botan::AlgorithmIdentifier + 0x10
            
            if (x0_104 != 0)
                var_210.q = x0_104
                operator delete(x0_104)
            
            void* x0_105 = var_230_1
            void* __offset(vtable_for_Botan::OID, 0x10) var_238_1 = _vtable_for_Botan::OID + 0x10
            
            if (x0_105 != 0)
                var_230_1 = x0_105
                operator delete(x0_105)
            
            uint64_t x0_106 = var_200
            
            if (x0_106 != 0)
                uint64_t var_1f8_1 = x0_106
                int64_t var_1f0
                Botan::deallocate_memory(x0_106, var_1f0 - x0_106, 1)
            
            (*(*var_1e8 + 8))(var_1e8)
            void* result = result_1
            void* __offset(vtable_for_Botan::OID, 0x10) var_1e0_1 = _vtable_for_Botan::OID + 0x10
            
            if (result != 0)
                void* result_2 = result
                result = operator delete(result)
            
            if (var_1c0 != 0)
                char* x8_100 = var_1b8
                void* x0_109
                
                if (x8_100 == var_1c0)
                    x0_109 = var_1c0
                else
                    char* x20_4 = x8_100
                    
                    do
                        x20_4 = &x20_4[-0x18]
                        
                        if ((zx.d(*x20_4) & 1) != 0)
                            operator delete(*(x8_100 - 8))
                        
                        x8_100 = x20_4
                    while (var_1c0 != x20_4)
                    
                    x0_109 = var_1c0
                
                void* var_1b8_1 = var_1c0
                result = operator delete(x0_109)
            
            if (*(x19 + 0x28) == x8)
                return result
        else
            if ((x21_2 & 0xffffffff80000000) == 0)
                void* x0_96
                int128_t v0_4
                int128_t v1_1
                x0_96, v0_4, v1_1 = operator new(x21_2)
                var_110.q = x0_96
                void* var_108_6 = x0_96
                var_100_2 = x0_96 + x21_2
                void* x8_89
                
                if (__saved_x1_2 == x20_2)
                    x8_89 = x0_96
                else if (x21_2 u< 0x20
                    || (x0_96 u< x20_2 && __saved_x1_2 u< x20_2 + x0_96 - __saved_x1_2))
                label_de3d64:
                    x8_89 = x0_96
                    
                    do
                        char x9_14 = *__saved_x1_2
                        __saved_x1_2 = &__saved_x1_2[1]
                        *x8_89 = x9_14
                        x8_89 += 1
                    while (x20_2 != __saved_x1_2)
                else
                    int64_t i_2 = x21_2 & 0xffffffffffffffe0
                    void* x10_8 = &__saved_x1_2[0x10]
                    x8_89 = x0_96 + i_2
                    __saved_x1_2 = &__saved_x1_2[i_2]
                    void* x11_3 = x0_96 + 0x10
                    int64_t i_1 = i_2
                    int64_t i
                    
                    do
                        v0_4 = *(x10_8 - 0x10)
                        v1_1 = *x10_8
                        x10_8 += 0x20
                        i = i_1
                        i_1 -= 0x20
                        *(x11_3 - 0x10) = v0_4
                        *x11_3 = v1_1
                        x11_3 += 0x20
                    while (i != 0x20)
                    x0_96 = x8_89
                    
                    if (x21_2 != i_2)
                        goto label_de3d64
                
                void* var_108_7 = x8_89
                goto label_de3d90
            
            std::__ndk1::__vector_base_common<true>::__throw_length_error()
            std::__ndk1::__vector_base_common<true>::__throw_length_error()
            std::__ndk1::__vector_base_common<true>::__throw_length_error()
    else
        if ((x26_1 & 0xffffffff80000000) == 0)
            uint64_t x0_116 = Botan::allocate_memory(x26_1, 1)
            fp_2 = x0_116 + x26_1
            x28_2 = x0_116
            var_258_1 = x0_116
            var_248_1 = fp_2
            memset(x0_116, 0, x26_1)
            var_250_1 = fp_2
            goto label_de4028
        
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "HMAC(", arg7)
    int128_t* x0_21
    int128_t v0_1
    x0_21, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_d0)
    var_140_1 = x0_21[1].q
    var_150 = *x0_21
    __builtin_memset(x0_21, 0, 0x18)
    
    if ((zx.d(var_d0.b) & 1) != 0)
        operator delete(var_c0)
    
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "PBKDF2(", &var_150)
    int128_t* x0_24
    int128_t v0_2
    x0_24, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_d0)
    void* x8_21 = x0_24[1].q
    var_170 = *x0_24
    __builtin_memset(x0_24, 0, 0x18)
    
    if ((zx.d(var_d0.b) & 1) != 0)
        operator delete(var_c0)
    
    var_d0.w = 0
    Botan::PasswordHashFamily::create(&var_170, &var_d0)
    
    if ((zx.d(var_d0.b) & 1) != 0)
        operator delete(var_c0)
    
    int64_t* var_178
    
    if (var_178 == 0)
        void** x0_164 = __cxa_allocate_exception(0x20)
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "Unknown password hash digest ", arg7)
        *x0_164 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_164[1])
        *x0_164 = _vtable_for_Botan::Invalid_Argument + 0x10
        __cxa_throw(x0_164, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
        noreturn
    
    if (arg4 == 0)
        (*(*var_178 + 0x28))(var_178, arg5)
    else
        (*(*var_178 + 0x18))(var_178, x26_1, *arg4, 0)
    
    struct std::__ndk1::__function::__base<bool (char)>::std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>::VTable
        * const x25_1 = var_d0
    __builtin_memset(&var_258_1, 0, 0x18)
    uint64_t x28_1
    int64_t fp_1
    
    if (x26_1 == 0)
        fp_1 = 0
        x28_1 = 0
    label_de357c:
        uint64_t x8_26 = zx.q(*arg3)
        uint64_t x5 = var_130
        int32_t temp1_1 = x8_26.d & 1
        void* x3
        
        if (temp1_1 != 0)
            x3 = *(arg3 + 0x10)
        else
            x3 = &arg3[1]
        
        uint64_t x4_4
        
        if (temp1_1 == 0)
            x4_4 = x8_26 u>> 1
        else
            x4_4 = *(arg3 + 8)
        
        (*(x25_1->vFunc_0 + 0x38))(x25_1, x28_1, fp_1 - x28_1, x3, x4_4, x5, var_128 - x5)
        __builtin_memset(&var_190, 0, 0x18)
        int64_t x0_34 = (*(x25_1->vFunc_0 + 0x18))(x25_1)
        
        if (arg4 != 0)
            *arg4 = x0_34
        
        int64_t* var_b0_1 = nullptr
        int128_t var_a0
        __builtin_memset(&var_a0, 0, 0x30)
        var_110.q = &_vtable_for_std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>{for `std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>'}
        int64_t* var_108_1 = &var_190
        int16_t* var_f0_1 = &var_110
        sub_f2410c(&var_110, &var_d0)
        
        if (&var_110 == var_f0_1)
            (*(*var_f0_1 + 0x20))()
        else if (var_f0_1 != 0)
            (*(*var_f0_1 + 0x28))()
        
        Botan::DER_Encoder::start_cons(&var_d0, 0x10)
        Botan::DER_Encoder::add_object(&var_d0, 4, nullptr, var_130)
        int64_t x0_41 = Botan::DER_Encoder::encode(Botan::DER_Encoder::encode(&var_d0))
        uint64_t x8_34 = zx.q(var_150.b)
        uint64_t x8_35
        
        if ((x8_34.d & 1) == 0)
            x8_35 = x8_34 u>> 1
        else
            x8_35 = var_150:8.q
        
        int32_t x26_2
        
        if (x8_35 != 0xd)
            x26_2 = 1
        else
            x26_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                &var_150, 0, -ffffffffffffffff, "HMAC(SHA-160)") != 0 ? 1 : 0
        
        var_110.q = _vtable_for_Botan::AlgorithmIdentifier + 0x10
        Botan::OID::from_string(&var_150)
        int64_t var_e8_1
        __builtin_memset(&var_e8_1, 0, 0x18)
        int16_t* x0_45 = operator new(2)
        void* var_e0_1 = &x0_45[1]
        void* var_d8_1 = &x0_45[1]
        *x0_45 = 5
        var_e8 = x0_45
        
        if (x26_2 != 0)
            (*var_110.q)(&var_110, x0_41)
        
        Botan::DER_Encoder::end_cons()
        var_110.q = _vtable_for_Botan::AlgorithmIdentifier + 0x10
        
        if (var_e8 != 0)
            int16_t* var_e0_2 = var_e8
            operator delete(var_e8)
        
        if (var_100 != 0)
            void* var_f8_1 = var_100
            operator delete(var_100)
        
        int128_t var_90
        void* x27_2 = var_90:8.q
        
        if (x27_2 != 0)
            void* x24_2 = var_80.q
            void* x0_51
            
            if (x24_2 == x27_2)
                x0_51 = x27_2
            else
                do
                    x24_2 -= 0x38
                    sub_f230d4(&var_80:8, x24_2)
                while (x27_2 != x24_2)
                
                x0_51 = var_90:8.q
            
            var_80.q = x27_2
            operator delete(x0_51)
        
        void* x0_52 = var_a0.q
        
        if (x0_52 != 0)
            var_a0:8.q = x0_52
            Botan::deallocate_memory(x0_52, var_90.q - x0_52, 1)
        
        if (&var_d0 == var_b0_1)
            (*(*var_b0_1 + 0x20))()
        else if (var_b0_1 != 0)
            (*(*var_b0_1 + 0x28))()
        
        char var_1a8 = 0x18
        int64_t var_1a7
        __builtin_strncpy(&var_1a7, "PKCS5.PBKDF2", 0xd)
        Botan::OID::from_string(&var_1a8)
        Botan::AlgorithmIdentifier::AlgorithmIdentifier(&var_d0, &var_110)
        var_110.q = _vtable_for_Botan::OID + 0x10
        
        if (_vtable_for_Botan::OID != -0x10)
            var_100 = _vtable_for_Botan::OID + 0x10
            operator delete(_vtable_for_Botan::OID + 0x10)
        
        int64_t x0_57 = var_230
        
        if (x0_57 != 0)
            var_230 = x0_57
            operator delete(x0_57)
        
        void* x0_58 = var_220:8.q
        __builtin_memset(&var_c0_1, 0, 0x18)
        var_230_1 = var_c0.o.q
        var_220.q = var_b0_1
        
        if (x0_58 != 0)
            var_210.q = x0_58
            operator delete(x0_58)
            x0_58 = var_c0_1
        
        int128_t v0_3 = var_a8
        int64_t x8_48 = var_a0:8.q
        __builtin_memset(&var_a8, 0, 0x18)
        var_220 = v0_3
        var_210:8.q = x8_48
        var_d0 = _vtable_for_Botan::AlgorithmIdentifier + 0x10
        var_c8.q = _vtable_for_Botan::OID + 0x10
        
        if (x0_58 != 0)
            void* var_b8_1 = x0_58
            operator delete(x0_58)
        
        void* var_198
        
        if ((zx.d(var_1a8) & 1) != 0)
            operator delete(var_198)
        void* x0_60 = var_190
        
        if (x0_60 != 0)
            void* var_188_1 = x0_60
            operator delete(x0_60)
        
        if (x25_1 != 0)
            (*(x25_1->vFunc_0 + 8))(x25_1)
        
        (*(*var_178 + 8))(var_178)
        
        if ((zx.d(var_170.b) & 1) != 0)
            operator delete(x8_21)
        
        if ((zx.d(var_150.b) & 1) != 0)
            operator delete(var_140_1)
        
        x0_65 = var_130
        
        if (x0_65 == 0)
            goto label_de3978
        
        goto label_de395c
    
    if ((x26_1 & 0xffffffff80000000) == 0)
        uint64_t x0_31 = Botan::allocate_memory(x26_1, 1)
        fp_1 = x0_31 + x26_1
        x28_1 = x0_31
        var_258_1 = x0_31
        var_248_1 = fp_1
        memset(x0_31, 0, x26_1)
        var_250_1 = fp_1
        goto label_de357c
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
__stack_chk_fail()
noreturn
