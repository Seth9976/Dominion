// 函数: _ZN10XAllocator4GrowEv
// 地址: 0x1061170
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
int64_t x20 = sx.q(entry_x0[3].d)
int64_t* result = XMalloc(8 + x20.d * entry_x0[2].d)
*result = entry_x0[1]
int32_t x9 = entry_x0[2].d
void* x8_2 = *entry_x0
entry_x0[1] = result

if (x9 s>= 1)
    int64_t i = 0
    void* x10_1 = &result[1]
    
    do
        *x10_1 = x8_2
        i += 1
        x8_2 = x10_1
        x10_1 += x20
    while (i s< sx.q(entry_x0[2].d))
    
    x8_2 = x10_1 - x20

*entry_x0 = x8_2
return result
