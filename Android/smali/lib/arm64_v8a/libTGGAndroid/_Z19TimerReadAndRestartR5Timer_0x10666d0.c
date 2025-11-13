// 函数: _Z19TimerReadAndRestartR5Timer
// 地址: 0x10666d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0 = XGetMachineTime()
int64_t x8 = *arg1
*arg1 = x0
return XMillisecondsFromMachineTime(x0 - x8) __tailcall
