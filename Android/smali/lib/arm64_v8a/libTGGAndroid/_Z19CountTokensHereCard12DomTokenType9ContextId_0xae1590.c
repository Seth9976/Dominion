// 函数: _Z19CountTokensHereCard12DomTokenType9ContextId
// 地址: 0xae1590
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg1
void* x0 = DomGetContext()
CardID* x1 = GameAssert((x20 == 0x1001 ? 1 : 0).b)
return CountTokensCard(*(x0 + 8), zx.q(ThisCard(false, x1)), zx.q(x20), arg2) __tailcall
