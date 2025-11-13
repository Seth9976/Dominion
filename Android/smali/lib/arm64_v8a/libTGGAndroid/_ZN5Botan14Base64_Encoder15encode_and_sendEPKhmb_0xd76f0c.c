// 函数: _ZN5Botan14Base64_Encoder15encode_and_sendEPKhmb
// 地址: 0xd76f0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 == 0)
    return 

uint64_t x19_1 = arg3
uint64_t x20_1 = arg2
uint64_t x23_1
uint64_t temp0_1

do
    int64_t x9_1 = *(arg1 + 0x60)
    int64_t x8_1 = *(arg1 + 0x68)
    uint64_t var_38 = 0
    uint64_t x8_2 = x8_1 - x9_1
    
    x23_1 = x8_2 u< x19_1 ? x8_2 : x19_1
    
    char entry_x3
    Botan::base64_encode(*(arg1 + 0x78), x20_1, x23_1, &var_38, entry_x3 & 1)
    Botan::Base64_Encoder::do_output(arg1, *(arg1 + 0x78))
    temp0_1 = x19_1
    x19_1 -= x23_1
    x20_1 += x23_1
while (temp0_1 != x23_1)
