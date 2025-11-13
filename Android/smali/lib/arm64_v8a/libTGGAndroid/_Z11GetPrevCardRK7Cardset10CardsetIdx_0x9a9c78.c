// 函数: _Z11GetPrevCardRK7Cardset10CardsetIdx
// 地址: 0x9a9c78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x10 = arg2
int32_t x8_1

do
    int32_t temp0_1 = x10
    x10 -= 1
    x8_1 = -1
    
    if (temp0_1 s< 1)
        break
    
    if (*(arg1 + 0x1520) s< arg2)
        break
    
    x8_1 = x10
while (*(arg1 + (zx.q(x10) << 5) + 0x260) == 0)

return zx.q(x8_1)
