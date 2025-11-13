// 函数: _Z13GetOffsetCardRK7Cardset10CardsetIdxi
// 地址: 0x9a9c44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_1

do
    int32_t temp0_1 = arg2
    arg2 = arg2 + arg3
    x8_1 = -1
    
    if (temp0_1 + arg3 s< 0)
        break
    
    if (arg2 s>= *(arg1 + 0x1520))
        break
    
    x8_1 = arg2
while (*(arg1 + (zx.q(arg2) << 5) + 0x260) == 0)

return zx.q(x8_1)
