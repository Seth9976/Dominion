// 函数: _Z15AddStartingCard11DomCardEnum8DomWhere
// 地址: 0xa36e9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2
void* x0 = DomGetContext()
IsBoardPile(zx.q(x19))
DomCard* x0_3 = CardCreate(*(x0 + 8), zx.q(arg1), zx.q(x19), zx.q(*(x0 + 0x18)), 0)
return GetId(*(x0 + 8), x0_3) __tailcall
