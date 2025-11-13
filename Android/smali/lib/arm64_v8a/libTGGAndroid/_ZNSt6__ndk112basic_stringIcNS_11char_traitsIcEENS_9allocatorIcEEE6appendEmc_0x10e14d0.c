// 函数: _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEmc
// 地址: 0x10e14d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 != 0)
    uint64_t x8_1 = zx.q(*arg1)
    size_t x20_1 = arg2
    uint64_t x1
    uint64_t x22_1
    
    if ((x8_1.d & 1) != 0)
        x8_1 = *arg1
        x22_1 = *(arg1 + 8)
        x1 = (x8_1 & 0xfffffffffffffffe) - 1
    else
        x22_1 = x8_1 u>> 1
        x1 = 0x16
    
    if (x1 - x22_1 u< x20_1)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__grow_by(
            arg1, x1, x22_1 + x20_1 - x1, x22_1, x22_1, 0)
        x8_1 = zx.q(*arg1)
    
    char* x23_1
    
    if ((x8_1.d & 1) != 0)
        x23_1 = *(arg1 + 0x10)
    else
        x23_1 = arg1 + 1
    
    int32_t entry_x2
    memset(&x23_1[x22_1], entry_x2, x20_1)
    int64_t x8_3 = x22_1 + x20_1
    
    if ((zx.d(*arg1) & 1) != 0)
        *(arg1 + 8) = x8_3
    else
        *arg1 = (x8_3.d << 1).b
    
    x23_1[x8_3] = 0

return arg1
