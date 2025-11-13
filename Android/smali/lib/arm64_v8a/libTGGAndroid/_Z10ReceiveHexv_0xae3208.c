// 函数: _Z10ReceiveHexv
// 地址: 0xae3208
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
char var_20 = 0
int32_t x0_2 =
    DrawFateTo(*(x0 + 8), 0xd3d, zx.q(*(x0 + 0x18)), 0x3e9, 0, *(x0 + 0x40), zx.q(*(x0 + 0x48)), 0)
void* x0_3 = DomGetContext()
PlayFate(*(x0_3 + 8), zx.q(*(x0_3 + 0x18)), zx.q(x0_2), 1)
int32_t var_14 = x0_2
void* x0_5 = DomGetContext()
return DiscardFates(*(x0_5 + 8), zx.q(*(x0_5 + 0x18)), &var_14, 1, 0x3e9, 8)
