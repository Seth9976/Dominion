// 函数: _Z13ToggleOfflinev
// 地址: 0x9ab0e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetActiveProfile()
*(x0 + 0x4324) = *(x0 + 0x4324) == 0 ? 1 : 0
SaveProfiles()

if (*(x0 + 0x4324) != 0)
    return ClientNetworkClose(false, true) __tailcall

void* x0_2 = GetChannelSettings()
void* x0_3 = GetClient()
NetworkCloseConnection(zx.q(*(x0_3 + 0x14)))
int64_t result = NetworkConnect(*(x0_2 + 0x10), *(x0_2 + 8))
*(x0_3 + 0x14) = result.d
*(x0_3 + 0x18) = 1
return result
