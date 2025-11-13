// 函数: _ZN5Botan5CRC248add_dataEPKhm
// 地址: 0xd07234
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 8)
int64_t entry_i

if (entry_i != 0 && (arg2 & 3) != 0)
    int64_t x9_2 = arg2 + 1
    int64_t i
    
    do
        uint32_t x11_1 = zx.d(*arg2)
        arg2 += 1
        int64_t entry_i_1 = entry_i
        entry_i -= 1
        x8 = *(&data_84f780 + (((zx.q(x8) & 0xff) ^ zx.q(x11_1)) << 2)) ^ x8 u>> 8
        
        if (entry_i_1 == 1)
            break
        
        i = x9_2 & 3
        x9_2 += 1
    while (i != 0)

if (entry_i u>= 0x10)
    do
        entry_i -= 0x10
        int32_t x8_1 = *arg2 ^ x8
        int32_t x14_6 = *(&data_84fb80 + ((zx.q(x8_1) & 0xff) << 2)) ^ *(arg2 + 4)
            ^ *(&data_84ff80 + ((zx.q(x8_1 u>> 8) & 0xff) << 2))
            ^ *(&data_850380 + ((zx.q(x8_1 u>> 0x10) & 0xff) << 2))
        int32_t x8_4 = x14_6 ^ *(&data_84f780 + (zx.q(x8_1 u>> 0x18) << 2))
        int32_t x14_11 = *(&data_84fb80 + ((zx.q(x8_4) & 0xff) << 2)) ^ *(arg2 + 8)
            ^ *(&data_84ff80 + ((zx.q(x8_4 u>> 8) & 0xff) << 2))
            ^ *(&data_850380 + ((zx.q(x8_4 u>> 0x10) & 0xff) << 2))
        int32_t x8_7 = x14_11 ^ *(&data_84f780 + (zx.q(x8_4 u>> 0x18) << 2))
        int32_t x13_4 = *(&data_84fb80 + ((zx.q(x8_7) & 0xff) << 2)) ^ *(arg2 + 0xc)
            ^ *(&data_84ff80 + ((zx.q(x8_7 u>> 8) & 0xff) << 2))
            ^ *(&data_850380 + ((zx.q(x8_7 u>> 0x10) & 0xff) << 2))
        int32_t x8_10 = x13_4 ^ *(&data_84f780 + (zx.q(x8_7 u>> 0x18) << 2))
        arg2 += 0x10
        int32_t x13_8 = *(&data_84ff80 + ((zx.q(x8_10 u>> 8) & 0xff) << 2))
            ^ *(&data_84fb80 + ((zx.q(x8_10) & 0xff) << 2))
            ^ *(&data_850380 + ((zx.q(x8_10 u>> 0x10) & 0xff) << 2))
        x8 = x13_8 ^ *(&data_84f780 + (zx.q(x8_10 u>> 0x18) << 2))
    while (entry_i u> 0xf)

if (entry_i != 0)
    int64_t i_1
    
    do
        uint32_t x10_1 = zx.d(*arg2)
        arg2 += 1
        i_1 = entry_i
        entry_i -= 1
        x8 = *(&data_84f780 + (((zx.q(x8) & 0xff) ^ zx.q(x10_1)) << 2)) ^ x8 u>> 8
    while (i_1 != 1)

*(arg1 + 8) = x8 & 0xffffff
