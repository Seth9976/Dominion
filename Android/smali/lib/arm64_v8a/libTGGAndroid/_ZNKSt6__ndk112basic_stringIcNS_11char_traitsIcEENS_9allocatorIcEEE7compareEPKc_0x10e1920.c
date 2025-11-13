// 函数: _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7compareEPKc
// 地址: 0x10e1920
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x1
size_t x0_1 = strlen(entry_x1)
uint64_t x8 = zx.q(*arg1)
void* x0_2
uint64_t x22

if ((x8.d & 1) != 0)
    if (x0_1 == -1)
        sub_c776cc(std::__ndk1::__basic_string_common<true>::__throw_out_of_range())
        noreturn
    
    x22 = *(arg1 + 8)
    x0_2 = *(arg1 + 0x10)
else
    if (x0_1 == -1)
        sub_c776cc(std::__ndk1::__basic_string_common<true>::__throw_out_of_range())
        noreturn
    
    x22 = x8 u>> 1
    x0_2 = &arg1[1]

size_t x2

x2 = x22 u> x0_1 ? x0_1 : x22

if (x2 != 0)
    uint64_t result = memcmp(x0_2, entry_x1, x2)
    
    if (result.d != 0)
        return result

if (x22 u>= x0_1)
    return zx.q(x22 u> x0_1 ? 1 : 0)

return 0xffffffff
