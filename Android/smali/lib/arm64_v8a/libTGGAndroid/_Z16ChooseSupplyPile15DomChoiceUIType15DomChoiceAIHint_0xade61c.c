// 函数: _Z16ChooseSupplyPile15DomChoiceUIType15DomChoiceAIHint
// 地址: 0xade61c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_cb0
int32_t x0_2 = SupplyPileTypes(*(DomGetContext() + 8), &var_cb0)
int128_t var_cf0
__builtin_memset(&var_cf0, 0, 0x38)
var_cf0.d = arg1
int32_t* x0_3 = DomGetContext()
DomGame* x8 = *(x0_3 + 8)
int32_t var_28 = *x0_3
int32_t var_24 = x0_3[7]
int32_t var_cf8 = arg2
int128_t* var_d00 = &var_cf0

if (QueueChoiceCardTypes(x8, &var_28, 8, zx.q(x0_3[6]), &var_cb0, zx.q(x0_2), 1, 1) == 0)
    return 0

return zx.q(var_cb0)
