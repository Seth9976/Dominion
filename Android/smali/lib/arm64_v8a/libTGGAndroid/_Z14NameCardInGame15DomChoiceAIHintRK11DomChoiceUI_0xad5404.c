// 函数: _Z14NameCardInGame15DomChoiceAIHintRK11DomChoiceUI
// 地址: 0xad5404
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x0 = DomGetContext()
int32_t var_cb0
int32_t x0_2 = CardsTypeInGame(*(x0 + 8), &var_cb0)
DomGame* x8 = *(x0 + 8)
int32_t var_28 = *x0
int32_t var_24 = x0[7]
int32_t var_cb8 = arg1
DomChoiceUI const& var_cc0 = arg2
int32_t x0_4 = QueueChoiceCardTypes(x8, &var_28, 7, zx.q(x0[6]), &var_cb0, zx.q(x0_2), 1, 0)
uint64_t x6

if (x0_4 == 0)
    x6 = 0
else
    x6 = zx.q(var_cb0)

int32_t var_cb8_1 = 0
var_cc0.d = 0
NotifyLog(*(x0 + 8), 0x1c, zx.q(x0[6]), 0, nullptr, 0, x6, 0)

if (x0_4 == 0)
    return 0

return zx.q(var_cb0)
