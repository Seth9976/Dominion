// 函数: _ZN10XAllocator10InitializeEii
// 地址: 0x10610f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** x19 = arg1
*arg1 = 0
*(arg1 + 8) = 0
*(arg1 + 0x14) = 0
int32_t entry_x2
*(arg1 + 0x18) = entry_x2
*(arg1 + 0x10) = arg2
int64_t* result = XMalloc(8 + entry_x2 * arg2)
*result = x19[1]
int32_t x9 = x19[2].d
void* x8_1 = *x19
x19[1] = result

if (x9 s>= 1)
    int64_t i = 0
    void* x11_1 = &result[1]
    int64_t x10_1 = sx.q(entry_x2)
    
    do
        *x11_1 = x8_1
        i += 1
        x8_1 = x11_1
        x11_1 += x10_1
    while (i s< sx.q(x19[2].d))
    
    x8_1 = x11_1 - x10_1

*x19 = x8_1
return result
