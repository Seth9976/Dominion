// 函数: _Z9TrashThis8DomWhere
// 地址: 0xadd894
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardID* entry_x1
int32_t x0 = ThisCard(false, entry_x1)
void* x0_1 = DomGetContext()
return TrashCard(*(x0_1 + 8), zx.q(*(x0_1 + 0x18)), zx.q(x0), zx.q(arg1), 0x12, 0) __tailcall
