// 函数: _Z4CopyRK7CardIDs
// 地址: 0xadcf1c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x8
int64_t result = memset(entry_x8, 0, 0xc80)
uint64_t x21 = zx.q(*(arg1 + 0xc80))

if (x21.d s>= 1)
    result = memcpy(entry_x8, arg1, x21 << 2)

*(entry_x8 + 0xc80) = x21.d
return result
