// 函数: _ZNK5Botan12Camellia_1289decrypt_nEPKhPhm
// 地址: 0xce85a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_10
int64_t* sp = &var_10
int64_t lr
var_10 = lr
uint8_t* result
uint64_t x1
int64_t x2
void* x3
int64_t x4
int64_t lr_1

if (*(arg1 + 8) == *(arg1 + 0x10))
    result, x1, x2, x3, x4, lr_1 = Botan::SymmetricAlgorithm::throw_key_not_set_error()
else
    x4 = 9
    result = arg2
    x1 = arg3
    int64_t entry_x3
    x2 = entry_x3
    x3 = &arg1[8]
    lr_1 = var_10
    void arg_0
    sp = &arg_0

int64_t entry_fp
*(sp - 0x60) = entry_fp
*(sp - 0x58) = lr_1
int64_t entry_x28
*(sp - 0x50) = entry_x28
int64_t entry_x27
*(sp - 0x48) = entry_x27
int64_t entry_x26
*(sp - 0x40) = entry_x26
int64_t entry_x25
*(sp - 0x38) = entry_x25
int64_t entry_x24
*(sp - 0x30) = entry_x24
int64_t entry_x23
*(sp - 0x28) = entry_x23
int64_t entry_x22
*(sp - 0x20) = entry_x22
int64_t entry_x21
*(sp - 0x18) = entry_x21
int64_t entry_x20
*(sp - 0x10) = entry_x20
int64_t entry_x19
*(sp - 8) = entry_x19
*(sp - 0x70) = x2
*(sp - 0x68) = x3
*(sp - 0x80) = result
*(sp - 0x78) = x1

if (x2 != 0)
    int64_t x8_2 = 0
    *(sp - 0x90) = x4 - 2
    *(sp - 0x88) = x4 - 1
    bool cond:0_1
    
    do
        int64_t x2_13 = x8_2 << 4
        void* x19_7 = *(*(sp - 0x68) + 8)
        int64_t x24_10 = *(x19_7 - 0x10)
        int64_t x23_7 = *(x19_7 - 8)
        int64_t* x21_12 = *(sp - 0x80) + x2_13
        uint64_t x21_13 = x21_12[1]
        int64_t x26_6 = *(x19_7 - 0x20)
        int64_t x25_11 = *(x19_7 - 0x18)
        void* x22_11 = x19_7 - 0x28
        uint64_t x19_8 = _byteswap(*x21_12)
        int64_t x21_14 = x23_7 ^ _byteswap(x21_13)
        int64_t x20_4 = x24_10 ^ x19_8
        int64_t x19_9 = x25_11 ^ x20_4
        uint32_t x27_5 = (x19_9 u>> 0x20).d
        uint32_t lr_4 = (x19_9 u>> 8).d
        uint32_t x25_13 = zx.d(*(&data_84a680 + (x19_9 u>> 0x28 & 0xff)))
        uint32_t x24_12 = zx.d(*(&data_84a680 + (x19_9 u>> 0x30 & 0xff)))
        uint32_t x28_4 = zx.d(*(&data_84a680 + (x19_9 u>> 0x18 & 0xff)))
        uint32_t fp_3 = zx.d(*(&data_84a680 + (x19_9 u>> 0x10 & 0xff)))
        uint32_t x19_11 = zx.d(*(&data_84a680 + (x19_9 & 0xff)))
        uint32_t x23_9 = zx.d(*(&data_84a680 + (x19_9 u>> 0x38)))
        uint32_t x10_20 = zx.d(
            *(&data_84a680 + ((zx.q((x27_5 u>> 7).b) & 1) | zx.q(((0x7fffffff & x27_5) << 1).b))))
        uint32_t x9_23 = zx.d(
            *(&data_84a680 + ((zx.q((lr_4 u>> 7).b) & 1) | zx.q(((0x7fffffff & lr_4) << 1).b))))
        int32_t lr_6 = (0xffff807f & x25_13 u>> 1) | (0xff & x25_13) << 7
        char x27_7 = (1 & (x24_12 u>> 7).b) | ((0xff & x24_12) << 1).b
        char x7_3 = (1 & (x28_4 u>> 7).b) | ((0xff & x28_4) << 1).b
        int32_t x24_13 = x19_11 ^ lr_6
        int32_t x3_12 = (0xffff807f & fp_3 u>> 1) | (0xff & fp_3) << 7
        char x25_14 = x27_7 ^ x23_9.b
        char x27_8 = lr_6.b ^ x27_7
        char x1_15 = x7_3 ^ x10_20.b
        int32_t x28_5 = x9_23 ^ x3_12
        char x9_24 = x9_23.b ^ x1_15
        int64_t x9_29 = (-0xff00000001 & ((-0xff000000000001
            & (zx.q(x9_24) ^ zx.q(x23_9.b) ^ zx.q(x3_12.b)))
            | ((zx.q(x9_24) ^ zx.q(x25_14) ^ zx.q(x19_11.b)) & 0xff) << 0x30))
            | ((zx.q(x9_24) ^ zx.q(x27_8) ^ zx.q(x3_12.b)) & 0xff) << 0x20
        int64_t x9_32 = (-0xff000001 & ((-0xff01 & ((-0xff0001 & x9_29)
            | (zx.q(x9_23.b) ^ zx.q(x27_8) ^ zx.q(x7_3) ^ zx.q(x19_11.b)) << 0x10))
            | (zx.q(x3_12.b) ^ zx.q(x1_15) ^ zx.q(lr_6.b) ^ zx.q(x19_11.b)) << 8))
            | (zx.q(x19_11.b) ^ zx.q(x25_14) ^ zx.q(x28_5.b)) << 0x18
        uint64_t x19 = x21_14 ^ (x9_32
            | (zx.q(x24_13.b) ^ zx.q(x25_14) ^ zx.q(x7_3) ^ zx.q(x3_12.b)) << 0x28
            | (zx.q(x24_13) ^ zx.q(x23_9) ^ zx.q(x10_20) ^ zx.q(x28_5)) << 0x38)
        int64_t x9_35 = x19 ^ x26_6
        uint32_t x3_14 = (x9_35 u>> 0x20).d
        uint32_t x23_12 = (x9_35 u>> 8).d
        uint32_t x0_15 = zx.d(*(&data_84a680 + (x9_35 u>> 0x30 & 0xff)))
        uint32_t x1_21 = zx.d(*(&data_84a680 + (x9_35 u>> 0x28 & 0xff)))
        uint32_t x7_8 = zx.d(*(&data_84a680 + (x9_35 u>> 0x18 & 0xff)))
        uint32_t x21_16 = zx.d(*(&data_84a680 + (x9_35 u>> 0x10 & 0xff)))
        uint32_t x3_16 = zx.d(
            *(&data_84a680 + ((zx.q((x3_14 u>> 7).b) & 1) | zx.q(((0x7fffffff & x3_14) << 1).b))))
        uint32_t x10_24 = zx.d(*(&data_84a680 + (x9_35 u>> 0x38)))
        uint32_t x9_37 = zx.d(*(&data_84a680 + (x9_35 & 0xff)))
        uint32_t x23_14 = zx.d(
            *(&data_84a680 + ((zx.q((x23_12 u>> 7).b) & 1) | zx.q(((0x7fffffff & x23_12) << 1).b))))
        char x24_20 = (1 & (x0_15 u>> 7).b) | ((0xff & x0_15) << 1).b
        int32_t x25_20 = (0xffff807f & x1_21 u>> 1) | (0xff & x1_21) << 7
        char x26_8 = (1 & (x7_8 u>> 7).b) | ((0xff & x7_8) << 1).b
        int32_t x27_11 = (0xffff807f & x21_16 u>> 1) | (0xff & x21_16) << 7
        char x7_9 = x25_20.b ^ x24_20
        char x28_6 = x26_8 ^ x3_16.b
        int32_t x0_16 = x9_37 ^ x25_20
        char x1_22 = x24_20 ^ x10_24.b
        int32_t x21_17 = x23_14 ^ x27_11
        char x23_15 = x23_14.b ^ x28_6
        int64_t x10_30 = (-0xff0001 & ((-0xff00000001 & ((-0xff000000000001
            & (zx.q(x23_15) ^ zx.q(x10_24.b) ^ zx.q(x27_11.b)))
            | (zx.q(x23_15) ^ zx.q(x1_22) ^ zx.q(x9_37.b)) << 0x30))
            | (zx.q(x23_15) ^ zx.q(x7_9) ^ zx.q(x27_11.b)) << 0x20))
            | (zx.q(x23_14.b) ^ zx.q(x7_9) ^ zx.q(x26_8) ^ zx.q(x9_37.b)) << 0x10
        int64_t x9_40 = (-0xff000001 & ((-0xff01 & x10_30)
            | (zx.q(x27_11.b) ^ zx.q(x28_6) ^ zx.q(x25_20.b) ^ zx.q(x9_37.b)) << 8))
            | ((zx.q(x9_37.b) ^ zx.q(x1_22) ^ zx.q(x21_17.b)) & 0xff) << 0x18
            | (zx.q(x0_16.b) ^ zx.q(x1_22) ^ zx.q(x26_8) ^ zx.q(x27_11.b)) << 0x28
        uint64_t x20 =
            (x9_40 | (zx.q(x0_16) ^ zx.q(x10_24) ^ zx.q(x3_16) ^ zx.q(x21_17)) << 0x38) ^ x20_4
        void* x21
        
        if (*(sp - 0x88) == 1)
            x21 = x22_11
        else
            int64_t i = *(sp - 0x90)
            int64_t x23_17 = -1
            int64_t x25_22 = 1
            
            do
                if (x23_17 == neg.q(x25_22 u/ 3 * 3))
                    uint32_t x0_33 = (x20 u>> 0x20).d
                    int32_t x20_5 = x20.d ^ ror.d(*(x22_11 + 4) & x0_33, 0x1f)
                    int64_t x9_54 = *(x22_11 - 8)
                    int32_t x10_47 = (x20_5 | *x22_11) ^ x0_33
                    x22_11 -= 0x10
                    int32_t x9_56 = (x9_54.d | x19.d) ^ (x19 u>> 0x20).d
                    x20 = zx.q(x20_5) | zx.q(x10_47) << 0x20
                    x19 = (zx.q(x19.d) ^ zx.q(ror.d(x9_56 & (x9_54 u>> 0x20).d, 0x1f)))
                        | zx.q(x9_56) << 0x20
                
                x21 = x22_11 - 0x10
                x25_22 += 1
                i -= 1
                int64_t x9_43 = *x22_11 ^ x20
                int64_t x0_29 = *(&data_84a780 + (x9_43 u>> 0x35 & 0x7f8)) ^ x19
                    ^ *(&data_84af80 + ((x9_43 u>> 0x30 & 0xff) << 3))
                    ^ *(&data_84b780 + ((x9_43 u>> 0x28 & 0xff) << 3))
                    ^ *(&data_84bf80 + ((x9_43 u>> 0x20 & 0xff) << 3))
                    ^ *(&data_84c780 + ((x9_43 u>> 0x18 & 0xff) << 3))
                    ^ *(&data_84cf80 + ((x9_43 u>> 0x10 & 0xff) << 3))
                x19 = x0_29 ^ *(&data_84d780 + ((x9_43 u>> 8 & 0xff) << 3))
                    ^ *(&data_84df80 + ((x9_43 & 0xff) << 3))
                int64_t x9_46 = x19 ^ *(x22_11 - 8)
                int64_t x10_43 = *(&data_84a780 + (x9_46 u>> 0x35 & 0x7f8)) ^ x20
                    ^ *(&data_84af80 + ((x9_46 u>> 0x30 & 0xff) << 3))
                    ^ *(&data_84b780 + ((x9_46 u>> 0x28 & 0xff) << 3))
                    ^ *(&data_84bf80 + ((x9_46 u>> 0x20 & 0xff) << 3))
                    ^ *(&data_84c780 + ((x9_46 u>> 0x18 & 0xff) << 3))
                    ^ *(&data_84cf80 + ((x9_46 u>> 0x10 & 0xff) << 3))
                x20 = x10_43 ^ *(&data_84d780 + ((x9_46 u>> 8 & 0xff) << 3))
                    ^ *(&data_84df80 + ((x9_46 & 0xff) << 3))
                x23_17 -= 1
                x22_11 = x21
            while (i != 0)
        
        x8_2 += 1
        uint64_t* x7_1 = *(sp - 0x78) + x2_13
        cond:0_1 = x8_2 == *(sp - 0x70)
        int64_t x0_2 = *x21 ^ x20
        uint32_t x3_1 = (x0_2 u>> 0x20).d
        uint32_t x24 = (x0_2 u>> 8).d
        uint32_t x2_2 = zx.d(*(&data_84a680 + (x0_2 u>> 0x28 & 0xff)))
        uint32_t x1_2 = zx.d(*(&data_84a680 + (x0_2 u>> 0x30 & 0xff)))
        uint32_t x21_2 = zx.d(*(&data_84a680 + (x0_2 u>> 0x18 & 0xff)))
        uint32_t x22_2 = zx.d(*(&data_84a680 + (x0_2 u>> 0x10 & 0xff)))
        uint32_t x0_4 = zx.d(*(&data_84a680 + (x0_2 & 0xff)))
        uint32_t x9_4 = zx.d(*(&data_84a680 + (x0_2 u>> 0x38)))
        uint32_t x3_3 = zx.d(
            *(&data_84a680 + ((zx.q((x3_1 u>> 7).b) & 1) | zx.q(((0x7fffffff & x3_1) << 1).b))))
        uint32_t x24_2 =
            zx.d(*(&data_84a680 + ((zx.q((x24 u>> 7).b) & 1) | zx.q(((0x7fffffff & x24) << 1).b))))
        int32_t x26_3 = (0xffff807f & x2_2 u>> 1) | (0xff & x2_2) << 7
        char x25_3 = (1 & (x1_2 u>> 7).b) | ((0xff & x1_2) << 1).b
        char x27_1 = (1 & (x21_2 u>> 7).b) | ((0xff & x21_2) << 1).b
        int32_t x1_3 = x0_4 ^ x26_3
        int32_t x28_1 = (0xffff807f & x22_2 u>> 1) | (0xff & x22_2) << 7
        char x2_3 = x25_3 ^ x9_4.b
        char x21_3 = x26_3.b ^ x25_3
        char fp = x27_1 ^ x3_3.b
        int32_t x22_3 = x24_2 ^ x28_1
        char x24_3 = x24_2.b ^ fp
        int64_t x9_10 = (-0xff0001 & ((-0xff00000001 & ((-0xff000000000001
            & (zx.q(x24_3) ^ zx.q(x9_4.b) ^ zx.q(x28_1.b)))
            | (zx.q(x24_3) ^ zx.q(x2_3) ^ zx.q(x0_4.b)) << 0x30))
            | (zx.q(x24_3) ^ zx.q(x21_3) ^ zx.q(x28_1.b)) << 0x20))
            | (zx.q(x24_2.b) ^ zx.q(x21_3) ^ zx.q(x27_1) ^ zx.q(x0_4.b)) << 0x10
        int64_t x9_13 = (-0xff000001
            & ((-0xff01 & x9_10) | (zx.q(x28_1.b) ^ zx.q(fp) ^ zx.q(x26_3.b) ^ zx.q(x0_4.b)) << 8))
            | ((zx.q(x0_4.b) ^ zx.q(x2_3) ^ zx.q(x22_3.b)) & 0xff) << 0x18
            | (zx.q(x1_3.b) ^ zx.q(x2_3) ^ zx.q(x27_1) ^ zx.q(x28_1.b)) << 0x28
        int64_t x9_15 = (x9_13 | (zx.q(x1_3) ^ zx.q(x9_4) ^ zx.q(x3_3) ^ zx.q(x22_3)) << 0x38) ^ x19
        int64_t x0_7 = x9_15 ^ *(x21 - 8)
        uint32_t x3_6 = (x0_7 u>> 0x20).d
        uint32_t x22_6 = (x0_7 u>> 8).d
        uint32_t x1_9 = zx.d(*(&data_84a680 + (x0_7 u>> 0x30 & 0xff)))
        uint32_t x2_8 = zx.d(*(&data_84a680 + (x0_7 u>> 0x28 & 0xff)))
        uint32_t x19_2 = zx.d(*(&data_84a680 + (x0_7 u>> 0x18 & 0xff)))
        uint32_t x21_8 = zx.d(*(&data_84a680 + (x0_7 u>> 0x10 & 0xff)))
        uint32_t x3_8 = zx.d(
            *(&data_84a680 + ((zx.q((x3_6 u>> 7).b) & 1) | zx.q(((0x7fffffff & x3_6) << 1).b))))
        uint32_t x10_4 = zx.d(*(&data_84a680 + (x0_7 u>> 0x38)))
        uint32_t x0_9 = zx.d(*(&data_84a680 + (x0_7 & 0xff)))
        uint32_t x22_8 = zx.d(
            *(&data_84a680 + ((zx.q((x22_6 u>> 7).b) & 1) | zx.q(((0x7fffffff & x22_6) << 1).b))))
        char x23_4 = (1 & (x1_9 u>> 7).b) | ((0xff & x1_9) << 1).b
        int32_t x24_8 = (0xffff807f & x2_8 u>> 1) | (0xff & x2_8) << 7
        char x25_9 = (1 & (x19_2 u>> 7).b) | ((0xff & x19_2) << 1).b
        int32_t x26_5 = (0xffff807f & x21_8 u>> 1) | (0xff & x21_8) << 7
        char x19_3 = x24_8.b ^ x23_4
        char x27_3 = x25_9 ^ x3_8.b
        int32_t x1_10 = x0_9 ^ x24_8
        char x2_9 = x23_4 ^ x10_4.b
        int32_t x21_9 = x22_8 ^ x26_5
        char x22_9 = x22_8.b ^ x27_3
        result = zx.q(x26_5.b) ^ zx.q(x27_3) ^ zx.q(x24_8.b) ^ zx.q(x0_9.b)
        int64_t x10_10 = (-0xff0001 & ((-0xff00000001 & ((-0xff000000000001
            & (zx.q(x22_9) ^ zx.q(x10_4.b) ^ zx.q(x26_5.b)))
            | (zx.q(x22_9) ^ zx.q(x2_9) ^ zx.q(x0_9.b)) << 0x30))
            | (zx.q(x22_9) ^ zx.q(x19_3) ^ zx.q(x26_5.b)) << 0x20))
            | (zx.q(x22_8.b) ^ zx.q(x19_3) ^ zx.q(x25_9) ^ zx.q(x0_9.b)) << 0x10
        int64_t x10_13 = (-0xff000001 & ((-0xff01 & x10_10) | (0xff & result) << 8))
            | ((zx.q(x0_9.b) ^ zx.q(x2_9) ^ zx.q(x21_9.b)) & 0xff) << 0x18
            | (zx.q(x1_10.b) ^ zx.q(x2_9) ^ zx.q(x25_9) ^ zx.q(x26_5.b)) << 0x28
        uint64_t x10_15 = *(x21 - 0x10) ^ x20
            ^ (x10_13 | (zx.q(x1_10) ^ zx.q(x10_4) ^ zx.q(x3_8) ^ zx.q(x21_9)) << 0x38)
        uint64_t x9_17 = _byteswap(x9_15 ^ *(x21 - 0x18))
        uint64_t x10_16 = _byteswap(x10_15)
        *x7_1 = x9_17
        x7_1[1] = x10_16
    while (not(cond:0_1))

*(sp - 0x10)
*(sp - 8)
*(sp - 0x20)
*(sp - 0x18)
*(sp - 0x30)
*(sp - 0x28)
*(sp - 0x40)
*(sp - 0x38)
*(sp - 0x50)
*(sp - 0x48)
*(sp - 0x60)
return result
