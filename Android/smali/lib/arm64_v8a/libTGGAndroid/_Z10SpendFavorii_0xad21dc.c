// 函数: _Z10SpendFavorii
// 地址: 0xad21dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DoLandscapeTracking(arg1)
void* x0 = DomGetContext()
int32_t var_28 = 0
int32_t var_30 = 0xffffffff
int64_t x0_2 = AddTokens(*(x0 + 8), zx.q(*(x0 + 0x18)), 0x1000, zx.q(neg.d(arg1)), 0x476, 0, 0, 0)

if ((arg1 & 0x80000000) == 0)
    return x0_2

void* x0_3 = DomGetContext()
void* x8_2 = *(x0_3 + 8) + sx.q(*(x0_3 + 0x18)) * 0x5a30
*(x8_2 + 0x181f8) |= 0x80
return x0_3
