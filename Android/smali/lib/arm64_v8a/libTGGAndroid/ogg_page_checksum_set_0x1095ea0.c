// 函数: ogg_page_checksum_set
// 地址: 0x1095ea0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 == 0)
    return 

*(*arg1 + 0x16) = 0
*(*arg1 + 0x17) = 0
*(*arg1 + 0x18) = 0
*(*arg1 + 0x19) = 0
int64_t x9_1 = arg1[1]
int32_t x8_5

if (x9_1 s< 1)
    x8_5 = 0
else
    int64_t x10_1 = 0
    x8_5 = 0
    
    do
        uint32_t x13_1 = zx.d(*(*arg1 + x10_1))
        x10_1 += 1
        x8_5 = *(&data_877d30 + ((zx.q(x13_1) ^ zx.q(x8_5 u>> 0x18)) << 2)) ^ x8_5 << 8
    while (x9_1 s> x10_1)

int64_t x9_2 = arg1[3]

if (x9_2 s>= 1)
    int64_t x10_2 = 0
    
    do
        uint32_t x13_4 = zx.d(*(arg1[2] + x10_2))
        x10_2 += 1
        x8_5 = *(&data_877d30 + ((zx.q(x13_4) ^ zx.q(x8_5 u>> 0x18)) << 2)) ^ x8_5 << 8
    while (x9_2 s> x10_2)

*(*arg1 + 0x16) = x8_5.b
*(*arg1 + 0x17) = (x8_5 u>> 8).b
*(*arg1 + 0x18) = (x8_5 u>> 0x10).b
*(*arg1 + 0x19) = (x8_5 u>> 0x18).b
