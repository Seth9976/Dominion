// 函数: _ZNK5Botan19GOST_3410_PublicKey22create_verification_opERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
// 地址: 0xd8628c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x2
uint64_t x11 = zx.q(*entry_x2)
uint64_t x9 = *(entry_x2 + 8)
int32_t x10 = x11.d & 1
uint64_t x11_1 = x11 u>> 1
uint64_t x12

x12 = x10 == 0 ? x11_1 : x9

if (x12 != 4)
    goto label_d862fc

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        entry_x2, 0, -ffffffffffffffff, "base") != 0)
    uint64_t x8 = zx.q(*entry_x2)
    x9 = *(entry_x2 + 8)
    x10 = x8.d & 1
    x11_1 = x8 u>> 1
label_d862fc:
    uint64_t x8_1
    
    if ((x10 & 0xff) == 0)
        x8_1 = x11_1
    else
        x8_1 = x9
    
    if (x8_1 != 0)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            * x0_7 = __cxa_allocate_exception(0x20)
        (*(*arg1 + 0x10))(arg1)
        void var_48
        Botan::Provider_Not_Found::Provider_Not_Found(x0_7, &var_48)
        __cxa_throw(x0_7, _typeinfo_for_Botan::Provider_Not_Found, Botan::Exception::~Exception)
        noreturn

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x0_2 = operator new(0x60)
struct Botan::PK_Ops::Verification_with_EMSA::Botan::(anonymous namespace)::GOST_3410_Verification_Operation::VTable
    ** x20_1 = x0_2
Botan::PK_Ops::Verification_with_EMSA::Verification_with_EMSA(x0_2)
*x20_1 = &_vtable_for_Botan::(anonymous namespace)::GOST_3410_Verification_Operation{for `Botan::PK_Ops::Verification_with_EMSA'}
void* x8_4 = arg1 + *(*arg1 - 0x88)
int64_t x8_5 = *(x8_4 + 0x10)
x20_1[6] = *(x8_4 + 8)
x20_1[7] = x8_5

if (x8_5 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(x8_5 + 8) + 1, x8_5 + 8)
    while (i != 0)

void* x0_5 = Botan::EC_Group::data()
*(*arg1 - 0x88)
int64_t result =
    Botan::PointGFp_Multi_Point_Precompute::PointGFp_Multi_Point_Precompute(&x20_1[8], x0_5 + 0x10)
struct Botan::PK_Ops::Verification_with_EMSA::Botan::(anonymous namespace)::GOST_3410_Verification_Operation::VTable
    *** entry_x8
*entry_x8 = x20_1
return result
