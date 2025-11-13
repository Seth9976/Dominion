// 函数: _Z22UI2ForceRefreshSubtreeRK3UI2
// 地址: 0x1023084
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = *(arg1 + 0x1970)
*(arg1 + 0x1378) = 2

if (x20 == 0)
    return 

uint64_t x23_1 = 0
bool cond:0_1

do
    UI2ForceRefreshSubtree(*gUI2 + zx.q(*(arg1 + (x23_1 << 0x20 s>> 0x1e) + 0x1870)) * 0x19a8)
    cond:0_1 = x20 != x23_1.d + 1
    x23_1 = zx.q(x23_1.d + 1)
while (cond:0_1)
