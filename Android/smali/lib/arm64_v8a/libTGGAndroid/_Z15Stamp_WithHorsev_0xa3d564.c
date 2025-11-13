// 函数: _Z15Stamp_WithHorsev
// 地址: 0xa3d564
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DomGame* x19 = *(DomGetContext() + 8)
int32_t var_ca8

if ((ExtraPileExists(x19, 0xf46) & 1) == 0)
    AddPileWhere(x19, zx.q(NextAvailableNonSupplyPile(x19)), 0xf46, &var_ca8, 0, 0)

void* x0_6 = DomGetContext()
uint64_t x5 = zx.q(*(DomGetContext() + 0x1c))
int64_t var_cb8 = 0
int32_t var_cc0 = 0
int32_t var_cc8 = 0
int32_t var_cd0 = 0
NotifyEffect(*(x0_6 + 8), 0x1b, 0xffffffff, 0x14, 0x22, x5, 0, 0)
var_ca8 = 0
return Forever(6, sub_a585a0, sub_a585b8, 0x10000, &var_ca8, 0x5c)
