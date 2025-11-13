// 函数: _ZNK5Botan9TripleDES9encrypt_nEPKhPhm
// 地址: 0xd0db40
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x4 = *(arg1 + 8)
uint8_t const* x19 = arg1

if (x4 == *(arg1 + 0x10))
    uint8_t* x0_11
    uint8_t* x1_40
    uint64_t x2_49
    x0_11, x1_40, x2_49 = Botan::SymmetricAlgorithm::throw_key_not_set_error()
    return Botan::TripleDES::decrypt_n(x0_11, x1_40, x2_49) __tailcall

int64_t entry_x3
int64_t x22 = entry_x3
uint64_t x20 = arg3
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
        int32_t var_68 = x10_10 ^ x9_11
        int32_t var_64 = ror.d(x10_10 ^ x8_7, 0x1f)
        int32_t x8_10 = *(x21 - 8)
        x20 += 0x10
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
        int32_t var_70 = x10_20 ^ x9_23
        int32_t var_6c = ror.d(x10_20 ^ x8_15, 0x1f)
        sub_d0ccd8(&var_64, &var_68, &var_6c, &var_70, x4)
        sub_d0d3c4(&var_68, &var_64, &var_70, &var_6c, *(x19 + 8) + 0x80)
        sub_d0ccd8(&var_64, &var_68, &var_6c, &var_70, *(x19 + 8) + 0x100)
        int32_t x9_25 = var_64
        int32_t x8_21 = ror.d(var_68, 1)
        int32_t x10_22 = (x8_21 ^ x9_25) & 0xaaaaaaaa
        int32_t x8_22 = x10_22 ^ x8_21
        int32_t x9_27 = ror.d(x10_22 ^ x9_25, 9)
        int32_t x10_24 = (x9_27 ^ x8_22) & 0xff00ff
        int32_t x8_23 = x10_24 ^ x8_22
        uint32_t x9_28 = (((x10_24 ^ x9_27) << 0x20 | x9_27) u>> 0x1a).d
        int32_t x10_27 = (x9_28 ^ x8_23) & 0x33333333
        int32_t x8_24 = x10_27 ^ x8_23
        int32_t x9_30 = ror.d(x10_27 ^ x9_28, 0xe)
        int32_t x10_29 = (x9_30 ^ x8_24) & 0xffff0000
        int32_t x8_25 = x10_29 ^ x8_24
        uint32_t x9_31 = ((x9_30 << 0x20 | (x10_29 ^ x9_30)) u>> 0xc).d
        int32_t x10_32 = (x9_31 ^ x8_25) & 0xf0f0f0f0
        int32_t temp0_5 = _byteswap(x10_32 ^ x8_25)
        int32_t temp0_6 = _byteswap(((x9_31 << 0x20 | (x10_32 ^ x9_31)) u>> 4).d)
        *(x20 - 0x10) = temp0_5
        *(x20 - 0xc) = temp0_6
        int32_t x9_34 = var_6c
        int32_t x8_29 = ror.d(var_70, 1)
        int32_t x10_35 = (x8_29 ^ x9_34) & 0xaaaaaaaa
        int32_t x8_30 = x10_35 ^ x8_29
        int32_t x9_36 = ror.d(x10_35 ^ x9_34, 9)
        int32_t x10_37 = (x9_36 ^ x8_30) & 0xff00ff
        int32_t x8_31 = x10_37 ^ x8_30
        uint32_t x9_37 = (((x10_37 ^ x9_36) << 0x20 | x9_36) u>> 0x1a).d
        int32_t x10_40 = (x9_37 ^ x8_31) & 0x33333333
        int32_t x8_32 = x10_40 ^ x8_31
        int32_t x9_39 = ror.d(x10_40 ^ x9_37, 0xe)
        int32_t x10_42 = (x9_39 ^ x8_32) & 0xffff0000
        int32_t x8_33 = x10_42 ^ x8_32
        uint32_t x9_40 = ((x9_39 << 0x20 | (x10_42 ^ x9_39)) u>> 0xc).d
        int32_t x10_45 = (x9_40 ^ x8_33) & 0xf0f0f0f0
        x8_1 = x22 - 2
        int32_t temp0_7 = _byteswap(x10_45 ^ x8_33)
        int32_t temp0_8 = _byteswap(((x9_40 << 0x20 | (x10_45 ^ x9_40)) u>> 4).d)
        *(x20 - 8) = temp0_7
        *(x20 - 4) = temp0_8
        
        if (x22 u< 2)
            break
        
        x4 = *(x19 + 8)

if (x22 == 0)
    return 

int64_t x8_35 = 0

do
    int64_t x17_1 = x8_35 << 3
    void* x0_2 = &x21[x17_1]
    int32_t x1_3 = *x0_2
    void* x0_3 = *(x19 + 8)
    int64_t i = 0
    int32_t temp0_9 = _byteswap(*(x0_2 + 4))
    int32_t temp0_10 = _byteswap(x1_3)
    int32_t x2_5 = ror.d(temp0_9, 0x1c)
    int32_t x4_4 = (x2_5 ^ temp0_10) & 0xf0f0f0f0
    int32_t x1_5 = x4_4 ^ temp0_10
    int32_t x2_7 = ror.d(x4_4 ^ x2_5, 0x14)
    int32_t x4_6 = (x2_7 ^ x1_5) & 0xffff0000
    int32_t x1_6 = x4_6 ^ x1_5
    int32_t x2_9 = ror.d(x4_6 ^ x2_7, 0x12)
    int32_t x4_8 = (x2_9 ^ x1_6) & 0x33333333
    int32_t x1_7 = x4_8 ^ x1_6
    int32_t x2_11 = ror.d(x4_8 ^ x2_9, 6)
    int32_t x4_10 = (x2_11 ^ x1_7) & 0xff00ff
    int32_t x1_8 = x4_10 ^ x1_7
    int32_t x2_13 = ror.d(x4_10 ^ x2_11, 0x17)
    int32_t x4_12 = (x2_13 ^ x1_8) & 0xaaaaaaaa
    int32_t x2_14 = x4_12 ^ x2_13
    int32_t x1_10 = ror.d(x4_12 ^ x1_8, 0x1f)
    
    do
        int32_t* x4_13 = x0_3 + i
        i += 0x10
        int32_t x5_2 = *x4_13 ^ ror.d(x2_14, 4)
        int32_t x6_2 = x4_13[1] ^ x2_14
        int32_t x1_13 = *(Botan::DES_SPBOX1 + (zx.q(x5_2 u>> 0x18) << 2)) ^ x1_10
            ^ *(Botan::DES_SPBOX2 + (zx.q(x6_2 u>> 0x18) << 2))
            ^ *(Botan::DES_SPBOX3 + ((zx.q(x5_2 u>> 0x10) & 0xff) << 2))
        int32_t x1_16 = x1_13 ^ *(Botan::DES_SPBOX4 + ((zx.q(x6_2 u>> 0x10) & 0xff) << 2))
            ^ *(Botan::DES_SPBOX5 + ((zx.q(x5_2 u>> 8) & 0xff) << 2))
            ^ *(Botan::DES_SPBOX6 + ((zx.q(x6_2 u>> 8) & 0xff) << 2))
        x1_10 = x1_16 ^ *(Botan::DES_SPBOX7 + ((zx.q(x5_2) & 0xff) << 2))
            ^ *(Botan::DES_SPBOX8 + ((zx.q(x6_2) & 0xff) << 2))
        int32_t x5_5 = x4_13[2] ^ ror.d(x1_10, 4)
        int32_t x4_15 = x4_13[3] ^ x1_10
        int32_t x2_17 = *(Botan::DES_SPBOX1 + (zx.q(x5_5 u>> 0x18) << 2)) ^ x2_14
            ^ *(Botan::DES_SPBOX2 + (zx.q(x4_15 u>> 0x18) << 2))
            ^ *(Botan::DES_SPBOX3 + ((zx.q(x5_5 u>> 0x10) & 0xff) << 2))
        int32_t x2_20 = x2_17 ^ *(Botan::DES_SPBOX4 + ((zx.q(x4_15 u>> 0x10) & 0xff) << 2))
            ^ *(Botan::DES_SPBOX5 + ((zx.q(x5_5 u>> 8) & 0xff) << 2))
            ^ *(Botan::DES_SPBOX6 + ((zx.q(x4_15 u>> 8) & 0xff) << 2))
        x2_14 = x2_20 ^ *(Botan::DES_SPBOX7 + ((zx.q(x5_5) & 0xff) << 2))
            ^ *(Botan::DES_SPBOX8 + ((zx.q(x4_15) & 0xff) << 2))
    while (i != 0x80)
    
    for (int64_t i_1 = 0; i_1 != -0x80; )
        void* x4_18 = x0_3 + i_1
        i_1 -= 0x10
        int32_t x5_9 = *(x4_18 + 0xf8) ^ ror.d(x1_10, 4)
        int32_t x6_8 = *(x4_18 + 0xfc) ^ x1_10
        int32_t x2_24 = *(Botan::DES_SPBOX1 + (zx.q(x5_9 u>> 0x18) << 2)) ^ x2_14
            ^ *(Botan::DES_SPBOX2 + (zx.q(x6_8 u>> 0x18) << 2))
            ^ *(Botan::DES_SPBOX3 + ((zx.q(x5_9 u>> 0x10) & 0xff) << 2))
        int32_t x2_27 = x2_24 ^ *(Botan::DES_SPBOX4 + ((zx.q(x6_8 u>> 0x10) & 0xff) << 2))
            ^ *(Botan::DES_SPBOX5 + ((zx.q(x5_9 u>> 8) & 0xff) << 2))
            ^ *(Botan::DES_SPBOX6 + ((zx.q(x6_8 u>> 8) & 0xff) << 2))
        x2_14 = x2_27 ^ *(Botan::DES_SPBOX7 + ((zx.q(x5_9) & 0xff) << 2))
            ^ *(Botan::DES_SPBOX8 + ((zx.q(x6_8) & 0xff) << 2))
        int32_t x5_12 = *(x4_18 + 0xf0) ^ ror.d(x2_14, 4)
        int32_t x4_20 = *(x4_18 + 0xf4) ^ x2_14
        int32_t x1_20 = *(Botan::DES_SPBOX1 + (zx.q(x5_12 u>> 0x18) << 2)) ^ x1_10
            ^ *(Botan::DES_SPBOX2 + (zx.q(x4_20 u>> 0x18) << 2))
            ^ *(Botan::DES_SPBOX3 + ((zx.q(x5_12 u>> 0x10) & 0xff) << 2))
        int32_t x1_23 = x1_20 ^ *(Botan::DES_SPBOX4 + ((zx.q(x4_20 u>> 0x10) & 0xff) << 2))
            ^ *(Botan::DES_SPBOX5 + ((zx.q(x5_12 u>> 8) & 0xff) << 2))
            ^ *(Botan::DES_SPBOX6 + ((zx.q(x4_20 u>> 8) & 0xff) << 2))
        x1_10 = x1_23 ^ *(Botan::DES_SPBOX7 + ((zx.q(x5_12) & 0xff) << 2))
            ^ *(Botan::DES_SPBOX8 + ((zx.q(x4_20) & 0xff) << 2))
    
    for (int64_t i_2 = 0; i_2 != 0x80; )
        void* x4_23 = x0_3 + i_2
        int32_t x5_16 = *(x4_23 + 0x100) ^ ror.d(x2_14, 4)
        int32_t x6_14 = *(x4_23 + 0x104) ^ x2_14
        int32_t x1_27 = *(Botan::DES_SPBOX1 + (zx.q(x5_16 u>> 0x18) << 2)) ^ x1_10
            ^ *(Botan::DES_SPBOX2 + (zx.q(x6_14 u>> 0x18) << 2))
            ^ *(Botan::DES_SPBOX3 + ((zx.q(x5_16 u>> 0x10) & 0xff) << 2))
        int32_t x1_30 = x1_27 ^ *(Botan::DES_SPBOX4 + ((zx.q(x6_14 u>> 0x10) & 0xff) << 2))
            ^ *(Botan::DES_SPBOX5 + ((zx.q(x5_16 u>> 8) & 0xff) << 2))
            ^ *(Botan::DES_SPBOX6 + ((zx.q(x6_14 u>> 8) & 0xff) << 2))
        x1_10 = x1_30 ^ *(Botan::DES_SPBOX7 + ((zx.q(x5_16) & 0xff) << 2))
            ^ *(Botan::DES_SPBOX8 + ((zx.q(x6_14) & 0xff) << 2))
        int32_t x5_19 = *(x4_23 + 0x108) ^ ror.d(x1_10, 4)
        int32_t x4_25 = *(x4_23 + 0x10c) ^ x1_10
        int32_t x2_31 = *(Botan::DES_SPBOX1 + (zx.q(x5_19 u>> 0x18) << 2)) ^ x2_14
            ^ *(Botan::DES_SPBOX2 + (zx.q(x4_25 u>> 0x18) << 2))
            ^ *(Botan::DES_SPBOX3 + ((zx.q(x5_19 u>> 0x10) & 0xff) << 2))
        int32_t x2_34 = x2_31 ^ *(Botan::DES_SPBOX4 + ((zx.q(x4_25 u>> 0x10) & 0xff) << 2))
            ^ *(Botan::DES_SPBOX5 + ((zx.q(x5_19 u>> 8) & 0xff) << 2))
            ^ *(Botan::DES_SPBOX6 + ((zx.q(x4_25 u>> 8) & 0xff) << 2))
        i_2 += 0x10
        x2_14 = x2_34 ^ *(Botan::DES_SPBOX7 + ((zx.q(x5_19) & 0xff) << 2))
            ^ *(Botan::DES_SPBOX8 + ((zx.q(x4_25) & 0xff) << 2))
    
    int32_t x0_4 = ror.d(x2_14, 1)
    int32_t x2_37 = (x0_4 ^ x1_10) & 0xaaaaaaaa
    int32_t x0_5 = x2_37 ^ x0_4
    int32_t x1_33 = ror.d(x2_37 ^ x1_10, 9)
    int32_t x2_39 = (x1_33 ^ x0_5) & 0xff00ff
    int32_t x0_6 = x2_39 ^ x0_5
    uint32_t x1_34 = (((x2_39 ^ x1_33) << 0x20 | x1_33) u>> 0x1a).d
    int32_t x2_42 = (x1_34 ^ x0_6) & 0x33333333
    int32_t x0_7 = x2_42 ^ x0_6
    int32_t x1_36 = ror.d(x2_42 ^ x1_34, 0xe)
    int32_t x2_44 = (x1_36 ^ x0_7) & 0xffff0000
    int32_t x0_8 = x2_44 ^ x0_7
    uint32_t x1_37 = ((x1_36 << 0x20 | (x2_44 ^ x1_36)) u>> 0xc).d
    int32_t x2_47 = (x1_37 ^ x0_8) & 0xf0f0f0f0
    x8_35 += 1
    int64_t x17_2 = x20 + x17_1
    arg1 = zx.q(_byteswap(x2_47 ^ x0_8))
    int32_t temp0_12 = _byteswap(((x1_37 << 0x20 | (x2_47 ^ x1_37)) u>> 4).d)
    *x17_2 = arg1.d
    *(x17_2 + 4) = temp0_12
while (x8_35 != x22)
