// 函数: _Z22PlayCardLeavingItThere6CardID13PlayCardFlags
// 地址: 0xad8468
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
DomGame* x21 = *(x0 + 8)
int32_t x22 = *(x0 + 0x18)
int64_t x0_2
CardID* x1_1
x0_2, x1_1 = ToCardRef(x21, zx.q(arg1))
int64_t var_28 = x0_2
int64_t var_38 = 0
int64_t var_40 = ToCardRef(x21, zx.q(ThisCard(false, x1_1)))
return PlayCard(x21, zx.q(x22), &var_28, &var_38, &var_40, zx.q(arg2) | 2)
