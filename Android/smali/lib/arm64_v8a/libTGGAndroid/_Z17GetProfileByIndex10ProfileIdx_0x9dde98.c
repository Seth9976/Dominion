// 函数: _Z17GetProfileByIndex10ProfileIdx
// 地址: 0x9dde98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result_1 = *(gGameSettings + 0x10)
uint64_t x8 = zx.q(*(result_1 + 0x1f2e0))
void* x14 = result_1 + 0x4320
uint64_t x12

x12 = x8.d u> 1 ? x8 : 1

void* result = result_1

while (*x14 != arg1)
    result += 0x7cb8
    uint64_t temp0_1 = x12
    x12 -= 1
    x14 += 0x7cb8
    
    if (temp0_1 == 1)
        *(result_1 + 0x1f2e4) = *(result_1 + 0x4320)
        result = result_1
        break

*(result + 0x30) = 0
return result
