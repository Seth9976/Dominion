// 函数: _ZNK5Botan3DES9encrypt_nEPKhPhm
// 地址: 0xd0c83c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x4 = *(arg1 + 8)
uint8_t const* x20 = arg1

if (x4 == *(arg1 + 0x10))
    int32_t* x0_19
    int32_t* x1_19
    int32_t* x2_6
    int32_t* x3_8
    void* x4_7
    x0_19, x1_19, x2_6, x3_8, x4_7 = Botan::SymmetricAlgorithm::throw_key_not_set_error()
    return sub_d0ccd8(x0_19, x1_19, x2_6, x3_8, x4_7) __tailcall

int64_t entry_x3
int64_t x22 = entry_x3
uint64_t x19 = arg3
uint8_t* x21 = arg2
int64_t x8_1 = entry_x3 - 2

if (entry_x3 u>= 2)
    while (true)
        x21 = &x21[0x10]
        x22 = x8_1
        int32_t x8_2 = *(x21 - 0x10)
        int32_t temp0_1 = _byteswap(*(x21 - 0xc))
        int32_t temp0_2 = _byteswap(x8_2)
        int32_t x9_3 = ror.d(temp0_1, 0x1c)
        int32_t x10_2 = (x9_3 ^ temp0_2) & 0xf0f0f0f0
        int32_t x8_4 = x10_2 ^ temp0_2
        int32_t x9_5 = ror.d(x10_2 ^ x9_3, 0x14)
        int32_t x10_4 = (x9_5 ^ x8_4) & 0xffff0000
        int32_t x8_5 = x10_4 ^ x8_4
        int32_t x9_7 = ror.d(x10_4 ^ x9_5, 0x12)
        int32_t x10_6 = (x9_7 ^ x8_5) & 0x33333333
        int32_t x8_6 = x10_6 ^ x8_5
        int32_t x9_9 = ror.d(x10_6 ^ x9_7, 6)
        int32_t x10_8 = (x9_9 ^ x8_6) & 0xff00ff
        int32_t x8_7 = x10_8 ^ x8_6
        int32_t x9_11 = ror.d(x10_8 ^ x9_9, 0x17)
        int32_t x10_10 = (x9_11 ^ x8_7) & 0xaaaaaaaa
        int32_t var_48 = x10_10 ^ x9_11
        int32_t var_44 = ror.d(x10_10 ^ x8_7, 0x1f)
        int32_t x8_10 = *(x21 - 8)
        x19 += 0x10
        int32_t temp0_3 = _byteswap(*(x21 - 4))
        int32_t temp0_4 = _byteswap(x8_10)
        int32_t x9_15 = ror.d(temp0_3, 0x1c)
        int32_t x10_12 = (x9_15 ^ temp0_4) & 0xf0f0f0f0
        int32_t x8_12 = x10_12 ^ temp0_4
        int32_t x9_17 = ror.d(x10_12 ^ x9_15, 0x14)
        int32_t x10_14 = (x9_17 ^ x8_12) & 0xffff0000
        int32_t x8_13 = x10_14 ^ x8_12
        int32_t x9_19 = ror.d(x10_14 ^ x9_17, 0x12)
        int32_t x10_16 = (x9_19 ^ x8_13) & 0x33333333
        int32_t x8_14 = x10_16 ^ x8_13
        int32_t x9_21 = ror.d(x10_16 ^ x9_19, 6)
        int32_t x10_18 = (x9_21 ^ x8_14) & 0xff00ff
        int32_t x8_15 = x10_18 ^ x8_14
        int32_t x9_23 = ror.d(x10_18 ^ x9_21, 0x17)
        int32_t x10_20 = (x9_23 ^ x8_15) & 0xaaaaaaaa
        int32_t var_58 = x10_20 ^ x9_23
        int32_t var_54 = ror.d(x10_20 ^ x8_15, 0x1f)
        sub_d0ccd8(&var_44, &var_48, &var_54, &var_58, x4)
        int32_t x9_25 = var_44
        int32_t x8_19 = ror.d(var_48, 1)
        int32_t x10_22 = (x8_19 ^ x9_25) & 0xaaaaaaaa
        int32_t x8_20 = x10_22 ^ x8_19
        int32_t x9_27 = ror.d(x10_22 ^ x9_25, 9)
        int32_t x10_24 = (x9_27 ^ x8_20) & 0xff00ff
        int32_t x8_21 = x10_24 ^ x8_20
        uint32_t x9_28 = (((x10_24 ^ x9_27) << 0x20 | x9_27) u>> 0x1a).d
        int32_t x10_27 = (x9_28 ^ x8_21) & 0x33333333
        int32_t x8_22 = x10_27 ^ x8_21
        int32_t x9_30 = ror.d(x10_27 ^ x9_28, 0xe)
        int32_t x10_29 = (x9_30 ^ x8_22) & 0xffff0000
        int32_t x8_23 = x10_29 ^ x8_22
        uint32_t x9_31 = ((x9_30 << 0x20 | (x10_29 ^ x9_30)) u>> 0xc).d
        int32_t x10_32 = (x9_31 ^ x8_23) & 0xf0f0f0f0
        int32_t temp0_5 = _byteswap(x10_32 ^ x8_23)
        int32_t temp0_6 = _byteswap(((x9_31 << 0x20 | (x10_32 ^ x9_31)) u>> 4).d)
        *(x19 - 0x10) = temp0_5
        *(x19 - 0xc) = temp0_6
        int32_t x9_34 = var_54
        int32_t x8_27 = ror.d(var_58, 1)
        int32_t x10_35 = (x8_27 ^ x9_34) & 0xaaaaaaaa
        int32_t x8_28 = x10_35 ^ x8_27
        int32_t x9_36 = ror.d(x10_35 ^ x9_34, 9)
        int32_t x10_37 = (x9_36 ^ x8_28) & 0xff00ff
        int32_t x8_29 = x10_37 ^ x8_28
        uint32_t x9_37 = (((x10_37 ^ x9_36) << 0x20 | x9_36) u>> 0x1a).d
        int32_t x10_40 = (x9_37 ^ x8_29) & 0x33333333
        int32_t x8_30 = x10_40 ^ x8_29
        int32_t x9_39 = ror.d(x10_40 ^ x9_37, 0xe)
        int32_t x10_42 = (x9_39 ^ x8_30) & 0xffff0000
        int32_t x8_31 = x10_42 ^ x8_30
        uint32_t x9_40 = ((x9_39 << 0x20 | (x10_42 ^ x9_39)) u>> 0xc).d
        int32_t x10_45 = (x9_40 ^ x8_31) & 0xf0f0f0f0
        x8_1 = x22 - 2
        int32_t temp0_7 = _byteswap(x10_45 ^ x8_31)
        int32_t temp0_8 = _byteswap(((x9_40 << 0x20 | (x10_45 ^ x9_40)) u>> 4).d)
        *(x19 - 8) = temp0_7
        *(x19 - 4) = temp0_8
        
        if (x22 u< 2)
            break
        
        x4 = *(x20 + 8)

if (x22 == 0)
    return 

int32_t x17_1 = *x21
int32_t temp0_9 = _byteswap(*(x21 + 4))
int32_t temp0_10 = _byteswap(x17_1)
int32_t x0_2 = ror.d(temp0_9, 0x1c)
int32_t x1_2 = (x0_2 ^ temp0_10) & 0xf0f0f0f0
int32_t x17_3 = x1_2 ^ temp0_10
int32_t x0_4 = ror.d(x1_2 ^ x0_2, 0x14)
int32_t x1_4 = (x0_4 ^ x17_3) & 0xffff0000
int32_t x17_4 = x1_4 ^ x17_3
int32_t x0_6 = ror.d(x1_4 ^ x0_4, 0x12)
int32_t x1_6 = (x0_6 ^ x17_4) & 0x33333333
int32_t x17_5 = x1_6 ^ x17_4
int32_t x0_8 = ror.d(x1_6 ^ x0_6, 6)
int32_t x1_8 = (x0_8 ^ x17_5) & 0xff00ff
int32_t x17_6 = x1_8 ^ x17_5
int32_t x0_10 = ror.d(x1_8 ^ x0_8, 0x17)
int32_t x1_10 = (x0_10 ^ x17_6) & 0xaaaaaaaa
arg1 = zx.q(x1_10) ^ zx.q(x0_10)
int32_t x1_11 = ror.d(x1_10 ^ x17_6, 0x1f)

for (int64_t i = 0; i != 0x80; )
    int32_t* x2_1 = *(x20 + 8) + i
    i += 0x10
    int32_t x3_2 = *x2_1 ^ ror.d(arg1.d, 4)
    int32_t x4_2 = x2_1[1] ^ arg1.d
    int32_t x1_14 = *(Botan::DES_SPBOX1 + (zx.q(x3_2 u>> 0x18) << 2)) ^ x1_11
        ^ *(Botan::DES_SPBOX2 + (zx.q(x4_2 u>> 0x18) << 2))
        ^ *(Botan::DES_SPBOX3 + ((zx.q(x3_2 u>> 0x10) & 0xff) << 2))
    int32_t x1_17 = x1_14 ^ *(Botan::DES_SPBOX4 + ((zx.q(x4_2 u>> 0x10) & 0xff) << 2))
        ^ *(Botan::DES_SPBOX5 + ((zx.q(x3_2 u>> 8) & 0xff) << 2))
        ^ *(Botan::DES_SPBOX6 + ((zx.q(x4_2 u>> 8) & 0xff) << 2))
    x1_11 = x1_17 ^ *(Botan::DES_SPBOX7 + ((zx.q(x3_2) & 0xff) << 2))
        ^ *(Botan::DES_SPBOX8 + ((zx.q(x4_2) & 0xff) << 2))
    int32_t x3_5 = x2_1[2] ^ ror.d(x1_11, 4)
    int32_t x2_3 = x2_1[3] ^ x1_11
    int32_t x0_13 = *(Botan::DES_SPBOX1 + (zx.q(x3_5 u>> 0x18) << 2)) ^ arg1.d
        ^ *(Botan::DES_SPBOX2 + (zx.q(x2_3 u>> 0x18) << 2))
        ^ *(Botan::DES_SPBOX3 + ((zx.q(x3_5 u>> 0x10) & 0xff) << 2))
    int32_t x0_16 = x0_13 ^ *(Botan::DES_SPBOX4 + ((zx.q(x2_3 u>> 0x10) & 0xff) << 2))
        ^ *(Botan::DES_SPBOX5 + ((zx.q(x3_5 u>> 8) & 0xff) << 2))
        ^ *(Botan::DES_SPBOX6 + ((zx.q(x2_3 u>> 8) & 0xff) << 2))
    arg1 = zx.q(x0_16) ^ zx.q(*(Botan::DES_SPBOX7 + ((zx.q(x3_5) & 0xff) << 2)))
        ^ zx.q(*(Botan::DES_SPBOX8 + ((zx.q(x2_3) & 0xff) << 2)))

int32_t x8_33 = ror.d(arg1.d, 1)
int32_t x9_45 = (x8_33 ^ x1_11) & 0xaaaaaaaa
int32_t x8_34 = x9_45 ^ x8_33
int32_t x9_47 = ror.d(x9_45 ^ x1_11, 9)
int32_t x10_48 = (x9_47 ^ x8_34) & 0xff00ff
int32_t x8_35 = x10_48 ^ x8_34
uint32_t x9_48 = (((x10_48 ^ x9_47) << 0x20 | x9_47) u>> 0x1a).d
int32_t x10_51 = (x9_48 ^ x8_35) & 0x33333333
int32_t x8_36 = x10_51 ^ x8_35
int32_t x9_50 = ror.d(x10_51 ^ x9_48, 0xe)
int32_t x10_53 = (x9_50 ^ x8_36) & 0xffff0000
int32_t x8_37 = x10_53 ^ x8_36
uint32_t x9_51 = ((x9_50 << 0x20 | (x10_53 ^ x9_50)) u>> 0xc).d
int32_t x10_56 = (x9_51 ^ x8_37) & 0xf0f0f0f0
int32_t temp0_11 = _byteswap(x10_56 ^ x8_37)
int32_t temp0_12 = _byteswap(((x9_51 << 0x20 | (x10_56 ^ x9_51)) u>> 4).d)
*x19 = temp0_11
*(x19 + 4) = temp0_12
