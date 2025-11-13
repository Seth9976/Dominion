// 函数: _Z12CalcTurnInfo18GameTurnInfoResultRK7DomGame
// 地址: 0xb18544
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9_2 = *(arg2 + 0x1a28)
int32_t* entry_x8
*entry_x8 = arg1.d
entry_x8[1] = x9_2
int32_t x9 = *(arg2 + 0x19d4)
int32_t x10 = *(arg2 + 0x78)
entry_x8[2] = x9
entry_x8[3] = x10
int32_t x11_3 = (*(arg2 + 0x19e8) - 1) s/ *(arg2 + 0xd40) + 1
entry_x8[4] = *(arg2 + 0x19ec)
entry_x8[5] = x11_3

if (x9 != x10 || (zx.d(*(arg2 + 0x70)) & 8) != 0)
    entry_x8[4] = 0xffffffff
