// 函数: _ZN17StringLinearAlloc5AllocEPKc
// 地址: 0x102c9b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x1
int32_t x0_1 = strlen(entry_x1)
int32_t x9 = *(arg1 + 8)
int64_t x0_2 = *(arg1 + 0x10)
int64_t x10 = *arg1
int64_t x21 = x0_2 - x10

if (x0_1 s>= x9 - x0_2.d)
    int32_t x24_1 = x9 - x10.d
    int32_t x8_1 = (x0_1 + 1) << 2
    int32_t x9_1 = x24_1 << 2
    int32_t x22_1
    
    x22_1 = x8_1 s> x9_1 ? x8_1 : x9_1
    
    int64_t x0_4 = XPooledMalloc(x22_1)
    
    if (x24_1 == 0)
        x21 = sx.q(x21.d)
    else
        x21 = sx.q(x21.d)
        memcpy(x0_4, *arg1, x21)
        XPooledFree(*arg1, x24_1)
    
    x0_2 = x0_4 + x21
    *arg1 = x0_4
    *(arg1 + 8) = x0_4 + sx.q(x22_1)
    *(arg1 + 0x10) = x0_2

strcpy(x0_2, entry_x1)
*(arg1 + 0x10) += sx.q(x0_1 + 1)
return arg1
