// 函数: _Z20FlanimAllocateLayersP6Flanim
// 地址: 0xf6364c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = *(arg1 + 0x70)

if (x0 != 0)
    XPooledFree(x0, *(arg1 + 0x78) * 0x70)
    *(arg1 + 0x70) = 0

void* result = FlanimGetDef(*arg1)
int32_t x8_2 = *(result + 0x28)
*(arg1 + 0x78) = x8_2

if (*(result + 0x28) s>= 1)
    void* result_1 = result
    result = XPooledCalloc(x8_2 * 0x70)
    *(arg1 + 0x70) = result
    
    if (*(result_1 + 0x28) s>= 1)
        int64_t i = 0
        int64_t x9_1 = 0x64
        
        do
            i += 1
            *(*(arg1 + 0x70) + x9_1) = *gRgbaIWhite
            x9_1 += 0x70
        while (i s< sx.q(*(result_1 + 0x28)))

return result
