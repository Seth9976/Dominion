// 函数: _Z24GameRestartForNextPlayerv
// 地址: 0x9b5330
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetClient()
int32_t x9 = *(x0 + 0x5068)
void* x0_2

if (x9 - 3 u< 2 || x9 == 1)
    x0_2 = x0 + 0x50a8
else
    if (x9 != 2)
        pthread_kill(pthread_self(), 6)
        XNoReturn()
        return GameDebugNextPlayer() __tailcall
    
    x0_2 = *(GetClient() + 0x5080) + zx.q(*(x0 + 0x506c)) * 0x1338

return GameSpecific_Load(x0_2, LOAD_ALL, 0)
