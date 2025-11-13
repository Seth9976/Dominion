// 函数: _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
// 地址: 0x10e1eb8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x1
size_t x0_1 = strlen(entry_x1)
uint64_t x8 = zx.q(*arg1)
uint64_t x1
uint64_t x22

if ((x8.d & 1) != 0)
    x22 = *(arg1 + 8)
    x1 = (*arg1 & 0xfffffffffffffffe) - 1
else
    x22 = x8 u>> 1
    x1 = 0x16

if (x1 - x22 u< x0_1)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__grow_by_and_replace(
        arg1, x1, x22 + x0_1 - x1, x22, x22, 0, x0_1)
else if (x0_1 != 0)
    void* x23_1
    
    if ((x8.d & 1) != 0)
        x23_1 = *(arg1 + 0x10)
    else
        x23_1 = &arg1[1]
    
    memcpy(x23_1 + x22, entry_x1, x0_1)
    int64_t x8_2 = x22 + x0_1
    
    if ((zx.d(*arg1) & 1) != 0)
        *(arg1 + 8) = x8_2
    else
        *arg1 = (x8_2.d << 1).b
    
    *(x23_1 + x8_2) = 0

return arg1
