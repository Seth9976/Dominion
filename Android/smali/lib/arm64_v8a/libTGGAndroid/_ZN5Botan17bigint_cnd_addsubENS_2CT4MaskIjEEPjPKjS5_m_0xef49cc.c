// 函数: _ZN5Botan17bigint_cnd_addsubENS_2CT4MaskIjEEPjPKjS5_m
// 地址: 0xef49cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t i_4 = arg5 & 0xfffffffffffffff8
int32_t x8
int32_t x14
uint64_t x9_29

if (i_4 == 0)
    x8 = 0
    x14 = 0
    x9_29 = arg5
    
    if (i_4 != x9_29)
    label_ef4c28:
        int64_t i_2 = x9_29 - i_4
        void* x9_31 = &arg4[i_4]
        void* x11_3 = &arg3[i_4]
        void* x12_3 = &arg2[i_4]
        int64_t i
        
        do
            int32_t x13_2 = *x12_3
            int32_t x15_9 = *x11_3
            x11_3 += 4
            int32_t x16_5 = *x9_31
            x9_31 += 4
            int32_t x15_10 = x15_9 + x13_2
            int32_t x13_3 = x13_2 - x16_5
            int32_t x16_6 = (x15_10 + x8) & arg1
            x8 = (x15_9 + x13_2 u< x15_9 ? 1 : 0) | (x15_10 + x8 u< x15_10 ? 1 : 0)
            int32_t x13_6 = x16_6 | ((x13_3 - x14) & not.d(arg1))
            x14 = (x13_2 u< x16_5 ? 1 : 0) | (x13_3 u< x14 ? 1 : 0)
            i = i_2
            i_2 -= 1
            *x12_3 = x13_6
            x12_3 += 4
        while (i != 1)
else
    x14 = 0
    x8 = 0
    void* x10_1 = &arg3[4]
    void* x11_1 = &arg4[4]
    void* x12_1 = &arg2[4]
    int64_t i_3 = i_4
    int64_t i_1
    
    do
        int32_t x19_1 = *(x12_1 - 0x10)
        int32_t x20_1 = *(x12_1 - 0xc)
        int32_t x21_1 = *(x10_1 - 0x10)
        int32_t x22_1 = *(x10_1 - 0xc)
        int32_t x7_1 = *(x12_1 - 8)
        int32_t x6_1 = *(x12_1 - 4)
        int32_t x23_1 = *(x10_1 - 8)
        int32_t x24_1 = *(x10_1 - 4)
        int32_t x15_1 = *x12_1
        int32_t x16_1 = *(x12_1 + 4)
        int32_t x21_2 = x21_1 + x19_1
        int32_t x1 = x21_2 + x8
        int32_t x21_3 = x22_1 + x20_1
        int32_t x8_2 = (x21_1 + x19_1 u< x21_1 ? 1 : 0) | (x21_2 + x8 u< x21_2 ? 1 : 0)
        int32_t x21_4 = x23_1 + x7_1
        int32_t x8_4 = (x22_1 + x20_1 u< x22_1 ? 1 : 0) | (x21_3 + x8_2 u< x21_3 ? 1 : 0)
        int32_t x25_1 = *x10_1
        int32_t x26_1 = *(x10_1 + 4)
        int32_t x22_2 = x24_1 + x6_1
        int32_t x8_6 = (x23_1 + x7_1 u< x23_1 ? 1 : 0) | (x21_4 + x8_4 u< x21_4 ? 1 : 0)
        int32_t x23_2 = x25_1 + x15_1
        int32_t x8_8 = (x24_1 + x6_1 u< x24_1 ? 1 : 0) | (x22_2 + x8_6 u< x22_2 ? 1 : 0)
        int32_t x17_1 = *(x12_1 + 8)
        int32_t x5_1 = *(x12_1 + 0xc)
        int32_t x27_1 = *(x10_1 + 8)
        int32_t x28_1 = *(x10_1 + 0xc)
        int32_t x24_2 = x26_1 + x16_1
        int32_t x8_10 = (x25_1 + x15_1 u< x25_1 ? 1 : 0) | (x23_2 + x8_8 u< x23_2 ? 1 : 0)
        int32_t x25_2 = x27_1 + x17_1
        int32_t x8_12 = (x26_1 + x16_1 u< x26_1 ? 1 : 0) | (x24_2 + x8_10 u< x24_2 ? 1 : 0)
        int32_t fp_1 = *(x11_1 - 0x10)
        int32_t lr_1 = *(x11_1 - 0xc)
        int32_t x26_2 = x28_1 + x5_1
        int32_t x8_14 = (x27_1 + x17_1 u< x27_1 ? 1 : 0) | (x25_2 + x8_12 u< x25_2 ? 1 : 0)
        int32_t x19_2 = x19_1 - fp_1
        x8 = (x28_1 + x5_1 u< x28_1 ? 1 : 0) | (x26_2 + x8_14 u< x26_2 ? 1 : 0)
        int32_t x27_2 = *(x11_1 - 8)
        int32_t x28_2 = *(x11_1 - 4)
        int32_t x20_2 = x20_1 - lr_1
        int32_t x9_10 = (x19_1 u< fp_1 ? 1 : 0) | (x19_2 u< x14 ? 1 : 0)
        int32_t x7_2 = x7_1 - x27_2
        int32_t x1_3 = (x20_1 u< lr_1 ? 1 : 0) | (x20_2 u< x9_10 ? 1 : 0)
        int32_t x20_3 = *x11_1
        int32_t x27_3 = *(x11_1 + 4)
        int32_t x2_2 = *(x11_1 + 8)
        int32_t x7_3 = *(x11_1 + 0xc)
        *(x12_1 - 0x10) = (x1 & arg1) | ((x19_2 - x14) & not.d(arg1))
        *(x12_1 - 0xc) = ((x21_3 + x8_2) & arg1) | ((x20_2 - x9_10) & not.d(arg1))
        int32_t x14_4 = x6_1 - x28_2
        int32_t x9_15 = (x7_1 u< x27_2 ? 1 : 0) | (x7_2 u< x1_3 ? 1 : 0)
        int32_t x15_2 = x15_1 - x20_3
        int32_t x14_6 = (x6_1 u< x28_2 ? 1 : 0) | (x14_4 u< x9_15 ? 1 : 0)
        *(x12_1 - 8) = ((x21_4 + x8_4) & arg1) | ((x7_2 - x1_3) & not.d(arg1))
        *(x12_1 - 4) = ((x22_2 + x8_6) & arg1) | ((x14_4 - x9_15) & not.d(arg1))
        int32_t x15_3 = x16_1 - x27_3
        int32_t x9_20 = (x15_1 u< x20_3 ? 1 : 0) | (x15_2 u< x14_6 ? 1 : 0)
        int32_t x17_2 = x17_1 - x2_2
        int32_t x15_5 = (x16_1 u< x27_3 ? 1 : 0) | (x15_3 u< x9_20 ? 1 : 0)
        *x12_1 = ((x23_2 + x8_8) & arg1) | ((x15_2 - x14_6) & not.d(arg1))
        *(x12_1 + 4) = ((x24_2 + x8_10) & arg1) | ((x15_3 - x9_20) & not.d(arg1))
        int32_t x14_10 = x5_1 - x7_3
        int32_t x9_25 = (x17_1 u< x2_2 ? 1 : 0) | (x17_2 u< x15_5 ? 1 : 0)
        x10_1 += 0x20
        x11_1 += 0x20
        i_1 = i_3
        i_3 -= 8
        x14 = (x5_1 u< x7_3 ? 1 : 0) | (x14_10 u< x9_25 ? 1 : 0)
        *(x12_1 + 8) = ((x25_2 + x8_12) & arg1) | ((x17_2 - x15_5) & not.d(arg1))
        *(x12_1 + 0xc) = ((x26_2 + x8_14) & arg1) | ((x14_10 - x9_25) & not.d(arg1))
        x12_1 += 0x20
    while (i_1 != 8)
    x9_29 = arg5
    
    if (i_4 != x9_29)
        goto label_ef4c28
return (zx.q(x8) & zx.q(arg1)) | (zx.q(x14) & zx.q(not.d(arg1)))
