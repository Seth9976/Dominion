// 函数: _Z15Stamp_TwoForOnev
// 地址: 0xa3bf08
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
uint64_t x5 = zx.q(*(DomGetContext() + 0x1c))
int64_t var_cb8 = 0
int32_t var_cc0 = 0
int32_t var_cc8 = 0
int32_t var_cd0 = 0
NotifyEffect(*(x0 + 8), 0x1b, 0xffffffff, 0x14, 0x13, x5, 0, 0)
int32_t x19_1 = *(DomGetContext() + 0x1c)
int32_t x0_4 = ONGOING_UPARAM(0xffffffff)
AddOngoingAll(0x20, ONGOING_LPARAM(x19_1) | x0_4, 0, 0)
int32_t var_ca8 = 0
return Forever(6, sub_a58110, sub_a5813c, 0x10000, &var_ca8, 0x5e)
