// 函数: _Z9FlipTokenR7DomGame9PlayerWho12DomTokenType7LogFlag
// 地址: 0xbb81b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2.d
int64_t result = FindOrCreateToken(arg1, arg2, arg3, 0x476, 1)
int64_t x22 = sx.q(result.d)
int32_t var_34 = result.d
uint64_t x4 = zx.q(*(arg1 + (x22 << 5) + 0x15f78)) ^ 1
*(arg1 + (x22 << 5) + 0x15f78) = (x4.d).b
int32_t x8_2 = *(arg1 + 0x150c)

if (x8_2 - 3 u>= 4)
    int64_t var_48_1 = 0
    int32_t var_50_1 = 0
    int32_t var_58_1 = 0
    int32_t var_60_1 = 0
    result = DomNotifyEffect(zx.q(x8_2 == 2 ? 1 : 0), 0x15, zx.q(x19), zx.q(x22.d), x4, 0, 0, 0)

if ((arg4 & 2) != 0 || *(arg1 + 0x150c) - 3 u< 4 || zx.d(*(arg1 + 0x1508)) != 0)
    return result

uint64_t x2_1

if (*(arg1 + 0x19d4) == x19)
    x2_1 = zx.q(*(arg1 + 0x19d8))
else
    x2_1 = zx.q(x19)

int32_t var_50_2 = 0
int32_t var_58_2 = 0
uint32_t var_60_2 = zx.d(*(arg1 + (x22 << 5) + 0x15f78))
return DomAddLogEvent(arg1, zx.q(x19), x2_1, 0xe, 0, &var_34, 1, 
    zx.q(*(arg1 + (x22 << 5) + 0x15f68)))
