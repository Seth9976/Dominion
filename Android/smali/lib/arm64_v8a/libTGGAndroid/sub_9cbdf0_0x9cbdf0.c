// 函数: sub_9cbdf0
// 地址: 0x9cbdf0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = *(gMultiplayerDlg + 4)
GameClientDismissNetworkGame(zx.q(x19), 0)
void* x19_1 = *(GetClient() + 0x5080) + zx.q(x19.w) * 0x1338
*(x19_1 + 0x1308) = 1
int64_t result = Now()
*(x19_1 + 0x1310) = result
return result
