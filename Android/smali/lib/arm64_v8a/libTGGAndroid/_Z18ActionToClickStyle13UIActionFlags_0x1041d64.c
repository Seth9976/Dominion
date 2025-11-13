// 函数: _Z18ActionToClickStyle13UIActionFlags
// 地址: 0x1041d64
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((arg1 & 0x10) != 0)
    return 2

if ((arg1 & 0x80) != 0)
    return 4

if ((arg1 & 0x40) != 0)
    return 3

if ((arg1 & 0x20) != 0)
    return 5

if ((arg1 & 0x100) != 0)
    return 6

if ((arg1 & 0x200) != 0)
    return 9

int64_t lr
int64_t var_10 = lr
pthread_kill(pthread_self(), 6)
return UI2GetClickInfo(XNoReturn()) __tailcall
