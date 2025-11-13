// 函数: sub_dfeb80
// 地址: 0xdfeb80
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
int64_t x8_2 = arg2[1] - *arg2
char var_f0
int128_t var_90

if (x8_2 u% arg3 != 0 || x8_2 != arg4 * arg3)
    void** x0_11 = __cxa_allocate_exception(0x20)
    int64_t x0_12
    int128_t v0
    x0_12, v0 = operator new(0x30)
    int64_t var_80 = x0_12
    var_90 = data_71c510
    __builtin_strncpy(x0_12, "Unexpected size for DER signature", 0x22)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "Encoding error: ", &var_90)
    *x0_11 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_11[1])
    *x0_11 = _vtable_for_Botan::Invalid_Argument + 0x10
    void* var_e0
    
    if ((zx.d(var_f0) & 1) != 0)
        operator delete(var_e0)
    *x0_11 = _vtable_for_Botan::Encoding_Error + 0x10
    __cxa_throw(x0_11, _typeinfo_for_Botan::Encoding_Error, Botan::Exception::~Exception)
    noreturn

void* var_108
std::__ndk1::vector<Botan::BigInt, std::__ndk1::allocator<Botan::BigInt> >::vector(&var_108)
void* x8_3 = var_108
int64_t* var_100

if (var_100 != x8_3)
    int64_t x23_1 = 0
    int64_t x24_1 = 0
    int64_t i = 0
    
    do
        Botan::BigInt::binary_decode(x8_3 + x23_1, *arg2 + x24_1)
        x8_3 = var_108
        i += 1
        x24_1 += arg4
        x23_1 += 0x28
    while (i != ((var_100 - x8_3) s>> 3) * -0x3333333333333333)

__builtin_memset(arg1, 0, 0x18)
int64_t* result_1 = nullptr
int64_t var_c0 = (zx.o(0)).q
int128_t var_b0
__builtin_memset(&var_b0, 0, 0x20)
var_90.q = &_vtable_for_std::__ndk1::__function::__func<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2, std::__ndk1::allocator<Botan::DER_Encoder::DER_Encoder(std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >&)::$_2>, void (uint8_t const*, uint64_t)>{for `std::__ndk1::__function::__base<void (uint8_t const*, uint64_t)>'}
var_90:8.q = arg1
int128_t* var_70 = &var_90
sub_f2410c(&var_90, &var_f0)

if (&var_90 == var_70)
    (*(*var_70 + 0x20))()
else if (var_70 != 0)
    (*(*var_70 + 0x28))()

Botan::DER_Encoder::start_cons(&var_f0, 0x10)
void* x8_7 = var_108

if (var_100 != x8_7)
    int64_t x20_2 = 0
    int64_t i_1 = 0
    
    do
        Botan::DER_Encoder::encode(&var_f0, x8_7 + x20_2, 2)
        x8_7 = var_108
        i_1 += 1
        x20_2 += 0x28
    while (i_1 != ((var_100 - x8_7) s>> 3) * -0x3333333333333333)

Botan::DER_Encoder::end_cons()
void* x21_1 = var_b0:8.q

if (x21_1 != 0)
    int128_t var_a0
    void* x19_1 = var_a0.q
    void* x0_7
    
    if (x19_1 == x21_1)
        x0_7 = x21_1
    else
        do
            x19_1 -= 0x38
            sub_f230d4(&var_a0:8, x19_1)
        while (x21_1 != x19_1)
        
        x0_7 = var_b0:8.q
    
    var_a0.q = x21_1
    operator delete(x0_7)

int64_t x0_8 = var_c0

if (x0_8 != 0)
    var_c0 = x0_8
    Botan::deallocate_memory(x0_8, var_b0.q - x0_8, 1)

int64_t* result = result_1

if (&var_f0 == result)
    result = (*(*result + 0x20))()
else if (result != 0)
    result = (*(*result + 0x28))()

void* x19_2 = var_108

if (x19_2 != 0)
    int64_t* x8_12 = var_100
    void* x0_10
    
    if (x8_12 == x19_2)
        x0_10 = x19_2
    else
        int64_t* x20_3 = x8_12
        
        do
            x20_3 = &x20_3[-5]
            void* x0_9 = *x20_3
            
            if (x0_9 != 0)
                int64_t x9_15 = x8_12[-3]
                x8_12[-4] = x0_9
                Botan::deallocate_memory(x0_9, (x9_15 - x0_9) s>> 2, 4)
            
            x8_12 = x20_3
        while (x19_2 != x20_3)
        
        x0_10 = var_108
    
    void* var_100_1 = x19_2
    result = operator delete(x0_10)

if (*(x22 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
