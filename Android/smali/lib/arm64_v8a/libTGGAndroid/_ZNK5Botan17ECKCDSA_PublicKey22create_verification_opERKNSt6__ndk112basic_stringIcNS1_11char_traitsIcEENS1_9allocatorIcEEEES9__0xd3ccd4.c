// 函数: _ZNK5Botan17ECKCDSA_PublicKey22create_verification_opERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
// 地址: 0xd3ccd4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x2
uint64_t x11 = zx.q(*entry_x2)
uint64_t x9 = *(entry_x2 + 8)
int32_t x10 = x11.d & 1
uint64_t x11_1 = x11 u>> 1
uint64_t x12

x12 = x10 == 0 ? x11_1 : x9

if (x12 != 4)
    goto label_d3cd48

void* result_1

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        entry_x2, 0, -ffffffffffffffff, "base") != 0)
    uint64_t x8 = zx.q(*entry_x2)
    x9 = *(entry_x2 + 8)
    x10 = x8.d & 1
    x11_1 = x8 u>> 1
label_d3cd48:
    uint64_t x8_1
    
    if ((x10 & 0xff) == 0)
        x8_1 = x11_1
    else
        x8_1 = x9
    
    if (x8_1 != 0)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            * x0_24 = __cxa_allocate_exception(0x20)
        (*(*arg1 + 0x10))(arg1)
        Botan::Provider_Not_Found::Provider_Not_Found(x0_24, &result_1)
        __cxa_throw(x0_24, _typeinfo_for_Botan::Provider_Not_Found, Botan::Exception::~Exception)
        noreturn

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x0_2 = operator new(0x78)
struct Botan::PK_Ops::Verification_with_EMSA::Botan::(anonymous namespace)::ECKCDSA_Verification_Operation::VTable
    ** x19_1 = x0_2
Botan::PK_Ops::Verification_with_EMSA::Verification_with_EMSA(x0_2)
*x19_1 = &_vtable_for_Botan::(anonymous namespace)::ECKCDSA_Verification_Operation{for `Botan::PK_Ops::Verification_with_EMSA'}
void* x8_4 = arg1 + *(*arg1 - 0x88)
int64_t x8_5 = *(x8_4 + 0x10)
x19_1[6] = *(x8_4 + 8)
x19_1[7] = x8_5

if (x8_5 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(x8_5 + 8) + 1, x8_5 + 8)
    while (i != 0)

void* x0_5 = Botan::EC_Group::data()
*(*arg1 - 0x88)
Botan::PointGFp_Multi_Point_Precompute::PointGFp_Multi_Point_Precompute(&x19_1[8], x0_5 + 0x10)
__builtin_memset(&x19_1[0xc], 0, 0x18)
*(*arg1 - 0x88)
Botan::PointGFp::get_affine_x()
*(*arg1 - 0x88)
Botan::PointGFp::get_affine_y()
int64_t x0_9 = Botan::BigInt::bits()
int64_t x0_10 = Botan::BigInt::bits()
int64_t x8_18

if ((x0_10 & 7) == 0)
    x8_18 = 0
else
    x8_18 = 8 - (x0_10 & 7)

int64_t x24 = x19_1[0xc]
int64_t x9_5

if ((x0_9 & 7) == 0)
    x9_5 = 0
else
    x9_5 = 8 - (x0_9 & 7)

uint64_t x8_21 = ((x8_18 + x0_10) u>> 3) + ((x9_5 + x0_9) u>> 3)
int64_t x9_7 = x19_1[0xd] - x24

if (x8_21 u> x9_7)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&x19_1[0xc])
    x24 = x19_1[0xc]
else if (x8_21 u< x9_7)
    x19_1[0xd] = x24 + x8_21

int64_t x0_12 = Botan::BigInt::bits()
int64_t x8_25

if ((x0_12 & 7) == 0)
    x8_25 = 0
else
    x8_25 = 8 - (x0_12 & 7)

int64_t x11_2 = x8_25 + x0_12
uint64_t x9_8 = x11_2 u>> 5
uint64_t i_1 = x11_2 u>> 3 & 3
int64_t var_60

if (x9_8 != 0)
    int64_t x10_4 = 0
    int32_t* x11_5 = (x11_2 u>> 3) + x24 - 4
    
    do
        void* result_4 = result_1
        int32_t x12_1
        
        if (x10_4 u< (var_60 - result_4) s>> 2)
            x12_1 = *(result_4 + (x10_4 << 2))
        else
            x12_1 = 0
        
        x10_4 += 1
        *x11_5 = _byteswap(x12_1)
        x11_5 = &x11_5[-1]
    while (x9_8 != x10_4)

if (i_1 != 0)
    void* result_3 = result_1
    int32_t x9_9
    
    if (x9_8 u>= (var_60 - result_3) s>> 2)
        x9_9 = 0
    else
        x9_9 = *(result_3 + (x9_8 << 2))
    
    int32_t x11_8 = 0x18
    
    do
        *(x24 - 1 + i_1) = (x9_9 u>> (not.d(x11_8) & 0x18)).b
        i_1 -= 1
        x11_8 -= 8
    while (i_1 != 0)

int64_t x0_13 = Botan::BigInt::bits()
int64_t x24_1 = x19_1[0xc]
int64_t x0_14 = Botan::BigInt::bits()
int64_t x8_28

if ((x0_14 & 7) == 0)
    x8_28 = 0
else
    x8_28 = 8 - (x0_14 & 7)

int64_t x12_6 = x8_28 + x0_14
int64_t x8_29

if ((x0_13 & 7) == 0)
    x8_29 = 0
else
    x8_29 = 8 - (x0_13 & 7)

uint64_t x10_7 = x12_6 u>> 5
uint64_t x9_11 = (x8_29 + x0_13) u>> 3
uint64_t i_2 = x12_6 u>> 3 & 3
void* var_90
int64_t var_88

if (x10_7 != 0)
    int64_t x11_9 = 0
    int32_t* x12_10 = x9_11 + (x12_6 u>> 3) + x24_1 - 4
    
    do
        int32_t x13_3
        
        if (x11_9 u< (var_88 - var_90) s>> 2)
            x13_3 = *(var_90 + (x11_9 << 2))
        else
            x13_3 = 0
        
        x11_9 += 1
        *x12_10 = _byteswap(x13_3)
        x12_10 = &x12_10[-1]
    while (x10_7 != x11_9)

if (i_2 != 0)
    int32_t x10_8
    
    if (x10_7 u>= (var_88 - var_90) s>> 2)
        x10_8 = 0
    else
        x10_8 = *(var_90 + (x10_7 << 2))
    
    int32_t x11_11 = 0x18
    
    do
        *(x9_11 + x24_1 - 1 + i_2) = (x10_8 u>> (not.d(x11_11) & 0x18)).b
        i_2 -= 1
        x11_11 -= 8
    while (i_2 != 0)

char var_a8
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_a8)
int16_t var_c0 = 0
Botan::HashFunction::create(&var_a8, &var_c0)
int64_t* var_38
int64_t x0_18 = (*(*var_38 + 0x48))()
int64_t x8_33 = x19_1[0xc]
int64_t x9_15 = x19_1[0xd] - x8_33

if (x0_18 u> x9_15)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&x19_1[0xc])
else if (x0_18 u< x9_15)
    x19_1[0xd] = x8_33 + x0_18

int64_t var_38_1 = 0

if (var_38 != 0)
    (*(*var_38 + 0x10))()

if ((zx.d(var_c0.b) & 1) == 0)
    if ((zx.d(var_a8) & 1) != 0)
        goto label_d3d0b0
    
    goto label_d3d090

void* var_b0
operator delete(var_b0)
void* var_88_1
int64_t var_80

if ((zx.d(var_a8) & 1) == 0)
label_d3d090:
    
    if (var_90 != 0)
        var_88_1 = var_90
        Botan::deallocate_memory(var_90, (var_80 - var_90) s>> 2, 4)
else
label_d3d0b0:
    void* var_98
    operator delete(var_98)
    
    if (var_90 != 0)
        var_88_1 = var_90
        Botan::deallocate_memory(var_90, (var_80 - var_90) s>> 2, 4)
void* result = result_1

if (result != 0)
    void* result_2 = result
    int64_t var_58
    result = Botan::deallocate_memory(result, (var_58 - result) s>> 2, 4)

struct Botan::PK_Ops::Verification_with_EMSA::Botan::(anonymous namespace)::ECKCDSA_Verification_Operation::VTable
    *** entry_x8
*entry_x8 = x19_1
return result
