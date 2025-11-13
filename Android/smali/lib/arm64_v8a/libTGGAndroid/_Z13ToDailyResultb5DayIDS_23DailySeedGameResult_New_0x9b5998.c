// 函数: _Z13ToDailyResultb5DayIDS_23DailySeedGameResult_New
// 地址: 0x9b5998
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DayID* entry_x8
*(entry_x8 + 0xc) = 0
*(entry_x8 + 4) = 0
*entry_x8 = arg3

if (arg2 != arg3)
    *(entry_x8 + 0x10) = arg4
    return 

if ((arg1.d & 1) == 0)
    *(entry_x8 + 8) = arg4
    return 

*(entry_x8 + 0xc) = arg4
