// 函数: sub_10ffaf8
// 地址: 0x10ffaf8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()

if (*(arg1 + 8) != *(*(arg2 + 0x10) + 8))
    jump(*(**(arg1 + 0x10) + 0x38))

int64_t x8_3 = *(arg2 + 0x20)

if (x8_3 == 0)
    *(arg2 + 0x20) = arg3
    *(arg2 + 0x30) = arg4
    *(arg2 + 0x3c) = 1
    return 

if (x8_3 != arg3)
    int32_t x8_4 = *(arg2 + 0x3c)
    *(arg2 + 0x30) = 2
    *(arg2 + 0x3c) = x8_4 + 1
    *(arg2 + 0x4e) = 1
else if (*(arg2 + 0x30) == 2)
    *(arg2 + 0x30) = arg4
