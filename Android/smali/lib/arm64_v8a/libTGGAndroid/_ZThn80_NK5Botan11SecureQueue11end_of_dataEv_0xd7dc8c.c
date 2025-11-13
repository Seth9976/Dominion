// 函数: _ZThn80_NK5Botan11SecureQueue11end_of_dataEv
// 地址: 0xd7dc8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** i = *(arg1 + 0x10)

if (i == 0)
    return 1

int64_t x9 = 0

do
    int64_t x11_1 = i[4]
    int64_t x10_1 = i[5]
    i = *i
    x9 = x10_1 + x9 - x11_1
while (i != 0)

return zx.q(x9 == 0 ? 1 : 0)
