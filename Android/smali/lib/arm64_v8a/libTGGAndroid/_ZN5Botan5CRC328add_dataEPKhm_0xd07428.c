// 函数: _ZN5Botan5CRC328add_dataEPKhm
// 地址: 0xd07428
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = *(arg1 + 8)
int64_t entry_i

if (entry_i u>= 0x10)
    do
        entry_i -= 0x10
        int32_t x9_1 = *(&data_82ca3c + (((zx.q(x9) & 0xff) ^ zx.q(*arg2)) << 2)) ^ x9 u>> 8
        int32_t x9_2 =
            *(&data_82ca3c + (((zx.q(x9_1) & 0xff) ^ zx.q(*(arg2 + 1))) << 2)) ^ x9_1 u>> 8
        int32_t x9_3 =
            *(&data_82ca3c + (((zx.q(x9_2) & 0xff) ^ zx.q(*(arg2 + 2))) << 2)) ^ x9_2 u>> 8
        int32_t x9_4 =
            *(&data_82ca3c + (((zx.q(x9_3) & 0xff) ^ zx.q(*(arg2 + 3))) << 2)) ^ x9_3 u>> 8
        int32_t x9_5 =
            *(&data_82ca3c + (((zx.q(x9_4) & 0xff) ^ zx.q(*(arg2 + 4))) << 2)) ^ x9_4 u>> 8
        int32_t x9_6 =
            *(&data_82ca3c + (((zx.q(x9_5) & 0xff) ^ zx.q(*(arg2 + 5))) << 2)) ^ x9_5 u>> 8
        int32_t x9_7 =
            *(&data_82ca3c + (((zx.q(x9_6) & 0xff) ^ zx.q(*(arg2 + 6))) << 2)) ^ x9_6 u>> 8
        int32_t x9_8 =
            *(&data_82ca3c + (((zx.q(x9_7) & 0xff) ^ zx.q(*(arg2 + 7))) << 2)) ^ x9_7 u>> 8
        int32_t x9_9 =
            *(&data_82ca3c + (((zx.q(x9_8) & 0xff) ^ zx.q(*(arg2 + 8))) << 2)) ^ x9_8 u>> 8
        int32_t x9_10 =
            *(&data_82ca3c + (((zx.q(x9_9) & 0xff) ^ zx.q(*(arg2 + 9))) << 2)) ^ x9_9 u>> 8
        int32_t x9_11 =
            *(&data_82ca3c + (((zx.q(x9_10) & 0xff) ^ zx.q(*(arg2 + 0xa))) << 2)) ^ x9_10 u>> 8
        int32_t x9_12 =
            *(&data_82ca3c + (((zx.q(x9_11) & 0xff) ^ zx.q(*(arg2 + 0xb))) << 2)) ^ x9_11 u>> 8
        int32_t x9_13 =
            *(&data_82ca3c + (((zx.q(x9_12) & 0xff) ^ zx.q(*(arg2 + 0xc))) << 2)) ^ x9_12 u>> 8
        int32_t x9_14 =
            *(&data_82ca3c + (((zx.q(x9_13) & 0xff) ^ zx.q(*(arg2 + 0xd))) << 2)) ^ x9_13 u>> 8
        int32_t x10_45 = *(&data_82ca3c + (((zx.q(x9_14) & 0xff) ^ zx.q(*(arg2 + 0xe))) << 2))
        uint32_t x11_16 = zx.d(*(arg2 + 0xf))
        arg2 += 0x10
        int32_t x9_15 = x10_45 ^ x9_14 u>> 8
        x9 = *(&data_82ca3c + (((zx.q(x9_15) & 0xff) ^ zx.q(x11_16)) << 2)) ^ x9_15 u>> 8
    while (entry_i u> 0xf)

if (entry_i != 0)
    int64_t i
    
    do
        uint32_t x10_49 = zx.d(*arg2)
        arg2 += 1
        i = entry_i
        entry_i -= 1
        x9 = *(&data_82ca3c + (((zx.q(x9) & 0xff) ^ zx.q(x10_49)) << 2)) ^ x9 u>> 8
    while (i != 1)

*(arg1 + 8) = x9
