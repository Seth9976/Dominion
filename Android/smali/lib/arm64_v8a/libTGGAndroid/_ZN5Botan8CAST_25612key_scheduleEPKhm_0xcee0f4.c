// 函数: _ZN5Botan8CAST_25612key_scheduleEPKhm
// 地址: 0xcee0f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *(arg1 + 8)
int64_t x10 = *(arg1 + 0x10) - x8

if (x10 s>> 2 u<= 0x2f)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&arg1[8])
else if (x10 != 0xc0)
    *(arg1 + 0x10) = x8 + 0xc0

int64_t x8_2 = *(arg1 + 0x20)
int64_t x9_3 = *(arg1 + 0x28) - x8_2

if (x9_3 u<= 0x2f)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&arg1[0x20])
else if (x9_3 != 0x30)
    *(arg1 + 0x28) = x8_2 + 0x30

int32_t* x0_2 = Botan::allocate_memory(8, 4)
__builtin_memset(x0_2, 0, 0x20)
int64_t entry_x2
int32_t x23_1
int32_t x24
int32_t x25
int32_t x26
int32_t x27
int32_t x28
int32_t fp
int32_t lr

if (entry_x2 == 0)
    fp = 0
    x25 = 0
    x28 = 0
    x26 = 0
    x27 = 0
    lr = 0
    x24 = 0
    x23_1 = 0
else
    int64_t x8_4 = 0
    
    do
        int64_t x9_4 = x8_4 & 0xfffffffffffffffc
        char x10_1 = *(arg2 + x8_4)
        x8_4 += 1
        *(x0_2 + x9_4) = zx.d(x10_1) | (0xffffff & *(x0_2 + x9_4)) << 8
    while (entry_x2 != x8_4)
    
    x23_1 = *x0_2
    x24 = x0_2[1]
    lr = x0_2[2]
    x27 = x0_2[3]
    x26 = x0_2[4]
    x28 = x0_2[5]
    x25 = x0_2[6]
    fp = x0_2[7]

int64_t x8_5 = 0
void* const x9_5 = &data_82c6e0

for (int64_t i = 0xf; i != 0xcf; )
    int32_t x16_5 =
        ror.d(*(x9_5 - 0x20) + fp, neg.d(zx.d(*(&data_7affa0 + (zx.q(i.d - 0xf) & 0x10)))))
    int32_t x17_6 = (*(&data_84eb80 + ((zx.q(x16_5 u>> 0x10) & 0xff) << 2))
        ^ *(&data_84e780 + (zx.q(x16_5 u>> 0x18) << 2)))
        - *(&data_84ef80 + ((zx.q(x16_5 u>> 8) & 0xff) << 2))
    int32_t x25_1 = (x17_6 + *(&data_84f380 + ((zx.q(x16_5) & 0xff) << 2))) ^ x25
    int32_t x16_10 =
        ror.d(x25_1 ^ *(x9_5 - 0x1c), neg.d(zx.d(*(&data_7affa0 + (zx.q(i.d - 0xe) & 0x11)))))
    int32_t x16_13 = *(&data_84e780 + (zx.q(x16_10 u>> 0x18) << 2))
        - *(&data_84eb80 + ((zx.q(x16_10 u>> 0x10) & 0xff) << 2))
        + *(&data_84ef80 + ((zx.q(x16_10 u>> 8) & 0xff) << 2))
    int32_t x28_1 = *(&data_84f380 + ((zx.q(x16_10) & 0xff) << 2)) ^ x28 ^ x16_13
    int32_t x16_15 =
        ror.d(*(x9_5 - 0x18) - x28_1, neg.d(zx.d(*(&data_7affa0 + (zx.q(i.d - 0xd) & 0x12)))))
    int32_t x17_13 = (*(&data_84eb80 + ((zx.q(x16_15 u>> 0x10) & 0xff) << 2))
        + *(&data_84e780 + (zx.q(x16_15 u>> 0x18) << 2)))
        ^ *(&data_84ef80 + ((zx.q(x16_15 u>> 8) & 0xff) << 2))
    int32_t x26_1 = (x17_13 - *(&data_84f380 + ((zx.q(x16_15) & 0xff) << 2))) ^ x26
    int32_t x16_20 =
        ror.d(x26_1 + *(x9_5 - 0x14), neg.d(zx.d(*(&data_7affa0 + (zx.q(i.d - 0xc) & 0x13)))))
    int32_t x17_17 = (*(&data_84eb80 + ((zx.q(x16_20 u>> 0x10) & 0xff) << 2))
        ^ *(&data_84e780 + (zx.q(x16_20 u>> 0x18) << 2)))
        - *(&data_84ef80 + ((zx.q(x16_20 u>> 8) & 0xff) << 2))
    int32_t x27_1 = (x17_17 + *(&data_84f380 + ((zx.q(x16_20) & 0xff) << 2))) ^ x27
    int32_t x16_25 =
        ror.d(x27_1 ^ *(x9_5 - 0x10), neg.d(zx.d(*(&data_7affa0 + (zx.q(i.d - 0xb) & 0x14)))))
    int32_t x16_28 = *(&data_84e780 + (zx.q(x16_25 u>> 0x18) << 2))
        - *(&data_84eb80 + ((zx.q(x16_25 u>> 0x10) & 0xff) << 2))
        + *(&data_84ef80 + ((zx.q(x16_25 u>> 8) & 0xff) << 2))
    int32_t lr_1 = *(&data_84f380 + ((zx.q(x16_25) & 0xff) << 2)) ^ lr ^ x16_28
    int32_t x16_30 =
        ror.d(*(x9_5 - 0xc) - lr_1, neg.d(zx.d(*(&data_7affa0 + (zx.q(i.d - 0xa) & 0x15)))))
    int32_t x17_24 = (*(&data_84eb80 + ((zx.q(x16_30 u>> 0x10) & 0xff) << 2))
        + *(&data_84e780 + (zx.q(x16_30 u>> 0x18) << 2)))
        ^ *(&data_84ef80 + ((zx.q(x16_30 u>> 8) & 0xff) << 2))
    int32_t x24_1 = (x17_24 - *(&data_84f380 + ((zx.q(x16_30) & 0xff) << 2))) ^ x24
    int32_t x16_35 =
        ror.d(x24_1 + *(x9_5 - 8), neg.d(zx.d(*(&data_7affa0 + (zx.q(i.d - 9) & 0x16)))))
    int32_t x17_28 = (*(&data_84eb80 + ((zx.q(x16_35 u>> 0x10) & 0xff) << 2))
        ^ *(&data_84e780 + (zx.q(x16_35 u>> 0x18) << 2)))
        - *(&data_84ef80 + ((zx.q(x16_35 u>> 8) & 0xff) << 2))
    int32_t x23_2 = (x17_28 + *(&data_84f380 + ((zx.q(x16_35) & 0xff) << 2))) ^ x23_1
    int32_t x16_40 =
        ror.d(x23_2 ^ *(x9_5 - 4), neg.d(zx.d(*(&data_7affa0 + (zx.q(i.d - 8) & 0x17)))))
    int32_t x16_43 = *(&data_84e780 + (zx.q(x16_40 u>> 0x18) << 2))
        - *(&data_84eb80 + ((zx.q(x16_40 u>> 0x10) & 0xff) << 2))
        + *(&data_84ef80 + ((zx.q(x16_40 u>> 8) & 0xff) << 2))
    int32_t fp_1 = *(&data_84f380 + ((zx.q(x16_40) & 0xff) << 2)) ^ fp ^ x16_43
    int32_t x16_45 = ror.d(fp_1 + *x9_5, neg.d(zx.d(*(&data_7affa0 + (zx.q(i.d - 7) & 0x18)))))
    int32_t x17_35 = (*(&data_84eb80 + ((zx.q(x16_45 u>> 0x10) & 0xff) << 2))
        ^ *(&data_84e780 + (zx.q(x16_45 u>> 0x18) << 2)))
        - *(&data_84ef80 + ((zx.q(x16_45 u>> 8) & 0xff) << 2))
    x25 = (x17_35 + *(&data_84f380 + ((zx.q(x16_45) & 0xff) << 2))) ^ x25_1
    int32_t x16_50 = ror.d(x25 ^ *(x9_5 + 4), neg.d(zx.d(*(&data_7affa0 + (zx.q(i.d - 6) & 0x19)))))
    int32_t x16_53 = *(&data_84e780 + (zx.q(x16_50 u>> 0x18) << 2))
        - *(&data_84eb80 + ((zx.q(x16_50 u>> 0x10) & 0xff) << 2))
        + *(&data_84ef80 + ((zx.q(x16_50 u>> 8) & 0xff) << 2))
    x28 = *(&data_84f380 + ((zx.q(x16_50) & 0xff) << 2)) ^ x28_1 ^ x16_53
    int32_t x16_55 = ror.d(*(x9_5 + 8) - x28, neg.d(zx.d(*(&data_7affa0 + (zx.q(i.d - 5) & 0x1a)))))
    int32_t x17_42 = (*(&data_84eb80 + ((zx.q(x16_55 u>> 0x10) & 0xff) << 2))
        + *(&data_84e780 + (zx.q(x16_55 u>> 0x18) << 2)))
        ^ *(&data_84ef80 + ((zx.q(x16_55 u>> 8) & 0xff) << 2))
    x26 = (x17_42 - *(&data_84f380 + ((zx.q(x16_55) & 0xff) << 2))) ^ x26_1
    int32_t x16_60 =
        ror.d(x26 + *(x9_5 + 0xc), neg.d(zx.d(*(&data_7affa0 + (zx.q(i.d - 4) & 0x1b)))))
    int32_t x17_46 = (*(&data_84eb80 + ((zx.q(x16_60 u>> 0x10) & 0xff) << 2))
        ^ *(&data_84e780 + (zx.q(x16_60 u>> 0x18) << 2)))
        - *(&data_84ef80 + ((zx.q(x16_60 u>> 8) & 0xff) << 2))
    x27 = (x17_46 + *(&data_84f380 + ((zx.q(x16_60) & 0xff) << 2))) ^ x27_1
    int32_t x16_65 =
        ror.d(x27 ^ *(x9_5 + 0x10), neg.d(zx.d(*(&data_7affa0 + (zx.q(i.d - 3) & 0x1c)))))
    int32_t x16_68 = *(&data_84e780 + (zx.q(x16_65 u>> 0x18) << 2))
        - *(&data_84eb80 + ((zx.q(x16_65 u>> 0x10) & 0xff) << 2))
        + *(&data_84ef80 + ((zx.q(x16_65 u>> 8) & 0xff) << 2))
    lr = *(&data_84f380 + ((zx.q(x16_65) & 0xff) << 2)) ^ lr_1 ^ x16_68
    int32_t x16_70 =
        ror.d(*(x9_5 + 0x14) - lr, neg.d(zx.d(*(&data_7affa0 + (zx.q(i.d - 2) & 0x1d)))))
    int32_t x17_53 = (*(&data_84eb80 + ((zx.q(x16_70 u>> 0x10) & 0xff) << 2))
        + *(&data_84e780 + (zx.q(x16_70 u>> 0x18) << 2)))
        ^ *(&data_84ef80 + ((zx.q(x16_70 u>> 8) & 0xff) << 2))
    int32_t x2_41 = *(x9_5 + 0x1c)
    x24 = (x17_53 - *(&data_84f380 + ((zx.q(x16_70) & 0xff) << 2))) ^ x24_1
    int32_t x16_75 =
        ror.d(x24 + *(x9_5 + 0x18), neg.d(zx.d(*(&data_7affa0 + (zx.q(i.d - 1) & 0x1e)))))
    int32_t x17_57 = (*(&data_84eb80 + ((zx.q(x16_75 u>> 0x10) & 0xff) << 2))
        ^ *(&data_84e780 + (zx.q(x16_75 u>> 0x18) << 2)))
        - *(&data_84ef80 + ((zx.q(x16_75 u>> 8) & 0xff) << 2))
    x23_1 = (x17_57 + *(&data_84f380 + ((zx.q(x16_75) & 0xff) << 2))) ^ x23_2
    (*(arg1 + 0x20))[x8_5] = x23_1.b & 0x1f
    uint32_t x17_59 = zx.d(*(&data_7affa0 + (i & 0x1f)))
    *(*(arg1 + 0x20) + x8_5 + 1) = lr.b & 0x1f
    *(*(arg1 + 0x20) + x8_5 + 2) = x26.b & 0x1f
    int32_t x17_61 = ror.d(x23_1 ^ x2_41, neg.d(x17_59))
    *(*(arg1 + 0x20) + x8_5 + 3) = x25.b & 0x1f
    int32_t x16_88 = *(&data_84e780 + (zx.q(x17_61 u>> 0x18) << 2))
        - *(&data_84eb80 + ((zx.q(x17_61 u>> 0x10) & 0xff) << 2))
        + *(&data_84ef80 + ((zx.q(x17_61 u>> 8) & 0xff) << 2))
    fp = *(&data_84f380 + ((zx.q(x17_61) & 0xff) << 2)) ^ fp_1 ^ x16_88
    *(*(arg1 + 8) + i - 0xf) = fp
    x8_5 += 4
    x9_5 += 0x40
    *(*(arg1 + 8) + i - 0xb) = x28
    *(*(arg1 + 8) + i - 7) = x27
    void* x16_95 = *(arg1 + 8) + i
    i += 0x10
    *(x16_95 - 3) = x24

return Botan::deallocate_memory(x0_2, 8, 4)
