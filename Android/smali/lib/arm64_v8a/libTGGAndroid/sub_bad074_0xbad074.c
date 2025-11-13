// 函数: sub_bad074
// 地址: 0xbad074
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = *(GetClient() + 0x506c)
GameClientDismissNetworkGame(zx.q(x19), 3)
RemoveMultiplayerGame(zx.q(x19))
return GameQueueExit(0, false) __tailcall
