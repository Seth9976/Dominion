// 函数: _Z15ClickStateAllocR10Controller12ButtonSourceR14ClickStateInfo
// 地址: 0xc80bc0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg3 = arg2.d
*(arg3 + 4) = 2
*(arg3 + 8) = arg1 + mulu.dp.d(arg2.d, 0x330) + 0x10

if (arg2.d u< 0x2c && ((0x80fffffcfff u>> arg2).d & 1) != 0)
    *(arg1 + mulu.dp.d(arg2.d, 0x330) + 0x10) = (&data_115a0f8)[sx.q(arg2.d)]
    return 

pthread_kill(pthread_self(), 6)
Controller* x0_1
int64_t x1
ClickStateInfo* x2
int64_t x3
x0_1, x1, x2, x3 = XNoReturn()
return ClickStateAllocHand(x0_1, x1, x2, x3) __tailcall
