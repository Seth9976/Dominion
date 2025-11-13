// 函数: sub_10fb47c
// 地址: 0x10fb47c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
uint64_t x8_1

if (*(arg2 + 0x1c) == 0xffffffff)
    int64_t x9_2 = *(arg1 + 0x18)
    x8_1 = 0
    *(arg2 + 0x18) = 0
    *(arg2 + 0x1c) = x9_2.d
    
    if (x9_2 u<= 0)
        return 0
else
    x8_1 = zx.q(*(arg2 + 0x18))
    
    if (*(arg1 + 0x18) u<= x8_1)
        return 0

int64_t* x0 = *(*(arg1 + 0x10) + (x8_1 << 3))
uint32_t x8_2 = zx.d(*(x0 + 0xa))

if (x8_2 != 2)
    return zx.q(x8_2 == 0 ? 1 : 0)

jump(*(*x0 + 8))
