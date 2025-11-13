// 函数: _ZNK5Botan14SM2_PrivateKey20create_decryption_opERNS_21RandomNumberGeneratorERKNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEESB_
// 地址: 0xe2a704
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x3
uint64_t x11 = zx.q(*entry_x3)
uint64_t x9 = *(entry_x3 + 8)
int32_t x10 = x11.d & 1
uint64_t x11_1 = x11 u>> 1
uint64_t x12

x12 = x10 == 0 ? x11_1 : x9

if (x12 != 4)
    goto label_e2a77c

char var_58

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        entry_x3, 0, -ffffffffffffffff, "base") != 0)
    uint64_t x8 = zx.q(*entry_x3)
    x9 = *(entry_x3 + 8)
    x10 = x8.d & 1
    x11_1 = x8 u>> 1
label_e2a77c:
    uint64_t x8_1
    
    if ((x10 & 0xff) == 0)
        x8_1 = x11_1
    else
        x8_1 = x9
    
    if (x8_1 != 0)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            * x0_10 = __cxa_allocate_exception(0x20)
        var_58 = 6
        int32_t var_57 = 0x324d53
        Botan::Provider_Not_Found::Provider_Not_Found(x0_10, &var_58)
        __cxa_throw(x0_10, _typeinfo_for_Botan::Provider_Not_Found, Botan::Exception::~Exception)
        noreturn

uint64_t x8_2 = zx.q(*arg3)
uint64_t x8_3

if ((x8_2.d & 1) == 0)
    x8_3 = x8_2 u>> 1
else
    x8_3 = *(arg3 + 8)

char var_70

if (x8_3 == 0)
    var_70 = 6
    int32_t var_6f_1 = 0x334d53
else
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &var_70)

struct Botan::PK_Ops::Decryption::Botan::(anonymous namespace)::SM2_Decryption_Operation::VTable** 
    x0_3 = operator new(0x50)
x0_3[1] = arg1
x0_3[2] = arg2
*x0_3 = &_vtable_for_Botan::(anonymous namespace)::SM2_Decryption_Operation{for `Botan::PK_Ops::Decryption'}
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_3[3])
__builtin_memset(&x0_3[6], 0, 0x18)
var_58.w = 0
Botan::HashFunction::create_or_throw(&x0_3[3], &var_58)
void* var_48

if ((zx.d(var_58) & 1) != 0)
    operator delete(var_48)
int64_t* result_1
int64_t* result = result_1
x0_3[9] = (**result_1)()
int64_t var_38 = 0

if (result != 0)
    result = (*(*result + 0x10))()

uint32_t x8_10 = zx.d(var_70)
struct Botan::PK_Ops::Decryption::Botan::(anonymous namespace)::SM2_Decryption_Operation::VTable*** 
    entry_x8
*entry_x8 = x0_3

if ((x8_10 & 1) == 0)
    return result

void* var_60
return operator delete(var_60)
