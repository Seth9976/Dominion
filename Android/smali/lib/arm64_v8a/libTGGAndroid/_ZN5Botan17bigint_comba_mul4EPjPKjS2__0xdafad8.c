// 函数: _ZN5Botan17bigint_comba_mul4EPjPKjS2_
// 地址: 0xdafad8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9_1 = zx.q(*arg3) * zx.q(*arg2)
*arg1 = x9_1.d
int64_t x9_2 = zx.q(arg3[1]) * zx.q(*arg2) + (x9_1 u>> 0x20)
uint32_t x10_2 = (x9_2 u>> 0x20).d
int64_t x9_3 = zx.q(*arg3) * zx.q(arg2[1]) + zx.q(x9_2.d)
uint32_t x11_2 = (x9_3 u>> 0x20).d
arg1[1] = x9_3.d
int32_t x16 = x11_2 + x10_2 u< x11_2 ? 1 : 0
int64_t x9_5 = zx.q(x11_2 + x10_2) + zx.q(arg3[2]) * zx.q(*arg2)
uint32_t x12_2 = (x9_5 u>> 0x20).d
int64_t x9_6 = zx.q(arg3[1]) * zx.q(arg2[1]) + zx.q(x9_5.d)
int32_t x10_5 = x12_2 + x16
bool c_1 = x12_2 + x16 u< x12_2
uint32_t x12_3 = (x9_6 u>> 0x20).d
int64_t x9_7 = zx.q(*arg3) * zx.q(arg2[2]) + zx.q(x9_6.d)
int32_t x13_2

x13_2 = c_1 ? 2 : 1

int32_t x10_6 = x10_5 + x12_3
uint32_t x12_4 = (x9_7 u>> 0x20).d
arg1[2] = x9_7.d
int32_t x9_8

if (x10_5 + x12_3 u>= x10_5)
    x9_8 = c_1 ? 1 : 0
else
    x9_8 = x13_2

int32_t x9_9

if (x10_6 + x12_4 u< x10_6)
    x9_9 = x9_8 + 1
else
    x9_9 = x9_8

int64_t x10_8 = zx.q(x10_6 + x12_4) + zx.q(arg3[3]) * zx.q(*arg2)
uint32_t x14_2 = (x10_8 u>> 0x20).d
int64_t x10_9 = zx.q(arg3[2]) * zx.q(arg2[1]) + zx.q(x10_8.d)
int32_t x9_10 = x9_9 + x14_2
bool c_4 = x9_9 + x14_2 u< x9_9
uint32_t x12_7 = (x10_9 u>> 0x20).d
int64_t x10_10 = zx.q(arg3[1]) * zx.q(arg2[2]) + zx.q(x10_9.d)
int32_t x14_3

x14_3 = c_4 ? 2 : 1

int32_t x9_11 = x9_10 + x12_7
uint32_t x12_8 = (x10_10 u>> 0x20).d
int64_t x10_11 = zx.q(*arg3) * zx.q(arg2[3]) + zx.q(x10_10.d)
int32_t x11_10

if (x9_10 + x12_7 u>= x9_10)
    x11_10 = c_4 ? 1 : 0
else
    x11_10 = x14_3

int32_t x9_12 = x9_11 + x12_8
uint32_t x12_9 = (x10_11 u>> 0x20).d
arg1[3] = x10_11.d
int32_t x10_12

if (x9_11 + x12_8 u< x9_11)
    x10_12 = x11_10 + 1
else
    x10_12 = x11_10

int32_t x10_13

if (x9_12 + x12_9 u< x9_12)
    x10_13 = x10_12 + 1
else
    x10_13 = x10_12

int64_t x9_14 = zx.q(x9_12 + x12_9) + zx.q(arg3[3]) * zx.q(arg2[1])
uint32_t x13_7 = (x9_14 u>> 0x20).d
int64_t x9_15 = zx.q(arg3[2]) * zx.q(arg2[2]) + zx.q(x9_14.d)
int32_t x10_14 = x10_13 + x13_7
bool c_8 = x10_13 + x13_7 u< x10_13
uint32_t x11_13 = (x9_15 u>> 0x20).d
int64_t x9_16 = zx.q(arg3[1]) * zx.q(arg2[3]) + zx.q(x9_15.d)
int32_t x13_8

x13_8 = c_8 ? 2 : 1

int32_t x10_15 = x10_14 + x11_13
arg1[4] = x9_16.d
uint32_t x11_14 = (x9_16 u>> 0x20).d
int32_t x9_17

if (x10_14 + x11_13 u>= x10_14)
    x9_17 = c_8 ? 1 : 0
else
    x9_17 = x13_8

int32_t x9_18

if (x10_15 + x11_14 u< x10_15)
    x9_18 = x9_17 + 1
else
    x9_18 = x9_17

int64_t x10_17 = zx.q(x10_15 + x11_14) + zx.q(arg3[3]) * zx.q(arg2[2])
uint32_t x12_14 = (x10_17 u>> 0x20).d
int64_t x10_18 = zx.q(arg3[2]) * zx.q(arg2[3]) + zx.q(x10_17.d)
arg1[5] = x10_18.d
int32_t x9_19 = x9_18 + x12_14
bool c_11 = x9_18 + x12_14 u< x9_18
uint32_t x11_16 = (x10_18 u>> 0x20).d
int32_t x8

x8 = c_11 ? 2 : 1

int64_t x9_21 = zx.q(x9_19 + x11_16) + zx.q(arg3[3]) * zx.q(arg2[3])
int32_t x8_1

if (x9_19 + x11_16 u>= x9_19)
    x8_1 = c_11 ? 1 : 0
else
    x8_1 = x8

arg1[6] = x9_21.d
arg1[7] = x8_1 + (x9_21 u>> 0x20).d
