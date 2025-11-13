// 函数: _ZNK5Botan14XMSS_PublicKey22create_verification_opERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
// 地址: 0xed19c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x2
uint64_t x11 = zx.q(*entry_x2)
uint64_t x9 = *(entry_x2 + 8)
int32_t x10 = x11.d & 1
uint64_t x11_1 = x11 u>> 1
uint64_t x12

x12 = x10 == 0 ? x11_1 : x9

if (x12 != 4)
    goto label_ed1a34

char var_48

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        entry_x2, 0, -ffffffffffffffff, "base") != 0)
    uint64_t x8 = zx.q(*entry_x2)
    x9 = *(entry_x2 + 8)
    x10 = x8.d & 1
    x11_1 = x8 u>> 1
label_ed1a34:
    uint64_t x8_1
    
    if ((x10 & 0xff) == 0)
        x8_1 = x11_1
    else
        x8_1 = x9
    
    if (x8_1 != 0)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            * x0_6 = __cxa_allocate_exception(0x20)
        (*(*arg1 + 0x10))(arg1)
        Botan::Provider_Not_Found::Provider_Not_Found(x0_6, &var_48)
        __cxa_throw(x0_6, _typeinfo_for_Botan::Provider_Not_Found, Botan::Exception::~Exception)
        noreturn

int64_t* x0_2 = operator new(0x70)
*x0_2 = _vtable_for_Botan::XMSS_Verification_Operation + 0x30
x0_2[1] = arg1
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_48)
int64_t result = Botan::XMSS_Hash::XMSS_Hash(&x0_2[2])
void* var_38

if ((zx.d(var_48) & 1) != 0)
    result = operator delete(var_38)
__builtin_memset(&x0_2[0xb], 0, 0x18)
int64_t** entry_x8
*entry_x8 = x0_2
return result
