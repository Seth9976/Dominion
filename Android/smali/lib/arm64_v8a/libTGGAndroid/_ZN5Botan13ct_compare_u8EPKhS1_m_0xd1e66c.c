// 函数: _ZN5Botan13ct_compare_u8EPKhS1_m
// 地址: 0xd1e66c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_4 = 0

if (arg3 != 0)
    uint64_t i
    
    do
        uint8_t const x8_1 = *arg1
        arg1 = &arg1[1]
        uint8_t const x9_1 = *arg2
        arg2 = &arg2[1]
        i = arg3
        arg3 -= 1
        var_4 |= x9_1 ^ x8_1
    while (i != 1)

uint32_t x8_4 = zx.d(var_4)
return zx.q(((x8_4 - 1) & not.d(x8_4) & 0x80) << 0x18 s>> 0x1f)
