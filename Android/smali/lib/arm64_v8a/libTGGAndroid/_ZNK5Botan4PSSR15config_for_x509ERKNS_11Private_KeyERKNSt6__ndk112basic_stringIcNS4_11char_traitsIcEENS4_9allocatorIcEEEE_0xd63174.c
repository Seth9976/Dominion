// 函数: _ZNK5Botan4PSSR15config_for_x509ERKNS_11Private_KeyERKNSt6__ndk112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE
// 地址: 0xd63174
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x24 = _ReadMSR(tpidr_el0)
int64_t x9 = *(x24 + 0x28)
(*(**(arg1 + 8) + 0x40))()
char* entry_x2
uint64_t x9_3 = zx.q(*entry_x2)
char var_f0
uint64_t x23 = zx.q(var_f0)
uint64_t i_1 = x9_3 u>> 1
uint64_t i_2

if ((x9_3.d & 1) == 0)
    i_2 = i_1
else
    i_2 = *(entry_x2 + 8)

uint64_t var_e8
uint64_t x10_1

if ((x23.d & 1) == 0)
    x10_1 = x23 u>> 1
else
    x10_1 = var_e8

int32_t x26
char* var_e0

if (i_2 != x10_1)
    x26 = 1
    
    if ((x23.d & 1) != 0)
        operator delete(var_e0)
else
    char* x1
    
    if ((x23.d & 1) == 0)
        x1 = &var_f0 | 1
    else
        x1 = var_e0
    
    if ((x9_3.d & 1) == 0)
        if (i_2 == 0)
            goto label_d63630
        
        void* x9_5 = &entry_x2[1]
        uint32_t x10_2
        uint32_t x11_2
        uint64_t i
        
        do
            x10_2 = zx.d(*x9_5)
            x11_2 = zx.d(*x1)
            
            if (x10_2 != x11_2)
                break
            
            i = i_1
            i_1 -= 1
            x9_5 += 1
            x1 = &x1[1]
        while (i != 1)
        x26 = x10_2 != x11_2 ? 1 : 0
        
        if ((x23.d & 1) != 0)
            operator delete(var_e0)
    else if (i_2 == 0)
    label_d63630:
        x26 = 0
        
        if ((x23.d & 1) != 0)
            operator delete(var_e0)
    else
        x26 = memcmp() != 0 ? 1 : 0
        
        if ((x23.d & 1) != 0)
            operator delete(var_e0)

if (x26 != 0)
    void** x0_37 = __cxa_allocate_exception(0x20)
    int64_t x0_38
    int128_t v0
    x0_38, v0 = operator new(0x50)
    int64_t var_e0_3 = x0_38
    var_f0.o = data_71cfd0
    __builtin_strncpy(x0_38, "Hash function from opts and hash_fn argument need to be identical", 
        0x42)
    *x0_37 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_37[1])
    *x0_37 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_37, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

(*(*(arg2 + *(*arg2 - 0x88)) + 0x10))()
char var_120
__builtin_strcpy(&var_120, "\nEMSA4")
char var_108
int32_t x0_4 = Botan::sig_algo_and_pad_ok(&var_108, &var_120)
void* var_f8

if ((zx.d(var_108) & 1) != 0)
    operator delete(var_f8)
void* __offset(vtable_for_Botan::AlgorithmIdentifier, 0x10) var_160

if ((x0_4 & 1) == 0)
    void** x0_41 = __cxa_allocate_exception(0x20)
    void* x9_10 = arg2 + *(*arg2 - 0x88)
    (*(*x9_10 + 0x10))(x9_10)
    int128_t* x0_44
    int128_t v0_1
    x0_44, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
        &var_160, nullptr)
    int64_t var_e0_4 = x0_44[1].q
    var_f0.o = *x0_44
    __builtin_memset(x0_44, 0, 0x18)
    *x0_41 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_41[1])
    *x0_41 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_41, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

var_160 = _vtable_for_Botan::AlgorithmIdentifier + 0x10
Botan::OID::from_string(entry_x2)
int64_t var_138
__builtin_memset(&var_138, 0, 0x18)
int16_t* x0_7 = operator new(2)
void* var_130 = &x0_7[1]
void* var_128 = &x0_7[1]
*x0_7 = 5
char var_90 = 8
int32_t var_8f
__builtin_strncpy(&var_8f, "MGF1", 5)
Botan::ASN1_Object::BER_encode()
Botan::OID::from_string(&var_90)
int64_t* var_1a0
Botan::AlgorithmIdentifier::AlgorithmIdentifier(&var_1a0, &var_f0)
var_f0.q = _vtable_for_Botan::OID + 0x10

if (var_e8 != 0)
    uint64_t var_e0_1 = var_e8
    operator delete(var_e8)

void* var_1b8
void* x0_11 = var_1b8

if (x0_11 != 0)
    void* var_1b0_1 = x0_11
    operator delete(x0_11)

void* var_80

if ((zx.d(var_90) & 1) != 0)
    operator delete(var_80)

__builtin_memset(&var_1b8, 0, 0x18)
int64_t* var_d0 = nullptr
int64_t var_c0 = (zx.o(0)).q
int128_t var_b0
__builtin_memset(&var_b0, 0, 0x20)
var_90.q = &_vtable_for_std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>{for `std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>'}
void** var_88 = &var_1b8
char* var_70 = &var_90
sub_f2410c(&var_90, &var_f0)

if (&var_90 == var_70)
    (*(*var_70 + 0x20))()
else if (var_70 != 0)
    (*(*var_70 + 0x28))()

Botan::DER_Encoder::start_cons(&var_f0, 0x10)
Botan::DER_Encoder::start_cons(&var_f0, 0)
(*var_160)(&var_160, &var_f0)
Botan::DER_Encoder::end_cons()
Botan::DER_Encoder::start_cons(&var_f0, 1)
(*var_1a0)(&var_1a0, &var_f0)
Botan::DER_Encoder::end_cons()
Botan::DER_Encoder::start_cons(&var_f0, 2)
*(arg1 + 0x10)
Botan::DER_Encoder::encode(&var_f0)
Botan::DER_Encoder::encode(Botan::DER_Encoder::start_cons(Botan::DER_Encoder::end_cons(), 3))
Botan::DER_Encoder::end_cons()
Botan::DER_Encoder::end_cons()
void* x26_1 = var_b0:8.q

if (x26_1 != 0)
    int128_t var_a0
    void* x20_1 = var_a0.q
    void* x0_25
    
    if (x20_1 == x26_1)
        x0_25 = x26_1
    else
        do
            x20_1 -= 0x38
            sub_f230d4(&var_a0:8, x20_1)
        while (x26_1 != x20_1)
        
        x0_25 = var_b0:8.q
    
    var_a0.q = x26_1
    operator delete(x0_25)

int64_t x0_27 = var_c0

if (x0_27 != 0)
    var_c0 = x0_27
    Botan::deallocate_memory(x0_27, var_b0.q - x0_27, 1)

if (&var_f0 == var_d0)
    (*(*var_d0 + 0x20))()
else if (var_d0 != 0)
    (*(*var_d0 + 0x28))()

var_90 = 0x12
__builtin_strcpy(&var_8f, "RSA/EMSA4")
Botan::OID::from_string(&var_90)
Botan::OID* entry_x8
Botan::AlgorithmIdentifier::AlgorithmIdentifier(entry_x8, &var_f0)
var_f0.q = _vtable_for_Botan::OID + 0x10

if (var_e8 != 0)
    uint64_t var_e0_2 = var_e8
    operator delete(var_e8)

if ((zx.d(var_90) & 1) != 0)
    operator delete(var_80)

void* x0_33 = var_1b8

if (x0_33 != 0)
    void* var_1b0_2 = x0_33
    operator delete(x0_33)

var_1a0 = _vtable_for_Botan::AlgorithmIdentifier + 0x10
void* var_178

if (var_178 != 0)
    void* var_170_1 = var_178
    operator delete(var_178)

void* __offset(vtable_for_Botan::OID, 0x10) var_198 = _vtable_for_Botan::OID + 0x10
void* var_190

if (var_190 != 0)
    void* var_188_1 = var_190
    operator delete(var_190)

var_160 = _vtable_for_Botan::AlgorithmIdentifier + 0x10

if (x0_7 != 0)
    int16_t* var_130_1 = x0_7
    operator delete(x0_7)

void* result_1
void* result = result_1
void* __offset(vtable_for_Botan::OID, 0x10) var_158 = _vtable_for_Botan::OID + 0x10

if (result != 0)
    void* result_2 = result
    result = operator delete(result)

if (*(x24 + 0x28) == x9)
    return result

__stack_chk_fail()
noreturn
