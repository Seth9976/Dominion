// 函数: _ZN5Botan6Sodium16crypto_verify_16EPKhS2_
// 地址: 0xe339a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_4 = 0
char x8_23 = (*arg2 ^ *arg1) | (arg2[1] ^ arg1[1]) | (arg2[2] ^ arg1[2]) | (arg2[3] ^ arg1[3])
    | (arg2[4] ^ arg1[4]) | (arg2[5] ^ arg1[5]) | (arg2[6] ^ arg1[6]) | (arg2[7] ^ arg1[7])
char x8_35 = x8_23 | (arg2[8] ^ arg1[8]) | (arg2[9] ^ arg1[9]) | (arg2[0xa] ^ arg1[0xa])
    | (arg2[0xb] ^ arg1[0xb])
char x8_47 = x8_35 | (arg2[0xc] ^ arg1[0xc]) | (arg2[0xd] ^ arg1[0xd]) | (arg2[0xe] ^ arg1[0xe])
    | (arg2[0xf] ^ arg1[0xf])
return zx.q(zx.d(x8_47) == 0 ? 1 : 0)
