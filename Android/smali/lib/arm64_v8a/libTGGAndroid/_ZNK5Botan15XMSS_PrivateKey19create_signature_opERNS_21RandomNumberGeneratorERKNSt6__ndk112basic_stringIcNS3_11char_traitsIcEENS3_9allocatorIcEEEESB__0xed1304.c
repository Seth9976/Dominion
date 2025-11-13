// 函数: _ZNK5Botan15XMSS_PrivateKey19create_signature_opERNS_21RandomNumberGeneratorERKNSt6__ndk112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEESB_
// 地址: 0xed1304
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x3
uint64_t x11 = zx.q(*entry_x3)
uint64_t x9 = *(entry_x3 + 8)
int32_t x10 = x11.d & 1
uint64_t x11_1 = x11 u>> 1
uint64_t x12

x12 = x10 == 0 ? x11_1 : x9

if (x12 != 4)
    goto label_ed136c

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        entry_x3, 0, -ffffffffffffffff, "base") != 0)
    uint64_t x8 = zx.q(*entry_x3)
    x9 = *(entry_x3 + 8)
    x10 = x8.d & 1
    x11_1 = x8 u>> 1
label_ed136c:
    uint64_t x8_1
    
    if ((x10 & 0xff) == 0)
        x8_1 = x11_1
    else
        x8_1 = x9
    
    if (x8_1 != 0)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            * x0_3 = __cxa_allocate_exception(0x20)
        char var_38 = 8
        int32_t var_37
        __builtin_strncpy(&var_37, "XMSS", 5)
        Botan::Provider_Not_Found::Provider_Not_Found(x0_3, &var_38)
        __cxa_throw(x0_3, _typeinfo_for_Botan::Provider_Not_Found, Botan::Exception::~Exception)
        noreturn

Botan::XMSS_PrivateKey* x0_2 = operator new(0x370)
int64_t result = Botan::XMSS_Signature_Operation::XMSS_Signature_Operation(x0_2)
int64_t* entry_x8
*entry_x8 = x0_2
return result
