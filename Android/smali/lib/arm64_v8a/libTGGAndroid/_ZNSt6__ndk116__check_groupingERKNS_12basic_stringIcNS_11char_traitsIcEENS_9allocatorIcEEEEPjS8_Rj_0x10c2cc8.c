// 函数: _ZNSt6__ndk116__check_groupingERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPjS8_Rj
// 地址: 0x10c2cc8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
uint64_t x9 = zx.q(*arg1)
int32_t x11 = x9.d & 1
uint64_t x8_1

if (x11 == 0)
    x8_1 = x9 u>> 1
else
    x8_1 = *(arg1 + 8)

if (x8_1 == 0 || arg3 - arg2 s< 5)
    return 

if (arg2 != arg3 && arg3 - 4 u> arg2)
    void* x9_1 = &arg2[1]
    void* x10_1 = arg3 - 4
    bool cond:2_1
    
    do
        int32_t x12_1 = *(x9_1 - 4)
        *(x9_1 - 4) = *x10_1
        *x10_1 = x12_1
        x10_1 -= 4
        cond:2_1 = x9_1 u< x10_1
        x9_1 += 4
    while (cond:2_1)
    x9 = zx.q(*arg1)
    x11 = x9.d & 1

void* __offset(
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x1) x10_3

if ((x11 & 0xff) != 0)
    x10_3 = *(arg1 + 0x10)
else
    x10_3 = arg1 + 1

if (arg3 - 4 u<= arg2)
label_10c2d94:
    uint32_t x9_5 = zx.d(*x10_3)
    
    if (x9_5 != 0 && x9_5 != 0xff && *(arg3 - 4) - 1 u>= x9_5)
        *arg4 = 4
    
    return 

uint64_t x9_3

if ((x11 & 0xff) == 0)
    x9_3 = zx.q(x9.d u>> 1)
else
    x9_3 = *(arg1 + 8)

void* x9_4 = x10_3 + x9_3

while (true)
    uint32_t x11_3 = zx.d(*x10_3)
    
    if (x11_3 != 0 && x11_3 != 0xff && *arg2 != x11_3)
        break
    
    arg2 = &arg2[1]
    
    if (x9_4 - x10_3 s> 1)
        x10_3 += 1
    
    if (arg2 u>= arg3 - 4)
        goto label_10c2d94

*arg4 = 4
