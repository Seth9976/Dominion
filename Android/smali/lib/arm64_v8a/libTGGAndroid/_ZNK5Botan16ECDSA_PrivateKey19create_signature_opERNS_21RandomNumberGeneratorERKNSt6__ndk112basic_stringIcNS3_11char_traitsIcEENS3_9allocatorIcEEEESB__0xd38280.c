// 函数: _ZNK5Botan16ECDSA_PrivateKey19create_signature_opERNS_21RandomNumberGeneratorERKNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEESB_
// 地址: 0xd38280
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x3
uint64_t x11 = zx.q(*entry_x3)
uint64_t x9 = *(entry_x3 + 8)
int32_t x10 = x11.d & 1
uint64_t x11_1 = x11 u>> 1
uint64_t x12

x12 = x10 == 0 ? x11_1 : x9

if (x12 != 4)
    goto label_d382fc

char var_80

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        entry_x3, 0, -ffffffffffffffff, "base") != 0)
    uint64_t x8 = zx.q(*entry_x3)
    x9 = *(entry_x3 + 8)
    x10 = x8.d & 1
    x11_1 = x8 u>> 1
label_d382fc:
    uint64_t x8_1
    
    if ((x10 & 0xff) == 0)
        x8_1 = x11_1
    else
        x8_1 = x9
    
    if (x8_1 != 0)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            * x0_18 = __cxa_allocate_exception(0x20)
        __builtin_strcpy(&var_80, "\nECDSA")
        Botan::Provider_Not_Found::Provider_Not_Found(x0_18, &var_80)
        __cxa_throw(x0_18, _typeinfo_for_Botan::Provider_Not_Found, Botan::Exception::~Exception)
        noreturn

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x0_2 = operator new(0xb8)
struct Botan::PK_Ops::Signature_with_EMSA::Botan::(anonymous namespace)::ECDSA_Signature_Operation::VTable
    ** x19_1 = x0_2
Botan::PK_Ops::Signature_with_EMSA::Signature_with_EMSA(x0_2)
*x19_1 = &_vtable_for_Botan::(anonymous namespace)::ECDSA_Signature_Operation{for `Botan::PK_Ops::Signature_with_EMSA'}
x19_1[6] = *(arg1 + 0x40)
int64_t x8_3 = *(arg1 + 0x48)
x19_1[7] = x8_3

if (x8_3 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(x8_3 + 8) + 1, x8_3 + 8)
    while (i != 0)

int64_t x0_4 = Botan::EC_PrivateKey::private_value()
*(x19_1 + 0x48) = zx.o(0)
x19_1[8] = x0_4
*(x19_1 + 0x58) = zx.o(0)
*(x19_1 + 0x68) = zx.o(0)
x19_1[0xf] = 0
x19_1[0x10] = -1
x19_1[0x11].d = 1
x19_1[0x12] = 0
x19_1[0x13] = 0
x19_1[0x14] = 0
x19_1[0x15] = -1
x19_1[0x16].d = 1
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x0_5 = operator new(0x78)
Botan::hash_for_emsa(arg3)
void* x0_8 = Botan::EC_Group::data()
x19_1[8]
Botan::RFC6979_Nonce_Generator::RFC6979_Nonce_Generator(x0_5, &var_80, x0_8 + 0xe8)
void* x24_1 = x19_1[9]
x19_1[9] = x0_5

if (x24_1 != 0)
    Botan::RFC6979_Nonce_Generator::~RFC6979_Nonce_Generator()
    operator delete(x24_1)

void* var_70

if ((zx.d(var_80) & 1) != 0)
    operator delete(var_70)

Botan::EC_Group::random_scalar(&x19_1[6])
void* x0_14 = x19_1[0xd]
int128_t v0 = var_80.o
int64_t x8_6 = x19_1[0xf]
int64_t x11_2 = x19_1[0x10]
x19_1[0xf] = var_70
int64_t var_68
x19_1[0x10] = var_68
int32_t x9_4 = x19_1[0x11].d
*(x19_1 + 0x68) = v0
var_80.q = x0_14
int32_t var_60
x19_1[0x11].d = var_60

if (x0_14 != 0)
    void* var_78_1 = x0_14
    Botan::deallocate_memory(x0_14, (x8_6 - x0_14) s>> 2, 4)

Botan::inverse_mod(&x19_1[0xd], Botan::EC_Group::data() + 0xe8)
void* result = x19_1[0x12]
int64_t x8_8 = x19_1[0x14]
*(x19_1 + 0x90) = var_80.o
x19_1[0x14] = x8_6
x19_1[0x15] = x11_2
x19_1[0x16].d = x9_4

if (result != 0)
    result = Botan::deallocate_memory(result, (x8_8 - result) s>> 2, 4)

struct Botan::PK_Ops::Signature_with_EMSA::Botan::(anonymous namespace)::ECDSA_Signature_Operation::VTable
    *** entry_x8
*entry_x8 = x19_1
return result
