// 函数: sub_f36f24
// 地址: 0xf36f24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x10 = **(arg1 + 0x10)
int64_t x8 = **(arg1 + 8)
int64_t x9 = *x10
uint64_t x10_1 = x8 u>> 5

if (x10_1 u>= (x10[1] - x9) s>> 2)
    return 0

return zx.q(*(x9 + (x10_1 << 2)) u>> x8.d) & 1
