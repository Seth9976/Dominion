// 函数: _Z12Start_Tavernv
// 地址: 0xa380f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = ThisWhat()
void* x0_1 = DomGetContext()
IsBoardPile(0x461)
DomCard* x0_3 = CardCreate(*(x0_1 + 8), zx.q(x0), 0x461, zx.q(*(x0_1 + 0x18)), 0)
int32_t var_14 = GetId(*(x0_1 + 8), x0_3)
void* x0_6 = DomGetContext()
int32_t var_28 = 0
int32_t var_30 = 0
return NotifyLog(*(x0_6 + 8), 0x43, zx.q(*(x0_6 + 0x18)), 0, &var_14, 1, 0x461, 0)
