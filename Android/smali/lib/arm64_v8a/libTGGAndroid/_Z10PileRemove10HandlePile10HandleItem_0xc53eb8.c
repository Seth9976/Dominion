// 函数: _Z10PileRemove10HandlePile10HandleItem
// 地址: 0xc53eb8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg2
void* x0 = (*(gPile + 8))()
int32_t* result = (*(gPile + 0x10))(zx.q(x20))
int32_t x8_2 = *result
*result = 0
result[9] = x8_2
int32_t x8_3 = *(x0 + 4)
*(x0 + 8) = 0

if (x8_3 s>= 1)
    int32_t x22_1 = 0
    void* x23_1 = x0
    
    do
        int32_t x0_2 = *x23_1
        int64_t x8_4 = *(gPile + 0x10)
        
        if (x0_2 == x20)
            result = x8_4(zx.q(x20))
            *x23_1 = result[1]
            x8_3 = *(x0 + 4)
            break
        
        result = x8_4(x0_2)
        x8_3 = *(x0 + 4)
        x22_1 += 1
        x23_1 = &result[1]
    while (x22_1 s< x8_3)

*(x0 + 4) = x8_3 - 1
return result
