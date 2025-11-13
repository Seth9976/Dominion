// 函数: _Z15CardsTypesWhereP11DomCardEnum8DomWhere
// 地址: 0xad4df0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
CardID var_cb0
int32_t x0_2 = CardsWhere(*(x0 + 8), zx.q(*(x0 + 0x18)), zx.q(arg2), &var_cb0)
return ToCardTypes(*(x0 + 8), arg1, &var_cb0, x0_2)
