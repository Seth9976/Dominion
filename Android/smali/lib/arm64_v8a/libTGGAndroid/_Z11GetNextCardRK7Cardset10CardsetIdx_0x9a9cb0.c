// 函数: _Z11GetNextCardRK7Cardset10CardsetIdx
// 地址: 0x9a9cb0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x10 = arg2
int32_t x8_1

do
    x8_1 = -1
    
    if (arg2 s< 0xffffffff)
        break
    
    x10 += 1
    
    if (x10 s>= *(arg1 + 0x1520))
        break
    
    x8_1 = x10
while (*(arg1 + (zx.q(x10) << 5) + 0x260) == 0)

return zx.q(x8_1)
