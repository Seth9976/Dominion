// 函数: _Z11ChooseWhere6CardID8DomWhereS0_RK11DomChoiceUI15DomChoiceAIHint
// 地址: 0xadbc74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_18 = arg2
int32_t var_14 = arg1
int32_t var_1c = arg3
int32_t* x0
int128_t v0
int128_t v1
int128_t v2
x0, v0, v1, v2 = DomGetContext()
int64_t x9 = *(arg4 + 0x30)
int128_t var_50 = *(arg4 + 0x10)
int128_t var_40 = *(arg4 + 0x20)
int128_t var_60 = *arg4
var_40:8.q = *(x0 + 0x40)
int64_t var_30 = x9
DomGame* x8_1 = *(x0 + 8)
uint64_t x2 = zx.q(x0[6])
int32_t x9_1 = x0[7]
int32_t var_68 = *x0
int32_t var_64 = x9_1
int32_t var_78 = 0x31
int128_t* var_80 = &var_60
int32_t var_20
QueueChoiceWhere(x8_1, &var_68, x2, &var_14, &var_20, 1, &var_1c, 2)
return zx.q(var_20)
