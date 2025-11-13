// 函数: sub_d0ccd8
// 地址: 0xd0ccd8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x5 = *arg1
int32_t x17 = *arg2
int32_t x7 = *arg3
int32_t x6 = *arg4

for (int64_t i = 0; i != 0x80; )
    int32_t* x19_1 = arg5 + i
    int32_t x20_1 = *x19_1
    int32_t x21_1 = x19_1[1]
    int32_t x22_1 = x19_1[2]
    int32_t x19_2 = x19_1[3]
    i += 0x10
    int32_t x23_1 = x20_1 ^ ror.d(x17, 4)
    int32_t x24_1 = x21_1 ^ x17
    int32_t x20_2 = x20_1 ^ ror.d(x6, 4)
    int32_t x21_2 = x21_1 ^ x6
    int32_t x5_3 = *(Botan::DES_SPBOX1 + (zx.q(x23_1 u>> 0x18) << 2)) ^ x5
        ^ *(Botan::DES_SPBOX2 + (zx.q(x24_1 u>> 0x18) << 2))
        ^ *(Botan::DES_SPBOX3 + ((zx.q(x23_1 u>> 0x10) & 0xff) << 2))
    int32_t x7_3 = *(Botan::DES_SPBOX1 + (zx.q(x20_2 u>> 0x18) << 2)) ^ x7
        ^ *(Botan::DES_SPBOX2 + (zx.q(x21_2 u>> 0x18) << 2))
        ^ *(Botan::DES_SPBOX3 + ((zx.q(x20_2 u>> 0x10) & 0xff) << 2))
    int32_t x5_6 = x5_3 ^ *(Botan::DES_SPBOX4 + ((zx.q(x24_1 u>> 0x10) & 0xff) << 2))
        ^ *(Botan::DES_SPBOX5 + ((zx.q(x23_1 u>> 8) & 0xff) << 2))
        ^ *(Botan::DES_SPBOX6 + ((zx.q(x24_1 u>> 8) & 0xff) << 2))
    int32_t x7_6 = x7_3 ^ *(Botan::DES_SPBOX4 + ((zx.q(x21_2 u>> 0x10) & 0xff) << 2))
        ^ *(Botan::DES_SPBOX5 + ((zx.q(x20_2 u>> 8) & 0xff) << 2))
        ^ *(Botan::DES_SPBOX6 + ((zx.q(x21_2 u>> 8) & 0xff) << 2))
    x5 = x5_6 ^ *(Botan::DES_SPBOX7 + ((zx.q(x23_1) & 0xff) << 2))
        ^ *(Botan::DES_SPBOX8 + ((zx.q(x24_1) & 0xff) << 2))
    int32_t x20_5 = x22_1 ^ ror.d(x5, 4)
    x7 = x7_6 ^ *(Botan::DES_SPBOX7 + ((zx.q(x20_2) & 0xff) << 2))
        ^ *(Botan::DES_SPBOX8 + ((zx.q(x21_2) & 0xff) << 2))
    int32_t x22_2 = x22_1 ^ ror.d(x7, 4)
    int32_t x21_5 = x19_2 ^ x5
    int32_t x19_3 = x7 ^ x19_2
    int32_t x17_3 = *(Botan::DES_SPBOX1 + (zx.q(x20_5 u>> 0x18) << 2)) ^ x17
        ^ *(Botan::DES_SPBOX2 + (zx.q(x21_5 u>> 0x18) << 2))
        ^ *(Botan::DES_SPBOX3 + ((zx.q(x20_5 u>> 0x10) & 0xff) << 2))
    int32_t x6_3 = *(Botan::DES_SPBOX1 + (zx.q(x22_2 u>> 0x18) << 2)) ^ x6
        ^ *(Botan::DES_SPBOX2 + (zx.q(x19_3 u>> 0x18) << 2))
        ^ *(Botan::DES_SPBOX3 + ((zx.q(x22_2 u>> 0x10) & 0xff) << 2))
    int32_t x17_6 = x17_3 ^ *(Botan::DES_SPBOX4 + ((zx.q(x21_5 u>> 0x10) & 0xff) << 2))
        ^ *(Botan::DES_SPBOX5 + ((zx.q(x20_5 u>> 8) & 0xff) << 2))
        ^ *(Botan::DES_SPBOX6 + ((zx.q(x21_5 u>> 8) & 0xff) << 2))
    int32_t x6_6 = x6_3 ^ *(Botan::DES_SPBOX4 + ((zx.q(x19_3 u>> 0x10) & 0xff) << 2))
        ^ *(Botan::DES_SPBOX5 + ((zx.q(x22_2 u>> 8) & 0xff) << 2))
        ^ *(Botan::DES_SPBOX6 + ((zx.q(x19_3 u>> 8) & 0xff) << 2))
    x17 = x17_6 ^ *(Botan::DES_SPBOX7 + ((zx.q(x20_5) & 0xff) << 2))
        ^ *(Botan::DES_SPBOX8 + ((zx.q(x21_5) & 0xff) << 2))
    x6 = x6_6 ^ *(Botan::DES_SPBOX7 + ((zx.q(x22_2) & 0xff) << 2))
        ^ *(Botan::DES_SPBOX8 + ((zx.q(x19_3) & 0xff) << 2))

*arg1 = x5
*arg2 = x17
*arg3 = x7
*arg4 = x6
