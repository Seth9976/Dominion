// 函数: _Z6LookAti
// 地址: 0xad757c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
int32_t var_28 = 0xc
int32_t var_30 = 0
CardID* entry_x8
int64_t result = DrawCardsTo(*(x0 + 8), zx.q(*(x0 + 0x18)), zx.q(arg1), 0x3ee, 1, *(x0 + 0x40), 
    zx.q(*(x0 + 0x48)), entry_x8)
*(entry_x8 + 0xc80) = result.d
return result
