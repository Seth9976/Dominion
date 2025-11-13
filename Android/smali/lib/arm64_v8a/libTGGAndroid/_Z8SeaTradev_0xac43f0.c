// 函数: _Z8SeaTradev
// 地址: 0xac43f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = CountWhereType(0x3e9, 4)
int32_t x19 = x0
Card(x0, 0, 0, nullptr)

if (x19 s>= CountHand())
    x19 = CountHand()

return TrashUpTo(x19, 0x13, 0, nullptr)
