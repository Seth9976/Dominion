// 函数: _Z16TurnCardFacedown6CardID
// 地址: 0xae3460
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
void* x0 = DomGetContext()
void* x0_2 = CardGet(*(x0 + 8), zx.q(x19))
*(x0_2 + 0x28) |= 2
int64_t var_28 = 0
int32_t var_30 = 0
int32_t var_38 = 0
int32_t var_40 = 0
return NotifyEffect(*(x0 + 8), 0x16, zx.q(*(x0 + 0x18)), zx.q(x19), 4, 1, 0, 0)
