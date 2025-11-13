// 函数: _ZNK5Botan13RSA_PublicKey22create_verification_opERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
// 地址: 0xe0e404
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x2
uint64_t x11 = zx.q(*entry_x2)
uint64_t x9 = *(entry_x2 + 8)
int32_t x10 = x11.d & 1
uint64_t x11_1 = x11 u>> 1
uint64_t x12

x12 = x10 == 0 ? x11_1 : x9

if (x12 != 4)
    goto label_e0e474

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        entry_x2, 0, -ffffffffffffffff, "base") != 0)
    uint64_t x8 = zx.q(*entry_x2)
    x9 = *(entry_x2 + 8)
    x10 = x8.d & 1
    x11_1 = x8 u>> 1
label_e0e474:
    uint64_t x8_1
    
    if ((x10 & 0xff) == 0)
        x8_1 = x11_1
    else
        x8_1 = x9
    
    if (x8_1 != 0)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            * x0_3 = __cxa_allocate_exception(0x20)
        (*(*arg1 + 0x10))(arg1)
        void var_48
        Botan::Provider_Not_Found::Provider_Not_Found(x0_3, &var_48)
        __cxa_throw(x0_3, _typeinfo_for_Botan::Provider_Not_Found, Botan::Exception::~Exception)
        noreturn

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x0_2 = operator new(0x40)
int64_t result = Botan::PK_Ops::Verification_with_EMSA::Verification_with_EMSA(x0_2)
int64_t x8_2 = *(arg1 + 0x10)
*(x0_2 + 0x30) = *(arg1 + 8)
*(x0_2 + 0x38) = x8_2

if (x8_2 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(x8_2 + 8) + 1, x8_2 + 8)
    while (i != 0)

*x0_2 = &_vtable_for_Botan::(anonymous namespace)::RSA_Verify_Operation{for `Botan::PK_Ops::Verification_with_EMSA'}
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >** 
    entry_x8
*entry_x8 = x0_2
return result
