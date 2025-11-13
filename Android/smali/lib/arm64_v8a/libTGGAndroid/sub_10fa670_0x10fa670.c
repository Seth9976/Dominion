// 函数: sub_10fa670
// 地址: 0x10fa670
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
int64_t x8_1 = arg2[1]
int64_t x10 = arg2[2]
int64_t x0

if (x8_1 + 0xa u>= x10)
    int64_t oldmem = *arg2
    int64_t bytes_2 = x10 << 1
    int64_t bytes
    
    if (bytes_2 u< x8_1 + 0xa)
        bytes = x8_1 + 0xa
    else
        bytes = bytes_2
    
    arg2[2] = bytes
    x0 = realloc(oldmem, bytes)
    *arg2 = x0
    
    if (x0 != 0)
        x8_1 = arg2[1]
        goto label_10fa6f0
else
    x0 = *arg2
label_10fa6f0:
    __builtin_strncpy(x0 + x8_1, "sizeof...(", 0xa)
    arg2[1] += 0xa
    int64_t x8_5 = *(arg1 + 0x10)
    int32_t var_48_1 = 0x1010122
    struct (anonymous namespace)::itanium_demangle::Node::(anonymous namespace)::itanium_demangle::ParameterPackExpansion::VTable
        * const var_50 = &_vtable_for_(anonymous namespace)::itanium_demangle::ParameterPackExpansion{for `(anonymous namespace)::itanium_demangle::Node'}
    int64_t var_40_1 = x8_5
    sub_10f6944(&var_50, arg2)
    int64_t x8_6 = arg2[1]
    int64_t x10_1 = arg2[2]
    char* result
    
    if (x8_6 + 1 u< x10_1)
        result = *arg2
    label_10fa76c:
        result[x8_6] = 0x29
        arg2[1] += 1
        
        if (*(x21 + 0x28) == x8)
            return result
        
        __stack_chk_fail()
        noreturn
    
    int64_t oldmem_1 = *arg2
    size_t bytes_3 = x10_1 << 1
    size_t bytes_1
    
    if (bytes_3 u< x8_6 + 1)
        bytes_1 = x8_6 + 1
    else
        bytes_1 = bytes_3
    
    arg2[2] = bytes_1
    result = realloc(oldmem_1, bytes_1)
    *arg2 = result
    
    if (result != 0)
        x8_6 = arg2[1]
        goto label_10fa76c
std::terminate()
noreturn
