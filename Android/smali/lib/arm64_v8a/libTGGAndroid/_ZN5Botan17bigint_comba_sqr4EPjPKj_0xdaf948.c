// 函数: _ZN5Botan17bigint_comba_sqr4EPjPKj
// 地址: 0xdaf948
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8_21 = zx.q(*arg2)
int64_t x8 = x8_21 * x8_21
*arg1 = x8.d
uint32_t x8_1 = (x8 u>> 0x20).d
int64_t x9_1 = zx.q(arg2[1]) * zx.q(*arg2)
uint32_t x11 = (x9_1 u>> 0x3f).d
uint32_t x9_2 = (((x9_1 u>> 0x20).d << 0x20 | x9_1.d) u>> 0x1f).d
int32_t x10_2 = x8_1 + (x9_1.d << 1) u< x8_1 ? 1 : 0
arg1[1] = x8_1 + (x9_1.d << 1)
int32_t x9_3 = x9_2 + x10_2
uint64_t x10_3 = zx.q(arg2[1])
uint32_t x11_1

if (x9_2 + x10_2 u< x9_2)
    x11_1 = x11 + 1
else
    x11_1 = x11

int64_t x8_4 = zx.q(arg2[2]) * zx.q(*arg2)
uint32_t x8_5 = (((x8_4 u>> 0x20).d << 0x20 | x8_4.d) u>> 0x1f).d
int32_t x12_2 = x9_3 + (x8_4.d << 1) u< x9_3 ? 1 : 0
int64_t x9_5 = zx.q(x9_3 + (x8_4.d << 1)) + x10_3 * x10_3
uint32_t x8_6 = x11_1 + x8_5
uint32_t x10_4 = (x9_5 u>> 0x20).d
arg1[2] = x9_5.d
int32_t x8_7 = x8_6 + x12_2
int32_t x8_8 = x8_7 + x10_4
int32_t x9_8 =
    ((x11_1 + x8_5 u< x11_1 ? 1 : 0) | (x8_6 + x12_2 u< x8_6 ? 1 : 0)) + (x8_4 u>> 0x3f).d
int32_t x9_9

if (x8_7 + x10_4 u< x8_7)
    x9_9 = x9_8 + 1
else
    x9_9 = x9_8

int64_t x10_6 = zx.q(arg2[3]) * zx.q(*arg2)
int64_t x11_3 = zx.q(arg2[2]) * zx.q(arg2[1])
int32_t x8_9 = x8_8 + (x10_6.d << 1)
uint32_t x10_7 = (((x10_6 u>> 0x20).d << 0x20 | x10_6.d) u>> 0x1f).d
int32_t x13_2 = x8_8 + (x10_6.d << 1) u< x8_8 ? 1 : 0
int32_t x9_10 = x9_9 + x10_7
int32_t x9_11 = x9_10 + x13_2
uint32_t x14_3 = (((x11_3 u>> 0x20).d << 0x20 | x11_3.d) u>> 0x1f).d
int32_t x11_4 = x8_9 + (x11_3.d << 1) u< x8_9 ? 1 : 0
int32_t x9_12 = x9_11 + x14_3
arg1[3] = x8_9 + (x11_3.d << 1)
int32_t x9_13 = x9_12 + x11_4
uint64_t x13_4 = zx.q(arg2[2])
int32_t x8_13 = (x11_3 u>> 0x3f).d + (x10_6 u>> 0x3f).d
    + ((x9_9 + x10_7 u< x9_9 ? 1 : 0) | (x9_10 + x13_2 u< x9_10 ? 1 : 0))
    + ((x9_11 + x14_3 u< x9_11 ? 1 : 0) | (x9_12 + x11_4 u< x9_12 ? 1 : 0))
int64_t x10_11 = zx.q(arg2[3]) * zx.q(arg2[1])
uint32_t x10_12 = (((x10_11 u>> 0x20).d << 0x20 | x10_11.d) u>> 0x1f).d
int64_t x9_15 = zx.q(x9_13 + (x10_11.d << 1)) + x13_4 * x13_4
int32_t x11_7 = x9_13 + (x10_11.d << 1) u< x9_13 ? 1 : 0
int32_t x8_14 = x8_13 + x10_12
arg1[4] = x9_15.d
uint32_t x10_13 = (x9_15 u>> 0x20).d
int32_t x8_15 = x8_14 + x11_7
int32_t x8_16 = x8_15 + x10_13
int32_t x9_18 =
    ((x8_13 + x10_12 u< x8_13 ? 1 : 0) | (x8_14 + x11_7 u< x8_14 ? 1 : 0)) + (x10_11 u>> 0x3f).d
int64_t x10_14 = zx.q(arg2[3]) * zx.q(arg2[2])
int32_t x9_19

if (x8_15 + x10_13 u< x8_15)
    x9_19 = x9_18 + 1
else
    x9_19 = x9_18

uint32_t x10_15 = (((x10_14 u>> 0x20).d << 0x20 | x10_14.d) u>> 0x1f).d
arg1[5] = x8_16 + (x10_14.d << 1)
int32_t x11_10 = x8_16 + (x10_14.d << 1) u< x8_16 ? 1 : 0
int32_t x8_18 = x9_19 + x10_15
uint64_t x9_20 = zx.q(arg2[3])
int64_t x8_20 = zx.q(x8_18 + x11_10) + x9_20 * x9_20
arg1[6] = x8_20.d
arg1[7] = ((x9_19 + x10_15 u< x9_19 ? 1 : 0) | (x8_18 + x11_10 u< x8_18 ? 1 : 0))
    + (x10_14 u>> 0x3f).d + (x8_20 u>> 0x20).d
