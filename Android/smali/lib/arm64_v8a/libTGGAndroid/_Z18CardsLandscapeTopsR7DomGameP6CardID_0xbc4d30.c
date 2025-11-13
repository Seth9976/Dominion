// 函数: _Z18CardsLandscapeTopsR7DomGameP6CardID
// 地址: 0xbc4d30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9_3 = *(arg1 + 0x1754)
uint64_t result
int32_t x9

if (x9_3 == 0)
    result = 0
    x9 = *(arg1 + 0x1764)
    
    if (x9 != 0)
        *(arg2 + (zx.q(result.d) << 2)) = x9
        result = zx.q(result.d + 1)
else
    result = 1
    *arg2 = x9_3
    x9 = *(arg1 + 0x1764)
    
    if (x9 != 0)
        *(arg2 + (zx.q(result.d) << 2)) = x9
        result = zx.q(result.d + 1)
int32_t x9_1 = *(arg1 + 0x1774)

if (x9_1 != 0)
    *(arg2 + (zx.q(result.d) << 2)) = x9_1
    result = zx.q(result.d + 1)

int32_t x8_1 = *(arg1 + 0x1784)

if (x8_1 == 0)
    return result

*(arg2 + (zx.q(result.d) << 2)) = x8_1
return zx.q(result.d + 1)
