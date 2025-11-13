// 函数: _Z8DebtPlusi
// 地址: 0xad27d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
int32_t var_78 = 0
int32_t var_80 = 0xffffffff
AddTokens(*(x0 + 8), zx.q(*(x0 + 0x18)), 0xc00, zx.q(arg1), 0x476, 0, 0, 0)
DomGame* x21 = *(x0 + 8)
int32_t x20_1 = *(x0 + 0x18)
SnapshotDebtTriggerInfo(arg1)
void var_68
TriggerEvent(x21, zx.q(x20_1), 0x14, &var_68, 0, nullptr, 0, nullptr)
void* result = DomGetContext()
void* x8_1 = *(result + 8) + sx.q(*(result + 0x18)) * 0x5a30
*(x8_1 + 0x181f8) |= 0x200
return result
