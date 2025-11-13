// 函数: _ZN10SpookyHash7Hash128EPKvmPyS2_
// 地址: 0xc748a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 u<= 0xbf)
    return SpookyHash::Short(arg1, arg2, arg3, arg4) __tailcall

uint64_t x21 = *arg3
uint64_t x4_1 = *arg4
int64_t x8_3 = arg1 + arg2 u/ 0x60 * 0x60
int64_t var_c0
int64_t var_b8
int64_t var_b0
int64_t var_a8
int64_t var_a0
int64_t var_98
int64_t var_90
int64_t var_88
int64_t var_80
int64_t var_78
int64_t var_70
int64_t var_68
int64_t x19
int64_t x20
uint64_t x22
uint64_t x23
int64_t x24
uint64_t x25
uint64_t x26
uint64_t x27
uint64_t x28
int64_t fp

if ((arg1 & 7) == 0)
    x20 = -0x2152411021524111
    
    if (x8_3 u<= arg1)
    label_c74bd0:
        x23 = x21
        x22 = x4_1
        x19 = -0x2152411021524111
        x28 = x21
        x27 = x4_1
        fp = -0x2152411021524111
        x26 = x21
        x25 = x4_1
        x24 = -0x2152411021524111
    else
        void const* x9_3 = arg1
        x24 = -0x2152411021524111
        x25 = x4_1
        x26 = x21
        fp = -0x2152411021524111
        x27 = x4_1
        x28 = x21
        x19 = -0x2152411021524111
        x22 = x4_1
        x23 = x21
        
        do
            int64_t x12_6 = x4_1 ^ x19
            int64_t x10_8 = *x9_3 + x23
            int64_t x11_5 = *(x9_3 + 8) + x22
            int64_t x14_12 = (x10_8 ^ x20) + x22
            int64_t x13_14 = *(x9_3 + 0x10) + x12_6
            int64_t x10_10 = (x11_5 ^ ror.q(x10_8, 0x35)) + x12_6
            int64_t x12_7 = x14_12 ^ x28
            int64_t x11_7 = (x13_14 ^ ror.q(x11_5, 0x20)) + x12_7
            int64_t x12_8 = x12_7 + *(x9_3 + 0x18)
            int64_t x17_6 = x10_10 ^ x27
            int64_t x2_4 = x11_7 ^ fp
            int64_t x16_7 = x17_6 + *(x9_3 + 0x20)
            x19 = (x12_8 ^ ror.q(x13_14, 0x15)) + x17_6
            x28 = (x16_7 ^ ror.q(x12_8, 0x21)) + x2_4
            int64_t x12_10 = x2_4 + *(x9_3 + 0x28)
            int64_t x17_7 = x19 ^ x26
            uint64_t x2_5 = x28 ^ x25
            int64_t x13_17 = x17_7 + *(x9_3 + 0x30)
            x27 = (x12_10 ^ ror.q(x16_7, 0x2f)) + x17_7
            fp = (x13_17 ^ ror.q(x12_10, 0x24)) + x2_5
            int64_t x15_12 = x2_5 + *(x9_3 + 0x38)
            int64_t x17_8 = x27 ^ x24
            int64_t x12_13 = x17_8 + *(x9_3 + 0x40)
            x26 = (x15_12 ^ ror.q(x13_17, 0x19)) + x17_8
            int64_t x13_19 = fp ^ x21
            x25 = (x12_13 ^ ror.q(x15_12, 7)) + x13_19
            int64_t x13_20 = x13_19 + *(x9_3 + 0x48)
            uint64_t x17_9 = x26 ^ x4_1
            x24 = (x13_20 ^ ror.q(x12_13, 9)) + x17_9
            int64_t x15_15 = x17_9 + *(x9_3 + 0x50)
            int64_t x12_15 = x25 ^ x14_12
            x21 = (x15_15 ^ ror.q(x13_20, 0xa)) + x12_15
            int64_t x12_16 = x12_15 + *(x9_3 + 0x58)
            x9_3 += 0x60
            x23 = x24 ^ x10_10
            x22 = x21 ^ x11_7
            x20 = ror.q(x12_16, 0x12)
            x4_1 = (x12_16 ^ ror.q(x15_15, 0x2a)) + x23
        while (x8_3 u> x9_3)
else
    x20 = -0x2152411021524111
    
    if (x8_3 u<= arg1)
        goto label_c74bd0
    
    void const* x9_2 = arg1
    x24 = -0x2152411021524111
    x25 = x4_1
    x26 = x21
    fp = -0x2152411021524111
    x27 = x4_1
    x28 = x21
    x19 = -0x2152411021524111
    x22 = x4_1
    x23 = x21
    
    do
        int64_t x11_2 = x4_1 ^ x19
        var_c0.o = *x9_2
        var_b0.o = *(x9_2 + 0x10)
        int64_t x13_2 = var_c0 + x23
        int64_t x12_3 = var_b8 + x22
        int64_t x10_4 = (x13_2 ^ x20) + x22
        int64_t x14_3 = var_b0 + x11_2
        var_a0.o = *(x9_2 + 0x20)
        var_90.o = *(x9_2 + 0x30)
        int64_t x11_3 = (x12_3 ^ ror.q(x13_2, 0x35)) + x11_2
        int64_t x13_4 = x10_4 ^ x28
        int64_t x12_5 = (x14_3 ^ ror.q(x12_3, 0x20)) + x13_4
        int64_t x13_5 = x13_4 + var_a8
        int64_t x17_2 = x11_3 ^ x27
        int64_t x2_1 = x12_5 ^ fp
        int64_t x15_4 = x17_2 + var_a0
        x19 = (x13_5 ^ ror.q(x14_3, 0x15)) + x17_2
        int64_t x14_5 = x2_1 + var_98
        x28 = (x15_4 ^ ror.q(x13_5, 0x21)) + x2_1
        int64_t x17_3 = x19 ^ x26
        var_80.o = *(x9_2 + 0x40)
        var_70.o = *(x9_2 + 0x50)
        int64_t x13_8 = x17_3 + var_90
        uint64_t x2_2 = x28 ^ x25
        x27 = (x14_5 ^ ror.q(x15_4, 0x2f)) + x17_3
        int64_t x15_6 = x2_2 + var_88
        fp = (x13_8 ^ ror.q(x14_5, 0x24)) + x2_2
        int64_t x17_4 = x27 ^ x24
        int64_t x2_3 = fp ^ x21
        int64_t x14_8 = x17_4 + var_80
        x26 = (x15_6 ^ ror.q(x13_8, 0x19)) + x17_4
        x25 = (x14_8 ^ ror.q(x15_6, 7)) + x2_3
        int64_t x13_11 = x2_3 + var_78
        uint64_t x17_5 = x26 ^ x4_1
        int64_t x10_5 = x25 ^ x10_4
        int64_t x15_8 = x17_5 + var_70
        x24 = (x13_11 ^ ror.q(x14_8, 9)) + x17_5
        int64_t x14_10 = x10_5 + var_68
        x9_2 += 0x60
        x23 = x24 ^ x11_3
        x21 = (x15_8 ^ ror.q(x13_11, 0xa)) + x10_5
        x20 = ror.q(x14_10, 0x12)
        x22 = x21 ^ x12_5
        x4_1 = (x14_10 ^ ror.q(x15_8, 0x2a)) + x23
    while (x8_3 u> x9_2)

void* x2_6 = arg1 - x8_3 + arg2
memcpy(&var_c0, x8_3, x2_6)
memset(&var_c0 + x2_6, 0, 0x60 - x2_6)
char var_61 = x2_6.b
int64_t x9_8 = var_b8 + x22
int64_t x1_3 = x9_8 + x20 + var_68
int64_t x10_14 = x1_3 ^ (var_b0 + x19)
int64_t x8_6 = var_c0 + x23 + x10_14
int64_t x11_10 = x8_6 ^ (var_a8 + x28)
int64_t x9_10 = x11_10 + ror.q(x9_8, 0x14)
int64_t x12_19 = x9_10 ^ (var_a0 + x27)
int64_t x10_16 = x12_19 + ror.q(x10_14, 0x31)
int64_t x13_24 = x10_16 ^ (var_98 + fp)
int64_t x11_12 = x13_24 + ror.q(x11_10, 0x1e)
int64_t x14_15 = x11_12 ^ (var_90 + x26)
int64_t x12_21 = x14_15 + ror.q(x12_19, 0x2b)
int64_t x15_18 = x12_21 ^ (var_88 + x25)
int64_t x13_26 = x15_18 + ror.q(x13_24, 0x1a)
int64_t x16_13 = x13_26 ^ (var_80 + x24)
int64_t x14_17 = x16_13 + ror.q(x14_15, 0x1f)
int64_t x17_12 = x14_17 ^ (var_78 + x21)
int64_t x15_20 = x17_12 + ror.q(x15_18, 0x36)
int64_t x0_5 = x15_20 ^ (var_70 + x4_1)
int64_t x16_15 = x0_5 + ror.q(x16_13, 0x33)
int64_t x1_4 = x16_15 ^ x1_3
int64_t x17_14 = x1_4 + ror.q(x17_12, 0x1a)
int64_t x8_7 = x17_14 ^ x8_6
int64_t x0_7 = x8_7 + ror.q(x0_5, 0xb)
int64_t x9_11 = x0_7 ^ x9_10
int64_t x1_6 = x9_11 + ror.q(x1_4, 0x16)
int64_t x10_17 = x1_6 ^ x10_16
int64_t x8_9 = x10_17 + ror.q(x8_7, 0xa)
int64_t x11_13 = x8_9 ^ x11_12
int64_t x9_13 = x11_13 + ror.q(x9_11, 0x14)
int64_t x12_22 = x9_13 ^ x12_21
int64_t x10_19 = x12_22 + ror.q(x10_17, 0x31)
int64_t x13_27 = x10_19 ^ x13_26
int64_t x11_15 = x13_27 + ror.q(x11_13, 0x1e)
int64_t x14_18 = x11_15 ^ x14_17
int64_t x12_24 = x14_18 + ror.q(x12_22, 0x2b)
int64_t x15_21 = x12_24 ^ x15_20
int64_t x13_29 = x15_21 + ror.q(x13_27, 0x1a)
int64_t x16_16 = x13_29 ^ x16_15
int64_t x14_20 = x16_16 + ror.q(x14_18, 0x1f)
int64_t x17_15 = x14_20 ^ x17_14
int64_t x15_23 = x17_15 + ror.q(x15_21, 0x36)
int64_t x0_8 = x15_23 ^ x0_7
int64_t x16_18 = x0_8 + ror.q(x16_16, 0x33)
int64_t x1_7 = x16_18 ^ x1_6
int64_t x17_17 = x1_7 + ror.q(x17_15, 0x1a)
int64_t x8_10 = x17_17 ^ x8_9
int64_t result = x8_10 + ror.q(x0_8, 0xb)
int64_t x9_14 = result ^ x9_13
int64_t x1_9 = x9_14 + ror.q(x1_7, 0x16)
int64_t x10_20 = x1_9 ^ x10_19
int64_t x8_12 = x10_20 + ror.q(x8_10, 0xa)
int64_t x11_16 = x8_12 ^ x11_15
int64_t x9_16 = x11_16 + ror.q(x9_14, 0x14)
int64_t x12_25 = x9_16 ^ x12_24
int64_t x10_23 = (x12_25 + ror.q(x10_20, 0x31)) ^ x13_29
int64_t x11_19 = (x10_23 + ror.q(x11_16, 0x1e)) ^ x14_20
int64_t x12_28 = (x11_19 + ror.q(x12_25, 0x2b)) ^ x15_23
int64_t x10_26 = (x12_28 + ror.q(x10_23, 0x1a)) ^ x16_18
int64_t x11_22 = (x10_26 + ror.q(x11_19, 0x1f)) ^ x17_17
int64_t x12_31 = (x11_22 + ror.q(x12_28, 0x36)) ^ result
int64_t x8_13 = (((x12_31 + ror.q(x10_26, 0x33)) ^ x1_9) + ror.q(x11_22, 0x1a)) ^ x8_12
*arg3 = ror.q(x8_13, 0xa)
*arg4 = (x8_13 + ror.q(x12_31, 0xb)) ^ x9_16
return result
