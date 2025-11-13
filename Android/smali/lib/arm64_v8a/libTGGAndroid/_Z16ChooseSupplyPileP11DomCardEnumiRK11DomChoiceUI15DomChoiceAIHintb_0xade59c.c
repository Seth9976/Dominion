// 函数: _Z16ChooseSupplyPileP11DomCardEnumiRK11DomChoiceUI15DomChoiceAIHintb
// 地址: 0xade59c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x0 = DomGetContext()
uint64_t x3 = zx.q(x0[6])
int32_t x9 = x0[7]
DomGame* x8 = *(x0 + 8)
int32_t var_38 = *x0
int32_t var_34 = x9
int32_t var_48 = arg4
DomChoiceUI const& var_50 = arg3
uint64_t result =
    QueueChoiceCardTypes(x8, &var_38, 8, x3, arg1, zx.q(arg2), 1, zx.q(not.d(arg5.d)) & 1)

if (result.d == 0)
    return result

return zx.q(*arg1)
