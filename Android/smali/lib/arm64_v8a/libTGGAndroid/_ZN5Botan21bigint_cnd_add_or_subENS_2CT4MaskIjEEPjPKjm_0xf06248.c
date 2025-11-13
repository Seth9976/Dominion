// 函数: _ZN5Botan21bigint_cnd_add_or_subENS_2CT4MaskIjEEPjPKjm
// 地址: 0xf06248
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t i_3 = arg4 & 0xfffffffffffffff8
int64_t i_4 = i_3
int32_t x8
uint64_t x9_6
int32_t x11
int64_t i_5

if (i_3 == 0)
    x8 = 0
    x11 = 0
    i_5 = i_4
    x9_6 = arg4
    
    if (i_5 != x9_6)
    label_f06490:
        int64_t i_2 = x9_6 - i_5
        void* x9_8 = &arg3[i_5]
        void* x12_2 = &arg2[i_5]
        int64_t i
        
        do
            int32_t x13_1 = *x12_2
            int32_t x14_12 = *x9_8
            x9_8 += 4
            int32_t x15_11 = x14_12 + x13_1
            int32_t x13_2 = x13_1 - x14_12
            int32_t x14_13 = (x15_11 + x8) & arg1.d
            x8 = (x14_12 + x13_1 u< x14_12 ? 1 : 0) | (x15_11 + x8 u< x15_11 ? 1 : 0)
            int32_t x16_14 = (x13_2 - x11) & not.d(arg1.d)
            x11 = (x13_1 u< x14_12 ? 1 : 0) | (x13_2 u< x11 ? 1 : 0)
            i = i_2
            i_2 -= 1
            *x12_2 = x14_13 | x16_14
            x12_2 += 4
        while (i != 1)
    
    return 

x11 = 0
x8 = 0
void* x10_1 = &arg3[4]
void* x12 = &arg2[4]
int64_t i_1

do
    int32_t x23_1 = *(x12 - 0x10)
    int32_t x24_1 = *(x12 - 0xc)
    int32_t x26_1 = *(x10_1 - 0x10)
    int32_t x25_1 = *(x10_1 - 0xc)
    int32_t x14_1 = *(x12 - 8)
    int32_t x15_1 = *(x12 - 4)
    int32_t x7_1 = *(x10_1 - 8)
    int32_t x16_1 = *(x10_1 - 4)
    int32_t x17_1 = *x12
    int32_t x4_1 = *(x12 + 4)
    int32_t x27_1 = x26_1 + x23_1
    int32_t fp_1 = x25_1 + x24_1
    int32_t x8_2 = (x26_1 + x23_1 u< x26_1 ? 1 : 0) | (x27_1 + x8 u< x27_1 ? 1 : 0)
    int32_t lr_1 = x7_1 + x14_1
    int32_t x8_4 = (x25_1 + x24_1 u< x25_1 ? 1 : 0) | (fp_1 + x8_2 u< fp_1 ? 1 : 0)
    int32_t x21_1 = *x10_1
    int32_t x5_1 = *(x10_1 + 4)
    int32_t x9_1 = x16_1 + x15_1
    int32_t x8_6 = (x7_1 + x14_1 u< x7_1 ? 1 : 0) | (lr_1 + x8_4 u< lr_1 ? 1 : 0)
    int32_t x1 = x21_1 + x17_1
    int32_t x8_9 = (x16_1 + x15_1 u< x16_1 ? 1 : 0) | (x9_1 + x8_6 u< x9_1 ? 1 : 0)
    int32_t x6_1 = *(x12 + 8)
    int32_t x19_1 = *(x12 + 0xc)
    int32_t x22_1 = *(x10_1 + 8)
    int32_t x20_1 = *(x10_1 + 0xc)
    int32_t x2 = x5_1 + x4_1
    int32_t x8_11 = (x21_1 + x17_1 u< x21_1 ? 1 : 0) | (x1 + x8_9 u< x1 ? 1 : 0)
    int32_t x3 = x22_1 + x6_1
    int32_t x8_13 = (x5_1 + x4_1 u< x5_1 ? 1 : 0) | (x2 + x8_11 u< x2 ? 1 : 0)
    int32_t x9_2 = x20_1 + x19_1
    int32_t x8_15 = (x22_1 + x6_1 u< x22_1 ? 1 : 0) | (x3 + x8_13 u< x3 ? 1 : 0)
    int32_t x23_2 = x23_1 - x26_1
    int32_t x24_2 = x24_1 - x25_1
    int32_t x23_4 = (x23_1 u< x26_1 ? 1 : 0) | (x23_2 u< x11 ? 1 : 0)
    int32_t x14_2 = x14_1 - x7_1
    int32_t x7_2 = (x24_1 u< x25_1 ? 1 : 0) | (x24_2 u< x23_4 ? 1 : 0)
    *(x12 - 0x10) = ((x27_1 + x8) & arg1.d) | ((x23_2 - x11) & not.d(arg1.d))
    *(x12 - 0xc) = ((fp_1 + x8_2) & arg1.d) | ((x24_2 - x23_4) & not.d(arg1.d))
    int32_t x15_2 = x15_1 - x16_1
    int32_t x11_5 = (x14_1 u< x7_1 ? 1 : 0) | (x14_2 u< x7_2 ? 1 : 0)
    int32_t x15_4 = (x15_1 u< x16_1 ? 1 : 0) | (x15_2 u< x11_5 ? 1 : 0)
    int32_t x17_2 = x17_1 - x21_1
    *(x12 - 8) = ((lr_1 + x8_4) & arg1.d) | ((x14_2 - x7_2) & not.d(arg1.d))
    *(x12 - 4) = ((x9_1 + x8_6) & arg1.d) | ((x15_2 - x11_5) & not.d(arg1.d))
    int32_t x14_6 = x4_1 - x5_1
    int32_t x11_10 = (x17_1 u< x21_1 ? 1 : 0) | (x17_2 u< x15_4 ? 1 : 0)
    int32_t x17_3 = x6_1 - x22_1
    int32_t x14_8 = (x4_1 u< x5_1 ? 1 : 0) | (x14_6 u< x11_10 ? 1 : 0)
    *x12 = ((x1 + x8_9) & arg1.d) | ((x17_2 - x15_4) & not.d(arg1.d))
    *(x12 + 4) = ((x2 + x8_11) & arg1.d) | ((x14_6 - x11_10) & not.d(arg1.d))
    int32_t x15_8 = x19_1 - x20_1
    int32_t x11_15 = (x6_1 u< x22_1 ? 1 : 0) | (x17_3 u< x14_8 ? 1 : 0)
    x8 = (x20_1 + x19_1 u< x20_1 ? 1 : 0) | (x9_2 + x8_15 u< x9_2 ? 1 : 0)
    x11 = (x19_1 u< x20_1 ? 1 : 0) | (x15_8 u< x11_15 ? 1 : 0)
    *(x12 + 8) = ((x3 + x8_13) & arg1.d) | ((x17_3 - x14_8) & not.d(arg1.d))
    *(x12 + 0xc) = ((x9_2 + x8_15) & arg1.d) | ((x15_8 - x11_15) & not.d(arg1.d))
    x10_1 += 0x20
    i_1 = i_3
    i_3 -= 8
    x12 += 0x20
while (i_1 != 8)
i_5 = i_4
x9_6 = arg4

if (i_5 != x9_6)
    goto label_f06490
