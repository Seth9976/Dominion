// 函数: _Z35PregameNumLandscapesAfterDivineWindv
// 地址: 0xac3450
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(PregameContextGet() + 0x20)
int64_t result

if (*(x8 + 0x28) == 0)
    result = 0
    
    if (*(x8 + 0x15c) == 0)
        return result
else if (*(x8 + 0x64) == 0)
    result = 1
    
    if (*(x8 + 0x15c) == 0)
        return result
else if (*(x8 + 0xa0) == 0)
    result = 2
    
    if (*(x8 + 0x15c) == 0)
        return result
else
    if (*(x8 + 0xdc) != 0)
        result = 4
    else
        result = 3
    
    if (*(x8 + 0x15c) == 0)
        return result

if (*(x8 + 0x160) == 0)
    return zx.q(result.d + 1)

if (*(x8 + 0x164) == 0)
    return zx.q(result.d + 2)

if (*(x8 + 0x168) == 0)
    return zx.q(result.d + 3)

int32_t x8_2

if (*(x8 + 0x16c) != 0)
    x8_2 = 5
else
    x8_2 = 4

return zx.q(result.d + x8_2)
