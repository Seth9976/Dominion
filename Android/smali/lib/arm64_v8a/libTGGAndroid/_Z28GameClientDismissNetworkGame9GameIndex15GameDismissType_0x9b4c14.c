// 函数: _Z28GameClientDismissNetworkGame9GameIndex15GameDismissType
// 地址: 0x9b4c14
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_18 = *(*(GetClient() + 0x5080) + mulu.dp.d(zx.d(arg1), 0x1338))
int32_t var_14 = arg2
void* result = GetClient()

if (*(result + 0x18) != 3)
    return result

return NetworkSendMessage(zx.q(*(result + 0x14)), 0xf42ad, 8, &var_18)
