// 函数: _Z20Start_DoubleHeirloomv
// 地址: 0xa381cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_14
int32_t x19

if ((HasHeirloom(0x17, zx.q(ThisWhat()), &var_14) & 1) != 0)
    x19 = var_14
else
    x19 = 0

void* x0_2 = DomGetContext()
return ReplaceAddStartingCard(*(x0_2 + 8), zx.q(*(x0_2 + 0x18)), 0x104, zx.q(x19))
