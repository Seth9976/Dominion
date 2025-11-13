// 函数: _Z15TriggerProphecy6CardID
// 地址: 0xac1b80
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg1
int32_t var_34 = arg1
void* x0 = DomGetContext()
DoLandscapeTracking(*(x0 + 8), zx.q(*(x0 + 0x18)), zx.q(CardWhat(zx.q(x20))), CurrentTurnUI())
int64_t var_88 = 0
int32_t var_90 = 0
int32_t var_98 = 0
int32_t var_a0 = 0
NotifyEffect(*(x0 + 8), 0x27, zx.q(*(x0 + 0x18)), zx.q(x20), 0, 0, 0, 0)
int32_t var_98_1 = 0
int32_t var_a0_1 = 0
NotifyLog(*(x0 + 8), 0x3d, zx.q(*(x0 + 0x18)), 0, &var_34, 1, 0, 0)
DomGame* x20_1 = *(x0 + 8)
int32_t x21_1 = *(x0 + 0x18)
int64_t var_80 = ToCardRef(x20_1, zx.q(var_34))
DomPushContext(x20_1, zx.q(x21_1), &var_80)
(*(DomDefGet(*(x0 + 8), zx.q(var_34)) + 0xd0))()
DomGame* x0_12 = *(x0 + 8)
uint64_t x1_4 = zx.q(*(x0 + 0x18))
__builtin_memset(&var_80, 0, 0x48)
TriggerEvent(x0_12, x1_4, 0x16, &var_80, 0, &var_34, 1, nullptr)
return DomPopContext()
