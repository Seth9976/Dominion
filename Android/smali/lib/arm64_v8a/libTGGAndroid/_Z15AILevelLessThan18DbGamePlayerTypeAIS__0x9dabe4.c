// 函数: _Z15AILevelLessThan18DbGamePlayerTypeAIS_
// 地址: 0x9dabe4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 == arg2)
    return 0

int32_t x8

if (arg1 == 0xffffffff)
    x8 = 0
    
    if (arg2 == 0xffffffff)
        return zx.q(x8 s< 0 ? 1 : 0)
else if (arg1 != 3)
    x8 = arg1 + 2
    
    if (arg2 == 0xffffffff)
        return zx.q(x8 s< 0 ? 1 : 0)
else
    x8 = 1
    
    if (arg2 == 0xffffffff)
        return zx.q(x8 s< 0 ? 1 : 0)

if (arg2 != 3)
    return zx.q(x8 s< arg2 + 2 ? 1 : 0)

return zx.q(x8 s< 1 ? 1 : 0)
