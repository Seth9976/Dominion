// 函数: _ZNK5Botan15ECDH_PrivateKey23create_key_agreement_opERNS_21RandomNumberGeneratorERKNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEESB_
// 地址: 0xd36c94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x3
uint64_t x11 = zx.q(*entry_x3)
uint64_t x9 = *(entry_x3 + 8)
int32_t x10 = x11.d & 1
uint64_t x11_1 = x11 u>> 1
uint64_t x12

x12 = x10 == 0 ? x11_1 : x9

if (x12 != 4)
    goto label_d36d10

char var_80

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        entry_x3, 0, -ffffffffffffffff, "base") != 0)
    uint64_t x8 = zx.q(*entry_x3)
    x9 = *(entry_x3 + 8)
    x10 = x8.d & 1
    x11_1 = x8 u>> 1
label_d36d10:
    uint64_t x8_1
    
    if ((x10 & 0xff) == 0)
        x8_1 = x11_1
    else
        x8_1 = x9
    
    if (x8_1 != 0)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            * x0_17 = __cxa_allocate_exception(0x20)
        var_80 = 8
        int32_t var_7f
        __builtin_strncpy(&var_7f, "ECDH", 5)
        Botan::Provider_Not_Found::Provider_Not_Found(x0_17, &var_80)
        __cxa_throw(x0_17, _typeinfo_for_Botan::Provider_Not_Found, Botan::Exception::~Exception)
        noreturn

struct 
    Botan::PK_Ops::Key_Agreement_with_KDF::Botan::(anonymous namespace)::ECDH_KA_Operation::VTable**
     x0_2 = operator new(0x68)
*x0_2 = _vtable_for_Botan::PK_Ops::Key_Agreement_with_KDF + 0x10
x0_2[1] = 0
uint64_t x8_3 = zx.q(*arg3)
uint64_t x8_4

if ((x8_3.d & 1) == 0)
    x8_4 = x8_3 u>> 1
else
    x8_4 = *(arg3 + 8)

int32_t x0_4

if (x8_4 == 3)
    x0_4 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        arg3, 0, -ffffffffffffffff, 0x75cb1e)

if (x8_4 != 3 || x0_4 != 0)
    int64_t x0_6 = Botan::get_kdf(arg3)
    int64_t* x0_7 = x0_2[1]
    x0_2[1] = x0_6
    
    if (x0_7 != 0)
        (*(*x0_7 + 8))()

*x0_2 = &_vtable_for_Botan::(anonymous namespace)::ECDH_KA_Operation{for `Botan::PK_Ops::Key_Agreement_with_KDF'}
x0_2[2] = *(arg1 + 0x48)
int64_t x8_9 = *(arg1 + 0x50)
x0_2[3] = x8_9

if (x8_9 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(x8_9 + 8) + 1, x8_9 + 8)
    while (i != 0)

__builtin_memset(&x0_2[4], 0, 0x18)
x0_2[7] = -1
x0_2[8].d = 1
x0_2[9] = arg2
x0_2[0xa] = 0
x0_2[0xb] = 0
x0_2[0xc] = 0
Botan::inverse_mod(Botan::EC_Group::data() + 0x110, Botan::EC_Group::data() + 0xe8)
void* result_1
int128_t v0
int128_t v1
v0, v1 = Botan::operator*(&result_1, Botan::EC_PrivateKey::private_value())
v1 = *(x0_2 + 0x20)
v0 = var_80.o
int64_t x8_11 = x0_2[6]
int64_t x11_2 = x0_2[7]
int64_t var_70
x0_2[6] = var_70
int64_t var_68
x0_2[7] = var_68
int32_t x10_4 = x0_2[8].d
uint64_t x0_16 = v1.q
int64_t var_70_1 = x8_11
int64_t var_68_1 = x11_2
*(x0_2 + 0x20) = v0
var_80.o = v1
int32_t var_60
x0_2[8].d = var_60
int32_t var_60_1 = x10_4

if (x0_16 != 0)
    uint64_t var_78_1 = x0_16
    Botan::deallocate_memory(x0_16, (x8_11 - x0_16) s>> 2, 4)

void* result = result_1
int64_t var_98

if (result != 0)
    result = Botan::deallocate_memory(result, (var_98 - result) s>> 2, 4)
void** entry_x8
*entry_x8 = x0_2
return result
