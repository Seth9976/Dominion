// 函数: _Z16GetActiveProfilev
// 地址: 0x9ddb3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result_1 = *(gGameSettings + 0x10)
uint64_t x12 = zx.q(*(result_1 + 0x1f2e0))
int32_t* x14 = result_1 + 0x4320
void* result = result_1
uint64_t x12_1

x12_1 = x12.d u> 1 ? x12 : 1

while (*x14 != *(result_1 + 0x1f2e4))
    result += 0x7cb8
    uint64_t temp0_1 = x12_1
    x12_1 -= 1
    x14 = &x14[0x1f2e]
    
    if (temp0_1 == 1)
        result = result_1
        *(result_1 + 0x1f2e4) = *(result_1 + 0x4320)
        break

*(result + 0x30) = 0
return result
