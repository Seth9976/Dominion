// 函数: _Z8PlayThisv
// 地址: 0xae3b38
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardID* entry_x1
int32_t x0 = ThisCard(false, entry_x1)
void* x0_1 = DomGetContext()
DomGame* x20 = *(x0_1 + 8)
int32_t x21 = *(x0_1 + 0x18)
int64_t var_28 = ToCardRef(x20, zx.q(x0))
int64_t var_38 = 0
int64_t var_30 = 0
return PlayCard(x20, zx.q(x21), &var_28, &var_30, &var_38, 0x10)
