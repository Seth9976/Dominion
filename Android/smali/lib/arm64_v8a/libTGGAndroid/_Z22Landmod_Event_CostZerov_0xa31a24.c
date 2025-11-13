// 函数: _Z22Landmod_Event_CostZerov
// 地址: 0xa31a24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
uint64_t x5 = zx.q(*(DomGetContext() + 0x1c))
int64_t var_28 = 0
int32_t var_30 = 0
int32_t var_38 = 0
int32_t var_40 = 0
NotifyEffect(*(x0 + 8), 0x1b, 0xffffffff, 0x14, 0x29, x5, 0, 0)
int32_t x19_1 = *(DomGetContext() + 0x1c)
int32_t x0_7 = ONGOING_UPARAM(*(DomDefGet(zx.q(x19_1), 0x17) + 0xc4))
return AddOngoingAll(0x20, ONGOING_LPARAM(x19_1) | x0_7, 0, 0) __tailcall
