// 函数: _ZNK5Botan3TLS7Session10DER_encodeEv
// 地址: 0xe80d74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x27 = _ReadMSR(tpidr_el0)
int64_t x9 = *(x27 + 0x28)
void* result_1
__builtin_memset(&result_1, 0, 0x18)
int128_t var_d0
std::__ndk1::chrono::time_point<std::__ndk1::chrono::system_clock, std::__ndk1::chrono::duration<int64_t, std::__ndk1::ratio<1l, 1000000l> > >
    * entry_x0

if (*(entry_x0 + 0x68) != *(entry_x0 + 0x60))
    int64_t x28_1 = 0
    int64_t i = 0
    
    do
        Botan::ASN1_Object::BER_encode()
        void* result_4 = result_1
        void* var_e0_1
        void* x1_1 = var_e0_1
        int64_t x22_1 = var_d0.q
        size_t x24_1 = x1_1 - result_4
        uint64_t x25_1 = var_d0:8.q - x22_1 + x24_1
        void* var_d8_1
        
        if (var_d8_1 - result_4 u< x25_1)
            void* result_3 = operator new(x25_1)
            
            if (x24_1 s>= 1)
                memcpy(result_3, result_4, x24_1)
            
            x1_1 = result_3 + x24_1
            result_1 = result_3
            var_e0_1 = x1_1
            var_d8_1 = result_3 + x25_1
            
            if (result_4 != 0)
                operator delete(result_4)
                x1_1 = var_e0_1
                x22_1 = var_d0.q
        
        std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::insert<std::__ndk1::__wrap_iter<uint8_t const*> >(
            &result_1, x1_1, x22_1)
        void* x0_5 = var_d0.q
        
        if (x0_5 != 0)
            var_d0:8.q = x0_5
            operator delete(x0_5)
        
        i += 1
        x28_1 += 0x88
    while (i != ((*(entry_x0 + 0x68) - *(entry_x0 + 0x60)) s>> 3) * -0xf0f0f0f0f0f0f0f)

int128_t var_90
__builtin_memset(&var_90, 0, 0x20)
int64_t var_a0 = (zx.o(0)).q
__builtin_memset(&var_d0, 0, 0x28)
Botan::DER_Encoder::start_cons(&var_d0, 0x10)
uint64_t x0_8 = Botan::DER_Encoder::encode(&var_d0)
std::__ndk1::chrono::system_clock::to_time_t(entry_x0)
uint64_t x0_12 = Botan::DER_Encoder::encode(x0_8)
*(entry_x0 + 0x51)
uint64_t x0_13 = Botan::DER_Encoder::encode(x0_12)
*(entry_x0 + 0x50)
int64_t x0_14 = Botan::DER_Encoder::encode(x0_13)
*(entry_x0 + 0x10)
int64_t x0_15 = Botan::DER_Encoder::add_object(x0_14, 4, nullptr, *(entry_x0 + 8))
*(entry_x0 + 0x28)
uint64_t x0_16 = Botan::DER_Encoder::add_object(x0_15, 4, nullptr, *(entry_x0 + 0x20))
*(entry_x0 + 0x52)
uint64_t x0_18 = Botan::DER_Encoder::encode(Botan::DER_Encoder::encode(x0_16))
*(entry_x0 + 0x54)
uint64_t x0_20 = Botan::DER_Encoder::encode(Botan::DER_Encoder::encode(x0_18))
char var_128 = ((zx.d(*(entry_x0 + 0x5a)) & 1) << 0x1f s>> 0x1f).b
Botan::DER_Encoder::add_object(x0_20, 1, nullptr, &var_128)
var_128 = ((zx.d(*(entry_x0 + 0x5b)) & 1) << 0x1f s>> 0x1f).b
Botan::DER_Encoder::add_object(x0_20, 1, nullptr, &var_128)
*(entry_x0 + 0x40)
Botan::DER_Encoder::add_object(x0_20, 4, nullptr, *(entry_x0 + 0x38))
Botan::DER_Encoder::add_object(x0_20, 4, nullptr, result_1)
char var_140
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_140)
var_128.q = _vtable_for_Botan::ASN1_String + 0x10
void* var_120
__builtin_memset(&var_120, 0, 0x18)
char var_108
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_108)
int32_t var_f0 = 0xc
(*var_128.q)(&var_128, x0_20)
char var_198
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_198)
void* __offset(vtable_for_Botan::ASN1_String, 0x10) var_180 = _vtable_for_Botan::ASN1_String + 0x10
void* var_178
__builtin_memset(&var_178, 0, 0x18)
char var_160
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_160)
int32_t var_148 = 0xc
(*var_180)(&var_180, x0_20)
*(entry_x0 + 0xa8)
uint64_t x0_31 = Botan::DER_Encoder::encode(x0_20)
void* __offset(vtable_for_Botan::ASN1_String, 0x10) var_1d8 = _vtable_for_Botan::ASN1_String + 0x10
void* var_1d0
__builtin_memset(&var_1d0, 0, 0x18)
char var_1b8
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_1b8)
int32_t var_1a0 = 0xc
(*var_1d8)(&var_1d8, x0_31)
*(entry_x0 + 0x58)
Botan::DER_Encoder::encode(x0_31)
Botan::DER_Encoder::end_cons()
Botan::DER_Encoder::get_contents()
uint32_t x8_24 = zx.d(var_1b8)
var_1d8 = _vtable_for_Botan::ASN1_String + 0x10
void* var_1a8

if ((x8_24 & 1) != 0)
    operator delete(var_1a8)
void* x0_36 = var_1d0

if (x0_36 != 0)
    void* var_1c8_1 = x0_36
    operator delete(x0_36)

uint32_t x8_25 = zx.d(var_160)
var_180 = _vtable_for_Botan::ASN1_String + 0x10
void* var_150

if ((x8_25 & 1) != 0)
    operator delete(var_150)
void* x0_38 = var_178

if (x0_38 != 0)
    void* var_170_1 = x0_38
    operator delete(x0_38)

if ((zx.d(var_198) & 1) == 0)
    var_128.q = _vtable_for_Botan::ASN1_String + 0x10
    
    if ((zx.d(var_108) & 1) != 0)
        goto label_e81174
    
    goto label_e810fc

void* var_188
operator delete(var_188)
var_128.q = _vtable_for_Botan::ASN1_String + 0x10
void* var_118_1
void* x0_39

if ((zx.d(var_108) & 1) == 0)
label_e810fc:
    x0_39 = var_120
    
    if (x0_39 != 0)
        var_118_1 = x0_39
        operator delete(x0_39)
else
label_e81174:
    void* var_f8
    operator delete(var_f8)
    x0_39 = var_120
    
    if (x0_39 != 0)
        var_118_1 = x0_39
        operator delete(x0_39)
void* var_130

if ((zx.d(var_140) & 1) != 0)
    operator delete(var_130)
void* x21_5 = var_90:8.q

if (x21_5 != 0)
    int128_t var_80
    void* x19_1 = var_80.q
    void* x0_42
    
    if (x19_1 == x21_5)
        x0_42 = x21_5
    else
        do
            x19_1 -= 0x38
            sub_f230d4(&var_80:8, x19_1)
        while (x21_5 != x19_1)
        
        x0_42 = var_90:8.q
    
    var_80.q = x21_5
    operator delete(x0_42)

int64_t x0_45 = var_a0

if (x0_45 != 0)
    var_a0 = x0_45
    Botan::deallocate_memory(x0_45, var_90.q - x0_45, 1)

int64_t* var_b0

if (&var_d0 == var_b0)
    (*(*var_b0 + 0x20))()
else if (var_b0 != 0)
    (*(*var_b0 + 0x28))()

void* result = result_1

if (result != 0)
    void* result_2 = result
    result = operator delete(result)

if (*(x27 + 0x28) == x9)
    return result

__stack_chk_fail()
noreturn
