// 函数: _Z17Start_StartInPlayv
// 地址: 0xa37d54
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = ThisWhat()
void* x0_1 = DomGetContext()
DomGame* x19 = *(x0_1 + 8)
int32_t x20 = *(x0_1 + 0x18)
int32_t x0_5 = GetId(x19, CardCreate(x19, zx.q(x0), 0x451, zx.q(x20), 0))
int32_t var_24 = x0_5
DomLogToggle(x19, false)
int64_t var_30 = ToCardRef(x19, zx.q(x0_5))
DomPushContext(x19, zx.q(x20), &var_30)
ExecFollowInstructions(x19, zx.q(x20), zx.q(x0_5))
DomPopContext()
DomLogToggle(x19, true)
int32_t var_38 = 0
int32_t var_40 = 0
return NotifyLog(x19, 0x43, zx.q(x20), 0, &var_24, 1, 0x3e9, 0)
