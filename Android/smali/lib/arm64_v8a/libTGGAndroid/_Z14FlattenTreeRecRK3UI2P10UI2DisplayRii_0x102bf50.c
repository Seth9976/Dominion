// 函数: _Z14FlattenTreeRecRK3UI2P10UI2DisplayRii
// 地址: 0x102bf50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (zx.d(*(arg1 + 0x17d8)) != 0)
    return 

int64_t x8_1 = sx.q(*arg3)
UI2** x8_2 = arg2 + x8_1 * 0x18
*arg3 = x8_1.d + 1
*x8_2 = arg1
x8_2[1].d = arg4
int32_t x23_1 = *(arg1 + 0x1970)

if (x23_1 == 0)
    return 

uint64_t x25_1 = 0
bool cond:0_1

do
    FlattenTreeRec(*gUI2 + zx.q(*(arg1 + (x25_1 << 0x20 s>> 0x1e) + 0x1870)) * 0x19a8, arg2, arg3, 
        arg4 + 1)
    cond:0_1 = x23_1 != x25_1.d + 1
    x25_1 = zx.q(x25_1.d + 1)
while (cond:0_1)
