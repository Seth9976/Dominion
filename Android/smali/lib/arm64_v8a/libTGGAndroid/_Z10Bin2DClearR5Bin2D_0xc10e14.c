// 函数: _Z10Bin2DClearR5Bin2D
// 地址: 0xc10e14
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result = *(arg1 + 8)

if (result != 0)
    int64_t* i
    
    do
        i = *result
        XFree(result)
        result = i
    while (i != 0)

uint64_t x20_1 = zx.q(*(arg1 + 0x20))
*(arg1 + 0x14) = 0
*arg1 = 0
*(arg1 + 8) = 0
*(arg1 + 0x20) = 0

if (x20_1.d s>= 1)
    result = memset(*(arg1 + 0x18), 0, x20_1 << 3)
    x20_1 = zx.q(*(arg1 + 0x20) + x20_1.d)
else if ((x20_1.d & 0x80000000) == 0)
    return result

*(arg1 + 0x20) = x20_1.d
return result
