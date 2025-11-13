// 函数: _ZN10SpookyHash5ShortEPKvmPyS2_
// 地址: 0xc74514
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void const* x8 = arg1

if ((arg1 & 7) != 0)
    void var_e0
    memcpy(&var_e0, x8, arg2)
    x8 = &var_e0

uint64_t x9 = *arg3
uint64_t x10 = *arg4
int64_t x14 = arg2 & 0x1f
int64_t x11_1
int64_t x15

if (arg2 u< 0x10)
    x11_1 = -0x2152411021524111
    x15 = -0x2152411021524111
else
    void* x13_1 = x8 + (arg2 & 0xffffffffffffffe0)
    int64_t x13_2
    
    if (x13_1 u<= x8)
        x11_1 = -0x2152411021524111
        x15 = -0x2152411021524111
        x13_2 = x14 - 0x10
        
        if (x14 u>= 0x10)
        label_c746ac:
            int64_t x14_1 = *x8
            int64_t x16_3 = *(x8 + 8)
            x8 += 0x10
            int64_t x14_2 = x16_3 + x15
            int64_t x11_13 = x14_2 + ror.q(x14_1 + x11_1, 0xe)
            int64_t x9_10 = x11_13 ^ x9
            int64_t x14_3 = x9_10 + ror.q(x14_2, 0xc)
            int64_t x10_10 = x14_3 ^ x10
            int64_t x9_12 = x10_10 + ror.q(x9_10, 0x22)
            int64_t x11_14 = x9_12 ^ x11_13
            int64_t x10_12 = x11_14 + ror.q(x10_10, 0x17)
            int64_t x14_4 = x10_12 ^ x14_3
            int64_t x11_16 = x14_4 + ror.q(x11_14, 0xa)
            int64_t x9_13 = x11_16 ^ x9_12
            int64_t x14_6 = x9_13 + ror.q(x14_4, 0x10)
            int64_t x10_13 = x14_6 ^ x10_12
            int64_t x9_15 = x10_13 + ror.q(x9_13, 0x1a)
            int64_t x11_17 = x9_15 ^ x11_16
            int64_t x10_15 = x11_17 + ror.q(x10_13, 0x1b)
            int64_t x14_7 = x10_15 ^ x14_6
            int64_t x11_19 = x14_7 + ror.q(x11_17, 2)
            int64_t x9_16 = x11_19 ^ x9_15
            int64_t x14_9 = x9_16 + ror.q(x14_7, 0x1e)
            int64_t x10_16 = x14_9 ^ x10_15
            x9 = x10_16 + ror.q(x9_16, 0x3b)
            x11_1 = x9 ^ x11_19
            x10 = x11_1 + ror.q(x10_16, 0x1c)
            x15 = x10 ^ x14_9
            x14 = x13_2
    else
        x15 = -0x2152411021524111
        x11_1 = -0x2152411021524111
        
        do
            int64_t x15_1 = *(x8 + 8) + x15
            int64_t x11_4 = x15_1 + ror.q(*x8 + x11_1, 0xe)
            int64_t x9_1 = x11_4 ^ x9
            int64_t x15_3 = x9_1 + ror.q(x15_1, 0xc)
            int64_t x10_1 = x15_3 ^ x10
            int64_t x9_3 = x10_1 + ror.q(x9_1, 0x22)
            int64_t x11_5 = x9_3 ^ x11_4
            int64_t x10_3 = x11_5 + ror.q(x10_1, 0x17)
            int64_t x15_4 = x10_3 ^ x15_3
            int64_t x11_7 = x15_4 + ror.q(x11_5, 0xa)
            int64_t x9_4 = x11_7 ^ x9_3
            int64_t x15_6 = x9_4 + ror.q(x15_4, 0x10)
            int64_t x10_4 = x15_6 ^ x10_3
            int64_t x9_6 = x10_4 + ror.q(x9_4, 0x1a)
            int64_t x11_8 = x9_6 ^ x11_7
            int64_t x10_6 = x11_8 + ror.q(x10_4, 0x1b)
            int64_t x15_7 = x10_6 ^ x15_6
            int64_t x11_10 = x15_7 + ror.q(x11_8, 2)
            int64_t x9_7 = x11_10 ^ x9_6
            int64_t x15_9 = x9_7 + ror.q(x15_7, 0x1e)
            int64_t x16_2 = *(x8 + 0x10)
            int64_t x17_2 = *(x8 + 0x18)
            int64_t x10_7 = x15_9 ^ x10_6
            int64_t x9_9 = x10_7 + ror.q(x9_7, 0x3b)
            x11_1 = x9_9 ^ x11_10
            x8 += 0x20
            int64_t x10_9 = x11_1 + ror.q(x10_7, 0x1c)
            x9 = x9_9 + x16_2
            x15 = x10_9 ^ x15_9
            x10 = x10_9 + x17_2
        while (x13_1 u> x8)
        
        x13_2 = x14 - 0x10
        
        if (x14 u>= 0x10)
            goto label_c746ac

int64_t x13_3 = x15 + (arg2 << 0x38)

switch (x14)
    case 0
        x11_1 -= 0x2152411021524111
        x13_3 -= 0x2152411021524111
    case 1
        x11_1 += zx.q(*x8)
    case 2
        x11_1 = x11_1 + (zx.q(*(x8 + 1)) << 8) + zx.q(*x8)
    case 3
        x11_1 = x11_1 + (zx.q(*(x8 + 2)) << 0x10) + (zx.q(*(x8 + 1)) << 8) + zx.q(*x8)
    case 4
        x11_1 += zx.q(*x8)
    case 5
        x11_1 = x11_1 + (zx.q(*(x8 + 4)) << 0x20) + zx.q(*x8)
    case 6
        goto label_c747a4
    case 7
        x11_1 += zx.q(*(x8 + 6)) << 0x30
    label_c747a4:
        x11_1 = x11_1 + (zx.q(*(x8 + 5)) << 0x28) + (zx.q(*(x8 + 4)) << 0x20) + zx.q(*x8)
    case 8
        x11_1 += *x8
    case 9
        goto label_c747d0
    case 0xa
        goto label_c747c8
    case 0xb
        x13_3 += zx.q(*(x8 + 0xa)) << 0x10
    label_c747c8:
        x13_3 += zx.q(*(x8 + 9)) << 8
    label_c747d0:
        x13_3 += zx.q(*(x8 + 8))
        x11_1 += *x8
    case 0xc
        goto label_c747f8
    case 0xd
        goto label_c747f0
    case 0xe
        goto label_c747e8
    case 0xf
        x13_3 += zx.q(*(x8 + 0xe)) << 0x30
    label_c747e8:
        x13_3 += zx.q(*(x8 + 0xd)) << 0x28
    label_c747f0:
        x13_3 += zx.q(*(x8 + 0xc)) << 0x20
    label_c747f8:
        x13_3 += zx.q(*(x8 + 8))
        x11_1 += *x8

int64_t x11_20 = ror.q(x11_1, 0x31)
int64_t x8_5 = (x13_3 ^ x11_1) + x11_20
int64_t x8_6 = ror.q(x8_5, 0xc)
int64_t x9_19 = (x8_5 ^ x9) + x8_6
int64_t x9_20 = ror.q(x9_19, 0x26)
int64_t x10_19 = (x9_19 ^ x10) + x9_20
int64_t x10_20 = ror.q(x10_19, 0xd)
int64_t x11_22 = (x10_19 ^ x11_20) + x10_20
int64_t x11_23 = ror.q(x11_22, 0x24)
int64_t x8_8 = (x11_22 ^ x8_6) + x11_23
int64_t x8_9 = ror.q(x8_8, 0x37)
int64_t x9_22 = (x8_8 ^ x9_20) + x8_9
int64_t x9_23 = ror.q(x9_22, 0x11)
int64_t x10_22 = (x9_22 ^ x10_20) + x9_23
int64_t x10_23 = ror.q(x10_22, 0xa)
int64_t x11_25 = (x10_22 ^ x11_23) + x10_23
int64_t x8_11 = (x11_25 ^ x8_9) + ror.q(x11_25, 0x20)
int64_t x8_13 = (x8_11 ^ x9_23) + ror.q(x8_11, 0x27)
uint64_t x8_14 = ror.q(x8_13, 1)
*arg3 = x8_14
*arg4 = (x8_13 ^ x10_23) + x8_14
