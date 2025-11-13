// 函数: _Z15KingdomViewDrawv
// 地址: 0xb17690
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (zx.d(*gKV) == 0 || *(gKV + 0x3a20) s< 1)
    return 

int64_t i = 0
int64_t (* x21_1)() = gKV + 0x24

do
    uint64_t x0_1 = zx.q(*x21_1)
    x21_1 += 0x74
    UI2Draw(x0_1)
    i += 1
while (i s< sx.q(*(gKV + 0x3a20)))
