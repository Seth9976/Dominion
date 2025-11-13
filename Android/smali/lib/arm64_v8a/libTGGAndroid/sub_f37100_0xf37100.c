// 函数: sub_f37100
// 地址: 0xf37100
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = **(arg1 + 0x10)
int64_t x9 = **(arg1 + 8)
int64_t x10 = *x8
uint64_t x11 = x9 u>> 5

if (x11 u< (x8[1] - x10) s>> 2)
    uint64_t x11_1 = x11 << 2
    int32_t x9_2 = *(x10 + x11_1) & not.d(1 << x9.d)
    x8[3] = -1
    *(x10 + x11_1) = x9_2

return 0
