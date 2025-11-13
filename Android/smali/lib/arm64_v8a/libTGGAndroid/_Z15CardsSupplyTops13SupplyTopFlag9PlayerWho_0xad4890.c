// 函数: _Z15CardsSupplyTops13SupplyTopFlag9PlayerWho
// 地址: 0xad4890
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2
void* x0 = DomGetContext()
uint64_t x1

if (x19 == 0xffffffff)
    x1 = zx.q(*(x0 + 0x18))
else
    x1 = zx.q(x19)

CardID* entry_x8
int64_t result = CardsSupplyTops(*(x0 + 8), x1, entry_x8, zx.q(arg1))
*(entry_x8 + 0xc80) = result.d
return result
