// 函数: _Z18PileUpdateStacking10HandlePile13StackingStyle9SortStyle
// 地址: 0xc53f64
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

PileUpdateStacks(arg1, zx.q(arg3), zx.q(arg2))
void* result = (*(gPile + 8))(zx.q(arg1.d))
int32_t i = *(result + 8)

if (i != 0)
    void* result_1 = result
    int32_t x23_1 = 0
    
    do
        (*(gPile + 0x10))(zx.q(i))
        int32_t j = i
        
        do
            void* x0_3 = (*(gPile + 0x10))(zx.q(j))
            int64_t v0_1 = *(x0_3 + 0x1c)
            *(x0_3 + 0x1c) = x23_1
            *(x0_3 + 0x18) = (j == i ? 1 : 0).b
            *(x0_3 + 0x28) = v0_1
            int32_t x8_5 = *(result_1 + 0xc)
            *(x0_3 + 0x10) = i
            *(x0_3 + 0x20) = x8_5
            j = *((*(gPile + 0x10))(zx.q(j)) + 8)
        while (j != 0)
        
        x23_1 += 1
        result = (*(gPile + 0x10))(zx.q(i))
        i = *(result + 0x14)
    while (i != 0)

return result
