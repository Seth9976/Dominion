// 函数: _ZNK5Botan8ARIA_1289encrypt_nEPKhPhm
// 地址: 0xcac40c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_10
int64_t* sp = &var_10
int64_t lr
var_10 = lr
uint8_t* x0
uint64_t x1
int64_t x2
void* x3
int64_t lr_1

if (*(arg1 + 0x10) == *(arg1 + 8))
    x0, x1, x2, x3, lr_1 = Botan::SymmetricAlgorithm::throw_key_not_set_error()
else
    x0 = arg2
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
*(sp - 0x78) = x0
*(sp - 0x70) = x2
int64_t x11 = *(Botan::CPUID::state() + 8)
*(sp - 0x64) = 0x11101010
uint64_t result

for (int64_t i = 0; i u< 0x100; )
    int64_t x14_1 = i << 2
    result = zx.q(*(&data_849a80 + x14_1))
    i += x11 u>> 2
    *(sp - 0x64) |=
        *(&data_849680 + x14_1) | *(&data_849280 + x14_1) | result.d | *(&data_849e80 + x14_1)

if (*(sp - 0x70) != 0)
    uint64_t x2_2 = (*(x3 + 8) - *x3) s>> 2 u>> 2
    int64_t x12_1 = 0
    int64_t x3_2 = (x2_2 - 1) << 4
    int64_t x4_2 = (1 | (0x3fffffffffffffff & (x2_2 - 1)) << 2) << 2
    int64_t x5_2 = (2 | (0x3fffffffffffffff & (x2_2 - 1)) << 2) << 2
    int64_t x6_2 = (3 | (0x3fffffffffffffff & (x2_2 - 1)) << 2) << 2
    int64_t x15_2
    
    do
        int64_t x23_1 = x12_1 << 4
        int32_t* x24_4 = *(sp - 0x78) + x23_1
        int32_t x26_47 = x24_4[1]
        int32_t x27_28 = x24_4[2]
        int32_t x24_5 = x24_4[3]
        int32_t fp_5 = *(sp - 0x64)
        int32_t temp0_1 = _byteswap(*x24_4)
        int32_t x28 = _byteswap(x26_47)
        int32_t x25 = _byteswap(x27_28)
        int32_t x24 = _byteswap(x24_5)
        int32_t fp = fp_5 & temp0_1
        
        if (x2_2 != 1)
            int64_t i_1 = 0
            int32_t* x27_30 = *x3 + 0x10
            
            do
                int32_t fp_6 = x27_30[-4] ^ fp
                int32_t x16_5 = x27_30[-2] ^ x25
                int32_t x17_3 = x27_30[-1] ^ x24
                int32_t x15_5 = x27_30[-3] ^ x28
                int32_t x7_4 = *(&data_849680 + ((zx.q(x16_5 u>> 0x10) & 0xff) << 2))
                    ^ *(&data_849280 + (zx.q(x16_5 u>> 0x18) << 2))
                    ^ *(&data_849a80 + ((zx.q(x16_5 u>> 8) & 0xff) << 2))
                int32_t x0_5 = *(&data_849680 + ((zx.q(x15_5 u>> 0x10) & 0xff) << 2))
                    ^ *(&data_849280 + (zx.q(x15_5 u>> 0x18) << 2))
                    ^ *(&data_849a80 + ((zx.q(x15_5 u>> 8) & 0xff) << 2))
                int32_t x20_3 = *(&data_849680 + ((zx.q(x17_3 u>> 0x10) & 0xff) << 2))
                    ^ *(&data_849280 + (zx.q(x17_3 u>> 0x18) << 2))
                    ^ *(&data_849a80 + ((zx.q(x17_3 u>> 8) & 0xff) << 2))
                int32_t x24_9 = *(&data_849680 + ((zx.q(fp_6 u>> 0x10) & 0xff) << 2))
                    ^ *(&data_849280 + (zx.q(fp_6 u>> 0x18) << 2))
                    ^ *(&data_849a80 + ((zx.q(fp_6 u>> 8) & 0xff) << 2))
                int32_t x16_8 = x7_4 ^ *(&data_849e80 + ((zx.q(x16_5) & 0xff) << 2))
                int32_t x17_6 = x20_3 ^ *(&data_849e80 + ((zx.q(x17_3) & 0xff) << 2))
                int32_t x22_6 = x24_9 ^ *(&data_849e80 + ((zx.q(fp_6) & 0xff) << 2))
                int32_t x15_9 = x0_5 ^ *(&data_849e80 + ((zx.q(x15_5) & 0xff) << 2)) ^ x16_8
                int32_t x16_9 = x17_6 ^ x16_8
                int32_t x7_5 = x15_9 ^ x22_6
                int32_t x17_7 = x16_9 ^ x22_6
                result = zx.q(*x27_30)
                int32_t x24_10 = x27_30[1]
                int32_t x20_5 = x27_30[2]
                int32_t x22_7 = x27_30[3]
                int32_t temp0_5 = _byteswap(x17_6 ^ x15_9)
                int32_t x16_11 = ror.d(x16_9 ^ x7_5, 0x10)
                int32_t x17_10 = ((0xff00ff00 & x17_7 << 8) | (0xff00ff & x17_7 u>> 8)) ^ x16_11
                int32_t x15_12 = x16_11 ^ temp0_5
                int32_t x7_6 = x17_10 ^ x7_5
                x28 = x24_10 ^ x7_5 ^ x15_12
                fp = x7_6 ^ result.d
                x25 = x15_12 ^ x20_5 ^ x7_6
                x24 = x22_7 ^ temp0_5 ^ x17_10
                
                if (x2_2 - 3 != i_1)
                    int32_t x15_17 = *(&data_849e80 + ((zx.q(fp u>> 0x10) & 0xff) << 2))
                        ^ *(&data_849a80 + (zx.q(fp u>> 0x18) << 2))
                        ^ *(&data_849280 + ((zx.q(fp u>> 8) & 0xff) << 2))
                    int32_t x17_13 = *(&data_849e80 + ((zx.q(x28 u>> 0x10) & 0xff) << 2))
                        ^ *(&data_849a80 + (zx.q(x28 u>> 0x18) << 2))
                        ^ *(&data_849280 + ((zx.q(x28 u>> 8) & 0xff) << 2))
                    int32_t x0_9 = *(&data_849e80 + ((zx.q(x25 u>> 0x10) & 0xff) << 2))
                        ^ *(&data_849a80 + (zx.q(x25 u>> 0x18) << 2))
                        ^ *(&data_849280 + ((zx.q(x25 u>> 8) & 0xff) << 2))
                    int32_t x16_18 = *(&data_849e80 + ((zx.q(x24 u>> 0x10) & 0xff) << 2))
                        ^ *(&data_849a80 + (zx.q(x24 u>> 0x18) << 2))
                        ^ *(&data_849280 + ((zx.q(x24 u>> 8) & 0xff) << 2))
                    int32_t x0_10 = x0_9 ^ *(&data_849680 + ((zx.q(x25) & 0xff) << 2))
                    int32_t x16_19 = x16_18 ^ *(&data_849680 + ((zx.q(x24) & 0xff) << 2))
                    int32_t x15_18 = x15_17 ^ *(&data_849680 + ((zx.q(fp) & 0xff) << 2))
                    int32_t x17_15 = x17_13 ^ *(&data_849680 + ((zx.q(x28) & 0xff) << 2)) ^ x0_10
                    int32_t x0_11 = x16_19 ^ x0_10
                    int32_t x7_13 = x17_15 ^ x15_18
                    int32_t x16_20 = x16_19 ^ x17_15
                    int32_t x17_16 = x0_11 ^ x7_13
                    result = 0xff00ff00 & zx.q(x16_20 << 8)
                    int32_t x7_14 = ror.d(x7_13, 0x10)
                    int32_t x16_22 = result.d | (0xff00ff & x16_20 u>> 8)
                    int32_t x15_21 = _byteswap(x0_11 ^ x15_18) ^ x17_16
                    int32_t x17_17 = x16_22 ^ x17_16
                    fp = x15_21 ^ x7_14
                    x24 = x16_22 ^ x15_21
                    x25 = x17_17 ^ fp
                    x28 = x17_17 ^ x7_14
                
                i_1 += 2
                x27_30 = &x27_30[8]
            while (i_1 u< x2_2 - 1)
        
        x12_1 += 1
        *(x1 + x23_1) = *(*x3 + x3_2 + 3) ^ (*(&data_849a80 + (zx.q(fp u>> 0x18) << 2))).b
        *(x1 + (x23_1 | 1)) =
            (*(*x3 + x3_2 + 2)).b ^ (*(&data_849e80 + ((zx.q(fp u>> 0x10) & 0xff) << 2)) u>> 8).b
        *(x1 + (x23_1 | 2)) =
            (*(&data_849280 + ((zx.q(fp u>> 8) & 0xff) << 2))).b ^ ((*x3)[(x2_2 - 1) * 4] u>> 8).b
        *(x1 + (x23_1 | 3)) = (*(*x3 + x3_2)).b ^ (*(&data_849680 + ((zx.q(fp) & 0xff) << 2))).b
        *(x1 + (x23_1 | 4)) = *(*x3 + x4_2 + 3) ^ (*(&data_849a80 + (zx.q(x28 u>> 0x18) << 2))).b
        *(x1 + (x23_1 | 5)) =
            (*(*x3 + x4_2 + 2)).b ^ (*(&data_849e80 + ((zx.q(x28 u>> 0x10) & 0xff) << 2)) u>> 8).b
        *(x1 + (x23_1 | 6)) = (*(&data_849280 + ((zx.q(x28 u>> 8) & 0xff) << 2))).b
            ^ ((*x3)[1 | (0x3fffffffffffffff & (x2_2 - 1)) << 2] u>> 8).b
        *(x1 + (x23_1 | 7)) = (*(*x3 + x4_2)).b ^ (*(&data_849680 + ((zx.q(x28) & 0xff) << 2))).b
        *(x1 + (x23_1 | 8)) = *(*x3 + x5_2 + 3) ^ (*(&data_849a80 + (zx.q(x25 u>> 0x18) << 2))).b
        *(x1 + (x23_1 | 9)) =
            (*(*x3 + x5_2 + 2)).b ^ (*(&data_849e80 + ((zx.q(x25 u>> 0x10) & 0xff) << 2)) u>> 8).b
        char x25_2 = (*(&data_849680 + ((zx.q(x25) & 0xff) << 2))).b
        *(x1 + (x23_1 | 0xa)) = (*(&data_849280 + ((zx.q(x25 u>> 8) & 0xff) << 2))).b
            ^ ((*x3)[2 | (0x3fffffffffffffff & (x2_2 - 1)) << 2] u>> 8).b
        *(x1 + (x23_1 | 0xb)) = (*(*x3 + x5_2)).b ^ x25_2
        *(x1 + (x23_1 | 0xc)) = *(*x3 + x6_2 + 3) ^ (*(&data_849a80 + (zx.q(x24 u>> 0x18) << 2))).b
        x15_2 = *(sp - 0x70)
        *(x1 + (x23_1 | 0xd)) =
            (*(*x3 + x6_2 + 2)).b ^ (*(&data_849e80 + ((zx.q(x24 u>> 0x10) & 0xff) << 2)) u>> 8).b
        char x24_2 = (*(&data_849680 + ((zx.q(x24) & 0xff) << 2))).b
        *(x1 + (x23_1 | 0xe)) = (*(&data_849280 + ((zx.q(x24 u>> 8) & 0xff) << 2))).b
            ^ ((*x3)[3 | (0x3fffffffffffffff & (x2_2 - 1)) << 2] u>> 8).b
        *(x1 + (x23_1 | 0xf)) = (*(*x3 + x6_2)).b ^ x24_2
    while (x12_1 != x15_2)

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
