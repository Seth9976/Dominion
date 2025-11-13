// 函数: _ZN5Botan19random_code_elementEtRNS_21RandomNumberGeneratorE
// 地址: 0xda5bf8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_40

if (zx.d(arg1) == 0)
    void** x0_1 = __cxa_allocate_exception(0x20)
    int64_t x0_2
    int128_t v1
    x0_2, v1 = operator new(0x40)
    v1 = data_71b7e0
    int64_t var_30 = x0_2
    __builtin_strncpy(x0_2, "random_code_element() was supplied a code length of zero", 0x39)
    var_40 = v1
    *x0_1 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_1[1])
    *x0_1 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_1, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

int32_t x8_5

if (((arg1.d - 1) & 0xffff) == 0)
    x8_5 = 0
else
    int32_t x9_1 = (arg1.d - 1) & 0xffff
    int32_t x8_1
    
    if (x9_1 u< 0x100)
        x8_1 = (arg1.d - 1) << 8
    else
        x8_1 = arg1.d - 1
    
    int32_t x9_2 = x9_1 u< 0x100 ? 1 : 0
    int32_t x10_2 = x8_1 & 0xffff
    int32_t x8_2
    
    if (x10_2 u< 0x1000)
        x8_2 = x8_1 << 4
    else
        x8_2 = x8_1
    
    int32_t x10_3 = x8_2 & 0xffff
    int32_t x9_4
    
    if (x10_2 u< 0x1000)
        x9_4 = 4 | (1 & x9_2) << 3
    else
        x9_4 = x9_2 << 3
    
    int32_t x8_3
    
    if (x10_3 u< 0x4000)
        x8_3 = x8_2 << 2
    else
        x8_3 = x8_2
    
    int32_t x9_5
    
    if (x10_3 u< 0x4000)
        x9_5 = x9_4 | 2
    else
        x9_5 = x9_4
    
    x8_5 = 0x10 - ((x9_5 & 0xfffffffe) | (not.d(x8_3) & 0x8000) u>> 0xf)

uint64_t result

do
    (*(*arg2 + 0x10))(arg2, &var_40, 2)
    result = zx.q(var_40.w) & zx.q(not.d(0xffffffff << x8_5))
while ((result.d & 0xffff) u>= zx.d(arg1))

return result
