// 函数: _ZNK5Botan6BigInt7byte_atEm
// 地址: 0xcb92f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_1 = *arg1
int64_t entry_x1
uint64_t x9 = entry_x1 u>> 2

if (x9 u>= (*(arg1 + 8) - x8_1) s>> 2)
    return 0

return zx.q(*(x8_1 + (x9 << 2)) u>> (entry_x1.d & 3) << 3)
