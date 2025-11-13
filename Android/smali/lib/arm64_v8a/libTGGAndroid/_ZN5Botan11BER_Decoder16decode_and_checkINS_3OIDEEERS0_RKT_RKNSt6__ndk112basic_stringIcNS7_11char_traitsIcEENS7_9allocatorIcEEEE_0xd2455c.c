// 函数: _ZN5Botan11BER_Decoder16decode_and_checkINS_3OIDEEERS0_RKT_RKNSt6__ndk112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE
// 地址: 0xd2455c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(vtable_for_Botan::OID, 0x10) var_50 = _vtable_for_Botan::OID + 0x10
void* var_48
__builtin_memset(&var_48, 0, 0x18)
Botan::OID::decode_from(&var_50)
void* x0_1 = var_48
int32_t* x9 = *(arg2 + 8)
int64_t var_40

if (var_40 - x0_1 != *(arg2 + 0x10) - x9)
label_d2460c:
    void** x0_3 = __cxa_allocate_exception(0x20)
    *x0_3 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_3[1])
    *x0_3 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_3, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

if (x0_1 != var_40)
    int32_t* x10_2 = x0_1
    
    do
        if (*x10_2 != *x9)
            goto label_d2460c
        
        x10_2 = &x10_2[1]
        x9 = &x9[1]
    while (var_40 != x10_2)

var_50 = _vtable_for_Botan::OID + 0x10

if (x0_1 != 0)
    void* var_40_1 = x0_1
    operator delete(x0_1)

return arg1
