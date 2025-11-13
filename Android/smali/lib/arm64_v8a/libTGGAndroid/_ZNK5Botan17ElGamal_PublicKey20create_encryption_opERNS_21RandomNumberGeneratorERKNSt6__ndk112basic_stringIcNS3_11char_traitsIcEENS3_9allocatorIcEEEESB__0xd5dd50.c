// 函数: _ZNK5Botan17ElGamal_PublicKey20create_encryption_opERNS_21RandomNumberGeneratorERKNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEESB_
// 地址: 0xd5dd50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x3
uint64_t x11 = zx.q(*entry_x3)
uint64_t x9 = *(entry_x3 + 8)
int32_t x10 = x11.d & 1
uint64_t x11_1 = x11 u>> 1
uint64_t x12

x12 = x10 == 0 ? x11_1 : x9

if (x12 != 4)
    goto label_d5ddc4

int64_t var_58

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        entry_x3, 0, -ffffffffffffffff, "base") != 0)
    uint64_t x8 = zx.q(*entry_x3)
    x9 = *(entry_x3 + 8)
    x10 = x8.d & 1
    x11_1 = x8 u>> 1
label_d5ddc4:
    uint64_t x8_1
    
    if ((x10 & 0xff) == 0)
        x8_1 = x11_1
    else
        x8_1 = x9
    
    if (x8_1 != 0)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            * x0_13 = __cxa_allocate_exception(0x20)
        (*(*arg1 + 0x10))(arg1)
        Botan::Provider_Not_Found::Provider_Not_Found(x0_13, &var_58)
        __cxa_throw(x0_13, _typeinfo_for_Botan::Provider_Not_Found, Botan::Exception::~Exception)
        noreturn

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x0_2 = operator new(0x30)
struct Botan::PK_Ops::Encryption_with_EME::Botan::(anonymous namespace)::ElGamal_Encryption_Operation::VTable
    ** x19_1 = x0_2
Botan::PK_Ops::Encryption_with_EME::Encryption_with_EME(x0_2)
*x19_1 = &_vtable_for_Botan::(anonymous namespace)::ElGamal_Encryption_Operation{for `Botan::PK_Ops::Encryption_with_EME'}
void* x8_2 = *arg1
void* x9_2 = arg1 + *(x8_2 - 0x88)
int64_t x9_3 = *(x9_2 + 0x38)
x19_1[2] = *(x9_2 + 0x30)
x19_1[3] = x9_3

if (x9_3 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(x9_3 + 8) + 1, x9_3 + 8)
    while (i != 0)
    x8_2 = *arg1

x19_1[4] = 0
x19_1[5] = 0
*(x8_2 - 0x88)
void* x0_4 = Botan::DL_Group::data()
int64_t x24 = *(x0_4 + 0x128)
int64_t* x21_1 = *(x0_4 + 0x130)

if (x21_1 != 0)
    int32_t i_1
    
    do
        i_1 = __stxr(__ldxr(&x21_1[1]) + 1, &x21_1[1])
    while (i_1 != 0)

int64_t x25 = *(*arg1 - 0x88)
int64_t* x0_5 = operator new(0x50)
x0_5[2] = 0
*x0_5 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::Montgomery_Exponentation_State const, std::__ndk1::allocator<Botan::Montgomery_Exponentation_State const> >
    + 0x10
x0_5[1] = 0
var_58 = x24
int64_t* var_50 = x21_1

if (x21_1 != 0)
    int32_t i_2
    
    do
        i_2 = __stxr(__ldxr(&x21_1[1]) + 1, &x21_1[1])
    while (i_2 != 0)

int64_t result = Botan::Montgomery_Exponentation_State::Montgomery_Exponentation_State(&x0_5[3], 
    &var_58, arg1 + x25 + 8, true)

if (x21_1 != 0)
    int64_t x9_10
    int32_t i_3
    
    do
        x9_10 = __ldaxr(&x21_1[1])
        i_3 = __stlxr(x9_10 - 1, &x21_1[1])
    while (i_3 != 0)
    
    if (x9_10 == 0)
        (*(*x21_1 + 0x10))(x21_1)
        result = std::__ndk1::__shared_weak_count::__release_weak()

int64_t* x24_1 = x19_1[5]
x19_1[4] = &x0_5[3]
x19_1[5] = x0_5

if (x24_1 != 0)
    int64_t x9_11
    int32_t i_4
    
    do
        x9_11 = __ldaxr(&x24_1[1])
        i_4 = __stlxr(x9_11 - 1, &x24_1[1])
    while (i_4 != 0)
    
    if (x9_11 == 0)
        (*(*x24_1 + 0x10))(x24_1)
        result = std::__ndk1::__shared_weak_count::__release_weak()

if (x21_1 != 0)
    int64_t x9_12
    int32_t i_5
    
    do
        x9_12 = __ldaxr(&x21_1[1])
        i_5 = __stlxr(x9_12 - 1, &x21_1[1])
    while (i_5 != 0)
    
    if (x9_12 == 0)
        (*(*x21_1 + 0x10))(x21_1)
        result = std::__ndk1::__shared_weak_count::__release_weak()

struct Botan::PK_Ops::Encryption_with_EME::Botan::(anonymous namespace)::ElGamal_Encryption_Operation::VTable
    *** entry_x8
*entry_x8 = x19_1
return result
