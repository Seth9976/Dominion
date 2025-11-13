// 函数: _ZN5Botan6BigInt9clear_bitEm
// 地址: 0xce039c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *arg1
int64_t entry_x1
uint64_t x9 = entry_x1 u>> 5

if (x9 u>= (*(arg1 + 8) - x8) s>> 2)
    return 

uint64_t x9_1 = x9 << 2
int32_t x10_2 = *(x8 + x9_1) & not.d(1 << entry_x1.d)
*(arg1 + 0x18) = -1
*(x8 + x9_1) = x10_2
