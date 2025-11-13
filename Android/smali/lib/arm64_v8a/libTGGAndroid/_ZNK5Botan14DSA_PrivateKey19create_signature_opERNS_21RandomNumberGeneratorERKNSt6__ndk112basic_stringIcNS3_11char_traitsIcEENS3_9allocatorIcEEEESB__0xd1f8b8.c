// 函数: _ZNK5Botan14DSA_PrivateKey19create_signature_opERNS_21RandomNumberGeneratorERKNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEESB_
// 地址: 0xd1f8b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x3
uint64_t x11 = zx.q(*entry_x3)
uint64_t x9 = *(entry_x3 + 8)
int32_t x10 = x11.d & 1
uint64_t x11_1 = x11 u>> 1
uint64_t x12

x12 = x10 == 0 ? x11_1 : x9

if (x12 != 4)
    goto label_d1f934

char var_80

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        entry_x3, 0, -ffffffffffffffff, "base") != 0)
    uint64_t x8 = zx.q(*entry_x3)
    x9 = *(entry_x3 + 8)
    x10 = x8.d & 1
    x11_1 = x8 u>> 1
label_d1f934:
    uint64_t x8_1
    
    if ((x10 & 0xff) == 0)
        x8_1 = x11_1
    else
        x8_1 = x9
    
    if (x8_1 != 0)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            * x0_12 = __cxa_allocate_exception(0x20)
        var_80 = 6
        int32_t var_7f = 0x415344
        Botan::Provider_Not_Found::Provider_Not_Found(x0_12, &var_80)
        __cxa_throw(x0_12, _typeinfo_for_Botan::Provider_Not_Found, Botan::Exception::~Exception)
        noreturn

struct Botan::PK_Ops::Signature_with_EMSA::Botan::(anonymous namespace)::DSA_Signature_Operation::VTable
    ** x0_2 = operator new(0xb0)
Botan::PK_Ops::Signature_with_EMSA::Signature_with_EMSA(x0_2)
*x0_2 = &_vtable_for_Botan::(anonymous namespace)::DSA_Signature_Operation{for `Botan::PK_Ops::Signature_with_EMSA'}
x0_2[6] = *(arg1 + 0x38)
int64_t x8_3 = *(arg1 + 0x40)
x0_2[7] = x8_3

if (x8_3 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(x8_3 + 8) + 1, x8_3 + 8)
    while (i != 0)

*(x0_2 + 0x48) = zx.o(0)
x0_2[8] = arg1 + 0x50
__builtin_memset(&x0_2[0xb], 0, 0x20)
x0_2[0xf] = -1
x0_2[0x10].d = 1
x0_2[0x11] = 0
x0_2[0x12] = 0
x0_2[0x13] = 0
x0_2[0x14] = -1
x0_2[0x15].d = 1
Botan::hash_for_emsa(arg3)

if ((zx.d(x0_2[9].b) & 1) != 0)
    operator delete(x0_2[0xb])

int128_t v0 = var_80.o
int32_t* var_a8
__builtin_memset(&var_a8, 0, 0x18)
int32_t var_88 = 1
int64_t var_70
x0_2[0xb] = var_70
*(x0_2 + 0x48) = v0
int64_t var_90 = -1
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&var_a8)
*var_a8 = 2
int32_t* x8_9 = var_a8
int64_t var_90_1 = -1
int64_t var_a0

if ((var_a0 - x8_9) s>> 2 u>= 2)
    x8_9[1] = 0

int128_t v0_1
int128_t v1
v0_1, v1 = Botan::BigInt::random_integer(arg2, &var_a8, Botan::DL_Group::data() + 0x28)
v1 = *(x0_2 + 0x60)
v0_1 = var_80.o
int64_t x8_10 = x0_2[0xe]
int64_t x11_2 = x0_2[0xf]
x0_2[0xe] = var_70
int64_t var_68
x0_2[0xf] = var_68
int32_t x10_3 = x0_2[0x10].d
uint64_t x0_9 = v1.q
*(x0_2 + 0x60) = v0_1
var_80.o = v1
int32_t var_60
x0_2[0x10].d = var_60

if (x0_9 != 0)
    uint64_t var_78_1 = x0_9
    Botan::deallocate_memory(x0_9, (x8_10 - x0_9) s>> 2, 4)

int32_t* x0_10 = var_a8

if (x0_10 != 0)
    int32_t* var_a0_1 = x0_10
    int64_t var_98
    Botan::deallocate_memory(x0_10, (var_98 - x0_10) s>> 2, 4)

Botan::DL_Group::inverse_mod_q(&x0_2[6])
void* result = x0_2[0x11]
int64_t x8_14 = x0_2[0x13]
*(x0_2 + 0x88) = var_80.o
x0_2[0x13] = x8_10
x0_2[0x14] = x11_2
x0_2[0x15].d = x10_3

if (result != 0)
    result = Botan::deallocate_memory(result, (x8_14 - result) s>> 2, 4)

void** entry_x8
*entry_x8 = x0_2
return result
