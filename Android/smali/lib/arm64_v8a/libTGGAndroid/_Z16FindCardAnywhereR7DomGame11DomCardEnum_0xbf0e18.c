// 函数: _Z16FindCardAnywhereR7DomGame11DomCardEnum
// 地址: 0xbf0e18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(*(arg1 + 0x1528))

if (x9.d s>= 1)
    int64_t result = 0
    void* __offset(DomGame, 0x1a70) x8_2 = arg1 + 0x1a70
    
    do
        if (*x8_2 == arg2)
            return result
        
        result += 1
        x8_2 += 0x68
    while (x9 != result)

return 0
