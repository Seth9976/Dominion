// 函数: _ZNK5Botan18ECKCDSA_PrivateKey19create_signature_opERNS_21RandomNumberGeneratorERKNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEESB_
// 地址: 0xd3d3a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x3
uint64_t x11 = zx.q(*entry_x3)
uint64_t x9 = *(entry_x3 + 8)
int32_t x10 = x11.d & 1
uint64_t x11_1 = x11 u>> 1
uint64_t x12

x12 = x10 == 0 ? x11_1 : x9

if (x12 != 4)
    goto label_d3d414

char var_58

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        entry_x3, 0, -ffffffffffffffff, "base") != 0)
    uint64_t x8 = zx.q(*entry_x3)
    x9 = *(entry_x3 + 8)
    x10 = x8.d & 1
    x11_1 = x8 u>> 1
label_d3d414:
    uint64_t x8_1
    
    if ((x10 & 0xff) == 0)
        x8_1 = x11_1
    else
        x8_1 = x9
    
    if (x8_1 != 0)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            * x0_22 = __cxa_allocate_exception(0x20)
        var_58 = 0xe
        int32_t var_57
        __builtin_strncpy(&var_57, "ECKCDSA", 8)
        Botan::Provider_Not_Found::Provider_Not_Found(x0_22, &var_58)
        __cxa_throw(x0_22, _typeinfo_for_Botan::Provider_Not_Found, Botan::Exception::~Exception)
        noreturn

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x0_2 = operator new(0x78)
struct Botan::PK_Ops::Signature_with_EMSA::Botan::(anonymous namespace)::ECKCDSA_Signature_Operation::VTable
    ** x19_1 = x0_2
Botan::PK_Ops::Signature_with_EMSA::Signature_with_EMSA(x0_2)
*x19_1 = &_vtable_for_Botan::(anonymous namespace)::ECKCDSA_Signature_Operation{for `Botan::PK_Ops::Signature_with_EMSA'}
int64_t x8_2 = *(arg1 + 0x48)
x19_1[6] = *(arg1 + 0x40)
x19_1[7] = x8_2

if (x8_2 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(x8_2 + 8) + 1, x8_2 + 8)
    while (i != 0)

int64_t x0_4 = Botan::EC_PrivateKey::private_value()
*(x19_1 + 0x48) = zx.o(0)
x19_1[8] = x0_4
__builtin_memset(&x19_1[0xb], 0, 0x20)
Botan::PointGFp::get_affine_x()
Botan::PointGFp::get_affine_y()
int64_t x0_7 = Botan::BigInt::bits()
int64_t x0_8 = Botan::BigInt::bits()
int64_t x8_6

if ((x0_8 & 7) == 0)
    x8_6 = 0
else
    x8_6 = 8 - (x0_8 & 7)

int64_t x23 = x19_1[9]
int64_t x9_5

if ((x0_7 & 7) == 0)
    x9_5 = 0
else
    x9_5 = 8 - (x0_7 & 7)

uint64_t x8_9 = ((x8_6 + x0_8) u>> 3) + ((x9_5 + x0_7) u>> 3)
int64_t x9_7 = x19_1[0xa] - x23

if (x8_9 u> x9_7)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&x19_1[9])
    x23 = x19_1[9]
else if (x8_9 u< x9_7)
    x19_1[0xa] = x23 + x8_9

int64_t x0_10 = Botan::BigInt::bits()
int64_t x8_13

if ((x0_10 & 7) == 0)
    x8_13 = 0
else
    x8_13 = 8 - (x0_10 & 7)

int64_t x11_2 = x8_13 + x0_10
uint64_t x9_8 = x11_2 u>> 5
uint64_t i_1 = x11_2 u>> 3 & 3
char var_50

if (x9_8 != 0)
    int64_t x10_4 = 0
    int32_t* x11_5 = (x11_2 u>> 3) + x23 - 4
    
    do
        int64_t x12_3 = var_58.q
        int32_t x12_1
        
        if (x10_4 u< (var_50.q - x12_3) s>> 2)
            x12_1 = *(x12_3 + (x10_4 << 2))
        else
            x12_1 = 0
        
        x10_4 += 1
        *x11_5 = _byteswap(x12_1)
        x11_5 = &x11_5[-1]
    while (x9_8 != x10_4)

if (i_1 != 0)
    int64_t x10_5 = var_58.q
    int32_t x9_9
    
    if (x9_8 u>= (var_50.q - x10_5) s>> 2)
        x9_9 = 0
    else
        x9_9 = *(x10_5 + (x9_8 << 2))
    
    int32_t x11_8 = 0x18
    
    do
        *(x23 - 1 + i_1) = (x9_9 u>> (not.d(x11_8) & 0x18)).b
        i_1 -= 1
        x11_8 -= 8
    while (i_1 != 0)

int64_t x0_11 = Botan::BigInt::bits()
int64_t x23_1 = x19_1[9]
int64_t x0_12 = Botan::BigInt::bits()
int64_t x8_16

if ((x0_12 & 7) == 0)
    x8_16 = 0
else
    x8_16 = 8 - (x0_12 & 7)

int64_t x12_7 = x8_16 + x0_12
int64_t x8_17

if ((x0_11 & 7) == 0)
    x8_17 = 0
else
    x8_17 = 8 - (x0_11 & 7)

uint64_t x10_8 = x12_7 u>> 5
uint64_t x9_11 = (x8_17 + x0_11) u>> 3
uint64_t i_2 = x12_7 u>> 3 & 3
void* var_80
int64_t var_78

if (x10_8 != 0)
    int64_t x11_9 = 0
    int32_t* x12_11 = x9_11 + (x12_7 u>> 3) + x23_1 - 4
    
    do
        int32_t x13_3
        
        if (x11_9 u< (var_78 - var_80) s>> 2)
            x13_3 = *(var_80 + (x11_9 << 2))
        else
            x13_3 = 0
        
        x11_9 += 1
        *x12_11 = _byteswap(x13_3)
        x12_11 = &x12_11[-1]
    while (x10_8 != x11_9)

if (i_2 != 0)
    int32_t x10_9
    
    if (x10_8 u>= (var_78 - var_80) s>> 2)
        x10_9 = 0
    else
        x10_9 = *(var_80 + (x10_8 << 2))
    
    int32_t x11_11 = 0x18
    
    do
        *(x9_11 + x23_1 - 1 + i_2) = (x10_9 u>> (not.d(x11_11) & 0x18)).b
        i_2 -= 1
        x11_11 -= 8
    while (i_2 != 0)

char var_a0
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_a0)
int16_t var_b8 = 0
Botan::HashFunction::create(&var_a0, &var_b8)
int64_t* var_88
int64_t x0_16 = (*(*var_88 + 0x48))()
int64_t x8_21 = x19_1[9]
int64_t x9_15 = x19_1[0xa] - x8_21

if (x0_16 u> x9_15)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&x19_1[9])
else if (x0_16 u< x9_15)
    x19_1[0xa] = x8_21 + x0_16

int64_t var_88_1 = 0

if (var_88 != 0)
    (*(*var_88 + 0x10))()

if ((zx.d(var_b8.b) & 1) == 0)
    if ((zx.d(var_a0) & 1) != 0)
        goto label_d3d740
    
    goto label_d3d720

void* var_a8
operator delete(var_a8)
void* var_78_1
int64_t var_70

if ((zx.d(var_a0) & 1) == 0)
label_d3d720:
    
    if (var_80 != 0)
        var_78_1 = var_80
        Botan::deallocate_memory(var_80, (var_70 - var_80) s>> 2, 4)
else
label_d3d740:
    void* var_90
    operator delete(var_90)
    
    if (var_80 != 0)
        var_78_1 = var_80
        Botan::deallocate_memory(var_80, (var_70 - var_80) s>> 2, 4)
void* result = var_58.q

if (result != 0)
    var_50.q = result
    int64_t var_48
    result = Botan::deallocate_memory(result, (var_48 - result) s>> 2, 4)

struct Botan::PK_Ops::Signature_with_EMSA::Botan::(anonymous namespace)::ECKCDSA_Signature_Operation::VTable
    *** entry_x8
*entry_x8 = x19_1
return result
