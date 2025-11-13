// 函数: _Z16GameStatusUpdate9UI2HandleRK9GameSetup
// 地址: 0x9c226c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_1 = GetMultiplayerGameState(arg2)

if (x0_1 u< 0x14)
    return UI2SetState(zx.q(arg1), (&data_11230e0)[sx.q(x0_1)], 0xffffffff, 0) __tailcall

pthread_kill(pthread_self(), 6)
int64_t x0_5
int64_t x1_2
GameSetup* x2_1
int64_t x3_1
x0_5, x1_2, x2_1, x3_1 = XNoReturn()
return DisplayNetworkGame(x0_5, x1_2, x2_1, x3_1) __tailcall
