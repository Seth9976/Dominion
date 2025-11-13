// 函数: sub_10ffa28
// 地址: 0x10ffa28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
int64_t x8 = *(arg2 + 0x20)

if (x8 == 0)
    *(arg2 + 0x20) = arg3
    *(arg2 + 0x30) = arg4
    *(arg2 + 0x3c) = 1
    return 

if (x8 != arg3)
    int32_t x8_1 = *(arg2 + 0x3c)
    *(arg2 + 0x30) = 2
    *(arg2 + 0x3c) = x8_1 + 1
    *(arg2 + 0x4e) = 1
else if (*(arg2 + 0x30) == 2)
    *(arg2 + 0x30) = arg4
