// 函数: _Z7Flatten9UI2HandlePS_Ri
// 地址: 0x1038fa0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(arg1.d) & 0xffff

if (zx.d(*(*gUI2 + mulu.dp.d(x8.d, 0x19a8) + 0x17d8)) != 0)
    return 

int64_t x10_3 = sx.q(*arg3)
*arg3 = x10_3.d + 1
*(arg2 + (x10_3 << 2)) = arg1.d
int64_t x9_1 = *gUI2
int32_t x21_1 = *(x9_1 + x8 * 0x19a8 + 0x1970)

if (x21_1 == 0)
    return 

uint64_t x23_1 = 0
bool cond:0_1

do
    Flatten(zx.q(*(x9_1 + x8 * 0x19a8 + (x23_1 << 0x20 s>> 0x1e) + 0x1870)), arg2, arg3)
    cond:0_1 = x21_1 != x23_1.d + 1
    x23_1 = zx.q(x23_1.d + 1)
while (cond:0_1)
