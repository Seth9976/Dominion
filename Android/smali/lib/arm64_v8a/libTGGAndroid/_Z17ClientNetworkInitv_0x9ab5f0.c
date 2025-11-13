// 函数: _Z17ClientNetworkInitv
// 地址: 0x9ab5f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result = GetActiveProfile()

if (*(result + 0x4324) != 1)
    *(result + 0x4324) = 0
    void* x0 = GetChannelSettings()
    void* x0_1 = GetClient()
    NetworkCloseConnection(zx.q(*(x0_1 + 0x14)))
    result = NetworkConnect(*(x0 + 0x10), *(x0 + 8))
    *(x0_1 + 0x14) = result.d
    *(x0_1 + 0x18) = 1

return result
