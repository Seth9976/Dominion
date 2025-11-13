// 函数: sub_ae778c
// 地址: 0xae778c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = **(arg1 + 8)
void* x0 = DomGetContext()
HasOngoing(*(x0 + 8), zx.q(*(x0 + 0x18)), 0x2a, 0, 0)
void* x0_2 = DomGetContext()
PlayFate(*(x0_2 + 8), zx.q(*(x0_2 + 0x18)), zx.q(x20), 1)
int32_t var_14 = **(arg1 + 8)
void* x0_4 = DomGetContext()
return DiscardFates(*(x0_4 + 8), zx.q(*(x0_4 + 0x18)), &var_14, 1, 0x3ee, 8)
