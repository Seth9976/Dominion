// 函数: _Z18VoipProcessMessageP14NetworkMessage
// 地址: 0x105fb24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 4) == 0xbb8)
    return VoipServerGotMessage(arg1) __tailcall

pthread_kill(pthread_self(), 6)
int16_t* x0_2
int32_t x1_1
int32_t x2_1
x0_2, x1_1, x2_1 = XNoReturn()
return VoipSpeakerCallback(x0_2, x1_1, x2_1) __tailcall
