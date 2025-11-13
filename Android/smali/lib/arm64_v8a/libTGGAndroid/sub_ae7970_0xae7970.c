// 函数: sub_ae7970
// 地址: 0xae7970
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = *(DomGetContext() + 0x70)
void* x0_1 = DomGetContext()
HasOngoing(*(x0_1 + 8), zx.q(*(x0_1 + 0x18)), 0x2a, 0, 0)
void* x0_3 = DomGetContext()
PlayFate(*(x0_3 + 8), zx.q(*(x0_3 + 0x18)), zx.q(x19), 1)
int32_t var_14 = x19
void* x0_5 = DomGetContext()
DiscardFates(*(x0_5 + 8), zx.q(*(x0_5 + 0x18)), &var_14, 1, 0x464, 8)
