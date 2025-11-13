// 函数: _Z17NameCardInDeckOne15DomChoiceAIHint
// 地址: 0xad5610
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x0 = DomGetContext()
void* x0_1 = DomGetContext()
int32_t var_cb0
int32_t x0_3 = CardsWhere(*(x0_1 + 8), zx.q(*(x0_1 + 0x18)), 0x3eb, &var_cb0)
int32_t var_1930
int32_t x0_5 = ToCardTypes(*(x0_1 + 8), &var_1930, &var_cb0, x0_3)
uint64_t x5 = zx.q(x0_5)

if (x0_5 == 0)
    void* x0_6 = DomGetContext()
    int32_t x0_8 = CardsWhere(*(x0_6 + 8), zx.q(*(x0_6 + 0x18)), 0x3ec, &var_cb0)
    uint64_t result = ToCardTypes(*(x0_6 + 8), &var_1930, &var_cb0, x0_8)
    x5 = zx.q(result.d)
    
    if (result.d == 0)
        return result

DomGame* x0_10 = *(x0 + 8)
var_cb0 = *x0
int32_t var_1938_1 = arg1
int32_t var_cac_1 = x0[7]
int64_t (* const var_1940_1)() = DOMCHOICEUI_DEFAULT
int32_t x0_11 = QueueChoiceCardTypes(x0_10, &var_cb0, 7, zx.q(x0[6]), &var_1930, x5, 1, 0)
uint64_t x6_1

if (x0_11 == 0)
    x6_1 = 0
else
    x6_1 = zx.q(var_1930)

int32_t var_1938_2 = 0
var_1940_1.d = 0
NotifyLog(*(x0 + 8), 0x1c, zx.q(x0[6]), 0, nullptr, 0, x6_1, 0)

if (x0_11 == 0)
    return 0

return zx.q(var_1930)
