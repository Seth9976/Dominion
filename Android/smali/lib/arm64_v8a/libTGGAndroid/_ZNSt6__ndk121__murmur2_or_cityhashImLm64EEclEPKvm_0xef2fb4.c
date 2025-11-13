// 函数: _ZNSt6__ndk121__murmur2_or_cityhashImLm64EEclEPKvm
// 地址: 0xef2fb4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x2

if (entry_x2 u<= 0x20)
    if (entry_x2 u> 0x10)
        int64_t x10_10 = *(arg2 + 8)
        void* x11_9 = arg2 + entry_x2
        int64_t x8_13 = *arg2 * -0x4b6d499041670d8d
        int64_t x9_10 = *(x11_9 - 8) * -0x651e95c4d06fbfb1
        int64_t x8_16 = x8_13 + entry_x2 + ror.q(x10_10 ^ 0xc949d7c7509e6557, 0x14) - x9_10
        int64_t x9_13 = ((ror.q(x9_10, 0x1e) + ror.q(x8_13 - x10_10, 0x2b)
            - *(x11_9 - 0x10) * 0x3c5a37a36834ced9) ^ x8_16) * -0x622015f714c7d297
        int64_t x8_19 = (x9_13 ^ x8_16 ^ x9_13 u>> 0x2f) * -0x622015f714c7d297
        return (x8_19 ^ x8_19 u>> 0x2f) * -0x622015f714c7d297
    
    if (entry_x2 u< 9)
        if (entry_x2 u>= 4)
            uint64_t x9_22 = zx.q(*(arg2 + entry_x2 - 4))
            int64_t x8_25 = ((zx.q(*arg2 << 3) + entry_x2) ^ x9_22) * -0x622015f714c7d297
            int64_t x8_27 = (x8_25 ^ x9_22 ^ x8_25 u>> 0x2f) * -0x622015f714c7d297
            return (x8_27 ^ x8_27 u>> 0x2f) * -0x622015f714c7d297
        
        if (entry_x2 == 0)
            return -0x651e95c4d06fbfb1
        
        int64_t x8_32 = ((entry_x2 + (zx.q(*(entry_x2 + arg2 - 1)) << 2)) * -0x36b62838af619aa9) ^ (
            ((-0xff01 & zx.q(*arg2)) | zx.q(*(arg2 + (entry_x2 u>> 1))) << 8) * -0x651e95c4d06fbfb1)
        return (x8_32 ^ x8_32 u>> 0x2f) * -0x651e95c4d06fbfb1
    
    int64_t x8_1 = *(arg2 + entry_x2 - 8)
    int64_t x10_2 = ror.q(x8_1 + entry_x2, entry_x2)
    int64_t x9_3 = (x10_2 ^ *arg2) * -0x622015f714c7d297
    int64_t x9_5 = (x9_3 ^ x10_2 ^ x9_3 u>> 0x2f) * -0x622015f714c7d297
    return ((x9_5 ^ x9_5 u>> 0x2f) * -0x622015f714c7d297) ^ x8_1

if (entry_x2 u<= 0x40)
    void* x8_2 = arg2 + entry_x2
    int64_t x14_1 = *(x8_2 - 0x10)
    int64_t x13_1 = *(arg2 + 0x10)
    int64_t x12_1 = *(arg2 + 0x18)
    int64_t x10_5 = *arg2 - (x14_1 + entry_x2) * 0x3c5a37a36834ced9
    int64_t x11_2 = x10_5 + *(arg2 + 8)
    int64_t x15_2 = *(x8_2 - 0x20) + x13_1
    int64_t x13_2 = x11_2 + x13_1
    int64_t x16_2 = *(x8_2 - 8) + x12_1
    int64_t x8_4 = *(x8_2 - 0x18) + x15_2
    int64_t x14_2 = x8_4 + x14_1
    int64_t x10_9 =
        ror.q(x11_2, 7) + ror.q(x10_5, 0x25) + ror.q(x10_5 + x12_1, 0x34) + ror.q(x13_2, 0x1f)
    int64_t x8_9 = (x13_2 + x12_1 + ror.q(x15_2, 0x25) + ror.q(x8_4, 7) + ror.q(x16_2 + x15_2, 0x34)
        + ror.q(x14_2, 0x1f)) * -0x651e95c4d06fbfb1 - (x14_2 + x16_2 + x10_9) * 0x3c5a37a36834ced9
    int64_t x8_11 = x10_9 - (x8_9 ^ x8_9 u>> 0x2f) * 0x3c5a37a36834ced9
    return (x8_11 ^ x8_11 u>> 0x2f) * -0x651e95c4d06fbfb1

void* x10_14 = arg2 + entry_x2
int64_t x11_11 = *(x10_14 - 0x30)
int64_t x13_4 = *(x10_14 - 0x28)
int64_t x14_6 = *(x10_14 - 0x38)
int64_t x16_4 = *(x10_14 - 0x18)
int64_t x15_5 = *(x10_14 - 0x40) + entry_x2
int64_t x0_5 = (x16_4 ^ (x11_11 + entry_x2)) * -0x622015f714c7d297
int64_t x2_1 = x15_5 + x14_6 + x11_11
int64_t x3_1 = *(x10_14 - 0x10)
int64_t x11_13 = *(x10_14 - 8)
int64_t x10_15 = x14_6 + x3_1
int64_t x14_8 = x10_15 + *(x10_14 - 0x20) - 0x4b6d499041670d8d
int64_t x16_6 = x14_8 + x16_4 + x3_1
int64_t x17_5 = *arg2
void* x1 = arg2 + 0x20
int64_t x11_14 = x16_6 + x11_13
int64_t x12_7 = ror.q(x16_6, 0x2c) + x14_8 + ror.q(x14_8 + x13_4 + x11_13, 0x15)
int64_t x14_11 = x2_1 + x13_4
int64_t x15_6 = x17_5 - x13_4 * 0x4b6d499041670d8d
int64_t x13_5 = (x0_5 ^ x16_4 ^ x0_5 u>> 0x2f) * -0x622015f714c7d297
int64_t x0_7 = (x13_5 ^ x13_5 u>> 0x2f) * -0x622015f714c7d297
int64_t x16_9 = ror.q(x2_1, 0x2c) + x15_5 + ror.q(x13_4 + x15_5 + x0_7, 0x15)
int64_t x13_9 = 0x40 - ((entry_x2 - 1) & 0xffffffffffffffc0)

while (true)
    int64_t x4_1 = *(x1 + 0x10)
    int64_t x5_2 = *(x1 + 0x18)
    int64_t x16_10 = x17_5 - x16_9 * 0x4b6d499041670d8d
    int64_t x17_6 = *(x1 + 8)
    int64_t x6_1 = x15_6 + x14_11 + x10_15
    x15_6 = ror.q(x0_7 + x11_14, 0x21) * -0x4b6d499041670d8d
    int64_t x2_3 = x15_6 + x12_7 + *x1
    x10_15 = x17_6 + x14_11 - ror.q(x10_15 + x16_9 + x4_1, 0x2a) * 0x4b6d499041670d8d
    int64_t x14_13 = *(x1 - 0x18)
    int64_t x3_5 = *(x1 - 0x10)
    int64_t x7_1 = x16_10 + x11_14
    int64_t x17_8 = x2_3 + x17_6 + x4_1
    int64_t x4_2 = *(x1 - 8)
    int64_t x14_15 = x16_10 + x14_13 + x3_5
    x0_7 = (ror.q(x6_1 + x14_13, 0x25) * -0x4b6d499041670d8d) ^ x12_7
    x11_14 = x17_8 + x5_2
    x14_11 = x14_15 + x4_2
    x16_9 = ror.q(x14_15, 0x2c) + x16_10 + ror.q(x7_1 + x0_7 + x4_2, 0x15)
    x12_7 = ror.q(x17_8, 0x2c) + x2_3 + ror.q(x10_15 + x3_5 + x2_3 + x5_2, 0x15)
    
    if (x13_9 == 0)
        break
    
    x17_5 = *(x1 + 0x20)
    x13_9 += 0x40
    x1 += 0x40

int64_t x13_11 = (x11_14 ^ x14_11) * -0x622015f714c7d297
int64_t x10_20 = (x12_7 ^ x16_9) * -0x622015f714c7d297
int64_t x11_21 = (x13_11 ^ x11_14 ^ x13_11 u>> 0x2f) * -0x622015f714c7d297
int64_t x10_22 = (x10_20 ^ x12_7 ^ x10_20 u>> 0x2f) * -0x622015f714c7d297
int64_t x10_24 = x15_6 - (x10_22 ^ x10_22 u>> 0x2f) * 0x622015f714c7d297
int64_t x9_17 = (x10_24 ^ (x0_7 - (x10_15 ^ x10_15 u>> 0x2f) * 0x4b6d499041670d8d
    - (x11_21 ^ x11_21 u>> 0x2f) * 0x622015f714c7d297)) * -0x622015f714c7d297
int64_t x9_19 = (x9_17 ^ x10_24 ^ x9_17 u>> 0x2f) * -0x622015f714c7d297
return (x9_19 ^ x9_19 u>> 0x2f) * -0x622015f714c7d297
