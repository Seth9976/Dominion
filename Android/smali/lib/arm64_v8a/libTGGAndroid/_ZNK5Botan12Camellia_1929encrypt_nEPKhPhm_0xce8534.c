// 函数: _ZNK5Botan12Camellia_1929encrypt_nEPKhPhm
// 地址: 0xce8534
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 8) == *(arg1 + 0x10))
    uint8_t* x0
    uint8_t* x1_1
    uint64_t x2_1
    x0, x1_1, x2_1 = Botan::SymmetricAlgorithm::throw_key_not_set_error()
    return Botan::Camellia_256::encrypt_n(x0, x1_1, x2_1) __tailcall

uint8_t* result = arg2
uint8_t* result_1 = result
int64_t entry_x3

if (entry_x3 != 0)
    int64_t x8_3 = 0
    
    do
        int64_t x2_14 = x8_3 << 4
        int64_t* x19_8 = *(arg1 + 8)
        int64_t x24_11 = x19_8[1]
        void* x21_13 = &result_1[x2_14]
        uint64_t x21_14 = *(x21_13 + 8)
        int64_t x25_12 = x19_8[2]
        int64_t x26_7 = x19_8[3]
        void* x22_12 = &x19_8[4]
        int64_t x20_4 = *x19_8 ^ _byteswap(*x21_13)
        int64_t x19_10 = x24_11 ^ _byteswap(x21_14)
        int64_t x21_16 = x25_12 ^ x20_4
        uint32_t x27_6 = (x21_16 u>> 0x20).d
        uint32_t lr_4 = (x21_16 u>> 8).d
        uint32_t x25_14 = zx.d(*(&data_84a680 + (x21_16 u>> 0x28 & 0xff)))
        uint32_t x24_13 = zx.d(*(&data_84a680 + (x21_16 u>> 0x30 & 0xff)))
        uint32_t x28_5 = zx.d(*(&data_84a680 + (x21_16 u>> 0x18 & 0xff)))
        uint32_t fp_4 = zx.d(*(&data_84a680 + (x21_16 u>> 0x10 & 0xff)))
        uint32_t x21_18 = zx.d(*(&data_84a680 + (x21_16 & 0xff)))
        uint32_t x23_10 = zx.d(*(&data_84a680 + (x21_16 u>> 0x38)))
        uint32_t x10_33 = zx.d(
            *(&data_84a680 + ((zx.q((x27_6 u>> 7).b) & 1) | zx.q(((0x7fffffff & x27_6) << 1).b))))
        uint32_t x9_10 = zx.d(
            *(&data_84a680 + ((zx.q((lr_4 u>> 7).b) & 1) | zx.q(((0x7fffffff & lr_4) << 1).b))))
        int32_t lr_6 = (0xffff807f & x25_14 u>> 1) | (0xff & x25_14) << 7
        char x27_8 = (1 & (x24_13 u>> 7).b) | ((0xff & x24_13) << 1).b
        char x7_4 = (1 & (x28_5 u>> 7).b) | ((0xff & x28_5) << 1).b
        int32_t x24_14 = x21_18 ^ lr_6
        int32_t x3_13 = (0xffff807f & fp_4 u>> 1) | (0xff & fp_4) << 7
        char x25_15 = x27_8 ^ x23_10.b
        char x27_9 = lr_6.b ^ x27_8
        char x1_16 = x7_4 ^ x10_33.b
        int32_t x28_6 = x9_10 ^ x3_13
        char x9_11 = x9_10.b ^ x1_16
        int64_t x9_16 = (-0xff00000001 & ((-0xff000000000001
            & (zx.q(x9_11) ^ zx.q(x23_10.b) ^ zx.q(x3_13.b)))
            | ((zx.q(x9_11) ^ zx.q(x25_15) ^ zx.q(x21_18.b)) & 0xff) << 0x30))
            | ((zx.q(x9_11) ^ zx.q(x27_9) ^ zx.q(x3_13.b)) & 0xff) << 0x20
        int64_t x9_19 = (-0xff000001 & ((-0xff01 & ((-0xff0001 & x9_16)
            | (zx.q(x9_10.b) ^ zx.q(x27_9) ^ zx.q(x7_4) ^ zx.q(x21_18.b)) << 0x10))
            | (zx.q(x3_13.b) ^ zx.q(x1_16) ^ zx.q(lr_6.b) ^ zx.q(x21_18.b)) << 8))
            | (zx.q(x21_18.b) ^ zx.q(x25_15) ^ zx.q(x28_6.b)) << 0x18
        uint64_t x19_1 = x19_10 ^ (x9_19
            | (zx.q(x24_14.b) ^ zx.q(x25_15) ^ zx.q(x7_4) ^ zx.q(x3_13.b)) << 0x28
            | (zx.q(x24_14) ^ zx.q(x23_10) ^ zx.q(x10_33) ^ zx.q(x28_6)) << 0x38)
        int64_t x9_22 = x19_1 ^ x26_7
        uint32_t x3_15 = (x9_22 u>> 0x20).d
        uint32_t x23_13 = (x9_22 u>> 8).d
        uint32_t x0_16 = zx.d(*(&data_84a680 + (x9_22 u>> 0x30 & 0xff)))
        uint32_t x1_22 = zx.d(*(&data_84a680 + (x9_22 u>> 0x28 & 0xff)))
        uint32_t x7_9 = zx.d(*(&data_84a680 + (x9_22 u>> 0x18 & 0xff)))
        uint32_t x21_21 = zx.d(*(&data_84a680 + (x9_22 u>> 0x10 & 0xff)))
        uint32_t x3_17 = zx.d(
            *(&data_84a680 + ((zx.q((x3_15 u>> 7).b) & 1) | zx.q(((0x7fffffff & x3_15) << 1).b))))
        uint32_t x10_37 = zx.d(*(&data_84a680 + (x9_22 u>> 0x38)))
        uint32_t x9_24 = zx.d(*(&data_84a680 + (x9_22 & 0xff)))
        uint32_t x23_15 = zx.d(
            *(&data_84a680 + ((zx.q((x23_13 u>> 7).b) & 1) | zx.q(((0x7fffffff & x23_13) << 1).b))))
        char x24_21 = (1 & (x0_16 u>> 7).b) | ((0xff & x0_16) << 1).b
        int32_t x25_21 = (0xffff807f & x1_22 u>> 1) | (0xff & x1_22) << 7
        char x26_9 = (1 & (x7_9 u>> 7).b) | ((0xff & x7_9) << 1).b
        int32_t x27_12 = (0xffff807f & x21_21 u>> 1) | (0xff & x21_21) << 7
        char x7_10 = x25_21.b ^ x24_21
        char x28_7 = x26_9 ^ x3_17.b
        int32_t x0_17 = x9_24 ^ x25_21
        char x1_23 = x24_21 ^ x10_37.b
        int32_t x21_22 = x23_15 ^ x27_12
        char x23_16 = x23_15.b ^ x28_7
        int64_t x10_43 = (-0xff0001 & ((-0xff00000001 & ((-0xff000000000001
            & (zx.q(x23_16) ^ zx.q(x10_37.b) ^ zx.q(x27_12.b)))
            | (zx.q(x23_16) ^ zx.q(x1_23) ^ zx.q(x9_24.b)) << 0x30))
            | (zx.q(x23_16) ^ zx.q(x7_10) ^ zx.q(x27_12.b)) << 0x20))
            | (zx.q(x23_15.b) ^ zx.q(x7_10) ^ zx.q(x26_9) ^ zx.q(x9_24.b)) << 0x10
        int64_t x9_27 = (-0xff000001 & ((-0xff01 & x10_43)
            | (zx.q(x27_12.b) ^ zx.q(x28_7) ^ zx.q(x25_21.b) ^ zx.q(x9_24.b)) << 8))
            | ((zx.q(x9_24.b) ^ zx.q(x1_23) ^ zx.q(x21_22.b)) & 0xff) << 0x18
            | (zx.q(x0_17.b) ^ zx.q(x1_23) ^ zx.q(x26_9) ^ zx.q(x27_12.b)) << 0x28
        uint64_t x20_1 =
            (x9_27 | (zx.q(x0_17) ^ zx.q(x10_37) ^ zx.q(x3_17) ^ zx.q(x21_22)) << 0x38) ^ x20_4
        int64_t i = 0xa
        int64_t x23_18 = -1
        int64_t x25_23 = 1
        void* x21_1
        
        do
            if (x23_18 == neg.q(x25_23 u/ 3 * 3))
                uint32_t x0_34 = (x20_1 u>> 0x20).d
                int32_t x20_5 = x20_1.d ^ ror.d(*(x22_12 + 4) & x0_34, 0x1f)
                int64_t x9_41 = *(x22_12 + 8)
                int32_t x10_59 = (x20_5 | *x22_12) ^ x0_34
                x22_12 += 0x10
                int32_t x9_43 = (x9_41.d | x19_1.d) ^ (x19_1 u>> 0x20).d
                x20_1 = zx.q(x20_5) | zx.q(x10_59) << 0x20
                x19_1 = (zx.q(x19_1.d) ^ zx.q(ror.d(x9_43 & (x9_41 u>> 0x20).d, 0x1f)))
                    | zx.q(x9_43) << 0x20
            
            x21_1 = x22_12 + 0x10
            x25_23 += 1
            i -= 1
            int64_t x9_30 = *x22_12 ^ x20_1
            int64_t x0_30 = *(&data_84a780 + (x9_30 u>> 0x35 & 0x7f8)) ^ x19_1
                ^ *(&data_84af80 + ((x9_30 u>> 0x30 & 0xff) << 3))
                ^ *(&data_84b780 + ((x9_30 u>> 0x28 & 0xff) << 3))
                ^ *(&data_84bf80 + ((x9_30 u>> 0x20 & 0xff) << 3))
                ^ *(&data_84c780 + ((x9_30 u>> 0x18 & 0xff) << 3))
                ^ *(&data_84cf80 + ((x9_30 u>> 0x10 & 0xff) << 3))
            x19_1 = x0_30 ^ *(&data_84d780 + ((x9_30 u>> 8 & 0xff) << 3))
                ^ *(&data_84df80 + ((x9_30 & 0xff) << 3))
            int64_t x9_33 = x19_1 ^ *(x22_12 + 8)
            int64_t x10_55 = *(&data_84a780 + (x9_33 u>> 0x35 & 0x7f8)) ^ x20_1
                ^ *(&data_84af80 + ((x9_33 u>> 0x30 & 0xff) << 3))
                ^ *(&data_84b780 + ((x9_33 u>> 0x28 & 0xff) << 3))
                ^ *(&data_84bf80 + ((x9_33 u>> 0x20 & 0xff) << 3))
                ^ *(&data_84c780 + ((x9_33 u>> 0x18 & 0xff) << 3))
                ^ *(&data_84cf80 + ((x9_33 u>> 0x10 & 0xff) << 3))
            x20_1 = x10_55 ^ *(&data_84d780 + ((x9_33 u>> 8 & 0xff) << 3))
                ^ *(&data_84df80 + ((x9_33 & 0xff) << 3))
            x23_18 -= 1
            x22_12 = x21_1
        while (i != 0)
        
        x8_3 += 1
        int64_t x7_2 = arg3 + x2_14
        int64_t x0_3 = *x21_1 ^ x20_1
        uint32_t x3_2 = (x0_3 u>> 0x20).d
        uint32_t x24_1 = (x0_3 u>> 8).d
        uint32_t x2_3 = zx.d(*(&data_84a680 + (x0_3 u>> 0x28 & 0xff)))
        uint32_t x1_3 = zx.d(*(&data_84a680 + (x0_3 u>> 0x30 & 0xff)))
        uint32_t x21_3 = zx.d(*(&data_84a680 + (x0_3 u>> 0x18 & 0xff)))
        uint32_t x22_3 = zx.d(*(&data_84a680 + (x0_3 u>> 0x10 & 0xff)))
        uint32_t x0_5 = zx.d(*(&data_84a680 + (x0_3 & 0xff)))
        uint32_t x10_4 = zx.d(*(&data_84a680 + (x0_3 u>> 0x38)))
        uint32_t x3_4 = zx.d(
            *(&data_84a680 + ((zx.q((x3_2 u>> 7).b) & 1) | zx.q(((0x7fffffff & x3_2) << 1).b))))
        uint32_t x24_3 = zx.d(
            *(&data_84a680 + ((zx.q((x24_1 u>> 7).b) & 1) | zx.q(((0x7fffffff & x24_1) << 1).b))))
        int32_t x26_4 = (0xffff807f & x2_3 u>> 1) | (0xff & x2_3) << 7
        char x25_4 = (1 & (x1_3 u>> 7).b) | ((0xff & x1_3) << 1).b
        char x27_2 = (1 & (x21_3 u>> 7).b) | ((0xff & x21_3) << 1).b
        int32_t x1_4 = x0_5 ^ x26_4
        int32_t x28_2 = (0xffff807f & x22_3 u>> 1) | (0xff & x22_3) << 7
        char x2_4 = x25_4 ^ x10_4.b
        char x21_4 = x26_4.b ^ x25_4
        char fp_1 = x27_2 ^ x3_4.b
        int32_t x22_4 = x24_3 ^ x28_2
        char x24_4 = x24_3.b ^ fp_1
        int64_t x10_10 = (-0xff0001 & ((-0xff00000001 & ((-0xff000000000001
            & (zx.q(x24_4) ^ zx.q(x10_4.b) ^ zx.q(x28_2.b)))
            | (zx.q(x24_4) ^ zx.q(x2_4) ^ zx.q(x0_5.b)) << 0x30))
            | (zx.q(x24_4) ^ zx.q(x21_4) ^ zx.q(x28_2.b)) << 0x20))
            | (zx.q(x24_3.b) ^ zx.q(x21_4) ^ zx.q(x27_2) ^ zx.q(x0_5.b)) << 0x10
        int64_t x10_13 = (-0xff000001 &
            ((-0xff01 & x10_10) | (zx.q(x28_2.b) ^ zx.q(fp_1) ^ zx.q(x26_4.b) ^ zx.q(x0_5.b)) << 8))
            | ((zx.q(x0_5.b) ^ zx.q(x2_4) ^ zx.q(x22_4.b)) & 0xff) << 0x18
            | (zx.q(x1_4.b) ^ zx.q(x2_4) ^ zx.q(x27_2) ^ zx.q(x28_2.b)) << 0x28
        int64_t x10_15 =
            (x10_13 | (zx.q(x1_4) ^ zx.q(x10_4) ^ zx.q(x3_4) ^ zx.q(x22_4)) << 0x38) ^ x19_1
        int64_t x0_8 = x10_15 ^ *(x21_1 + 8)
        uint32_t x3_7 = (x0_8 u>> 0x20).d
        uint32_t x22_7 = (x0_8 u>> 8).d
        uint32_t x1_10 = zx.d(*(&data_84a680 + (x0_8 u>> 0x30 & 0xff)))
        uint32_t x2_9 = zx.d(*(&data_84a680 + (x0_8 u>> 0x28 & 0xff)))
        uint32_t x19_3 = zx.d(*(&data_84a680 + (x0_8 u>> 0x18 & 0xff)))
        uint32_t x21_9 = zx.d(*(&data_84a680 + (x0_8 u>> 0x10 & 0xff)))
        uint32_t x3_9 = zx.d(
            *(&data_84a680 + ((zx.q((x3_7 u>> 7).b) & 1) | zx.q(((0x7fffffff & x3_7) << 1).b))))
        uint32_t x10_17 = zx.d(*(&data_84a680 + (x0_8 u>> 0x38)))
        uint32_t x0_10 = zx.d(*(&data_84a680 + (x0_8 & 0xff)))
        uint32_t x22_9 = zx.d(
            *(&data_84a680 + ((zx.q((x22_7 u>> 7).b) & 1) | zx.q(((0x7fffffff & x22_7) << 1).b))))
        char x23_5 = (1 & (x1_10 u>> 7).b) | ((0xff & x1_10) << 1).b
        int32_t x24_9 = (0xffff807f & x2_9 u>> 1) | (0xff & x2_9) << 7
        char x25_10 = (1 & (x19_3 u>> 7).b) | ((0xff & x19_3) << 1).b
        int32_t x26_6 = (0xffff807f & x21_9 u>> 1) | (0xff & x21_9) << 7
        char x19_4 = x24_9.b ^ x23_5
        char x27_4 = x25_10 ^ x3_9.b
        int32_t x1_11 = x0_10 ^ x24_9
        char x2_10 = x23_5 ^ x10_17.b
        int32_t x21_10 = x22_9 ^ x26_6
        char x22_10 = x22_9.b ^ x27_4
        result = zx.q(x26_6.b) ^ zx.q(x27_4) ^ zx.q(x24_9.b) ^ zx.q(x0_10.b)
        int64_t x10_23 = (-0xff0001 & ((-0xff00000001 & ((-0xff000000000001
            & (zx.q(x22_10) ^ zx.q(x10_17.b) ^ zx.q(x26_6.b)))
            | (zx.q(x22_10) ^ zx.q(x2_10) ^ zx.q(x0_10.b)) << 0x30))
            | (zx.q(x22_10) ^ zx.q(x19_4) ^ zx.q(x26_6.b)) << 0x20))
            | (zx.q(x22_9.b) ^ zx.q(x19_4) ^ zx.q(x25_10) ^ zx.q(x0_10.b)) << 0x10
        int64_t x10_26 = (-0xff000001 & ((-0xff01 & x10_23) | (0xff & result) << 8))
            | ((zx.q(x0_10.b) ^ zx.q(x2_10) ^ zx.q(x21_10.b)) & 0xff) << 0x18
            | (zx.q(x1_11.b) ^ zx.q(x2_10) ^ zx.q(x25_10) ^ zx.q(x26_6.b)) << 0x28
        uint64_t x10_28 = *(x21_1 + 0x18) ^ x20_1
            ^ (x10_26 | (zx.q(x1_11) ^ zx.q(x10_17) ^ zx.q(x3_9) ^ zx.q(x21_10)) << 0x38)
        uint64_t x9_4 = _byteswap(x10_15 ^ *(x21_1 + 0x10))
        uint64_t x10_29 = _byteswap(x10_28)
        *x7_2 = x9_4
        *(x7_2 + 8) = x10_29
    while (x8_3 != entry_x3)

return result
