// 函数: _Z23ClientMatchmakingCancelv
// 地址: 0x9b6120
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(GetClient() + 0x7778) = 0
GameDlgManagerDismiss(9, false)
int32_t var_8 = 0
void* result = GetClient()

if (*(result + 0x18) != 3)
    return result

return NetworkSendMessage(zx.q(*(result + 0x14)), 0xf42bd, 4, &var_8)
