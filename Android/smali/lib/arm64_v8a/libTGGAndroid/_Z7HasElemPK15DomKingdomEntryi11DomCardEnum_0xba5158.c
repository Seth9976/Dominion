// 函数: _Z7HasElemPK15DomKingdomEntryi11DomCardEnum
// 地址: 0xba5158
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 s< 1)
    return 0

int64_t x8 = 0
uint64_t x9 = zx.q(arg2)
void* __offset(DomKingdomEntry, 0x4) x10 = arg1 + 4
int32_t x11 = 1

while (*(x10 - 4) != 1 || *x10 != arg3)
    x8 += 1
    x11 = x8 u< x9 ? 1 : 0
    x10 += 0x10
    
    if (x9 == x8)
        break

return zx.q(x11) & 1
