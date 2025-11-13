// 函数: _Z19Stamp_Reactionifiedv
// 地址: 0xa3c838
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
uint64_t x5 = zx.q(*(DomGetContext() + 0x1c))
int64_t var_cb8 = 0
int32_t var_cc0 = 0
int32_t var_cc8 = 0
int32_t var_cd0 = 0
NotifyEffect(*(x0 + 8), 0x1b, 0xffffffff, 0x14, 0x1c, x5, 0, 0)
int32_t x19_1 = *(DomGetContext() + 0x1c)
AddOngoingAll(0x24, x19_1, 0, 0)
FromSingleInt(x19_1)
void var_ca8
Forever(6, sub_a581c4, sub_a581e8, 0x10007, &var_ca8, 0x55)
FromSingleInt(x19_1)
Forever(0x1b, sub_a58260, sub_a58284, 0x10007, &var_ca8, 0x55)
FromSingleInt(x19_1)
return Forever(0xb, sub_a582f8, sub_a5831c, 0x10007, &var_ca8, 0x55)
