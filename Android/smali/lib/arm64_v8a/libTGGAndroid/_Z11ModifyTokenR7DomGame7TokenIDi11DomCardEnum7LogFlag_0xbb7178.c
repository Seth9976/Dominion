// 函数: _Z11ModifyTokenR7DomGame7TokenIDi11DomCardEnum7LogFlag
// 地址: 0xbb7178
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x3 = zx.q(arg2)
void* x8_1 = arg1 + (sx.q(x3.d) << 5)
*(x8_1 + 0x15f7c) += arg3
int32_t x9 = *(arg1 + 0x150c)

if (x9 - 3 u>= 4)
    int64_t var_48_1 = *(x8_1 + 0x15f80)
    int32_t var_50_1 = 0
    int32_t var_58_1 = 0
    int32_t var_60_1 = *(x8_1 + 0x15f74)
    DomNotifyEffect(zx.q(x9 == 2 ? 1 : 0), 0x14, zx.q(*(x8_1 + 0x15f6c)), x3, zx.q(arg3), 0, 
        zx.q(*(x8_1 + 0x15f68)), zx.q(*(x8_1 + 0x15f70)))

if ((arg5 & 2) != 0)
    return 

uint64_t x1 = zx.q(*(x8_1 + 0x15f6c))

if (x1.d == 0xffffffff)
    return 

uint64_t x7_2 = zx.q(*(x8_1 + 0x15f68))

if (x7_2.d == 0xe01 || *(arg1 + 0x150c) - 3 u< 4 || zx.d(*(arg1 + 0x1508)) != 0)
    return 

uint64_t x2_1

if (*(arg1 + 0x19d4) == x1.d)
    x2_1 = zx.q(*(arg1 + 0x19d8))
else
    x2_1 = zx.q(x1.d)

int32_t var_50_2 = 0
int32_t var_58_2 = 0
int32_t var_60_2 = arg3
DomAddLogEvent(arg1, x1, x2_1, 0xb, zx.q(arg4), nullptr, 0, x7_2)
