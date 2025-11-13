// 函数: _Z10CreateCard11DomCardEnum8DomWhere
// 地址: 0xadda58
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
DomCard* x0_2 = CardCreate(*(x0 + 8), zx.q(arg1), zx.q(arg2), 0xffffffff, 0)
return GetId(*(x0 + 8), x0_2) __tailcall
