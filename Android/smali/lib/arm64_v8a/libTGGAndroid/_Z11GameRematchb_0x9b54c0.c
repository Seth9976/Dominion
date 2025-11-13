// 函数: _Z11GameRematchb
// 地址: 0x9b54c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(GetClient() + 0x5068) != 2)
    return GameQueueRematchLocal(0) __tailcall

int32_t x20 = *(GetClient() + 0x506c)
GameClientJoinRematch(zx.q(x20), arg1 & 1)
CompleteNetworkGame(zx.q(x20))
return GameQueueExit(0, true) __tailcall
