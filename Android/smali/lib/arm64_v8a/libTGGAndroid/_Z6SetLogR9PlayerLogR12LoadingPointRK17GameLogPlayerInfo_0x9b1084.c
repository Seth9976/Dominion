// 函数: _Z6SetLogR9PlayerLogR12LoadingPointRK17GameLogPlayerInfo
// 地址: 0x9b1084
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = *(arg1 + 8)
int32_t x8 = *(arg3 + 0x10)
int32_t x8_1

if (x9 == 0 || x9 s< x8)
    int32_t x22_1
    
    if (x8 s< 0x800)
        x22_1 = 0x1000
    else
        x22_1 = x8 << 1
    
    *arg1 = XMalloc(x22_1)
    *(arg1 + 8) = x22_1
    x8_1 = *(arg3 + 0x14)
    
    if (x8_1 == 0)
        *(arg1 + 0x14) = 0
        x8_1 = *(arg3 + 0x14)
else
    x8_1 = *(arg3 + 0x14)
    
    if (x8_1 == 0)
        *(arg1 + 0x14) = 0
        x8_1 = *(arg3 + 0x14)

int64_t result = memcpy(*arg1 + sx.q(x8_1), *(arg3 + 8), sx.q(*(arg3 + 0x10)))
int32_t x8_3 = *(arg3 + 0x10) + *(arg3 + 0x14)
*(arg1 + 0xc) = x8_3
*(arg1 + 0x10) = x8_3
*(arg2 + 4) = *(arg3 + 0x18)
*(arg2 + 8) = *(arg3 + 0x1c)
return result
