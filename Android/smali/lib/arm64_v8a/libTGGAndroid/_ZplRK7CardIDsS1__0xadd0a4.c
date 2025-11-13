// 函数: _ZplRK7CardIDsS1_
// 地址: 0xadd0a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x8
int64_t result = memset(entry_x8, 0, 0xc80)
uint64_t x22 = zx.q(*(arg1 + 0xc80))

if (x22.d s>= 1)
    result = memcpy(entry_x8, arg1, x22 << 2)

*(entry_x8 + 0xc80) = x22.d
uint64_t x9 = zx.q(*(arg2 + 0xc80))

if (x9.d s>= 1)
    int32_t x10_1 = *arg2
    *(entry_x8 + 0xc80) = x22.d + 1
    *(entry_x8 + (sx.q(x22.d) << 2)) = x10_1
    
    if (x9.d != 1)
        void* __offset(CardIDs, 0x4) x8_2 = arg2 + 4
        int64_t i_1 = x9 - 1
        int64_t i
        
        do
            int64_t x10_2 = sx.q(*(entry_x8 + 0xc80))
            int32_t x11_2 = *x8_2
            x8_2 += 4
            i = i_1
            i_1 -= 1
            *(entry_x8 + 0xc80) = x10_2.d + 1
            *(entry_x8 + (x10_2 << 2)) = x11_2
        while (i != 1)

return result
