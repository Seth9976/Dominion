// 函数: _Z10ReloadGame9GameIndex
// 地址: 0x9b1540
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
NetworkGameDisposeLogs(*(GetClient() + 0x5080) + mulu.dp.d(x19 & 0xffff, 0x1338))
void* result = GetClient()

if (*(result + 0x5068) == 2 && *(result + 0x506c) == x19)
    return GameResumeMultiplayer(zx.q(x19)) __tailcall

return result
