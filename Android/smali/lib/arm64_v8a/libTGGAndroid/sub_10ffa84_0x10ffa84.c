// 函数: sub_10ffa84
// 地址: 0x10ffa84
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()

if (*(arg1 + 8) != *(*(arg2 + 0x10) + 8))
    return 

int64_t x8_2 = *(arg2 + 0x20)

if (x8_2 == 0)
    *(arg2 + 0x20) = arg3
    *(arg2 + 0x30) = arg4
    *(arg2 + 0x3c) = 1
    return 

if (x8_2 != arg3)
    int32_t x8_3 = *(arg2 + 0x3c)
    *(arg2 + 0x30) = 2
    *(arg2 + 0x3c) = x8_3 + 1
    *(arg2 + 0x4e) = 1
    return 

if (*(arg2 + 0x30) == 2)
    *(arg2 + 0x30) = arg4
