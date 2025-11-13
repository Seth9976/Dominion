// 函数: _Z23GameCenterQueryUsernamev
// 地址: 0xf70470
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = *gGameCenter

if (x9 == 0)
    return 

if (x9 != 4)
    pthread_kill(pthread_self(), 6)
    XNoReturn()
    return GameCenterQueryDLCResponse() __tailcall

*(gGameCenter + 0x20) = 2
XString::operator=(gGameCenter + 0x28)
