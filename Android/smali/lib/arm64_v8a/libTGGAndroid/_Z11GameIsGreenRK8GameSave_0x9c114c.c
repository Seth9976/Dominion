// 函数: _Z11GameIsGreenRK8GameSave
// 地址: 0x9c114c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_1 = GetMultiplayerGameState(arg1 + 8)

if (x0_1 u< 0x14)
    return zx.q(0x50007 u>> x0_1) & 1

pthread_kill(pthread_self(), 6)
int32_t x0_4
int64_t x1
x0_4, x1 = XNoReturn()
return NthGameToIndex(x0_4, x1) __tailcall
