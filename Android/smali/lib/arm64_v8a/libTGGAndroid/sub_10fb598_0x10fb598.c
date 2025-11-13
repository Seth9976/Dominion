// 函数: sub_10fb598
// 地址: 0x10fb598
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
uint64_t x8_1

if (*(arg2 + 0x1c) == 0xffffffff)
    int64_t x9_2 = *(arg1 + 0x18)
    x8_1 = 0
    *(arg2 + 0x18) = 0
    *(arg2 + 0x1c) = x9_2.d
    
    if (x9_2 u<= 0)
        return 
else
    x8_1 = zx.q(*(arg2 + 0x18))
    
    if (*(arg1 + 0x18) u<= x8_1)
        return 

jump(*(**(*(arg1 + 0x10) + (x8_1 << 3)) + 0x20))
