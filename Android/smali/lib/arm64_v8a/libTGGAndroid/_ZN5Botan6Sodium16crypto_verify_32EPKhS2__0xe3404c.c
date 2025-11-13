// 函数: _ZN5Botan6Sodium16crypto_verify_32EPKhS2_
// 地址: 0xe3404c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_4 = 0
char x8_23 = (*arg2 ^ *arg1) | (arg2[1] ^ arg1[1]) | (arg2[2] ^ arg1[2]) | (arg2[3] ^ arg1[3])
    | (arg2[4] ^ arg1[4]) | (arg2[5] ^ arg1[5]) | (arg2[6] ^ arg1[6]) | (arg2[7] ^ arg1[7])
char x8_35 = x8_23 | (arg2[8] ^ arg1[8]) | (arg2[9] ^ arg1[9]) | (arg2[0xa] ^ arg1[0xa])
    | (arg2[0xb] ^ arg1[0xb])
char x8_47 = x8_35 | (arg2[0xc] ^ arg1[0xc]) | (arg2[0xd] ^ arg1[0xd]) | (arg2[0xe] ^ arg1[0xe])
    | (arg2[0xf] ^ arg1[0xf])
char x8_59 = x8_47 | (arg2[0x10] ^ arg1[0x10]) | (arg2[0x11] ^ arg1[0x11])
    | (arg2[0x12] ^ arg1[0x12]) | (arg2[0x13] ^ arg1[0x13])
char x8_71 = x8_59 | (arg2[0x14] ^ arg1[0x14]) | (arg2[0x15] ^ arg1[0x15])
    | (arg2[0x16] ^ arg1[0x16]) | (arg2[0x17] ^ arg1[0x17])
char x8_83 = x8_71 | (arg2[0x18] ^ arg1[0x18]) | (arg2[0x19] ^ arg1[0x19])
    | (arg2[0x1a] ^ arg1[0x1a]) | (arg2[0x1b] ^ arg1[0x1b])
char x8_95 = x8_83 | (arg2[0x1c] ^ arg1[0x1c]) | (arg2[0x1d] ^ arg1[0x1d])
    | (arg2[0x1e] ^ arg1[0x1e]) | (arg2[0x1f] ^ arg1[0x1f])
return zx.q(zx.d(x8_95) == 0 ? 1 : 0)
