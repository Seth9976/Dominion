// 函数: _ZN5Botan19bigint_monty_redc_4EPjPKjjS0_
// 地址: 0xdbdebc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8_16 = zx.q(*arg1)
uint64_t x11 = zx.q(x8_16.d * arg3)
*arg4 = x11.d
int32_t x13 = arg1[1]
int64_t x8_1 = zx.q(arg2[1]) * x11 + ((x8_16 + zx.q(*arg2) * x11) u>> 0x20)
uint32_t x12_1 = (x8_1 u>> 0x20).d
uint64_t x8_2 = zx.q(x13 + x8_1.d)
uint64_t x10_2 = zx.q(x8_2.d * arg3)
arg4[1] = x10_2.d
int32_t x13_1 = x13 + x8_1.d u< x13 ? 1 : 0
int32_t x12_2 = x13_1 + x12_1
bool c_1 = x13_1 + x12_1 u< x13_1
uint32_t x8_4 = ((x8_2 + x10_2 * zx.q(*arg2)) u>> 0x20).d
int32_t x15

x15 = c_1 ? 2 : 1

int32_t x14_1 = arg1[2]
int64_t x8_6 = zx.q(x12_2 + x8_4) + zx.q(arg2[2]) * x11
int32_t x12_3

if (x12_2 + x8_4 u>= x12_2)
    x12_3 = c_1 ? 1 : 0
else
    x12_3 = x15

uint32_t x13_3 = (x8_6 u>> 0x20).d
int64_t x8_7 = x10_2 * zx.q(arg2[1]) + zx.q(x8_6.d)
int32_t x12_4 = x12_3 + x13_3
bool c_3 = x12_3 + x13_3 u< x12_3
uint32_t x13_4 = (x8_7 u>> 0x20).d
int32_t x16_2

x16_2 = c_3 ? 2 : 1

int32_t x13_5 = x12_4 + x13_4
int32_t x15_2

if (x12_4 + x13_4 u>= x12_4)
    x15_2 = c_3 ? 1 : 0
else
    x15_2 = x16_2

uint64_t x8_8 = zx.q(x14_1 + x8_7.d)
int32_t x14_2 = x14_1 + x8_7.d u< x14_1 ? 1 : 0
uint64_t x12_5 = zx.q(x8_8.d * arg3)
arg4[2] = x12_5.d
int32_t x13_6 = x13_5 + x14_2
int32_t x14_3

if (x13_5 + x14_2 u< x13_5)
    x14_3 = x15_2 + 1
else
    x14_3 = x15_2

uint32_t x8_10 = ((x8_8 + x12_5 * zx.q(*arg2)) u>> 0x20).d
int64_t x11_1 = zx.q(x13_6 + x8_10) + zx.q(arg2[3]) * x11
int32_t x13_8 = arg1[3]
int32_t x14_4

if (x13_6 + x8_10 u< x13_6)
    x14_4 = x14_3 + 1
else
    x14_4 = x14_3

uint32_t x17_2 = (x11_1 u>> 0x20).d
int64_t x11_2 = zx.q(arg2[2]) * x10_2 + zx.q(x11_1.d)
int32_t x14_5 = x14_4 + x17_2
bool c_8 = x14_4 + x17_2 u< x14_4
uint32_t x16_6 = (x11_2 u>> 0x20).d
int64_t x11_3 = x12_5 * zx.q(arg2[1]) + zx.q(x11_2.d)
int32_t x17_3

x17_3 = c_8 ? 2 : 1

int32_t x14_6 = x14_5 + x16_6
uint32_t x16_7 = (x11_3 u>> 0x20).d
int32_t x15_6

if (x14_5 + x16_6 u>= x14_5)
    x15_6 = c_8 ? 1 : 0
else
    x15_6 = x17_3

int32_t x14_7 = x14_6 + x16_7
int32_t x15_7

if (x14_6 + x16_7 u< x14_6)
    x15_7 = x15_6 + 1
else
    x15_7 = x15_6

uint64_t x13_9 = zx.q(x13_8 + x11_3.d)
uint64_t x11_4 = zx.q(x13_9.d * arg3)
int32_t x16_8 = x13_8 + x11_3.d u< x13_8 ? 1 : 0
void* x8_12 = &arg4[3]
*x8_12 = x11_4.d
int32_t x14_8 = x14_7 + x16_8
int32_t x15_8

if (x14_7 + x16_8 u< x14_7)
    x15_8 = x15_7 + 1
else
    x15_8 = x15_7

uint32_t x13_11 = ((x13_9 + x11_4 * zx.q(*arg2)) u>> 0x20).d
int32_t x15_9

if (x14_8 + x13_11 u< x14_8)
    x15_9 = x15_8 + 1
else
    x15_9 = x15_8

int64_t x13_13 = zx.q(x14_8 + x13_11) + zx.q(arg2[3]) * x10_2
uint32_t x17_6 = (x13_13 u>> 0x20).d
int64_t x13_14 = x12_5 * zx.q(arg2[2]) + zx.q(x13_13.d)
int32_t x14_10 = x15_9 + x17_6
bool c_14 = x15_9 + x17_6 u< x15_9
uint32_t x15_10 = (x13_14 u>> 0x20).d
int64_t x13_15 = x11_4 * zx.q(arg2[1]) + zx.q(x13_14.d)
int32_t x17_7

x17_7 = c_14 ? 2 : 1

int32_t x14_11 = x14_10 + x15_10
int32_t x15_11 = arg1[4]
int32_t x16_12

if (x14_10 + x15_10 u>= x14_10)
    x16_12 = c_14 ? 1 : 0
else
    x16_12 = x17_7

uint32_t x17_8 = (x13_15 u>> 0x20).d
int32_t x14_12 = x14_11 + x17_8
int32_t x16_13

if (x14_11 + x17_8 u< x14_11)
    x16_13 = x16_12 + 1
else
    x16_13 = x16_12

uint32_t x13_16 = x15_11 + x13_15.d
*arg4 = x13_16
int32_t x17_9 = x15_11 + x13_15.d u< x15_11 ? 1 : 0
int64_t x12_6 = zx.q(x14_12 + x17_9) + zx.q(arg2[3]) * x12_5
int32_t x14_14 = arg1[5]
int32_t x15_13

if (x14_12 + x17_9 u< x14_12)
    x15_13 = x16_13 + 1
else
    x15_13 = x16_13

uint32_t x17_11 = (x12_6 u>> 0x20).d
int64_t x12_7 = x11_4 * zx.q(arg2[2]) + zx.q(x12_6.d)
int32_t x15_14 = x15_13 + x17_11
bool c_19 = x15_13 + x17_11 u< x15_13
uint32_t x16_15 = (x12_7 u>> 0x20).d
int32_t x9

x9 = c_19 ? 2 : 1

int32_t x15_15 = x15_14 + x16_15
int32_t x9_1

if (x15_14 + x16_15 u>= x15_14)
    x9_1 = c_19 ? 1 : 0
else
    x9_1 = x9

int32_t x12_8 = x14_14 + x12_7.d
arg4[1] = x12_8
int32_t x14_15 = x14_14 + x12_7.d u< x14_14 ? 1 : 0
int32_t x15_16 = arg1[6]
int64_t x11_5 = zx.q(x15_15 + x14_15) + x11_4 * zx.q(arg2[3])
int32_t x9_2

if (x15_15 + x14_15 u< x15_15)
    x9_2 = x9_1 + 1
else
    x9_2 = x9_1

uint32_t x14_17 = (x11_5 u>> 0x20).d
int32_t x11_6 = x15_16 + x11_5.d
arg4[2] = x11_6
int32_t x15_17 = arg1[7]
int32_t x17_13 = x15_16 + x11_5.d u< x15_16 ? 1 : 0
*x8_12 = x9_2 + x14_17 + x17_13 + x15_17
int32_t x16_20 = arg1[9]
int32_t x9_3 = x9_2 + x14_17
int32_t x14_18

if (x9_2 + x14_17 u< x9_2)
    x14_18 = x16_20 + 1
else
    x14_18 = x16_20

int32_t x9_4 = x9_3 + x17_13
int32_t x14_19

if (x9_3 + x17_13 u< x9_3)
    x14_19 = x14_18 + 1
else
    x14_19 = x14_18

int32_t x15_18 = x9_4 + x15_17
int32_t x14_20

if (x9_4 + x15_17 u< x9_4)
    x14_20 = x14_19 + 1
else
    x14_20 = x14_19

arg4[4] = x14_20
arg4[5] = x14_20 u< x16_20 ? 1 : 0
uint32_t const x9_6 = *arg2
uint32_t x9_7 = x13_16 - x9_6
arg4[5] = x9_7
int32_t x13_17 = arg2[1]
int32_t x16_21 = x13_16 u< x9_6 ? 1 : 0
int32_t x12_9 = x12_8 - x13_17
arg4[6] = x12_9 - x16_21
int32_t x12_11 = arg2[2]
int32_t x13_19 = (x12_8 u< x13_17 ? 1 : 0) | (x12_9 u< x16_21 ? 1 : 0)
int32_t x11_7 = x11_6 - x12_11
arg4[7] = x11_7 - x13_19
int32_t x11_9 = arg2[3]
int32_t x12_13 = (x11_6 u< x12_11 ? 1 : 0) | (x11_7 u< x13_19 ? 1 : 0)
int32_t x11_10 = x15_18 - x11_9
int32_t x12_15 = (x15_18 u< x11_9 ? 1 : 0) | (x11_10 u< x12_13 ? 1 : 0)
arg4[8] = x11_10 - x12_13
arg4[9] = x14_20 - x12_15

if (x14_20 u>= x12_15)
    *arg1 = x9_7
    arg1[1] = arg4[6]
    arg1[2] = arg4[7]
    x8_12 = &arg4[8]
else
    *arg1 = *arg4
    arg1[1] = arg4[1]
    arg1[2] = arg4[2]

arg1[3] = *x8_12
__builtin_memset(&arg1[4], 0, 0x18)
