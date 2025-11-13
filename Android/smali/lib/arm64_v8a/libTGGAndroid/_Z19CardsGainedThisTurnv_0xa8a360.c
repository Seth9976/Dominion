// 函数: _Z19CardsGainedThisTurnv
// 地址: 0xa8a360
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
void* x8_1 = *(x0 + 8) + sx.q(*(x0 + 0x18)) * 0x5a30
int64_t x9_1 = sx.q(*(x8_1 + 0x181a4))
void* entry_x8
*(entry_x8 + 0xc80) = x9_1.d
return memcpy(entry_x8, x8_1 + 0x18218, x9_1 << 2) __tailcall
