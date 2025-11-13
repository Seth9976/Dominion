// 函数: _Z13Start_AddCardv
// 地址: 0xa37b64
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = ThisWhat()
void* x0_1 = DomGetContext()
IsBoardPile(0x3eb)
DomCard* x0_3 = CardCreate(*(x0_1 + 8), zx.q(x0), 0x3eb, zx.q(*(x0_1 + 0x18)), 0)
return GetId(*(x0_1 + 8), x0_3) __tailcall
