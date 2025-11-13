// 函数: _Z11DiscardThis8DomWhere
// 地址: 0xadd8d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardID* entry_x1
uint64_t result = ThisCard(false, entry_x1)
int32_t var_14 = result.d

if (result.d == 0)
    return result

void* x0 = DomGetContext()
int32_t var_20_1 = 0
int64_t var_28_1 = 0
int32_t var_30_1 = 0
return zx.q(DiscardCards(*(x0 + 8), zx.q(*(x0 + 0x18)), &var_14, 1, zx.q(arg1), 0xb, 7, 0) != 0 ? 1
    : 0)
