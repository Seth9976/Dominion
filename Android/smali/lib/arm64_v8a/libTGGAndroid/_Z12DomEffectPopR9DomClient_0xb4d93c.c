// 函数: _Z12DomEffectPopR9DomClient
// 地址: 0xb4d93c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x10 = sx.q(*(arg1 + 0x20648))
int128_t* x11_1 = *(arg1 + 0x20638) + x10 * 0x38
int128_t v0 = x11_1[2]
int128_t v1 = *x11_1
bool cond:0 = x10.d + 1 != *(arg1 + 0x20640)
int128_t* entry_x8
entry_x8[3].q = x11_1[3].q
entry_x8[1] = x11_1[1]
entry_x8[2] = v0
*entry_x8 = v1
*(arg1 + 0x20648) = x10.d + 1

if (not(cond:0))
    *(arg1 + 0x20640) = 0
    *(arg1 + 0x20648) = 0
