// 函数: _Z14AssociatedPile11DomCardEnum
// 地址: 0xb27734
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
int64_t result = GetSplitPileSource(arg1)

if (result.d != 0)
    return result

if (x19 s<= 0xd2b)
    if (x19 == 0x92c)
        return 0x905
    
    if (x19 == 0x92d)
        return 0x909
    
    if (x19 == 0xd2a)
        return 0xd1e
else if (x19 - 0xd2c u< 3)
    return 0xd12

return 0
