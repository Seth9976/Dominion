// 函数: _ZN5Botan20GOST_28147_89_ParamsC1ERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xd833e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    arg1 + 8)
uint64_t x10 = zx.q(*(arg1 + 8))
uint64_t x8 = *(arg1 + 0x10)
int32_t x9 = x10.d & 1
uint64_t x10_1 = x10 u>> 1
uint64_t x11

x11 = x9 == 0 ? x10_1 : x8

if (x11 != 0x12)
    goto label_d83450

int32_t result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
    arg1 + 8, 0, -ffffffffffffffff, "R3411_94_TestParam")
void* const x8_2

if (result == 0)
    x8_2 = &data_836c8e
else
    uint64_t x10_2 = zx.q(*(arg1 + 8))
    x8 = *(arg1 + 0x10)
    x9 = x10_2.d & 1
    x10_1 = x10_2 u>> 1
label_d83450:
    uint64_t x8_1
    
    if ((x9 & 0xff) == 0)
        x8_1 = x10_1
    else
        x8_1 = x8
    
    if (x8_1 == 0xf)
        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1 + 8, 0, -ffffffffffffffff, "R3411_CryptoPro")
    
    if (x8_1 != 0xf || result != 0)
        void** x0_3 = __cxa_allocate_exception(0x20)
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "GOST_28147_89_Params: Unknown ", arg1 + 8)
        *x0_3 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_3[1])
        *x0_3 = _vtable_for_Botan::Invalid_Argument + 0x10
        __cxa_throw(x0_3, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
        noreturn
    
    x8_2 = &data_836cce

*arg1 = x8_2
return result
