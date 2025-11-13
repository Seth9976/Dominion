// 函数: _Z16Stamp_Discountedv
// 地址: 0xa3c12c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
uint64_t x5 = zx.q(*(DomGetContext() + 0x1c))
int64_t var_28 = 0
int32_t var_30 = 0
int32_t var_38 = 0
int32_t var_40 = 0
NotifyEffect(*(x0 + 8), 0x1b, 0xffffffff, 0x14, 0x18, x5, 0, 0)
int32_t x19_1 = *(DomGetContext() + 0x1c)
int32_t x0_4 = ONGOING_UPARAM(1)
return AddOngoingAll(0x20, ONGOING_LPARAM(x19_1) | x0_4, 0, 0) __tailcall
