// 函数: _Z20CardIsInOpponentHandRK6DomGfxR9UI2Handle
// 地址: 0xb49ca0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0xa4) != 0x3ea)
    return 0

int32_t x8_1 = *(gDomClient + 0x38)
int32_t x8_2

x8_2 = x8_1 == 0xffffffff ? 0 : x8_1

if (*(arg1 + 0xa0) == x8_2)
    return 0

int32_t x0_1 = GameMainUI()
int32_t x8_3 = *(gDomClient + 0x38)
uint64_t x1

if (x8_3 == 0xffffffff)
    x1 = 0
else
    x1 = zx.q(x8_3)

*arg2 = UI2GetHandle(zx.q(x0_1), "tbl_opponents", PlayerWhoToSeat(zx.q(*(arg1 + 0xa0)), x1) - 1)
return 1
