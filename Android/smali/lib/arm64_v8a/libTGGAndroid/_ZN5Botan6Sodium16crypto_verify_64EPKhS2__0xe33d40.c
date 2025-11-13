// 函数: _ZN5Botan6Sodium16crypto_verify_64EPKhS2_
// 地址: 0xe33d40
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t i = 0
char var_4 = 0

do
    char x9_1 = arg1[i]
    char x10_1 = arg2[i]
    i += 1
    var_4 |= x10_1 ^ x9_1
while (i != 0x40)

return zx.q(zx.d(var_4) == 0 ? 1 : 0)
