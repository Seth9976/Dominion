// 函数: _ZNKSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE4findEwm
// 地址: 0x10e34a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg1)
int64_t entry_x2
size_t n
int64_t x19
bool cond:0

if ((x8.d & 1) != 0)
    int64_t x8_2 = *(arg1 + 8)
    x19 = *(arg1 + 0x10)
    n = x8_2 - entry_x2
    cond:0 = x8_2 == entry_x2
    
    if (x8_2 u<= entry_x2)
        return -1
else
    x19 = arg1 + 4
    uint64_t x8_1 = x8 u>> 1
    n = x8_1 - entry_x2
    cond:0 = x8_1 == entry_x2
    
    if (x8_1 u<= entry_x2)
        return -1

wchar_t* x0_2

if (cond:0)
    x0_2 = nullptr
else
    x0_2 = wmemchr(x19 + (entry_x2 << 2), arg2.d, n)

if (x0_2 != 0)
    return (x0_2 - x19) s>> 2

return -1
