// 函数: _ZN10SpookyHash5FinalEPyS0_
// 地址: 0xc753c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t* x21 = arg1
uint64_t* entry_x2

if (arg1[0x24] u<= 0xbf)
    *arg2 = x21[0x18]
    *entry_x2 = x21[0x19]
    return SpookyHash::Short(x21, x21[0x24], arg2, entry_x2) __tailcall

uint32_t x24 = zx.d(x21[0x25].b)
int64_t x23 = x21[0x18]
int64_t x22 = x21[0x19]
int64_t x11_1 = x21[0x1a]
int64_t x15_1 = x21[0x1b]
int64_t x19 = x21[0x1c]
int64_t x25 = x21[0x1d]
int64_t fp = x21[0x1e]
int64_t x28 = x21[0x1f]
int64_t x26 = x21[0x20]
int64_t x27 = x21[0x21]
int64_t x0_2 = x21[0x22]
int64_t x20 = x21[0x23]
int64_t var_88
int64_t var_80
int64_t var_78

if (x24 u< 0x60)
    var_88 = x0_2
    var_80 = x11_1
    var_78 = x15_1
else
    int64_t x11_2 = x0_2 ^ x11_1
    x24 -= 0x60
    int64_t x9_3 = *x21 + x23
    int64_t x10_3 = x21[1] + x22
    int64_t x13_3 = (x9_3 ^ x20) + x22
    int64_t x12_3 = x21[2] + x11_2
    int64_t x9_5 = (x10_3 ^ ror.q(x9_3, 0x35)) + x11_2
    int64_t x11_3 = x13_3 ^ x15_1
    int64_t x10_5 = (x12_3 ^ ror.q(x10_3, 0x20)) + x11_3
    int64_t x11_4 = x11_3 + x21[3]
    int64_t x16_2 = x9_5 ^ x19
    int64_t x17_2 = x10_5 ^ x25
    int64_t x15_3 = x16_2 + x21[4]
    int64_t x16_3 = (x11_4 ^ ror.q(x12_3, 0x15)) + x16_2
    int64_t x2_2 = (x15_3 ^ ror.q(x11_4, 0x21)) + x17_2
    int64_t x11_6 = x17_2 + x21[5]
    var_80 = x16_3
    var_78 = x2_2
    int64_t x16_4 = x16_3 ^ fp
    int64_t x17_3 = x2_2 ^ x28
    int64_t x12_6 = x16_4 + x21[6]
    x19 = (x11_6 ^ ror.q(x15_3, 0x2f)) + x16_4
    x25 = (x12_6 ^ ror.q(x11_6, 0x24)) + x17_3
    int64_t x14_5 = x17_3 + x21[7]
    int64_t x16_5 = x19 ^ x26
    int64_t x11_9 = x16_5 + x21[8]
    fp = (x14_5 ^ ror.q(x12_6, 0x19)) + x16_5
    int64_t x12_8 = x25 ^ x27
    x28 = (x11_9 ^ ror.q(x14_5, 7)) + x12_8
    int64_t x12_9 = x12_8 + x21[9]
    int64_t x16_6 = fp ^ x0_2
    x26 = (x12_9 ^ ror.q(x11_9, 9)) + x16_6
    int64_t x14_8 = x16_6 + x21[0xa]
    int64_t x11_11 = x28 ^ x13_3
    x27 = (x14_8 ^ ror.q(x12_9, 0xa)) + x11_11
    int64_t x11_12 = x11_11 + x21[0xb]
    x23 = x26 ^ x9_5
    x22 = x27 ^ x10_5
    x20 = ror.q(x11_12, 0x12)
    x21 = &x21[0xc]
    var_88 = (x11_12 ^ ror.q(x14_8, 0x2a)) + x23

uint64_t x8_5 = zx.q(x24.b)
memset(x21 + x8_5, 0, 0x60 - x8_5)
uint64_t x8_6 = *x21
int64_t x9_8 = x21[1]
*(x21 + 0x5f) = x24.b
int64_t x9_9 = x9_8 + x22
int64_t x1_3 = x9_9 + x20 + x21[0xb]
int64_t x10_8 = x1_3 ^ (x21[2] + var_80)
int64_t x8_8 = x8_6 + x23 + x10_8
int64_t x11_15 = x8_8 ^ (x21[3] + var_78)
int64_t x9_11 = x11_15 + ror.q(x9_9, 0x14)
int64_t x12_14 = x9_11 ^ (x21[4] + x19)
int64_t x10_10 = x12_14 + ror.q(x10_8, 0x31)
int64_t x13_6 = x10_10 ^ (x21[5] + x25)
int64_t x11_17 = x13_6 + ror.q(x11_15, 0x1e)
int64_t x14_12 = x11_17 ^ (x21[6] + fp)
int64_t x12_16 = x14_12 + ror.q(x12_14, 0x2b)
int64_t x15_9 = x12_16 ^ (x21[7] + x28)
int64_t x13_8 = x15_9 + ror.q(x13_6, 0x1a)
int64_t x16_9 = x13_8 ^ (x21[8] + x26)
int64_t x14_14 = x16_9 + ror.q(x14_12, 0x1f)
int64_t x17_6 = x14_14 ^ (x21[9] + x27)
int64_t x15_11 = x17_6 + ror.q(x15_9, 0x36)
int64_t x0_6 = x15_11 ^ (x21[0xa] + var_88)
int64_t x16_11 = x0_6 + ror.q(x16_9, 0x33)
int64_t x1_4 = x16_11 ^ x1_3
int64_t x17_8 = x1_4 + ror.q(x17_6, 0x1a)
int64_t x8_9 = x17_8 ^ x8_8
int64_t x0_8 = x8_9 + ror.q(x0_6, 0xb)
int64_t x9_12 = x0_8 ^ x9_11
int64_t x1_6 = x9_12 + ror.q(x1_4, 0x16)
int64_t x10_11 = x1_6 ^ x10_10
int64_t x8_11 = x10_11 + ror.q(x8_9, 0xa)
int64_t x11_18 = x8_11 ^ x11_17
int64_t x9_14 = x11_18 + ror.q(x9_12, 0x14)
int64_t x12_17 = x9_14 ^ x12_16
int64_t x10_13 = x12_17 + ror.q(x10_11, 0x31)
int64_t x13_9 = x10_13 ^ x13_8
int64_t x11_20 = x13_9 + ror.q(x11_18, 0x1e)
int64_t x14_15 = x11_20 ^ x14_14
int64_t x12_19 = x14_15 + ror.q(x12_17, 0x2b)
int64_t x15_12 = x12_19 ^ x15_11
int64_t x13_11 = x15_12 + ror.q(x13_9, 0x1a)
int64_t x16_12 = x13_11 ^ x16_11
int64_t x14_17 = x16_12 + ror.q(x14_15, 0x1f)
int64_t x17_9 = x14_17 ^ x17_8
int64_t x15_14 = x17_9 + ror.q(x15_12, 0x36)
int64_t x0_9 = x15_14 ^ x0_8
int64_t x16_14 = x0_9 + ror.q(x16_12, 0x33)
int64_t x1_7 = x16_14 ^ x1_6
int64_t x17_11 = x1_7 + ror.q(x17_9, 0x1a)
int64_t x8_12 = x17_11 ^ x8_11
int64_t result = x8_12 + ror.q(x0_9, 0xb)
int64_t x9_15 = result ^ x9_14
int64_t x1_9 = x9_15 + ror.q(x1_7, 0x16)
int64_t x10_14 = x1_9 ^ x10_13
int64_t x8_14 = x10_14 + ror.q(x8_12, 0xa)
int64_t x11_21 = x8_14 ^ x11_20
int64_t x9_17 = x11_21 + ror.q(x9_15, 0x14)
int64_t x12_20 = x9_17 ^ x12_19
int64_t x10_17 = (x12_20 + ror.q(x10_14, 0x31)) ^ x13_11
int64_t x11_24 = (x10_17 + ror.q(x11_21, 0x1e)) ^ x14_17
int64_t x12_23 = (x11_24 + ror.q(x12_20, 0x2b)) ^ x15_14
int64_t x10_20 = (x12_23 + ror.q(x10_17, 0x1a)) ^ x16_14
int64_t x11_27 = (x10_20 + ror.q(x11_24, 0x1f)) ^ x17_11
int64_t x12_26 = (x11_27 + ror.q(x12_23, 0x36)) ^ result
int64_t x8_15 = (((x12_26 + ror.q(x10_20, 0x33)) ^ x1_9) + ror.q(x11_27, 0x1a)) ^ x8_14
*arg2 = ror.q(x8_15, 0xa)
*entry_x2 = (x8_15 + ror.q(x12_26, 0xb)) ^ x9_17
return result
