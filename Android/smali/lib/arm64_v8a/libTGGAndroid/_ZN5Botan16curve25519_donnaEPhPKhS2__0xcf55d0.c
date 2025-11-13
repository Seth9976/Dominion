// 函数: _ZN5Botan16curve25519_donnaEPhPKhS2_
// 地址: 0xcf55d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x9 + 0x28)

if (arg2 == 0)
    Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
        "If n > 0 then args are not null", "copy_mem", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
else
    int128_t v1 = *(arg2 + 0x10)
    int128_t var_90 = *arg2
    int128_t v0
    v0.q = 0
    v0:8.q = 0
    var_90.b &= 0xf8
    int128_t var_80_1
    var_80_1:0xf.b = 0x40 | (zx.d(v1:0xf.b) & 0x3f).b
    int64_t x21_1 = 0
    int64_t x16_1 = 0
    int64_t x4_1 = 0
    int64_t x3_1 = 0
    int64_t x0 = 0
    int64_t x19_1 = 0
    uint64_t x1_4 = *(arg3 + 6) u>> 3 & 0x7ffffffffffff
    int64_t var_200 = *arg3 & 0x7ffffffffffff
    uint64_t var_1f8_1 = x1_4
    int64_t x12_1 = 0
    uint64_t x7_1 = *(arg3 + 0xc) u>> 6 & 0x7ffffffffffff
    uint64_t var_1e8_1 = *(arg3 + 0x13) u>> 1 & 0x7ffffffffffff
    int64_t x2 = *(arg3 + 0x18)
    int128_t var_e0_1
    __builtin_memset(&var_e0_1, 0, 0x48)
    int128_t var_130_1
    __builtin_memset(&var_130_1, 0, 0x48)
    v1 = x7_1.o
    uint64_t x2_1 = x2 u>> 0xc & 0x7ffffffffffff
    int64_t x25_1 = 0
    int64_t x17_1 = 0
    int128_t var_160 = var_200.o
    int64_t x11_1 = var_160.q
    int64_t x13_1 = var_160:8.q
    int64_t x5_3 = v1.q
    int64_t x6_4 = v1:8.q
    int64_t x22_1 = 0
    int64_t x15_1 = 0
    int64_t x1_6 = 1
    int64_t x10_1 = 0
    uint64_t x20_1 = x2_1
    int64_t i_1 = 0x1f
    int64_t x7_2 = 1
    int64_t var_268_1 = 0
    int64_t var_168_1 = 0
    int64_t var_e8 = 1
    uint64_t var_1e0_1 = x2_1
    uint64_t var_140_1 = x20_1
    int64_t var_138 = 1
    int64_t var_1d8
    int64_t var_1b0
    int64_t var_188
    int128_t var_c0
    int64_t x2_27
    int128_t v2_1
    int128_t v3_1
    int64_t i
    
    do
        uint64_t lr_1 = zx.q(*(&var_90 + i_1))
        uint64_t x8_2 = lr_1 u>> 7
        int64_t x22_2 = neg.q(x8_2)
        int64_t x21_3 = (x7_2 ^ x11_1) & x22_2
        int64_t x26_2 = (x15_1 ^ x1_6) & x22_2
        int64_t x27_2 = (x22_1 ^ x13_1) & x22_2
        int64_t x28_2 = (x10_1 ^ x17_1) & x22_2
        int64_t fp_2 = (x25_1 ^ x5_3) & x22_2
        int64_t x19_3 = (x12_1 ^ x19_1) & x22_2
        int64_t x23_2 = (x0 ^ x6_4) & x22_2
        int64_t x9_2 = (x3_1 ^ var_268_1) & x22_2
        int64_t x12_3 = (x4_1 ^ x20_1) & x22_2
        int64_t x0_2 = (x16_1 ^ x21_1) & x22_2
        int64_t x14_3 = x27_2 ^ x22_1
        int64_t x13_3 = x28_2 ^ x10_1
        int64_t x21_4 = x28_2 ^ x17_1
        int64_t x11_3 = fp_2 ^ x25_1
        int64_t x8_5 = x23_2 ^ x0
        int32_t x8_6 = lr_1.d u>> 5 & 1
        int32_t x8_7 = lr_1.d u>> 4 & 1
        int32_t x8_8 = lr_1.d u>> 3 & 1
        int64_t var_278_1
        var_278_1.d = lr_1.d u>> 2 & 1
        int64_t x1_7 = x19_3 ^ x12_1
        int64_t x19_4 = x19_3 ^ x19_1
        int64_t x3_2 = x9_2 ^ x3_1
        int64_t x9_3 = x9_2 ^ var_268_1
        int64_t x16_2 = x0_2 ^ x16_1
        int64_t x0_3 = x0_2 ^ x21_1
        int64_t var_270_2
        var_270_2.d = lr_1.d u>> 1 & 1
        int64_t x8_11 = lr_1 & 1
        int64_t x17_3 = x12_3 ^ x4_1
        int64_t x12_4 = x12_3 ^ x20_1
        int128_t var_150_1
        var_150_1.q = fp_2 ^ x5_3
        var_150_1:8.q = x23_2 ^ x6_4
        int32_t x19_5 = lr_1.d u>> 6 & 1
        var_1b0 = x21_3 ^ x7_2
        var_160.q = x21_3 ^ x11_1
        var_160:8.q = x27_2 ^ x13_1
        var_1d8 = x26_2 ^ x15_1
        var_188 = x26_2 ^ x1_6
        int128_t var_110
        sub_ef5620(&var_110, &var_138, &var_c0, &var_e8, &var_1b0, &var_1d8, &var_160, &var_188, 
            &var_200)
        int64_t x15_3 = var_110.q
        int64_t x17_4 = var_110:8.q
        int64_t x26_4 = var_c0.q
        int128_t var_100_1
        int64_t x13_4 = var_100_1.q
        int64_t x14_4 = var_100_1:8.q
        int128_t var_b0_1
        int64_t x27_4 = var_b0_1.q
        int64_t x6_8 = var_b0_1:8.q
        int64_t x4_3 = var_130_1:8.q
        int128_t var_120_1
        int64_t fp_3 = var_120_1.q
        int64_t x28_3 = var_e0_1:8.q
        int128_t var_d0_1
        int64_t x5_6 = var_d0_1.q
        int64_t x2_4 = var_c0:8.q
        int64_t x25_2 = var_138
        int64_t x21_5 = var_130_1.q
        int64_t x20_2 = var_e8
        int64_t x0_5 = var_e0_1.q
        int64_t x22_5 = var_120_1:8.q
        int64_t x23_3 = var_d0_1:8.q
        int64_t x11_5 = neg.q(zx.q(x19_5) ^ zx.q(x8_2.d))
        int64_t x24_4 = (x26_4 ^ x15_3) & x11_5
        int64_t var_f0_1
        int64_t var_a0_1
        int64_t x16_3 = (var_a0_1 ^ var_f0_1) & x11_5
        int64_t lr_3 = (x20_2 ^ x25_2) & x11_5
        int64_t x8_14 = (x2_4 ^ x17_4) & x11_5
        int64_t x9_5 = (x0_5 ^ x21_5) & x11_5
        int64_t x10_5 = (x27_4 ^ x13_4) & x11_5
        int64_t x12_6 = (x28_3 ^ x4_3) & x11_5
        int64_t x13_6 = (x6_8 ^ x14_4) & x11_5
        int64_t x14_6 = (x5_6 ^ fp_3) & x11_5
        int64_t x11_6 = (x23_3 ^ x22_5) & x11_5
        int64_t x3_5 = x16_3 ^ var_f0_1
        int64_t x15_5 = x16_3 ^ var_a0_1
        var_c0:8.q = x8_14 ^ x2_4
        var_100_1.q = x10_5 ^ x13_4
        var_100_1:8.q = x13_6 ^ x14_4
        var_130_1:8.q = x12_6 ^ x4_3
        var_120_1.q = x14_6 ^ fp_3
        var_120_1:8.q = x11_6 ^ x22_5
        var_110.q = x24_4 ^ x15_3
        var_110:8.q = x8_14 ^ x17_4
        var_c0.q = x24_4 ^ x26_4
        var_138 = lr_3 ^ x25_2
        var_130_1.q = x9_5 ^ x21_5
        var_e8 = lr_3 ^ x20_2
        var_e0_1.q = x9_5 ^ x0_5
        var_b0_1.q = x10_5 ^ x27_4
        var_b0_1:8.q = x13_6 ^ x6_8
        var_e0_1:8.q = x12_6 ^ x28_3
        var_d0_1.q = x14_6 ^ x5_6
        var_d0_1:8.q = x11_6 ^ x23_3
        sub_ef5620(&var_1b0, &var_1d8, &var_160, &var_188, &var_110, &var_138, &var_c0, &var_e8, 
            &var_200)
        int64_t x12_8 = var_160.q
        int64_t x13_8 = var_160:8.q
        int64_t x14_8 = var_1d8
        int64_t x16_4 = var_188
        int64_t x10_7 = var_1b0
        int64_t x1_12 = var_150_1.q
        int64_t x2_7 = var_150_1:8.q
        int64_t x9_9 = neg.q(zx.q(x19_5) ^ zx.q(x8_6))
        int32_t var_2a0_1
        var_2a0_1.q = x9_3
        int64_t x22_7 = (x12_8 ^ x10_7) & x9_9
        int64_t x23_5 = (x16_4 ^ x14_8) & x9_9
        int64_t x24_7 = (x13_8 ^ x14_3) & x9_9
        int64_t x25_5 = (x21_4 ^ x13_3) & x9_9
        int64_t x26_7 = (x1_12 ^ x11_3) & x9_9
        int64_t x27_6 = (x19_4 ^ x1_7) & x9_9
        int64_t x28_5 = (x2_7 ^ x8_5) & x9_9
        int64_t fp_9 = (x9_3 ^ x3_2) & x9_9
        int64_t lr_6 = (x12_4 ^ x17_3) & x9_9
        int64_t x8_19 = (x0_3 ^ x16_2) & x9_9
        int64_t x10_9 = x24_7 ^ x14_3
        var_1b0 = x22_7 ^ x10_7
        int64_t x17_7 = x26_7 ^ x11_3
        int64_t x3_8 = x27_6 ^ x1_7
        int64_t x11_9 = x27_6 ^ x19_4
        int64_t x0_9 = x28_5 ^ x8_5
        int64_t x4_8 = fp_9 ^ x3_2
        int64_t x6_11 = fp_9 ^ var_2a0_1.q
        int64_t x7_9 = lr_6 ^ x17_3
        int64_t x20_5 = x8_19 ^ x16_2
        int64_t x8_20 = x8_19 ^ x0_3
        int64_t x14_9 = x25_5 ^ x13_3
        int64_t x16_5 = x25_5 ^ x21_4
        int64_t x19_8 = lr_6 ^ x12_4
        var_150_1.q = x26_7 ^ x1_12
        var_150_1:8.q = x28_5 ^ x2_7
        var_160.q = x22_7 ^ x12_8
        var_160:8.q = x24_7 ^ x13_8
        var_1d8 = x23_5 ^ x14_8
        var_188 = x23_5 ^ x16_4
        sub_ef5620(&var_110, &var_138, &var_c0, &var_e8, &var_1b0, &var_1d8, &var_160, &var_188, 
            &var_200)
        int64_t x12_10 = var_c0.q
        int64_t x13_10 = var_c0:8.q
        int64_t x14_10 = var_138
        int64_t x15_7 = var_130_1.q
        int64_t x10_10 = var_110.q
        int64_t x8_22 = var_110:8.q
        int64_t x16_6 = var_e8
        int64_t x5_11 = var_e0_1.q
        int64_t x17_8 = var_100_1.q
        int64_t fp_10 = var_100_1:8.q
        int64_t x1_15 = var_b0_1.q
        int64_t x2_10 = var_b0_1:8.q
        int64_t x3_10 = var_130_1:8.q
        int64_t lr_7 = var_120_1.q
        int64_t x6_13 = var_e0_1:8.q
        int64_t x4_10 = var_d0_1.q
        int64_t x20_6 = var_120_1:8.q
        int64_t x21_8 = var_d0_1:8.q
        int64_t x9_14 = neg.q(zx.q(x8_6) ^ zx.q(x8_7))
        int32_t var_290_1
        var_290_1.q = x4_10
        int64_t x22_10 = (x12_10 ^ x10_10) & x9_14
        int64_t x23_8 = (x16_6 ^ x14_10) & x9_14
        int64_t x24_9 = (x13_10 ^ x8_22) & x9_14
        int64_t x25_7 = (x5_11 ^ x15_7) & x9_14
        int64_t x26_9 = (x1_15 ^ x17_8) & x9_14
        int64_t x27_8 = (x6_13 ^ x3_10) & x9_14
        int64_t x28_7 = (x2_10 ^ fp_10) & x9_14
        int64_t fp_12 = (x4_10 ^ lr_7) & x9_14
        int64_t lr_9 = (x15_5 ^ x3_5) & x9_14
        int64_t x8_24 = (x21_8 ^ x20_6) & x9_14
        var_2a0_1.q = x23_8 ^ x14_10
        var_110.q = x22_10 ^ x10_10
        var_110:8.q = x24_9 ^ x8_22
        int64_t x7_12 = lr_9 ^ x3_5
        int64_t x19_10 = lr_9 ^ x15_5
        var_100_1.q = x26_9 ^ x17_8
        var_100_1:8.q = x28_7 ^ fp_10
        var_b0_1.q = x26_9 ^ x1_15
        var_b0_1:8.q = x28_7 ^ x2_10
        var_130_1:8.q = x27_8 ^ x3_10
        var_120_1.q = fp_12 ^ lr_7
        var_e0_1:8.q = x27_8 ^ x6_13
        var_d0_1.q = fp_12 ^ var_290_1.q
        var_d0_1:8.q = x8_24 ^ x21_8
        var_c0.q = x22_10 ^ x12_10
        var_c0:8.q = x24_9 ^ x13_10
        var_138 = var_2a0_1.q
        var_130_1.q = x25_7 ^ x15_7
        var_e8 = x23_8 ^ x16_6
        var_e0_1.q = x25_7 ^ x5_11
        var_120_1:8.q = x8_24 ^ x20_6
        sub_ef5620(&var_1b0, &var_1d8, &var_160, &var_188, &var_110, &var_138, &var_c0, &var_e8, 
            &var_200)
        int64_t x12_12 = var_160.q
        int64_t x13_12 = var_160:8.q
        int64_t x14_12 = var_1d8
        int64_t x16_8 = var_188
        int64_t x10_13 = var_1b0
        int64_t x1_18 = var_150_1.q
        int64_t x2_13 = var_150_1:8.q
        int64_t x9_19 = neg.q(zx.q(x8_7) ^ zx.q(x8_8))
        int32_t var_288_1
        var_288_1.q = x6_11
        int64_t x22_13 = (x12_12 ^ x10_13) & x9_19
        int64_t x23_11 = (x16_8 ^ x14_12) & x9_19
        int64_t x24_11 = (x13_12 ^ x10_9) & x9_19
        int64_t x25_9 = (x16_5 ^ x14_9) & x9_19
        int64_t x26_11 = (x1_18 ^ x17_7) & x9_19
        int64_t x27_10 = (x11_9 ^ x3_8) & x9_19
        int64_t x28_9 = (x2_13 ^ x0_9) & x9_19
        int64_t fp_15 = (x6_11 ^ x4_8) & x9_19
        int64_t lr_12 = (x19_8 ^ x7_9) & x9_19
        int64_t x8_29 = (x8_20 ^ x20_5) & x9_19
        var_290_1.q = x23_11 ^ x14_12
        int64_t x10_15 = x24_11 ^ x10_9
        var_1b0 = x22_13 ^ x10_13
        int64_t x17_11 = x26_11 ^ x17_7
        int64_t x3_14 = x27_10 ^ x3_8
        int64_t x11_13 = x27_10 ^ x11_9
        int64_t x0_15 = x28_9 ^ x0_9
        int64_t x4_16 = fp_15 ^ x4_8
        int64_t x6_17 = fp_15 ^ var_288_1.q
        int64_t x7_15 = lr_12 ^ x7_9
        int64_t x20_9 = x8_29 ^ x20_5
        int64_t x8_30 = x8_29 ^ x8_20
        int64_t x14_13 = x25_9 ^ x14_9
        int64_t x16_9 = x25_9 ^ x16_5
        int64_t x19_12 = lr_12 ^ x19_8
        var_150_1.q = x26_11 ^ x1_18
        var_150_1:8.q = x28_9 ^ x2_13
        var_160.q = x22_13 ^ x12_12
        var_160:8.q = x24_11 ^ x13_12
        var_1d8 = var_290_1.q
        var_188 = x23_11 ^ x16_8
        sub_ef5620(&var_110, &var_138, &var_c0, &var_e8, &var_1b0, &var_1d8, &var_160, &var_188, 
            &var_200)
        int64_t x12_14 = var_c0.q
        int64_t x13_14 = var_c0:8.q
        int64_t x14_14 = var_138
        int64_t x15_9 = var_130_1.q
        int64_t x10_16 = var_110.q
        int64_t x8_32 = var_110:8.q
        int64_t x16_10 = var_e8
        int64_t x5_15 = var_e0_1.q
        int64_t x17_12 = var_100_1.q
        int64_t fp_16 = var_100_1:8.q
        int64_t x1_21 = var_b0_1.q
        int64_t x2_16 = var_b0_1:8.q
        int64_t x3_16 = var_130_1:8.q
        int64_t lr_13 = var_120_1.q
        int64_t x6_19 = var_e0_1:8.q
        int64_t x4_18 = var_d0_1.q
        int64_t x20_10 = var_120_1:8.q
        int64_t x21_10 = var_d0_1:8.q
        int64_t x9_24 = neg.q(zx.q(x8_8) ^ zx.q(var_278_1.d))
        int32_t var_280_1
        var_280_1.q = x4_18
        int64_t x22_16 = (x12_14 ^ x10_16) & x9_24
        int64_t x23_14 = (x16_10 ^ x14_14) & x9_24
        int64_t x24_13 = (x13_14 ^ x8_32) & x9_24
        int64_t x25_11 = (x5_15 ^ x15_9) & x9_24
        int64_t x26_13 = (x1_21 ^ x17_12) & x9_24
        int64_t x27_12 = (x6_19 ^ x3_16) & x9_24
        int64_t x28_11 = (x2_16 ^ fp_16) & x9_24
        int64_t fp_18 = (x4_18 ^ lr_13) & x9_24
        int64_t lr_15 = (x19_10 ^ x7_12) & x9_24
        int64_t x8_34 = (x21_10 ^ x20_10) & x9_24
        var_288_1.q = x23_14 ^ x14_14
        var_110.q = x22_16 ^ x10_16
        var_110:8.q = x24_13 ^ x8_32
        int64_t x7_18 = lr_15 ^ x7_12
        int64_t x19_14 = lr_15 ^ x19_10
        var_100_1.q = x26_13 ^ x17_12
        var_100_1:8.q = x28_11 ^ fp_16
        var_b0_1.q = x26_13 ^ x1_21
        var_b0_1:8.q = x28_11 ^ x2_16
        var_130_1:8.q = x27_12 ^ x3_16
        var_120_1.q = fp_18 ^ lr_13
        var_e0_1:8.q = x27_12 ^ x6_19
        var_d0_1.q = fp_18 ^ var_280_1.q
        var_d0_1:8.q = x8_34 ^ x21_10
        var_c0.q = x22_16 ^ x12_14
        var_c0:8.q = x24_13 ^ x13_14
        var_138 = var_288_1.q
        var_130_1.q = x25_11 ^ x15_9
        var_e8 = x23_14 ^ x16_10
        var_e0_1.q = x25_11 ^ x5_15
        var_120_1:8.q = x8_34 ^ x20_10
        sub_ef5620(&var_1b0, &var_1d8, &var_160, &var_188, &var_110, &var_138, &var_c0, &var_e8, 
            &var_200)
        int64_t x12_16 = var_160.q
        int64_t x13_16 = var_160:8.q
        int64_t x14_16 = var_1d8
        int64_t x16_12 = var_188
        int64_t x10_19 = var_1b0
        int64_t x1_24 = var_150_1.q
        int64_t x2_19 = var_150_1:8.q
        int64_t x9_29 = neg.q(zx.q(var_278_1.d) ^ zx.q(var_270_2.d))
        int64_t x22_19 = (x12_16 ^ x10_19) & x9_29
        int64_t x23_17 = (x16_12 ^ x14_16) & x9_29
        int64_t x24_15 = (x13_16 ^ x10_15) & x9_29
        int64_t x25_13 = (x16_9 ^ x14_13) & x9_29
        int64_t x26_15 = (x1_24 ^ x17_11) & x9_29
        int64_t x27_14 = (x11_13 ^ x3_14) & x9_29
        int64_t x28_13 = (x2_19 ^ x0_15) & x9_29
        int64_t fp_21 = (x6_17 ^ x4_16) & x9_29
        int64_t lr_18 = (x19_12 ^ x7_15) & x9_29
        int64_t x8_39 = (x8_30 ^ x20_9) & x9_29
        var_280_1.q = x23_17 ^ x14_16
        int64_t x10_21 = x24_15 ^ x10_15
        var_1b0 = x22_19 ^ x10_19
        int64_t x17_15 = x26_15 ^ x17_11
        int64_t x3_20 = x27_14 ^ x3_14
        int64_t x11_17 = x27_14 ^ x11_13
        int64_t x0_21 = x28_13 ^ x0_15
        int64_t x4_24 = fp_21 ^ x4_16
        int64_t x6_23 = fp_21 ^ x6_17
        int64_t x7_21 = lr_18 ^ x7_15
        int64_t x20_13 = x8_39 ^ x20_9
        int64_t x8_40 = x8_39 ^ x8_30
        int64_t x14_17 = x25_13 ^ x14_13
        int64_t x16_13 = x25_13 ^ x16_9
        int64_t x19_16 = lr_18 ^ x19_12
        var_150_1.q = x26_15 ^ x1_24
        var_150_1:8.q = x28_13 ^ x2_19
        var_160.q = x22_19 ^ x12_16
        var_160:8.q = x24_15 ^ x13_16
        var_1d8 = var_280_1.q
        var_188 = x23_17 ^ x16_12
        sub_ef5620(&var_110, &var_138, &var_c0, &var_e8, &var_1b0, &var_1d8, &var_160, &var_188, 
            &var_200)
        int64_t x12_18 = var_c0.q
        int64_t x13_18 = var_c0:8.q
        int64_t x14_18 = var_138
        int64_t x15_11 = var_130_1.q
        int64_t x10_22 = var_110.q
        int64_t x8_42 = var_110:8.q
        int64_t x16_14 = var_e8
        int64_t x5_19 = var_e0_1.q
        int64_t x17_16 = var_100_1.q
        int64_t fp_22 = var_100_1:8.q
        int64_t x1_27 = var_b0_1.q
        int64_t x2_22 = var_b0_1:8.q
        int64_t x3_22 = var_130_1:8.q
        int64_t lr_19 = var_120_1.q
        int64_t x6_25 = var_e0_1:8.q
        int64_t x4_26 = var_d0_1.q
        int64_t x20_14 = var_120_1:8.q
        int64_t x21_12 = var_d0_1:8.q
        int64_t x9_34 = neg.q(zx.q(var_270_2.d) ^ zx.q(x8_11.d))
        int64_t x22_22 = (x12_18 ^ x10_22) & x9_34
        int64_t x23_20 = (x16_14 ^ x14_18) & x9_34
        int64_t x24_17 = (x13_18 ^ x8_42) & x9_34
        int64_t x25_15 = (x5_19 ^ x15_11) & x9_34
        int64_t x26_17 = (x1_27 ^ x17_16) & x9_34
        int64_t x27_16 = (x6_25 ^ x3_22) & x9_34
        int64_t x28_15 = (x2_22 ^ fp_22) & x9_34
        int64_t fp_24 = (x4_26 ^ lr_19) & x9_34
        int64_t lr_21 = (x19_14 ^ x7_18) & x9_34
        int64_t x8_44 = (x21_12 ^ x20_14) & x9_34
        var_110.q = x22_22 ^ x10_22
        var_110:8.q = x24_17 ^ x8_42
        var_100_1.q = x26_17 ^ x17_16
        var_100_1:8.q = x28_15 ^ fp_22
        var_b0_1.q = x26_17 ^ x1_27
        var_b0_1:8.q = x28_15 ^ x2_22
        var_130_1:8.q = x27_16 ^ x3_22
        var_120_1.q = fp_24 ^ lr_19
        var_e0_1:8.q = x27_16 ^ x6_25
        var_d0_1.q = fp_24 ^ x4_26
        var_f0_1 = lr_21 ^ x7_18
        var_d0_1:8.q = x8_44 ^ x21_12
        var_c0.q = x22_22 ^ x12_18
        var_c0:8.q = x24_17 ^ x13_18
        var_138 = x23_20 ^ x14_18
        var_130_1.q = x25_15 ^ x15_11
        var_e8 = x23_20 ^ x16_14
        var_e0_1.q = x25_15 ^ x5_19
        var_a0_1 = lr_21 ^ x19_14
        var_120_1:8.q = x8_44 ^ x20_14
        int128_t v0_1
        int128_t v1_1
        v0_1, v1_1, v2_1, v3_1 = sub_ef5620(&var_1b0, &var_1d8, &var_160, &var_188, &var_110, 
            &var_138, &var_c0, &var_e8, &var_200)
        int64_t x10_25 = var_1b0
        int64_t x13_20 = var_160.q
        int64_t x12_20 = var_160:8.q
        int64_t x14_20 = var_1d8
        int64_t x17_18 = var_188
        int64_t x4_30 = var_150_1.q
        int64_t x7_26 = var_150_1:8.q
        int64_t x8_47 = neg.q(x8_11)
        int64_t x15_13 = (x13_20 ^ x10_25) & x8_47
        int64_t x2_26 = (x12_20 ^ x10_21) & x8_47
        int64_t x9_37 = (x11_17 ^ x3_20) & x8_47
        int64_t x1_31 = (x17_18 ^ x14_20) & x8_47
        int64_t x5_22 = (x16_13 ^ x14_17) & x8_47
        int64_t x6_30 = (x4_30 ^ x17_15) & x8_47
        int64_t x28_17 = (x7_26 ^ x0_21) & x8_47
        int64_t fp_27 = (x6_23 ^ x4_24) & x8_47
        int64_t lr_23 = (x19_16 ^ x7_21) & x8_47
        int64_t x8_48 = (x8_40 ^ x20_13) & x8_47
        int64_t x25_18 = x15_13 ^ x10_25
        x13_1 = x2_26 ^ x12_20
        x15_1 = x1_31 ^ x14_20
        int64_t x16_17 = x2_26 ^ x10_21
        x11_1 = x15_13 ^ x13_20
        x10_1 = x5_22 ^ x14_17
        i = i_1 - 1
        x19_1 = x9_37 ^ x11_17
        i_1 = i
        x12_1 = x9_37 ^ x3_20
        x1_6 = x1_31 ^ x17_18
        x17_1 = x5_22 ^ x16_13
        x2_27 = x6_30 ^ x17_15
        x3_1 = fp_27 ^ x4_24
        x5_3 = x6_30 ^ x4_30
        x0 = x28_17 ^ x0_21
        x6_4 = x28_17 ^ x7_26
        x7_2 = x25_18
        var_268_1 = fp_27 ^ x6_23
        x4_1 = lr_23 ^ x7_21
        x20_1 = lr_23 ^ x19_16
        x16_1 = x8_48 ^ x20_13
        var_1b0 = x25_18
        int64_t var_1a8_5 = x16_17
        x22_1 = x16_17
        x25_1 = x2_27
        x21_1 = x8_48 ^ x8_40
        var_1d8 = x15_1
        int64_t var_1d0_5 = x10_1
        int64_t var_198_5 = x0
        int64_t var_1c0_5 = x3_1
    while (i != -1)
    v2_1 = var_1d8.o
    v3_1 = x12_1.o
    int128_t var_230 = var_1b0.o
    int128_t var_220_1 = x2_27.o
    int64_t var_210_1 = x4_1
    int128_t var_260 = v2_1
    sub_ef5a0c(&var_160, &var_260, 1)
    sub_ef5a0c(&var_1d8, &var_160, 2)
    sub_d0bf84(&var_188, &var_1d8, &var_260)
    sub_d0bf84(&var_160, &var_188, &var_160)
    sub_ef5a0c(&var_1d8, &var_160, 1)
    sub_d0bf84(&var_188, &var_1d8, &var_188)
    sub_ef5a0c(&var_1d8, &var_188, 5)
    sub_d0bf84(&var_188, &var_1d8, &var_188)
    sub_ef5a0c(&var_1d8, &var_188, 0xa)
    sub_d0bf84(&var_1b0, &var_1d8, &var_188)
    sub_ef5a0c(&var_1d8, &var_1b0, 0x14)
    sub_d0bf84(&var_1d8, &var_1d8, &var_1b0)
    sub_ef5a0c(&var_1d8, &var_1d8, 0xa)
    sub_d0bf84(&var_188, &var_1d8, &var_188)
    sub_ef5a0c(&var_1d8, &var_188, 0x32)
    sub_d0bf84(&var_1b0, &var_1d8, &var_188)
    sub_ef5a0c(&var_1d8, &var_1b0, 0x64)
    sub_d0bf84(&var_1d8, &var_1d8, &var_1b0)
    sub_ef5a0c(&var_1d8, &var_1d8, 0x32)
    sub_d0bf84(&var_1d8, &var_1d8, &var_188)
    sub_ef5a0c(&var_1d8, &var_1d8, 5)
    sub_d0bf84(&var_c0, &var_1d8, &var_160)
    int64_t result = sub_d0bf84(&var_260, &var_230, &var_c0)
    int64_t x11_21 = var_260.q
    int64_t x13_21 = var_260:8.q
    int64_t x12_22 = v3_1.q
    int64_t x10_27 = v3_1:8.q
    int64_t x13_22 = x13_21 + (x11_21 u>> 0x33)
    int64_t x16_21 = x13_22 & 0x7ffffffffffff
    int64_t x13_23 = (zx.q(x13_21 + (x11_21 u>> 0x33) u< x13_21 ? 1 : 0) << 0x40 | x13_22) u>> 0x33
    int64_t x12_23 = x13_23 + x12_22
    int64_t x15_15 = x12_23 & 0x7ffffffffffff
    int64_t x12_24 = (zx.q(x13_23 + x12_22 u< x13_23 ? 1 : 0) << 0x40 | x12_23) u>> 0x33
    int64_t x10_28 = x12_24 + x10_27
    int64_t x13_25 = x10_28 & 0x7ffffffffffff
    int64_t x10_29 = (zx.q(x12_24 + x10_27 u< x12_24 ? 1 : 0) << 0x40 | x10_28) u>> 0x33
    int64_t x9_40 = x10_29 + x16_1
    int64_t x12_26 = x9_40 & 0x7ffffffffffff
    int64_t x9_41 = (zx.q(x10_29 + x16_1 u< x10_29 ? 1 : 0) << 0x40 | x9_40) u>> 0x33
    int64_t x9_43 = (x9_41 & 0xffffffff) * 0x13
    int64_t x10_33 = (x9_41 u>> 0x20) * 0x13 + (x9_43 u>> 0x20)
    int64_t x11_22 = x11_21 & 0x7ffffffffffff
    int64_t x9_44 = (0xffffffff & x9_43) | (0xffffffff & x10_33) << 0x20
    uint64_t x10_34 = x10_33 u>> 0x20
    int64_t x9_45 = x9_44 + x11_22
    uint64_t x10_35
    
    if (x9_44 + x11_22 u< x9_44)
        x10_35 = x10_34 + 1
    else
        x10_35 = x10_34
    
    int64_t x11_23 = x9_45 & 0x7ffffffffffff
    int64_t x9_46 = (x10_35 << 0x40 | x9_45) u>> 0x33
    int64_t x9_47 = x9_46 + x16_21
    int64_t x10_37 = (zx.q(x9_46 + x16_21 u< x9_46 ? 1 : 0) << 0x40 | x9_47) u>> 0x33
    int64_t x10_38 = x10_37 + x15_15
    int64_t x15_17 = (zx.q(x10_37 + x15_15 u< x10_37 ? 1 : 0) << 0x40 | x10_38) u>> 0x33
    int64_t x13_26 = x15_17 + x13_25
    int64_t x15_19 = (zx.q(x15_17 + x13_25 u< x15_17 ? 1 : 0) << 0x40 | x13_26) u>> 0x33
    int64_t x12_27 = x15_19 + x12_26
    int64_t x15_21 = (zx.q(x15_19 + x12_26 u< x15_19 ? 1 : 0) << 0x40 | x12_27) u>> 0x33
    int64_t x15_23 = (x15_21 & 0xffffffff) * 0x13
    int64_t x16_24 = (x15_21 u>> 0x20) * 0x13 + (x15_23 u>> 0x20)
    int64_t x15_24 = (0xffffffff & x15_23) | (0xffffffff & x16_24) << 0x20
    int64_t x11_24 = x15_24 + x11_23
    uint64_t x16_25 = x16_24 u>> 0x20
    uint64_t x16_26
    
    if (x15_24 + x11_23 u< x15_24)
        x16_26 = x16_25 + 1
    else
        x16_26 = x16_25
    
    uint64_t x16_27
    
    if (x11_24 != -0x14 && x11_24 u>= -0x14)
        x16_27 = x16_26 + 1
    else
        x16_27 = x16_26
    
    int64_t x9_48 = x9_47 & 0x7ffffffffffff
    int64_t x16_28 = (x16_27 << 0x40 | (x11_24 + 0x13)) u>> 0x33
    int64_t x9_49 = x16_28 + x9_48
    int64_t x10_39 = x10_38 & 0x7ffffffffffff
    int64_t x16_30 = (zx.q(x16_28 + x9_48 u< x16_28 ? 1 : 0) << 0x40 | x9_49) u>> 0x33
    int64_t x10_40 = x16_30 + x10_39
    int64_t x13_27 = x13_26 & 0x7ffffffffffff
    int64_t x16_32 = (zx.q(x16_30 + x10_39 u< x16_30 ? 1 : 0) << 0x40 | x10_40) u>> 0x33
    int64_t x13_28 = x16_32 + x13_27
    int64_t x12_28 = x12_27 & 0x7ffffffffffff
    int64_t x16_34 = (zx.q(x16_32 + x13_27 u< x16_32 ? 1 : 0) << 0x40 | x13_28) u>> 0x33
    int64_t x12_29 = x16_34 + x12_28
    int64_t x15_26 = (zx.q(x16_34 + x12_28 u< x16_34 ? 1 : 0) << 0x40 | x12_29) u>> 0x33
    int64_t x8_50 = (x15_26 & 0xffffffff) * 0x13
    int64_t x16_37 = (x15_26 u>> 0x20) * 0x13 + (x8_50 u>> 0x20)
    int64_t x11_26 = (x11_24 + 0x13) & 0x7ffffffffffff
    int64_t x8_51 = (0xffffffff & x8_50) | (0xffffffff & x16_37) << 0x20
    uint64_t x16_38 = x16_37 u>> 0x20
    int64_t x8_52 = x8_51 + x11_26
    uint64_t x11_27
    
    if (x8_51 + x11_26 u< x8_51)
        x11_27 = x16_38 + 1
    else
        x11_27 = x16_38
    
    uint64_t x8_53
    
    if (x8_52 u> -0x7ffffffffffee)
        x8_53 = x11_27 + 1
    else
        x8_53 = x11_27
    
    int64_t x8_54 = (x8_53 << 0x40 | (x8_52 - -0x7ffffffffffed)) u>> 0x33
    int64_t x8_55 = (x9_49 & 0x7ffffffffffff) - -0x7ffffffffffff + x8_54
    int64_t x8_56 = (zx.q((x9_49 & 0x7ffffffffffff) - -0x7ffffffffffff + x8_54
        u< (x9_49 & 0x7ffffffffffff) - -0x7ffffffffffff ? 1 : 0) << 0x40 | x8_55) u>> 0x33
    int64_t x8_57 = (x10_40 & 0x7ffffffffffff) - -0x7ffffffffffff + x8_56
    int64_t x8_58 = (zx.q((x10_40 & 0x7ffffffffffff) - -0x7ffffffffffff + x8_56
        u< (x10_40 & 0x7ffffffffffff) - -0x7ffffffffffff ? 1 : 0) << 0x40 | x8_57) u>> 0x33
    int64_t x8_59 = (x13_28 & 0x7ffffffffffff) - -0x7ffffffffffff + x8_58
    int64_t x9_60 = ((((x12_29 + ((zx.q((x13_28 & 0x7ffffffffffff) - -0x7ffffffffffff + x8_58
        u< (x13_28 & 0x7ffffffffffff) - -0x7ffffffffffff ? 1 : 0) << 0x40 | x8_59) u>> 0x33)) << 0xc)
        - 0x1000) & 0x7ffffffffffff000) | (x8_59 & 0x7ff8000000000) u>> 0x27
    *arg1 = (0x7ffffffffffff & (x8_52 - -0x7ffffffffffed)) | (0x1fff & x8_55) << 0x33
    *(arg1 + 8) = (0x3fffffffff & x8_55 u>> 0xd) | (0x3ffffff & x8_57) << 0x26
    *(arg1 + 0x10) = (0x1ffffff & x8_57 u>> 0x1a) | (0x7fffffffff & x8_59) << 0x19
    *(arg1 + 0x18) = x9_60
    
    if (*(x9 + 0x28) == x8)
        return result

__stack_chk_fail()
noreturn
