// 函数: _ZNK5Botan17ECGDSA_PrivateKey19create_signature_opERNS_21RandomNumberGeneratorERKNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEESB_
// 地址: 0xd38af8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x3
uint64_t x11 = zx.q(*entry_x3)
uint64_t x9 = *(entry_x3 + 8)
int32_t x10 = x11.d & 1
uint64_t x11_1 = x11 u>> 1
uint64_t x12

x12 = x10 == 0 ? x11_1 : x9

if (x12 != 4)
    goto label_d38b68

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        entry_x3, 0, -ffffffffffffffff, "base") != 0)
    uint64_t x8 = zx.q(*entry_x3)
    x9 = *(entry_x3 + 8)
    x10 = x8.d & 1
    x11_1 = x8 u>> 1
label_d38b68:
    uint64_t x8_1
    
    if ((x10 & 0xff) == 0)
        x8_1 = x11_1
    else
        x8_1 = x9
    
    if (x8_1 != 0)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            * x0_4 = __cxa_allocate_exception(0x20)
        char var_48 = 0xc
        int32_t var_47
        __builtin_strncpy(&var_47, "ECGDSA", 7)
        Botan::Provider_Not_Found::Provider_Not_Found(x0_4, &var_48)
        __cxa_throw(x0_4, _typeinfo_for_Botan::Provider_Not_Found, Botan::Exception::~Exception)
        noreturn

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x0_2 = operator new(0x60)
struct Botan::PK_Ops::Signature_with_EMSA::Botan::(anonymous namespace)::ECGDSA_Signature_Operation::VTable
    ** x19_1 = x0_2
Botan::PK_Ops::Signature_with_EMSA::Signature_with_EMSA(x0_2)
*x19_1 = &_vtable_for_Botan::(anonymous namespace)::ECGDSA_Signature_Operation{for `Botan::PK_Ops::Signature_with_EMSA'}
int64_t x8_2 = *(arg1 + 0x48)
x19_1[6] = *(arg1 + 0x40)
x19_1[7] = x8_2

if (x8_2 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(x8_2 + 8) + 1, x8_2 + 8)
    while (i != 0)

int64_t result = Botan::EC_PrivateKey::private_value()
x19_1[8] = result
__builtin_memset(&x19_1[9], 0, 0x18)
struct Botan::PK_Ops::Signature_with_EMSA::Botan::(anonymous namespace)::ECGDSA_Signature_Operation::VTable
    *** entry_x8
*entry_x8 = x19_1
return result
