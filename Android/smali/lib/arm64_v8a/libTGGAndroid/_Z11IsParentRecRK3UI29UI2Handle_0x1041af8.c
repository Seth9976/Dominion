// 函数: _Z11IsParentRecRK3UI29UI2Handle
// 地址: 0x1041af8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_1

do
    x8_1 = *(arg1 + 0x19a0)
    
    if (x8_1 == arg2)
        break
    
    arg1 = *(arg1 + 0x17d0)
while (arg1 != 0)

return zx.q(x8_1 == arg2 ? 1 : 0)
