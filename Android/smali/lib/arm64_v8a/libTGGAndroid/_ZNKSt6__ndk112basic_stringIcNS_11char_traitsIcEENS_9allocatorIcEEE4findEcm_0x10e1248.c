// 函数: _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEcm
// 地址: 0x10e1248
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg1)
int64_t entry_x2
size_t x8_2
int64_t x19
bool cond:0

if ((x8.d & 1) != 0)
    int64_t x8_3 = *(arg1 + 8)
    x19 = *(arg1 + 0x10)
    x8_2 = x8_3 - entry_x2
    cond:0 = x8_3 == entry_x2
    
    if (x8_3 u<= entry_x2)
        return -1
else
    x19 = arg1 + 1
    uint64_t x8_1 = x8 u>> 1
    x8_2 = x8_1 - entry_x2
    cond:0 = x8_1 == entry_x2
    
    if (x8_1 u<= entry_x2)
        return -1

int64_t x0_2

if (cond:0)
    x0_2 = 0
else
    x0_2 = memchr(x19 + entry_x2, arg2.d & 0xff, x8_2)

if (x0_2 != 0)
    return x0_2 - x19

return -1
