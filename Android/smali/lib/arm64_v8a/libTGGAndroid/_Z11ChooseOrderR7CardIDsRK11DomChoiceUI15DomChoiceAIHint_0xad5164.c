// 函数: _Z11ChooseOrderR7CardIDsRK11DomChoiceUI15DomChoiceAIHint
// 地址: 0xad5164
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0xc80) == 0)
    return 

int32_t* x0
int128_t v0_1
int128_t v1_1
int128_t v2_1
x0, v0_1, v1_1, v2_1 = DomGetContext()
int64_t x9_1 = *(arg2 + 0x30)
int128_t var_50_1 = *(arg2 + 0x10)
int128_t var_40_1 = *(arg2 + 0x20)
int128_t var_60 = *arg2
var_40_1:8.q = *(x0 + 0x40)
int64_t var_30_1 = x9_1
uint64_t x2 = zx.q(x0[6])
int32_t x9_2 = x0[7]
DomGame* x8_2 = *(x0 + 8)
int32_t var_68 = *x0
int32_t var_64_1 = x9_2
uint64_t x5_1 = zx.q(*(arg1 + 0xc80))
int32_t var_70_1 = 0
int32_t var_80_1 = arg3
int32_t var_78_1 = 4
int128_t* var_88_1 = &var_60
int32_t var_90_1 = 0
QueueChoiceCards(x8_2, &var_68, x2, 2, arg1, x5_1, zx.q(x5_1.d), zx.q(x5_1.d))
