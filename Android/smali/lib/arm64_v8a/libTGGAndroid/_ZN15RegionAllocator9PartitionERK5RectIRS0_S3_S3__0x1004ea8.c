// 函数: _ZN15RegionAllocator9PartitionERK5RectIRS0_S3_S3_
// 地址: 0x1004ea8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_50 = *arg2
int64_t x0_1 = RectISize(&var_50)
int32_t x8_1 = x0_1.d s/ *arg1
int32_t x9_1 = (x0_1 u>> 0x20).d s/ *(arg1 + 4)
int32_t x10_2 = (x8_1 - 1) | (x8_1 - 1) u>> 1
int32_t x11_1 = (x9_1 - 1) | (x9_1 - 1) u>> 1
int32_t x10_3 = x10_2 | x10_2 u>> 2
int32_t x11_2 = x11_1 | x11_1 u>> 2
int32_t x10_4 = x10_3 | x10_3 u>> 4
int32_t x11_3 = x11_2 | x11_2 u>> 4
int32_t x10_5 = x10_4 | x10_4 u>> 8
int32_t x11_4 = x11_3 | x11_3 u>> 8
int32_t x8_2

if ((x10_5 | x10_5 u>> 0x10) + 1 == x8_1)
    x8_2 = x8_1
else
    x8_2 = ((x10_5 | x10_5 u>> 0x10) + 1) s>> 1

int32_t x9_2

if ((x11_4 | x11_4 u>> 0x10) + 1 == x9_1)
    x9_2 = x9_1
else
    x9_2 = ((x11_4 | x11_4 u>> 0x10) + 1) s>> 1

int32_t x8_3

x8_3 = x8_2 s< x9_2 ? x8_2 : x9_2

int32_t x21
int32_t x24

if (x8_3 u< 2)
    x24 = 0
    x21 = 1
else
    x21 = 1
    bool cond:1_1
    
    do
        cond:1_1 = x8_3 u> 3
        x8_3 u>>= 1
        x21 += 1
    while (cond:1_1)
    x24 = x21 - 1

int64_t x0_3 = RectTopLeft(&var_50)
int64_t var_38 = x0_3
int32_t x23_1 = *arg1 << x24
int32_t x24_1 = *(arg1 + 4) << x24
uint64_t var_58 = zx.q(x23_1 + x0_3.d) | zx.q(x24_1 + (x0_3 u>> 0x20).d) << 0x20
int64_t x0_5
int64_t x1_1
x0_5, x1_1 = RectISet(&var_38, &var_58)
*arg3 = x0_5
*(arg3 + 8) = x1_1
uint64_t var_60 = zx.q(var_38.d + *V2IX * x23_1) | zx.q(var_38:4.d + *(V2IX + 4) * x23_1) << 0x20
int64_t var_68 = RectBottomRight(&var_50)
int64_t x0_9
int64_t x1_3
x0_9, x1_3 = RectISet(&var_60, &var_68)
*arg4 = x0_9
*(arg4 + 8) = x1_3
int32_t x11_8 = var_38.d
uint64_t x8_9 = zx.q(*V2IY)
uint64_t x8_11 = zx.q(x11_8 + x8_9.d * x24_1) | zx.q(var_38:4.d + *(x8_9 + 4) * x24_1) << 0x20
uint64_t var_78 = zx.q(x11_8 + x23_1) | zx.q(var_50:0xc.d) << 0x20
uint64_t var_70 = x8_11
int64_t x0_11
int64_t x1_5
x0_11, x1_5 = RectISet(&var_70, &var_78)
int64_t* entry_x4
*entry_x4 = x0_11
entry_x4[1] = x1_5
return zx.q(x21)
