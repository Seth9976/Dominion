// 函数: _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
// 地址: 0x10e0f24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg1)
uint64_t x1
uint64_t x21

if ((x8.d & 1) != 0)
    x21 = *(arg1 + 8)
    x1 = (*arg1 & 0xfffffffffffffffe) - 1
else
    x21 = x8 u>> 1
    x1 = 0x16

char* entry_x2

if (x1 - x21 u< entry_x2)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__grow_by_and_replace(
        arg1, x1, &entry_x2[x21] - x1, x21, x21, 0, entry_x2)
else if (entry_x2 != 0)
    char* x22_1
    
    if ((x8.d & 1) != 0)
        x22_1 = *(arg1 + 0x10)
    else
        x22_1 = &arg1[1]
    
    memcpy(&x22_1[x21], arg2, entry_x2)
    void* x8_2 = &entry_x2[x21]
    
    if ((zx.d(*arg1) & 1) != 0)
        *(arg1 + 8) = x8_2
    else
        *arg1 = (x8_2.d << 1).b
    
    *(x22_1 + x8_2) = 0

return arg1
