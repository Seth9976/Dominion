// 函数: _Z20ClientNetworkConnectv
// 地址: 0x9aaf7c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetChannelSettings()
void* x0_1 = GetClient()
NetworkCloseConnection(zx.q(*(x0_1 + 0x14)))
int64_t result = NetworkConnect(*(x0 + 0x10), *(x0 + 8))
*(x0_1 + 0x14) = result.d
*(x0_1 + 0x18) = 1
return result
