// 函数: _ZltRK8UI2StateS1_
// 地址: 0x1023d5c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x21 = *arg1
void* x22 = *arg2
int32_t x0_1 = strcmp(*(x21 + 0x10), *(x22 + 0x10))

if ((x0_1 & 0x80000000) == 0)
    if (x0_1 != 0)
        return 0
    
    int32_t x8_1 = *(arg1 + 8)
    int32_t x9_1 = *(arg2 + 8)
    
    if (x8_1 s>= x9_1)
        return zx.q(x21 u< x22 ? 1 : 0) & zx.q(x8_1 s<= x9_1 ? 1 : 0)

return 1
