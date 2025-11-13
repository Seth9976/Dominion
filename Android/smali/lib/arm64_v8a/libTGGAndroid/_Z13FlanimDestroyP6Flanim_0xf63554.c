// 函数: _Z13FlanimDestroyP6Flanim
// 地址: 0xf63554
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result = *(arg1 + 0x70)

if (result != 0)
    result = XPooledFree(result, *(arg1 + 0x78) * 0x70)
    *(arg1 + 0x70) = 0

void* x8_3 = *(*gpGameData + 0x18)
int32_t x10 = *(x8_3 + 0x10)
*(x8_3 + 0x10) = zx.d(*(arg1 + 0xa0))
*(arg1 + 0xa0) = x10
*(x8_3 + 0x14) -= 1
return result
